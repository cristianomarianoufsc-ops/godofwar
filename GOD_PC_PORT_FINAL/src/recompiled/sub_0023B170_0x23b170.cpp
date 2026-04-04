#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B170
// Address: 0x23b170 - 0x23b278
void sub_0023B170_0x23b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B170_0x23b170");
#endif

    ctx->pc = 0x23b170u;

    // 0x23b170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b174: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b178: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b17c: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x23b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x23b180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b188: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b18c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b190: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x23b190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x23b194: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23b194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23b198: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23b198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b19c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x23b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x23b1a0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x23b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x23b1a4: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23B1A4u;
    {
        const bool branch_taken_0x23b1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1A4u;
            // 0x23b1a8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1a4) {
            ctx->pc = 0x23B1D4u;
            goto label_23b1d4;
        }
    }
    ctx->pc = 0x23B1ACu;
    // 0x23b1ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b1b0:
    // 0x23b1b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b1b4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23b1b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b1bc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23B1BCu;
    SET_GPR_U32(ctx, 31, 0x23B1C4u);
    ctx->pc = 0x23B1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1BCu;
            // 0x23b1c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1C4u; }
        if (ctx->pc != 0x23B1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1C4u; }
        if (ctx->pc != 0x23B1C4u) { return; }
    }
    ctx->pc = 0x23B1C4u;
    // 0x23b1c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b1c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b1cc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1CCu;
            // 0x23b1d0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B1B0u;
            runtime->cooperativeGuestYield();
            goto label_23b1b0;
        }
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b1d8: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x23b1dc: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x23b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x23b1e0: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x23b1e4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23b1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1ec: 0xc08e218  jal         func_238860
    ctx->pc = 0x23B1ECu;
    SET_GPR_U32(ctx, 31, 0x23B1F4u);
    ctx->pc = 0x23B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1ECu;
            // 0x23b1f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1F4u; }
        if (ctx->pc != 0x23B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1F4u; }
        if (ctx->pc != 0x23B1F4u) { return; }
    }
    ctx->pc = 0x23B1F4u;
    // 0x23b1f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b1f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b1fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b204: 0x3e00008  jr          $ra
    ctx->pc = 0x23B204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B204u;
            // 0x23b208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B1B0u: goto label_23b1b0;
            case 0x23B1D4u: goto label_23b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B20Cu;
    // 0x23b20c: 0x0  nop
    ctx->pc = 0x23b20cu;
    // NOP
    // 0x23b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23b214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23b218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b220: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23B220u;
    SET_GPR_U32(ctx, 31, 0x23B228u);
    ctx->pc = 0x23B224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B220u;
            // 0x23b224: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B228u; }
        if (ctx->pc != 0x23B228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B228u; }
        if (ctx->pc != 0x23B228u) { return; }
    }
    ctx->pc = 0x23B228u;
    // 0x23b228: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x23b228u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23b22c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b230: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x23b230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23b234: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23b238: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x23b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23b23c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23b240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23b240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b248: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x23b248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x23b24c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x23b250: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x23b250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x23b254: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23b254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23b258: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23b258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23b25c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B25Cu;
            // 0x23b260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B1B0u: goto label_23b1b0;
            case 0x23B1D4u: goto label_23b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B264u;
    // 0x23b264: 0x0  nop
    ctx->pc = 0x23b264u;
    // NOP
    // 0x23b268: 0x3e00008  jr          $ra
    ctx->pc = 0x23B268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B1B0u: goto label_23b1b0;
            case 0x23B1D4u: goto label_23b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B270u;
    // 0x23b270: 0x3e00008  jr          $ra
    ctx->pc = 0x23B270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B1B0u: goto label_23b1b0;
            case 0x23B1D4u: goto label_23b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B278u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A440
// Address: 0x25a440 - 0x25a568
void sub_0025A440_0x25a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A440_0x25a440");
#endif

    ctx->pc = 0x25a440u;

    // 0x25a440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a44c: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A44Cu;
    SET_GPR_U32(ctx, 31, 0x25A454u);
    ctx->pc = 0x25A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A44Cu;
            // 0x25a450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A454u; }
        if (ctx->pc != 0x25A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A454u; }
        if (ctx->pc != 0x25A454u) { return; }
    }
    ctx->pc = 0x25A454u;
    // 0x25a454: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a458: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a45c: 0x24428d50  addiu       $v0, $v0, -0x72B0
    ctx->pc = 0x25a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x25a460: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x25a460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x25a464: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a46c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a470: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a474: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x25a474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x25a478: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x25a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x25a47c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x25a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x25a480: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x25a480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x25a484: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x25a484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x25a488: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x25a488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x25a48c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x25a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x25a490: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x25a490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x25a494: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x25a494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x25a498: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4A0u;
            // 0x25a4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A4F4u: goto label_25a4f4;
            case 0x25A534u: goto label_25a534;
            case 0x25A550u: goto label_25a550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A4A8u;
    // 0x25a4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a4b0: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x25a4b4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x25a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25a4b8: 0xc06b74c  jal         func_1ADD30
    ctx->pc = 0x25A4B8u;
    SET_GPR_U32(ctx, 31, 0x25A4C0u);
    ctx->pc = 0x25A4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4B8u;
            // 0x25a4bc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD30u;
    if (runtime->hasFunction(0x1ADD30u)) {
        auto targetFn = runtime->lookupFunction(0x1ADD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4C0u; }
        if (ctx->pc != 0x25A4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADD30_0x1add30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4C0u; }
        if (ctx->pc != 0x25A4C0u) { return; }
    }
    ctx->pc = 0x25A4C0u;
    // 0x25a4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4C4u;
            // 0x25a4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A4F4u: goto label_25a4f4;
            case 0x25A534u: goto label_25a534;
            case 0x25A550u: goto label_25a550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A4CCu;
    // 0x25a4cc: 0x0  nop
    ctx->pc = 0x25a4ccu;
    // NOP
    // 0x25a4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a4d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a4dc: 0x24421f98  addiu       $v0, $v0, 0x1F98
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8088));
    // 0x25a4e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x25a4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25a4e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A4E4u;
    {
        const bool branch_taken_0x25a4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4E4u;
            // 0x25a4e8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4e4) {
            ctx->pc = 0x25A4F4u;
            goto label_25a4f4;
        }
    }
    ctx->pc = 0x25A4ECu;
    // 0x25a4ec: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x25A4ECu;
    SET_GPR_U32(ctx, 31, 0x25A4F4u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4F4u; }
        if (ctx->pc != 0x25A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4F4u; }
        if (ctx->pc != 0x25A4F4u) { return; }
    }
    ctx->pc = 0x25A4F4u;
label_25a4f4:
    // 0x25a4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4F8u;
            // 0x25a4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A4F4u: goto label_25a4f4;
            case 0x25A534u: goto label_25a534;
            case 0x25A550u: goto label_25a550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A500u;
    // 0x25a500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a504: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25a508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25a50c: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x25a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x25a510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a51c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x25a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25a520: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25a524: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A524u;
    {
        const bool branch_taken_0x25a524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A524u;
            // 0x25a528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a524) {
            ctx->pc = 0x25A534u;
            goto label_25a534;
        }
    }
    ctx->pc = 0x25A52Cu;
    // 0x25a52c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x25A52Cu;
    SET_GPR_U32(ctx, 31, 0x25A534u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A534u; }
        if (ctx->pc != 0x25A534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A534u; }
        if (ctx->pc != 0x25A534u) { return; }
    }
    ctx->pc = 0x25A534u;
label_25a534:
    // 0x25a534: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a538: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x25a538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x25a53c: 0x24421f98  addiu       $v0, $v0, 0x1F98
    ctx->pc = 0x25a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8088));
    // 0x25a540: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A540u;
    {
        const bool branch_taken_0x25a540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A540u;
            // 0x25a544: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a540) {
            ctx->pc = 0x25A550u;
            goto label_25a550;
        }
    }
    ctx->pc = 0x25A548u;
    // 0x25a548: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x25A548u;
    SET_GPR_U32(ctx, 31, 0x25A550u);
    ctx->pc = 0x25A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A548u;
            // 0x25a54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A550u; }
        if (ctx->pc != 0x25A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A550u; }
        if (ctx->pc != 0x25A550u) { return; }
    }
    ctx->pc = 0x25A550u;
label_25a550:
    // 0x25a550: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25a550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a55c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A55Cu;
            // 0x25a560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A4F4u: goto label_25a4f4;
            case 0x25A534u: goto label_25a534;
            case 0x25A550u: goto label_25a550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A564u;
    // 0x25a564: 0x0  nop
    ctx->pc = 0x25a564u;
    // NOP
}

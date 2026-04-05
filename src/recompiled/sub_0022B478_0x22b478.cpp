#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B478
// Address: 0x22b478 - 0x22b510
void sub_0022B478_0x22b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B478_0x22b478");
#endif

    ctx->pc = 0x22b478u;

    // 0x22b478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b47c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22b480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22b484: 0x24428c48  addiu       $v0, $v0, -0x73B8
    ctx->pc = 0x22b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937672));
    // 0x22b488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b494: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x22b494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x22b498: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b49c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22B49Cu;
    {
        const bool branch_taken_0x22b49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B49Cu;
            // 0x22b4a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b49c) {
            ctx->pc = 0x22B4CCu;
            goto label_22b4cc;
        }
    }
    ctx->pc = 0x22B4A4u;
    // 0x22b4a4: 0xc0604c6  jal         func_181318
    ctx->pc = 0x22B4A4u;
    SET_GPR_U32(ctx, 31, 0x22B4ACu);
    ctx->pc = 0x181318u;
    if (runtime->hasFunction(0x181318u)) {
        auto targetFn = runtime->lookupFunction(0x181318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4ACu; }
        if (ctx->pc != 0x22B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181318_0x181318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4ACu; }
        if (ctx->pc != 0x22B4ACu) { return; }
    }
    ctx->pc = 0x22B4ACu;
    // 0x22b4ac: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x22b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b4b0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B4B0u;
    {
        const bool branch_taken_0x22b4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4B0u;
            // 0x22b4b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4b0) {
            ctx->pc = 0x22B4CCu;
            goto label_22b4cc;
        }
    }
    ctx->pc = 0x22B4B8u;
    // 0x22b4b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22b4bc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22b4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22b4c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22b4c4: 0x40f809  jalr        $v0
    ctx->pc = 0x22B4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B4CCu);
        ctx->pc = 0x22B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4C4u;
            // 0x22b4c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B4CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B4CCu: goto label_22b4cc;
            case 0x22B4E8u: goto label_22b4e8;
            case 0x22B500u: goto label_22b500;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B4CCu; }
            if (ctx->pc != 0x22B4CCu) { return; }
        }
        }
    }
    ctx->pc = 0x22B4CCu;
label_22b4cc:
    // 0x22b4cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b4d0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22b4d4: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x22b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x22b4d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B4D8u;
    {
        const bool branch_taken_0x22b4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4D8u;
            // 0x22b4dc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4d8) {
            ctx->pc = 0x22B4E8u;
            goto label_22b4e8;
        }
    }
    ctx->pc = 0x22B4E0u;
    // 0x22b4e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x22B4E0u;
    SET_GPR_U32(ctx, 31, 0x22B4E8u);
    ctx->pc = 0x22B4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4E0u;
            // 0x22b4e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4E8u; }
        if (ctx->pc != 0x22B4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4E8u; }
        if (ctx->pc != 0x22B4E8u) { return; }
    }
    ctx->pc = 0x22B4E8u;
label_22b4e8:
    // 0x22b4e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x22b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x22b4ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B4ECu;
    {
        const bool branch_taken_0x22b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b4ec) {
            ctx->pc = 0x22B4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4ECu;
            // 0x22b4f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B500u;
            goto label_22b500;
        }
    }
    ctx->pc = 0x22B4F4u;
    // 0x22b4f4: 0xc08acf8  jal         func_22B3E0
    ctx->pc = 0x22B4F4u;
    SET_GPR_U32(ctx, 31, 0x22B4FCu);
    ctx->pc = 0x22B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4F4u;
            // 0x22b4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3E0u;
    if (runtime->hasFunction(0x22B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4FCu; }
        if (ctx->pc != 0x22B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b3e0_0x22b408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4FCu; }
        if (ctx->pc != 0x22B4FCu) { return; }
    }
    ctx->pc = 0x22B4FCu;
    // 0x22b4fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22b4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b500:
    // 0x22b500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b508: 0x3e00008  jr          $ra
    ctx->pc = 0x22B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B508u;
            // 0x22b50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B4CCu: goto label_22b4cc;
            case 0x22B4E8u: goto label_22b4e8;
            case 0x22B500u: goto label_22b500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B510u;
}

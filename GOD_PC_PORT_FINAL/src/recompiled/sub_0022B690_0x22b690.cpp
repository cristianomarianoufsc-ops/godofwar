#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B690
// Address: 0x22b690 - 0x22b780
void sub_0022B690_0x22b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B690_0x22b690");
#endif

    ctx->pc = 0x22b690u;

    // 0x22b690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22b694: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22b694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22b698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b69c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22b6a0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22b6a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x22b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x22b6ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x22b6b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22b6b8: 0xc08ade0  jal         func_22B780
    ctx->pc = 0x22B6B8u;
    SET_GPR_U32(ctx, 31, 0x22B6C0u);
    ctx->pc = 0x22B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6B8u;
            // 0x22b6bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B780u;
    if (runtime->hasFunction(0x22B780u)) {
        auto targetFn = runtime->lookupFunction(0x22B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6C0u; }
        if (ctx->pc != 0x22B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22b780_0x22b7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6C0u; }
        if (ctx->pc != 0x22B6C0u) { return; }
    }
    ctx->pc = 0x22B6C0u;
    // 0x22b6c0: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x22b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b6c4: 0xc0604c6  jal         func_181318
    ctx->pc = 0x22B6C4u;
    SET_GPR_U32(ctx, 31, 0x22B6CCu);
    ctx->pc = 0x22B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6C4u;
            // 0x22b6c8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181318u;
    if (runtime->hasFunction(0x181318u)) {
        auto targetFn = runtime->lookupFunction(0x181318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6CCu; }
        if (ctx->pc != 0x22B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181318_0x181318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6CCu; }
        if (ctx->pc != 0x22B6CCu) { return; }
    }
    ctx->pc = 0x22B6CCu;
    // 0x22b6cc: 0x27b10001  addiu       $s1, $sp, 0x1
    ctx->pc = 0x22b6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
label_22b6d0:
    // 0x22b6d0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x22b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x22b6d4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x22b6d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b6dc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22B6DCu;
    {
        const bool branch_taken_0x22b6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6DCu;
            // 0x22b6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6dc) {
            ctx->pc = 0x22B740u;
            goto label_22b740;
        }
    }
    ctx->pc = 0x22B6E4u;
    // 0x22b6e4: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x22B6E4u;
    {
        const bool branch_taken_0x22b6e4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x22B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6E4u;
            // 0x22b6e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6e4) {
            ctx->pc = 0x22B720u;
            goto label_22b720;
        }
    }
    ctx->pc = 0x22B6ECu;
    // 0x22b6ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22B6ECu;
    {
        const bool branch_taken_0x22b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6ECu;
            // 0x22b6f0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6ec) {
            ctx->pc = 0x22B714u;
            goto label_22b714;
        }
    }
    ctx->pc = 0x22B6F4u;
    // 0x22b6f4: 0x0  nop
    ctx->pc = 0x22b6f4u;
    // NOP
label_22b6f8:
    // 0x22b6f8: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x22b6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22b6fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B6FCu;
    {
        const bool branch_taken_0x22b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6FCu;
            // 0x22b700: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6fc) {
            ctx->pc = 0x22B720u;
            goto label_22b720;
        }
    }
    ctx->pc = 0x22B704u;
    // 0x22b704: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x22b708: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22b70c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22b714:
    // 0x22b714: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B714u;
    {
        const bool branch_taken_0x22b714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b714) {
            ctx->pc = 0x22B718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B714u;
            // 0x22b718: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B6F8u;
            runtime->cooperativeGuestYield();
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B71Cu;
    // 0x22b71c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b720:
    // 0x22b720: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B720u;
    {
        const bool branch_taken_0x22b720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b720) {
            ctx->pc = 0x22B724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B720u;
            // 0x22b724: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B744u;
            goto label_22b744;
        }
    }
    ctx->pc = 0x22B728u;
    // 0x22b728: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22b72c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b730: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x22b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22b734: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22b734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b738: 0xc060706  jal         func_181C18
    ctx->pc = 0x22B738u;
    SET_GPR_U32(ctx, 31, 0x22B740u);
    ctx->pc = 0x22B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B738u;
            // 0x22b73c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C18u;
    if (runtime->hasFunction(0x181C18u)) {
        auto targetFn = runtime->lookupFunction(0x181C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B740u; }
        if (ctx->pc != 0x22B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C18_0x181c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B740u; }
        if (ctx->pc != 0x22B740u) { return; }
    }
    ctx->pc = 0x22B740u;
label_22b740:
    // 0x22b740: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22b740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22b744:
    // 0x22b744: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22b748: 0x2a62004a  slti        $v0, $s3, 0x4A
    ctx->pc = 0x22b748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22b74c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x22B74Cu;
    {
        const bool branch_taken_0x22b74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B74Cu;
            // 0x22b750: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b74c) {
            ctx->pc = 0x22B6D0u;
            runtime->cooperativeGuestYield();
            goto label_22b6d0;
        }
    }
    ctx->pc = 0x22B754u;
    // 0x22b754: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b758: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22b758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b75c: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x22b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x22b760: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22b760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b764: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22b764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b768: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x22b768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22b76c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22b76cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b770: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b774: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22b774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x22b778: 0x3e00008  jr          $ra
    ctx->pc = 0x22B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B778u;
            // 0x22b77c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B6D0u: goto label_22b6d0;
            case 0x22B6F8u: goto label_22b6f8;
            case 0x22B714u: goto label_22b714;
            case 0x22B720u: goto label_22b720;
            case 0x22B740u: goto label_22b740;
            case 0x22B744u: goto label_22b744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B780u;
}

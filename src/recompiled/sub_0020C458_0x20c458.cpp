#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C458
// Address: 0x20c458 - 0x20c538
void sub_0020C458_0x20c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C458_0x20c458");
#endif

    ctx->pc = 0x20c458u;

    // 0x20c458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20c45c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c460: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20c464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c46c: 0x8c43bde0  lw          $v1, -0x4220($v0)
    ctx->pc = 0x20c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20c470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c478: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20c47c: 0x244297e0  addiu       $v0, $v0, -0x6820
    ctx->pc = 0x20c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940640));
    // 0x20c480: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x20c480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x20c484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x20c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20c488: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C488u;
    {
        const bool branch_taken_0x20c488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C488u;
            // 0x20c48c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c488) {
            ctx->pc = 0x20C4A8u;
            goto label_20c4a8;
        }
    }
    ctx->pc = 0x20C490u;
    // 0x20c490: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x20c494: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C494u;
    {
        const bool branch_taken_0x20c494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C494u;
            // 0x20c498: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c494) {
            ctx->pc = 0x20C4ACu;
            goto label_20c4ac;
        }
    }
    ctx->pc = 0x20C49Cu;
    // 0x20c49c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4a0: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20C4A0u;
    SET_GPR_U32(ctx, 31, 0x20C4A8u);
    ctx->pc = 0x20C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4A0u;
            // 0x20c4a4: 0xac600080  sw          $zero, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4A8u; }
        if (ctx->pc != 0x20C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4A8u; }
        if (ctx->pc != 0x20C4A8u) { return; }
    }
    ctx->pc = 0x20C4A8u;
label_20c4a8:
    // 0x20c4a8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x20c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_20c4ac:
    // 0x20c4ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C4ACu;
    {
        const bool branch_taken_0x20c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4ac) {
            ctx->pc = 0x20C4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4ACu;
            // 0x20c4b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C4C0u;
            goto label_20c4c0;
        }
    }
    ctx->pc = 0x20C4B4u;
    // 0x20c4b4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x20C4B4u;
    SET_GPR_U32(ctx, 31, 0x20C4BCu);
    ctx->pc = 0x20C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4B4u;
            // 0x20c4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4BCu; }
        if (ctx->pc != 0x20C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4BCu; }
        if (ctx->pc != 0x20C4BCu) { return; }
    }
    ctx->pc = 0x20C4BCu;
    // 0x20c4bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20c4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c4c0:
    // 0x20c4c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4C8u;
            // 0x20c4cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C4A8u: goto label_20c4a8;
            case 0x20C4ACu: goto label_20c4ac;
            case 0x20C4C0u: goto label_20c4c0;
            case 0x20C52Cu: goto label_20c52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C4D0u;
    // 0x20c4d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c4d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c4d8: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20c4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c4e0: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x20c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x20c4e4: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x20c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x20c4e8: 0x14a40010  bne         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C4E8u;
    {
        const bool branch_taken_0x20c4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4E8u;
            // 0x20c4ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4e8) {
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C4F0u;
    // 0x20c4f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c4f4: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x20c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x20c4f8: 0xac40e45c  sw          $zero, -0x1BA4($v0)
    ctx->pc = 0x20c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960220), GPR_U32(ctx, 0));
    // 0x20c4fc: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x20c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x20c500: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C500u;
    {
        const bool branch_taken_0x20c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c500) {
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C508u;
    // 0x20c508: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x20c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20c50c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C50Cu;
    {
        const bool branch_taken_0x20c50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c50c) {
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C514u;
    // 0x20c514: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x20c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x20c518: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C518u;
    {
        const bool branch_taken_0x20c518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C518u;
            // 0x20c51c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c518) {
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C520u;
    // 0x20c520: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x20C520u;
    SET_GPR_U32(ctx, 31, 0x20C528u);
    ctx->pc = 0x20C524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C520u;
            // 0x20c524: 0xac600080  sw          $zero, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C528u; }
        if (ctx->pc != 0x20C528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C528u; }
        if (ctx->pc != 0x20C528u) { return; }
    }
    ctx->pc = 0x20C528u;
    // 0x20c528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c52c:
    // 0x20c52c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C52Cu;
            // 0x20c530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C4A8u: goto label_20c4a8;
            case 0x20C4ACu: goto label_20c4ac;
            case 0x20C4C0u: goto label_20c4c0;
            case 0x20C52Cu: goto label_20c52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C534u;
    // 0x20c534: 0x0  nop
    ctx->pc = 0x20c534u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280B98
// Address: 0x280b98 - 0x280cb0
void sub_00280B98_0x280b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280B98_0x280b98");
#endif

    ctx->pc = 0x280b98u;

    // 0x280b98: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x280b9c: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x280b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
    // 0x280ba0: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x280ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x280ba4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x280ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ba8: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x280ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
    // 0x280bac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bb0: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x280bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bb8: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x280bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
    // 0x280bbc: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x280bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x280bc0: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x280BC0u;
    SET_GPR_U32(ctx, 31, 0x280BC8u);
    ctx->pc = 0x280BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280BC0u;
            // 0x280bc4: 0xffb00280  sd          $s0, 0x280($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BC8u; }
        if (ctx->pc != 0x280BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BC8u; }
        if (ctx->pc != 0x280BC8u) { return; }
    }
    ctx->pc = 0x280BC8u;
    // 0x280bc8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x280BC8u;
    {
        const bool branch_taken_0x280bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280BC8u;
            // 0x280bcc: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bc8) {
            ctx->pc = 0x280C90u;
            goto label_280c90;
        }
    }
    ctx->pc = 0x280BD0u;
    // 0x280bd0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x280bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x280bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bd8: 0x24545238  addiu       $s4, $v0, 0x5238
    ctx->pc = 0x280bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 21048));
    // 0x280bdc: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x280BDCu;
    SET_GPR_U32(ctx, 31, 0x280BE4u);
    ctx->pc = 0x280BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280BDCu;
            // 0x280be0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BE4u; }
        if (ctx->pc != 0x280BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BE4u; }
        if (ctx->pc != 0x280BE4u) { return; }
    }
    ctx->pc = 0x280BE4u;
    // 0x280be4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280BE4u;
    {
        const bool branch_taken_0x280be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280BE4u;
            // 0x280be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280be4) {
            ctx->pc = 0x280C10u;
            goto label_280c10;
        }
    }
    ctx->pc = 0x280BECu;
    // 0x280bec: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x280becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x280bf0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x280bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x280bf4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x280bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280bf8: 0x2484d1d0  addiu       $a0, $a0, -0x2E30
    ctx->pc = 0x280bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955472));
    // 0x280bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c00: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280C00u;
    SET_GPR_U32(ctx, 31, 0x280C08u);
    ctx->pc = 0x280C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C00u;
            // 0x280c04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C08u; }
        if (ctx->pc != 0x280C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C08u; }
        if (ctx->pc != 0x280C08u) { return; }
    }
    ctx->pc = 0x280C08u;
    // 0x280c08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x280C08u;
    {
        const bool branch_taken_0x280c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280c08) {
            ctx->pc = 0x280C78u;
            goto label_280c78;
        }
    }
    ctx->pc = 0x280C10u;
label_280c10:
    // 0x280c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x280c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c1c: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x280C1Cu;
    SET_GPR_U32(ctx, 31, 0x280C24u);
    ctx->pc = 0x280C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C1Cu;
            // 0x280c20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C24u; }
        if (ctx->pc != 0x280C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C24u; }
        if (ctx->pc != 0x280C24u) { return; }
    }
    ctx->pc = 0x280C24u;
    // 0x280c24: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x280c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x280c28: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x280c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x280c2c: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x280C2Cu;
    {
        const bool branch_taken_0x280c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C2Cu;
            // 0x280c30: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c2c) {
            ctx->pc = 0x280C90u;
            goto label_280c90;
        }
    }
    ctx->pc = 0x280C34u;
    // 0x280c34: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x280c34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280c38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x280c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x280c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280C3Cu;
    {
        const bool branch_taken_0x280c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C3Cu;
            // 0x280c40: 0x24100898  addiu       $s0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c3c) {
            ctx->pc = 0x280C50u;
            goto label_280c50;
        }
    }
    ctx->pc = 0x280C44u;
    // 0x280c44: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280c48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x280C48u;
    {
        const bool branch_taken_0x280c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C48u;
            // 0x280c4c: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c48) {
            ctx->pc = 0x280C90u;
            goto label_280c90;
        }
    }
    ctx->pc = 0x280C50u;
label_280c50:
    // 0x280c50: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x280c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x280c54: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x280c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x280c58: 0x2442d1d0  addiu       $v0, $v0, -0x2E30
    ctx->pc = 0x280c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
    // 0x280c5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x280c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x280c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x280c64: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280C64u;
    SET_GPR_U32(ctx, 31, 0x280C6Cu);
    ctx->pc = 0x280C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C64u;
            // 0x280c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C6Cu; }
        if (ctx->pc != 0x280C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C6Cu; }
        if (ctx->pc != 0x280C6Cu) { return; }
    }
    ctx->pc = 0x280C6Cu;
    // 0x280c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c70: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x280C70u;
    SET_GPR_U32(ctx, 31, 0x280C78u);
    ctx->pc = 0x280C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C70u;
            // 0x280c74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C78u; }
        if (ctx->pc != 0x280C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C78u; }
        if (ctx->pc != 0x280C78u) { return; }
    }
    ctx->pc = 0x280C78u;
label_280c78:
    // 0x280c78: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x280C78u;
    {
        const bool branch_taken_0x280c78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C78u;
            // 0x280c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c78) {
            ctx->pc = 0x280C88u;
            goto label_280c88;
        }
    }
    ctx->pc = 0x280C80u;
    // 0x280c80: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280C80u;
    SET_GPR_U32(ctx, 31, 0x280C88u);
    ctx->pc = 0x280C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C80u;
            // 0x280c84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C88u; }
        if (ctx->pc != 0x280C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C88u; }
        if (ctx->pc != 0x280C88u) { return; }
    }
    ctx->pc = 0x280C88u;
label_280c88:
    // 0x280c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c8c: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x280c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_280c90:
    // 0x280c90: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x280c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x280c94: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x280c94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x280c98: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x280c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x280c9c: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x280c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x280ca0: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x280ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x280ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x280CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280CA4u;
            // 0x280ca8: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280C10u: goto label_280c10;
            case 0x280C50u: goto label_280c50;
            case 0x280C78u: goto label_280c78;
            case 0x280C88u: goto label_280c88;
            case 0x280C90u: goto label_280c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280CACu;
    // 0x280cac: 0x0  nop
    ctx->pc = 0x280cacu;
    // NOP
}

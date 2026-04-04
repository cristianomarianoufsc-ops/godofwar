#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B77D8
// Address: 0x1b77d8 - 0x1b78c8
void sub_001B77D8_0x1b77d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B77D8_0x1b77d8");
#endif

    ctx->pc = 0x1b77d8u;

    // 0x1b77d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b77dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b77dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b77e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b77e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b77e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b77e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b77e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b77ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b77ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b77f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b77f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b77f4: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b77f8: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1b77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x1b77fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7800: 0xc05d1ca  jal         func_174728
    ctx->pc = 0x1B7800u;
    SET_GPR_U32(ctx, 31, 0x1B7808u);
    ctx->pc = 0x1B7804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7800u;
            // 0x1b7804: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174728u;
    if (runtime->hasFunction(0x174728u)) {
        auto targetFn = runtime->lookupFunction(0x174728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7808u; }
        if (ctx->pc != 0x1B7808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_174728_0x174740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7808u; }
        if (ctx->pc != 0x1B7808u) { return; }
    }
    ctx->pc = 0x1B7808u;
    // 0x1b7808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b780c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7810: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b7810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b7814: 0x242282a  slt         $a1, $s2, $v0
    ctx->pc = 0x1b7814u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b7818: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1b781c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x1b781cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1b7820: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1b7824: 0xc05d1ca  jal         func_174728
    ctx->pc = 0x1B7824u;
    SET_GPR_U32(ctx, 31, 0x1B782Cu);
    ctx->pc = 0x1B7828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7824u;
            // 0x1b7828: 0xae030290  sw          $v1, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174728u;
    if (runtime->hasFunction(0x174728u)) {
        auto targetFn = runtime->lookupFunction(0x174728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B782Cu; }
        if (ctx->pc != 0x1B782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_174728_0x174740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B782Cu; }
        if (ctx->pc != 0x1B782Cu) { return; }
    }
    ctx->pc = 0x1B782Cu;
    // 0x1b782c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b782cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b7830: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b7830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b7834: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b7834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b7838: 0x8c86cc90  lw          $a2, -0x3370($a0)
    ctx->pc = 0x1b7838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954128)));
    // 0x1b783c: 0x8ca7cc94  lw          $a3, -0x336C($a1)
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954132)));
    // 0x1b7840: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1b7844: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1b7844u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1b7848: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x1b7848u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x1b784c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b7850: 0x8d24c44c  lw          $a0, -0x3BB4($t1)
    ctx->pc = 0x1b7850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294952012)));
    // 0x1b7854: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b7858: 0x242902a  slt         $s2, $s2, $v0
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b785c: 0x8c6b11c0  lw          $t3, 0x11C0($v1)
    ctx->pc = 0x1b785cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x1b7860: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x1b7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1b7864: 0x8545cc9c  lh          $a1, -0x3364($t2)
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294954140)));
    // 0x1b7868: 0x52180b  movn        $v1, $v0, $s2
    ctx->pc = 0x1b7868u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1b786c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b786cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7870: 0x8d02cc98  lw          $v0, -0x3368($t0)
    ctx->pc = 0x1b7870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954136)));
    // 0x1b7874: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1b7874u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1b7878: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x1b7878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
    // 0x1b787c: 0xae0b0298  sw          $t3, 0x298($s0)
    ctx->pc = 0x1b787cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 11));
    // 0x1b7880: 0xae06029c  sw          $a2, 0x29C($s0)
    ctx->pc = 0x1b7880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 6));
    // 0x1b7884: 0xae0702a0  sw          $a3, 0x2A0($s0)
    ctx->pc = 0x1b7884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 7));
    // 0x1b7888: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x1b7888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    // 0x1b788c: 0xae0402a8  sw          $a0, 0x2A8($s0)
    ctx->pc = 0x1b788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 4));
    // 0x1b7890: 0xae0501c0  sw          $a1, 0x1C0($s0)
    ctx->pc = 0x1b7890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 5));
    // 0x1b7894: 0xae0014a8  sw          $zero, 0x14A8($s0)
    ctx->pc = 0x1b7894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5288), GPR_U32(ctx, 0));
    // 0x1b7898: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x1b7898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x1b789c: 0xae0014a4  sw          $zero, 0x14A4($s0)
    ctx->pc = 0x1b789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5284), GPR_U32(ctx, 0));
    // 0x1b78a0: 0xae0014b8  sw          $zero, 0x14B8($s0)
    ctx->pc = 0x1b78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5304), GPR_U32(ctx, 0));
    // 0x1b78a4: 0xae0014b4  sw          $zero, 0x14B4($s0)
    ctx->pc = 0x1b78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5300), GPR_U32(ctx, 0));
    // 0x1b78a8: 0xae0014b0  sw          $zero, 0x14B0($s0)
    ctx->pc = 0x1b78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 0));
    // 0x1b78ac: 0xae0014ac  sw          $zero, 0x14AC($s0)
    ctx->pc = 0x1b78acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5292), GPR_U32(ctx, 0));
    // 0x1b78b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b78b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b78b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b78b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b78b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b78b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b78bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B78BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B78C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78BCu;
            // 0x1b78c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B78C4u;
    // 0x1b78c4: 0x0  nop
    ctx->pc = 0x1b78c4u;
    // NOP
}

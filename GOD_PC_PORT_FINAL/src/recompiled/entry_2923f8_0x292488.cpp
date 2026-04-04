#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2923f8
// Address: 0x2923f8 - 0x292488
void entry_2923f8_0x292488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2923f8_0x292488");
#endif

    ctx->pc = 0x2923f8u;

    // 0x2923f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2923f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2923fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x292400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292404: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x292404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
    // 0x292408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29240c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292418: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x292418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x29241c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x29241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x292420: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x292420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x292424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292428: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29242c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292430: 0xc0a48e4  jal         func_292390
    ctx->pc = 0x292430u;
    SET_GPR_U32(ctx, 31, 0x292438u);
    ctx->pc = 0x292434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292430u;
            // 0x292434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292390u;
    if (runtime->hasFunction(0x292390u)) {
        auto targetFn = runtime->lookupFunction(0x292390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292438u; }
        if (ctx->pc != 0x292438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292390_0x2923f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292438u; }
        if (ctx->pc != 0x292438u) { return; }
    }
    ctx->pc = 0x292438u;
    // 0x292438: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x29243c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29243cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292440: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292444: 0xc0a48e4  jal         func_292390
    ctx->pc = 0x292444u;
    SET_GPR_U32(ctx, 31, 0x29244Cu);
    ctx->pc = 0x292448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292444u;
            // 0x292448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292390u;
    if (runtime->hasFunction(0x292390u)) {
        auto targetFn = runtime->lookupFunction(0x292390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29244Cu; }
        if (ctx->pc != 0x29244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292390_0x2923f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29244Cu; }
        if (ctx->pc != 0x29244Cu) { return; }
    }
    ctx->pc = 0x29244Cu;
    // 0x29244c: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x29244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x292450: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292454: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x292454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x292458: 0xc0a48e4  jal         func_292390
    ctx->pc = 0x292458u;
    SET_GPR_U32(ctx, 31, 0x292460u);
    ctx->pc = 0x29245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292458u;
            // 0x29245c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292390u;
    if (runtime->hasFunction(0x292390u)) {
        auto targetFn = runtime->lookupFunction(0x292390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292460u; }
        if (ctx->pc != 0x292460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292390_0x2923f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292460u; }
        if (ctx->pc != 0x292460u) { return; }
    }
    ctx->pc = 0x292460u;
    // 0x292460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292464: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x292464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x292468: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x292468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x29246c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x29246cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x292470: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29247c: 0x3e00008  jr          $ra
    ctx->pc = 0x29247Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29247Cu;
            // 0x292480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292484u;
    // 0x292484: 0x0  nop
    ctx->pc = 0x292484u;
    // NOP
}

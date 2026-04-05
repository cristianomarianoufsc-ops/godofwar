#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1737f8
// Address: 0x1737f8 - 0x173848
void entry_1737f8_0x173848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1737f8_0x173848");
#endif

    ctx->pc = 0x1737f8u;

    // 0x1737f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1737f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1737fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1737fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173808: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17380c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x17380Cu;
    {
        const bool branch_taken_0x17380c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x173810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17380Cu;
            // 0x173810: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17380c) {
            ctx->pc = 0x173838u;
            goto label_173838;
        }
    }
    ctx->pc = 0x173814u;
    // 0x173814: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x173818: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x173818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17381c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17381cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173828: 0xc09b260  jal         func_26C980
    ctx->pc = 0x173828u;
    SET_GPR_U32(ctx, 31, 0x173830u);
    ctx->pc = 0x17382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173828u;
            // 0x17382c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173830u; }
        if (ctx->pc != 0x173830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173830u; }
        if (ctx->pc != 0x173830u) { return; }
    }
    ctx->pc = 0x173830u;
    // 0x173830: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x173830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x173834: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x173834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_173838:
    // 0x173838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17383c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17383cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173840: 0x3e00008  jr          $ra
    ctx->pc = 0x173840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173840u;
            // 0x173844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173838u: goto label_173838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173848u;
}

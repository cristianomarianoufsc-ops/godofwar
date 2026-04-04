#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281860
// Address: 0x281860 - 0x2818d0
void entry_281860_0x2818d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281860_0x2818d0");
#endif

    ctx->pc = 0x281860u;

    // 0x281860: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x281860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x281864: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281868: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x281868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x28186c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x281870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281874: 0x2463df00  addiu       $v1, $v1, -0x2100
    ctx->pc = 0x281874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958848));
    // 0x281878: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28187c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28187cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281880: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x281880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281888: 0xe38821  addu        $s1, $a3, $v1
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x28188c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28188cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281890: 0x10d20009  beq         $a2, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x281890u;
    {
        const bool branch_taken_0x281890 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x281894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281890u;
            // 0x281894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281890) {
            ctx->pc = 0x2818B8u;
            goto label_2818b8;
        }
    }
    ctx->pc = 0x281898u;
    // 0x281898: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x281898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28189c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2818a0: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2818a4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2818a8: 0xc0a0608  jal         func_281820
    ctx->pc = 0x2818A8u;
    SET_GPR_U32(ctx, 31, 0x2818B0u);
    ctx->pc = 0x2818ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818A8u;
            // 0x2818ac: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (runtime->hasFunction(0x281820u)) {
        auto targetFn = runtime->lookupFunction(0x281820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818B0u; }
        if (ctx->pc != 0x2818B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281820_0x281860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818B0u; }
        if (ctx->pc != 0x2818B0u) { return; }
    }
    ctx->pc = 0x2818B0u;
    // 0x2818b0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2818b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2818b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2818b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2818b8:
    // 0x2818b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2818b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2818bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2818bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2818c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2818c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2818c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2818c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2818c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2818C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2818C8u;
            // 0x2818cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2818B8u: goto label_2818b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2818D0u;
}

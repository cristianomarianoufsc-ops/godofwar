#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278f88
// Address: 0x278f88 - 0x278fd8
void entry_278f88_0x278fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278f88_0x278fd8");
#endif

    ctx->pc = 0x278f88u;

    // 0x278f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278f94: 0xc09e37a  jal         func_278DE8
    ctx->pc = 0x278F94u;
    SET_GPR_U32(ctx, 31, 0x278F9Cu);
    ctx->pc = 0x278F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278F94u;
            // 0x278f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278DE8u;
    if (runtime->hasFunction(0x278DE8u)) {
        auto targetFn = runtime->lookupFunction(0x278DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F9Cu; }
        if (ctx->pc != 0x278F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278de8_0x278e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F9Cu; }
        if (ctx->pc != 0x278F9Cu) { return; }
    }
    ctx->pc = 0x278F9Cu;
    // 0x278f9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x278fa0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x278fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x278fa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278fa8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x278fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x278fac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x278facu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x278fb0: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x278fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x278fb4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278FB4u;
    {
        const bool branch_taken_0x278fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x278FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278FB4u;
            // 0x278fb8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fb4) {
            ctx->pc = 0x278FCCu;
            goto label_278fcc;
        }
    }
    ctx->pc = 0x278FBCu;
    // 0x278fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278fc4: 0x809e388  j           func_278E20
    ctx->pc = 0x278FC4u;
    ctx->pc = 0x278FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278FC4u;
            // 0x278fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_278e20_0x278e28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x278FCCu;
label_278fcc:
    // 0x278fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x278FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278FD0u;
            // 0x278fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278FCCu: goto label_278fcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278FD8u;
}

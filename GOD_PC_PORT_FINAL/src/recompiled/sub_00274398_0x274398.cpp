#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274398
// Address: 0x274398 - 0x2743f0
void sub_00274398_0x274398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274398_0x274398");
#endif

    ctx->pc = 0x274398u;

    // 0x274398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27439c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2743a0: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x2743a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x2743a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2743A4u;
    {
        const bool branch_taken_0x2743a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743a4) {
            ctx->pc = 0x2743D8u;
            goto label_2743d8;
        }
    }
    ctx->pc = 0x2743ACu;
    // 0x2743ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2743ACu;
    {
        const bool branch_taken_0x2743ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743ac) {
            ctx->pc = 0x2743D8u;
            goto label_2743d8;
        }
    }
    ctx->pc = 0x2743B4u;
    // 0x2743b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2743b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2743B8u;
    {
        const bool branch_taken_0x2743b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743B8u;
            // 0x2743bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743b8) {
            ctx->pc = 0x2743D8u;
            goto label_2743d8;
        }
    }
    ctx->pc = 0x2743C0u;
    // 0x2743c0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2743c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2743c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2743c8: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x2743C8u;
    SET_GPR_U32(ctx, 31, 0x2743D0u);
    ctx->pc = 0x2743CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2743C8u;
            // 0x2743cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D0u; }
        if (ctx->pc != 0x2743D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D0u; }
        if (ctx->pc != 0x2743D0u) { return; }
    }
    ctx->pc = 0x2743D0u;
    // 0x2743d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2743D0u;
    {
        const bool branch_taken_0x2743d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743D0u;
            // 0x2743d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743d0) {
            ctx->pc = 0x2743E4u;
            goto label_2743e4;
        }
    }
    ctx->pc = 0x2743D8u;
label_2743d8:
    // 0x2743d8: 0xc09d088  jal         func_274220
    ctx->pc = 0x2743D8u;
    SET_GPR_U32(ctx, 31, 0x2743E0u);
    ctx->pc = 0x2743DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2743D8u;
            // 0x2743dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274220u;
    if (runtime->hasFunction(0x274220u)) {
        auto targetFn = runtime->lookupFunction(0x274220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743E0u; }
        if (ctx->pc != 0x2743E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274220_0x274230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743E0u; }
        if (ctx->pc != 0x2743E0u) { return; }
    }
    ctx->pc = 0x2743E0u;
    // 0x2743e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2743e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2743e4:
    // 0x2743e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2743E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2743E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743E4u;
            // 0x2743e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2743D8u: goto label_2743d8;
            case 0x2743E4u: goto label_2743e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2743ECu;
    // 0x2743ec: 0x0  nop
    ctx->pc = 0x2743ecu;
    // NOP
}

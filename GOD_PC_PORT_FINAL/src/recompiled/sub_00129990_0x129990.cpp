#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129990
// Address: 0x129990 - 0x129a18
void sub_00129990_0x129990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129990_0x129990");
#endif

    ctx->pc = 0x129990u;

    // 0x129990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129994: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x129994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x129998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x129998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12999c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12999cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1299a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1299a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1299a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1299a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1299ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1299acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1299b0:
    // 0x1299b0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1299b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1299b4: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1299b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1299b8: 0x2484c088  addiu       $a0, $a0, -0x3F78
    ctx->pc = 0x1299b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951048));
    // 0x1299bc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1299bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1299c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1299c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1299c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1299c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1299c8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1299C8u;
    {
        const bool branch_taken_0x1299c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299C8u;
            // 0x1299cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c8) {
            ctx->pc = 0x1299F0u;
            goto label_1299f0;
        }
    }
    ctx->pc = 0x1299D0u;
    // 0x1299d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1299d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1299d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1299D4u;
    {
        const bool branch_taken_0x1299d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1299D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299D4u;
            // 0x1299d8: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299d4) {
            ctx->pc = 0x1299F4u;
            goto label_1299f4;
        }
    }
    ctx->pc = 0x1299DCu;
    // 0x1299dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1299dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1299e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1299e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1299e4: 0xc04aa86  jal         func_12AA18
    ctx->pc = 0x1299E4u;
    SET_GPR_U32(ctx, 31, 0x1299ECu);
    ctx->pc = 0x1299E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1299E4u;
            // 0x1299e8: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA18u;
    if (runtime->hasFunction(0x12AA18u)) {
        auto targetFn = runtime->lookupFunction(0x12AA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299ECu; }
        if (ctx->pc != 0x1299ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AA18_0x12aa18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299ECu; }
        if (ctx->pc != 0x1299ECu) { return; }
    }
    ctx->pc = 0x1299ECu;
    // 0x1299ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1299ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1299f0:
    // 0x1299f0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1299f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1299f4:
    // 0x1299f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299F4u;
            // 0x1299f8: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x1299B0u;
            runtime->cooperativeGuestYield();
            goto label_1299b0;
        }
    }
    ctx->pc = 0x1299FCu;
    // 0x1299fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1299fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129a00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129a04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x129a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x129A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A0Cu;
            // 0x129a10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1299B0u: goto label_1299b0;
            case 0x1299F0u: goto label_1299f0;
            case 0x1299F4u: goto label_1299f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129A14u;
    // 0x129a14: 0x0  nop
    ctx->pc = 0x129a14u;
    // NOP
}

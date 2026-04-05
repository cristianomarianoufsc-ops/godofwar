#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28d4d0
// Address: 0x28d4d0 - 0x28d550
void entry_28d4d0_0x28d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28d4d0_0x28d550");
#endif

    ctx->pc = 0x28d4d0u;

    // 0x28d4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d4d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28d4d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28d4dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28d4e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d4e8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x28d4e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d4ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D4ECu;
    {
        const bool branch_taken_0x28d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4ECu;
            // 0x28d4f0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4ec) {
            ctx->pc = 0x28D530u;
            goto label_28d530;
        }
    }
    ctx->pc = 0x28D4F4u;
    // 0x28d4f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28d4f8: 0x24525a19  addiu       $s2, $v0, 0x5A19
    ctx->pc = 0x28d4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28d4fc: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x28d4fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_28d500:
    // 0x28d500: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x28d504: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28d504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d508: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28d50c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D50Cu;
    {
        const bool branch_taken_0x28d50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d50c) {
            ctx->pc = 0x28D510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D50Cu;
            // 0x28d510: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D524u;
            goto label_28d524;
        }
    }
    ctx->pc = 0x28D514u;
    // 0x28d514: 0xc0a4434  jal         func_2910D0
    ctx->pc = 0x28D514u;
    SET_GPR_U32(ctx, 31, 0x28D51Cu);
    ctx->pc = 0x2910D0u;
    if (runtime->hasFunction(0x2910D0u)) {
        auto targetFn = runtime->lookupFunction(0x2910D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D51Cu; }
        if (ctx->pc != 0x28D51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910d0_0x2910f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D51Cu; }
        if (ctx->pc != 0x28D51Cu) { return; }
    }
    ctx->pc = 0x28D51Cu;
    // 0x28d51c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x28d51cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d524:
    // 0x28d524: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x28d524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d528: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x28D528u;
    {
        const bool branch_taken_0x28d528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d528) {
            ctx->pc = 0x28D52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D528u;
            // 0x28d52c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D500u;
            runtime->cooperativeGuestYield();
            goto label_28d500;
        }
    }
    ctx->pc = 0x28D530u;
label_28d530:
    // 0x28d530: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28d530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d534: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d53c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28d53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d544: 0x3e00008  jr          $ra
    ctx->pc = 0x28D544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D544u;
            // 0x28d548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D500u: goto label_28d500;
            case 0x28D524u: goto label_28d524;
            case 0x28D530u: goto label_28d530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D54Cu;
    // 0x28d54c: 0x0  nop
    ctx->pc = 0x28d54cu;
    // NOP
}

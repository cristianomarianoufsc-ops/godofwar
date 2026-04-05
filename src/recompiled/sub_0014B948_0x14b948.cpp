#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B948
// Address: 0x14b948 - 0x14b9f8
void sub_0014B948_0x14b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B948_0x14b948");
#endif

    ctx->pc = 0x14b948u;

    // 0x14b948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b94c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b950: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14b954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14b954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b958: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14b95c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b964: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b968: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b96c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14b970: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b974: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b978: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b97c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14b980: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x14b980u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14b984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b988: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b98c: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x14b98cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x14b990: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14b994: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x14b994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b998: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14b99c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x14b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x14b9a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14b9a4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x14b9a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14b9a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B9A8u;
    {
        const bool branch_taken_0x14b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9A8u;
            // 0x14b9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9a8) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B9B0u;
    // 0x14b9b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b9b4: 0x0  nop
    ctx->pc = 0x14b9b4u;
    // NOP
label_14b9b8:
    // 0x14b9b8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14b9bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14b9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b9c4: 0xc052e44  jal         func_14B910
    ctx->pc = 0x14B9C4u;
    SET_GPR_U32(ctx, 31, 0x14B9CCu);
    ctx->pc = 0x14B9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9C4u;
            // 0x14b9c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B910u;
    if (runtime->hasFunction(0x14B910u)) {
        auto targetFn = runtime->lookupFunction(0x14B910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9CCu; }
        if (ctx->pc != 0x14B9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14b910_0x14b948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9CCu; }
        if (ctx->pc != 0x14B9CCu) { return; }
    }
    ctx->pc = 0x14B9CCu;
    // 0x14b9cc: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x14b9ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14b9d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14b9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b9d4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B9D4u;
    {
        const bool branch_taken_0x14b9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b9d4) {
            ctx->pc = 0x14B9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9D4u;
            // 0x14b9d8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B9B8u;
            runtime->cooperativeGuestYield();
            goto label_14b9b8;
        }
    }
    ctx->pc = 0x14B9DCu;
label_14b9dc:
    // 0x14b9dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14b9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b9e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b9e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14b9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9ECu;
            // 0x14b9f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B9B8u: goto label_14b9b8;
            case 0x14B9DCu: goto label_14b9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B9F4u;
    // 0x14b9f4: 0x0  nop
    ctx->pc = 0x14b9f4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130048
// Address: 0x130048 - 0x1300c8
void sub_00130048_0x130048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130048_0x130048");
#endif

    ctx->pc = 0x130048u;

    // 0x130048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13004c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x13004cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x130050: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x130050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x130054: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x130054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x130058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13005c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13005cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130064: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130068: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x130068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13006c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13006cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x130070: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x130070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130074: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x130074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x130078: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x13007c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x130080: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x130080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x130084: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x130084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x130088: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x130088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13008c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x13008cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x130090: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x130090u;
    SET_GPR_U32(ctx, 31, 0x130098u);
    ctx->pc = 0x130094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130090u;
            // 0x130094: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130098u; }
        if (ctx->pc != 0x130098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130098u; }
        if (ctx->pc != 0x130098u) { return; }
    }
    ctx->pc = 0x130098u;
    // 0x130098: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x130098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x13009c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x13009cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1300a0: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x1300a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x1300a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1300a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300a8: 0xc04c032  jal         func_1300C8
    ctx->pc = 0x1300A8u;
    SET_GPR_U32(ctx, 31, 0x1300B0u);
    ctx->pc = 0x1300ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1300A8u;
            // 0x1300ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300C8u;
    if (runtime->hasFunction(0x1300C8u)) {
        auto targetFn = runtime->lookupFunction(0x1300C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300B0u; }
        if (ctx->pc != 0x1300B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001300C8_0x1300c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300B0u; }
        if (ctx->pc != 0x1300B0u) { return; }
    }
    ctx->pc = 0x1300B0u;
    // 0x1300b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1300b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1300b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1300b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1300b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1300bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1300bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1300c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1300C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1300C0u;
            // 0x1300c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1300C8u;
}

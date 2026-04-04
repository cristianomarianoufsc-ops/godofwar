#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C790
// Address: 0x17c790 - 0x17c808
void sub_0017C790_0x17c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C790_0x17c790");
#endif

    ctx->pc = 0x17c790u;

    // 0x17c790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c794: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17c798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c79c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17c79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17c7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c7a8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17c7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7ac: 0xc05f1bc  jal         func_17C6F0
    ctx->pc = 0x17C7ACu;
    SET_GPR_U32(ctx, 31, 0x17C7B4u);
    ctx->pc = 0x17C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7ACu;
            // 0x17c7b0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C6F0u;
    if (runtime->hasFunction(0x17C6F0u)) {
        auto targetFn = runtime->lookupFunction(0x17C6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7B4u; }
        if (ctx->pc != 0x17C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C6F0_0x17c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7B4u; }
        if (ctx->pc != 0x17C7B4u) { return; }
    }
    ctx->pc = 0x17C7B4u;
    // 0x17c7b4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x17c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x17c7b8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x17c7bc: 0x8ca34718  lw          $v1, 0x4718($a1)
    ctx->pc = 0x17c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17c7c0: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17c7c4: 0x8c824714  lw          $v0, 0x4714($a0)
    ctx->pc = 0x17c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18196)));
    // 0x17c7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c7d0: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x17c7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x17c7d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17c7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c7d8: 0x8ca24718  lw          $v0, 0x4718($a1)
    ctx->pc = 0x17c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18200)));
    // 0x17c7dc: 0x8c834714  lw          $v1, 0x4714($a0)
    ctx->pc = 0x17c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18196)));
    // 0x17c7e0: 0x8cc44710  lw          $a0, 0x4710($a2)
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18192)));
    // 0x17c7e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c7e8: 0xa4710002  sh          $s1, 0x2($v1)
    ctx->pc = 0x17c7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x17c7ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c7f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17c7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c7f8: 0xaca24718  sw          $v0, 0x4718($a1)
    ctx->pc = 0x17c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18200), GPR_U32(ctx, 2));
    // 0x17c7fc: 0xacc44710  sw          $a0, 0x4710($a2)
    ctx->pc = 0x17c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18192), GPR_U32(ctx, 4));
    // 0x17c800: 0x3e00008  jr          $ra
    ctx->pc = 0x17C800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C800u;
            // 0x17c804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C808u;
}

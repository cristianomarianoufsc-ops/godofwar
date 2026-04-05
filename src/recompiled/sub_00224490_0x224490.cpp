#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224490
// Address: 0x224490 - 0x224508
void sub_00224490_0x224490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224490_0x224490");
#endif

    ctx->pc = 0x224490u;

    // 0x224490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22449c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22449cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2244a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2244a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2244a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2244ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2244b0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2244b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2244B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2244BCu);
        ctx->pc = 0x2244B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244B4u;
            // 0x2244b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2244BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2244BCu; }
            if (ctx->pc != 0x2244BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2244BCu;
    // 0x2244bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2244bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2244c0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2244c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2244c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2244c8: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x2244cc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2244CCu;
    SET_GPR_U32(ctx, 31, 0x2244D4u);
    ctx->pc = 0x2244D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2244CCu;
            // 0x2244d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244D4u; }
        if (ctx->pc != 0x2244D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244D4u; }
        if (ctx->pc != 0x2244D4u) { return; }
    }
    ctx->pc = 0x2244D4u;
    // 0x2244d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2244d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2244d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2244d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2244dc: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2244dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2244e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2244e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2244e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2244e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2244e8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2244e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2244ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2244ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2244f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2244f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2244f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2244f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2244f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2244f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2244fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2244fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x224500: 0x3e00008  jr          $ra
    ctx->pc = 0x224500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224500u;
            // 0x224504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224508u;
}

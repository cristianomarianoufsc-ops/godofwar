#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EF60
// Address: 0x14ef60 - 0x14efe8
void sub_0014EF60_0x14ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF60_0x14ef60");
#endif

    ctx->pc = 0x14ef60u;

    // 0x14ef60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ef64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ef68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ef6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14ef6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ef74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ef78: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14ef7c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EF7Cu;
    {
        const bool branch_taken_0x14ef7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF7Cu;
            // 0x14ef80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef7c) {
            ctx->pc = 0x14EFA4u;
            goto label_14efa4;
        }
    }
    ctx->pc = 0x14EF84u;
    // 0x14ef84: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x14ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_14ef88:
    // 0x14ef88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ef88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef8c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x14ef8cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x14ef90: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14EF90u;
    SET_GPR_U32(ctx, 31, 0x14EF98u);
    ctx->pc = 0x14EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF90u;
            // 0x14ef94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF98u; }
        if (ctx->pc != 0x14EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EF00_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF98u; }
        if (ctx->pc != 0x14EF98u) { return; }
    }
    ctx->pc = 0x14EF98u;
    // 0x14ef98: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ef9c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EF9Cu;
    {
        const bool branch_taken_0x14ef9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF9Cu;
            // 0x14efa0: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef9c) {
            ctx->pc = 0x14EF88u;
            runtime->cooperativeGuestYield();
            goto label_14ef88;
        }
    }
    ctx->pc = 0x14EFA4u;
label_14efa4:
    // 0x14efa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14efa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14efa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14efa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14efac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14efacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14efb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14efb4: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFB4u;
            // 0x14efb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EF88u: goto label_14ef88;
            case 0x14EFA4u: goto label_14efa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EFBCu;
    // 0x14efbc: 0x0  nop
    ctx->pc = 0x14efbcu;
    // NOP
    // 0x14efc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14efc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14efc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14efcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14efccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14efd0: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14EFD0u;
    SET_GPR_U32(ctx, 31, 0x14EFD8u);
    ctx->pc = 0x14EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFD0u;
            // 0x14efd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFD8u; }
        if (ctx->pc != 0x14EFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EF00_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFD8u; }
        if (ctx->pc != 0x14EFD8u) { return; }
    }
    ctx->pc = 0x14EFD8u;
    // 0x14efd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14efd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14efdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFE0u;
            // 0x14efe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EF88u: goto label_14ef88;
            case 0x14EFA4u: goto label_14efa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EFE8u;
}

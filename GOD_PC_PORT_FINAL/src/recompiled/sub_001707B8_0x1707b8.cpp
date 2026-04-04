#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001707B8
// Address: 0x1707b8 - 0x170820
void sub_001707B8_0x1707b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001707B8_0x1707b8");
#endif

    ctx->pc = 0x1707b8u;

    // 0x1707b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1707bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1707bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1707c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1707c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1707c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1707c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707c8: 0x960200c2  lhu         $v0, 0xC2($s0)
    ctx->pc = 0x1707c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1707cc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1707ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1707d0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1707D0u;
    {
        const bool branch_taken_0x1707d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1707d0) {
            ctx->pc = 0x1707D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1707D0u;
            // 0x1707d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170810u;
            goto label_170810;
        }
    }
    ctx->pc = 0x1707D8u;
    // 0x1707d8: 0xc04c090  jal         func_130240
    ctx->pc = 0x1707D8u;
    SET_GPR_U32(ctx, 31, 0x1707E0u);
    ctx->pc = 0x130240u;
    if (runtime->hasFunction(0x130240u)) {
        auto targetFn = runtime->lookupFunction(0x130240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707E0u; }
        if (ctx->pc != 0x1707E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_130240_0x1302b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707E0u; }
        if (ctx->pc != 0x1707E0u) { return; }
    }
    ctx->pc = 0x1707E0u;
    // 0x1707e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1707e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707e4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1707E4u;
    {
        const bool branch_taken_0x1707e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707E4u;
            // 0x1707e8: 0x2606009c  addiu       $a2, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707e4) {
            ctx->pc = 0x17080Cu;
            goto label_17080c;
        }
    }
    ctx->pc = 0x1707ECu;
    // 0x1707ec: 0x960200c2  lhu         $v0, 0xC2($s0)
    ctx->pc = 0x1707ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x1707f0: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1707f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1707f8: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x1707f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1707fc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1707fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x170800: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x170800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x170804: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x170804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x170808: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x170808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_17080c:
    // 0x17080c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17080cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170810:
    // 0x170810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170814: 0x3e00008  jr          $ra
    ctx->pc = 0x170814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170814u;
            // 0x170818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17080Cu: goto label_17080c;
            case 0x170810u: goto label_170810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17081Cu;
    // 0x17081c: 0x0  nop
    ctx->pc = 0x17081cu;
    // NOP
}

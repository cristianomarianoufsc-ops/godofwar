#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002245F8
// Address: 0x2245f8 - 0x224648
void sub_002245F8_0x2245f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002245F8_0x2245f8");
#endif

    ctx->pc = 0x2245f8u;

    // 0x2245f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2245fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x224600: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22460c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x22460Cu;
    SET_GPR_U32(ctx, 31, 0x224614u);
    ctx->pc = 0x224610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22460Cu;
            // 0x224610: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224614u; }
        if (ctx->pc != 0x224614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224614u; }
        if (ctx->pc != 0x224614u) { return; }
    }
    ctx->pc = 0x224614u;
    // 0x224614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x224618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22461c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224620: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x224620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x224624: 0xc08c78c  jal         func_231E30
    ctx->pc = 0x224624u;
    SET_GPR_U32(ctx, 31, 0x22462Cu);
    ctx->pc = 0x224628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224624u;
            // 0x224628: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E30u;
    if (runtime->hasFunction(0x231E30u)) {
        auto targetFn = runtime->lookupFunction(0x231E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22462Cu; }
        if (ctx->pc != 0x22462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E30_0x231e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22462Cu; }
        if (ctx->pc != 0x22462Cu) { return; }
    }
    ctx->pc = 0x22462Cu;
    // 0x22462c: 0xae306ea8  sw          $s0, 0x6EA8($s1)
    ctx->pc = 0x22462cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28328), GPR_U32(ctx, 16));
    // 0x224630: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22463c: 0x3e00008  jr          $ra
    ctx->pc = 0x22463Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22463Cu;
            // 0x224640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224644u;
    // 0x224644: 0x0  nop
    ctx->pc = 0x224644u;
    // NOP
}

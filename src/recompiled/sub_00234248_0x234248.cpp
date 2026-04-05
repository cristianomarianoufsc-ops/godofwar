#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234248
// Address: 0x234248 - 0x234290
void sub_00234248_0x234248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234248_0x234248");
#endif

    ctx->pc = 0x234248u;

    // 0x234248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23424c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x234250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x234250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x234254: 0x2442ebc0  addiu       $v0, $v0, -0x1440
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962112));
    // 0x234258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23425c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234260: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x234260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x234264: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x234264u;
    {
        const bool branch_taken_0x234264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234264u;
            // 0x234268: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234264) {
            ctx->pc = 0x234280u;
            goto label_234280;
        }
    }
    ctx->pc = 0x23426Cu;
    // 0x23426c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x23426Cu;
    SET_GPR_U32(ctx, 31, 0x234274u);
    ctx->pc = 0x234270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23426Cu;
            // 0x234270: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234274u; }
        if (ctx->pc != 0x234274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234274u; }
        if (ctx->pc != 0x234274u) { return; }
    }
    ctx->pc = 0x234274u;
    // 0x234274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234278: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x234278u;
    SET_GPR_U32(ctx, 31, 0x234280u);
    ctx->pc = 0x23427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234278u;
            // 0x23427c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234280u; }
        if (ctx->pc != 0x234280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234280u; }
        if (ctx->pc != 0x234280u) { return; }
    }
    ctx->pc = 0x234280u;
label_234280:
    // 0x234280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x234280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234288: 0x3e00008  jr          $ra
    ctx->pc = 0x234288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234288u;
            // 0x23428c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234280u: goto label_234280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234290u;
}

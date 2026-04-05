#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259FE0
// Address: 0x259fe0 - 0x25a030
void sub_00259FE0_0x259fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259FE0_0x259fe0");
#endif

    ctx->pc = 0x259fe0u;

    // 0x259fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259fe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259fec: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x259FECu;
    SET_GPR_U32(ctx, 31, 0x259FF4u);
    ctx->pc = 0x259FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259FECu;
            // 0x259ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FF4u; }
        if (ctx->pc != 0x259FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259FF4u; }
        if (ctx->pc != 0x259FF4u) { return; }
    }
    ctx->pc = 0x259FF4u;
    // 0x259ff4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259ff8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x259ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259ffc: 0x24429010  addiu       $v0, $v0, -0x6FF0
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938640));
    // 0x25a000: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x25a000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x25a004: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a00c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a010: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a014: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x25a014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x25a018: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x25a018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x25a01c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x25a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x25a020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a028: 0x3e00008  jr          $ra
    ctx->pc = 0x25A028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A028u;
            // 0x25a02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A030u;
}

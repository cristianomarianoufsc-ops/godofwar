#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CDC8
// Address: 0x21cdc8 - 0x21ce10
void sub_0021CDC8_0x21cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CDC8_0x21cdc8");
#endif

    ctx->pc = 0x21cdc8u;

    // 0x21cdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21cdcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21cdd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21cdd4: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21cdd8: 0x8c421528  lw          $v0, 0x1528($v0)
    ctx->pc = 0x21cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5416)));
    // 0x21cddc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CDDCu;
    {
        const bool branch_taken_0x21cddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDDCu;
            // 0x21cde0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cddc) {
            ctx->pc = 0x21CE04u;
            goto label_21ce04;
        }
    }
    ctx->pc = 0x21CDE4u;
    // 0x21cde4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x21cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x21cde8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21cdec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cdf0: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x21cdf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21cdf4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x21cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21cdf8: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x21cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x21cdfc: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x21CDFCu;
    SET_GPR_U32(ctx, 31, 0x21CE04u);
    ctx->pc = 0x21CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDFCu;
            // 0x21ce00: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE04u; }
        if (ctx->pc != 0x21CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21db60_0x21dc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CE04u; }
        if (ctx->pc != 0x21CE04u) { return; }
    }
    ctx->pc = 0x21CE04u;
label_21ce04:
    // 0x21ce04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ce08: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE08u;
            // 0x21ce0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CE04u: goto label_21ce04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CE10u;
}

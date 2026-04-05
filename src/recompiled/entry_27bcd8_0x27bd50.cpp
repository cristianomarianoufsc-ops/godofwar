#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27bcd8
// Address: 0x27bcd8 - 0x27bd50
void entry_27bcd8_0x27bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27bcd8_0x27bd50");
#endif

    ctx->pc = 0x27bcd8u;

    // 0x27bcd8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x27bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x27bcdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bcdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bce0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x27bce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27bce4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27bce8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27bcec: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x27bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
    // 0x27bcf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27bcf4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27bcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bcf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bcfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27bd00: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x27bd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27bd04: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x27bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_27bd08:
    // 0x27bd08: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x27bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x27bd0c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x27bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x27bd10: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27bd14: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x27bd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bd18: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27bd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27bd1c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x27bd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bd20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27bd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x27bd24: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x27bd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bd28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27bd2c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27BD2Cu;
    SET_GPR_U32(ctx, 31, 0x27BD34u);
    ctx->pc = 0x27BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD2Cu;
            // 0x27bd30: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD34u; }
        if (ctx->pc != 0x27BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD34u; }
        if (ctx->pc != 0x27BD34u) { return; }
    }
    ctx->pc = 0x27BD34u;
    // 0x27bd34: 0x623fff4  bgezl       $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x27BD34u;
    {
        const bool branch_taken_0x27bd34 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27bd34) {
            ctx->pc = 0x27BD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD34u;
            // 0x27bd38: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27BD08u;
            runtime->cooperativeGuestYield();
            goto label_27bd08;
        }
    }
    ctx->pc = 0x27BD3Cu;
    // 0x27bd3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27bd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bd40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27bd40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27bd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd48: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD48u;
            // 0x27bd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27BD08u: goto label_27bd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27BD50u;
}

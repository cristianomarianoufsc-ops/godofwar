#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27bf90
// Address: 0x27bf90 - 0x27c010
void entry_27bf90_0x27c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27bf90_0x27c010");
#endif

    ctx->pc = 0x27bf90u;

    // 0x27bf90: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x27bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x27bf94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bf98: 0x421024  and         $v0, $v0, $v0
    ctx->pc = 0x27bf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 2));
    // 0x27bf9c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x27bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x27bfa0: 0x34c63fff  ori         $a2, $a2, 0x3FFF
    ctx->pc = 0x27bfa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16383);
    // 0x27bfa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27bfa8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x27bfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27bfac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x27bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x27bfb0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x27bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x27bfb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27bfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27bfb8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x27bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x27bfbc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x27bfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x27bfc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27bfc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27bfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfc8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x27bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x27bfcc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x27bfccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27bfd0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x27bfd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x27bfd4: 0x350800ff  ori         $t0, $t0, 0xFF
    ctx->pc = 0x27bfd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)255);
    // 0x27bfd8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x27bfd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x27bfdc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x27bfdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x27bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bfe4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x27bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x27bfe8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x27bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x27bfec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27bfecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27bff4: 0xc09edb4  jal         func_27B6D0
    ctx->pc = 0x27BFF4u;
    SET_GPR_U32(ctx, 31, 0x27BFFCu);
    ctx->pc = 0x27BFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFF4u;
            // 0x27bff8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B6D0u;
    if (runtime->hasFunction(0x27B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x27B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFFCu; }
        if (ctx->pc != 0x27BFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B6D0_0x27b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFFCu; }
        if (ctx->pc != 0x27BFFCu) { return; }
    }
    ctx->pc = 0x27BFFCu;
    // 0x27bffc: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27BFFCu;
    {
        const bool branch_taken_0x27bffc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27bffc) {
            ctx->pc = 0x27C000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFFCu;
            // 0x27c000: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C004u;
            goto label_27c004;
        }
    }
    ctx->pc = 0x27C004u;
label_27c004:
    // 0x27c004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c008: 0x3e00008  jr          $ra
    ctx->pc = 0x27C008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C008u;
            // 0x27c00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C004u: goto label_27c004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C010u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_108a30
// Address: 0x108a30 - 0x108a88
void entry_108a30_0x108a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_108a30_0x108a88");
#endif

    ctx->pc = 0x108a30u;

    // 0x108a30: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x108a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x108a34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108a38: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108a3c: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x108A3Cu;
    {
        const bool branch_taken_0x108a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x108a3c) {
            ctx->pc = 0x108A80u;
            goto label_108a80;
        }
    }
    ctx->pc = 0x108A44u;
    // 0x108a44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108a48:
    // 0x108a48: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x108a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x108a4c: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x108A4Cu;
    {
        const bool branch_taken_0x108a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x108a4c) {
            ctx->pc = 0x108A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108A4Cu;
            // 0x108a50: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108A78u;
            goto label_108a78;
        }
    }
    ctx->pc = 0x108A54u;
    // 0x108a54: 0x0  nop
    ctx->pc = 0x108a54u;
    // NOP
label_108a58:
    // 0x108a58: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x108a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x108a5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x108a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108a60: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x108A60u;
    {
        const bool branch_taken_0x108a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108a60) {
            ctx->pc = 0x108A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108A60u;
            // 0x108a64: 0xc461001c  lwc1        $f1, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x108A68u;
            goto label_108a68;
        }
    }
    ctx->pc = 0x108A68u;
label_108a68:
    // 0x108a68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108a6c: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108A6Cu;
    {
        const bool branch_taken_0x108a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x108A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A6Cu;
            // 0x108a70: 0x46000828  max.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a6c) {
            ctx->pc = 0x108A58u;
            runtime->cooperativeGuestYield();
            goto label_108a58;
        }
    }
    ctx->pc = 0x108A74u;
    // 0x108a74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x108a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108a78:
    // 0x108a78: 0x5486fff3  bnel        $a0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x108A78u;
    {
        const bool branch_taken_0x108a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x108a78) {
            ctx->pc = 0x108A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108A78u;
            // 0x108a7c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108A48u;
            runtime->cooperativeGuestYield();
            goto label_108a48;
        }
    }
    ctx->pc = 0x108A80u;
label_108a80:
    // 0x108a80: 0x3e00008  jr          $ra
    ctx->pc = 0x108A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108A48u: goto label_108a48;
            case 0x108A58u: goto label_108a58;
            case 0x108A68u: goto label_108a68;
            case 0x108A78u: goto label_108a78;
            case 0x108A80u: goto label_108a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108A88u;
}

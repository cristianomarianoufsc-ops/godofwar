#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21f138
// Address: 0x21f138 - 0x21f180
void entry_21f138_0x21f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21f138_0x21f180");
#endif

    ctx->pc = 0x21f138u;

    // 0x21f138: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21f13c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x21f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x21f140: 0x8c445a40  lw          $a0, 0x5A40($v0)
    ctx->pc = 0x21f140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23104)));
    // 0x21f144: 0x90652d3d  lbu         $a1, 0x2D3D($v1)
    ctx->pc = 0x21f144u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11581)));
    // 0x21f148: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21f14c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x21f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x21f150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F150u;
    {
        const bool branch_taken_0x21f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F150u;
            // 0x21f154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f150) {
            ctx->pc = 0x21F164u;
            goto label_21f164;
        }
    }
    ctx->pc = 0x21F158u;
    // 0x21f158: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x21f158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21f15c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x21f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x21f160: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x21f160u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21f164:
    // 0x21f164: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F164u;
    {
        const bool branch_taken_0x21f164 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F164u;
            // 0x21f168: 0x30630004  andi        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f164) {
            ctx->pc = 0x21F174u;
            goto label_21f174;
        }
    }
    ctx->pc = 0x21F16Cu;
    // 0x21f16c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F16Cu;
    {
        const bool branch_taken_0x21f16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F16Cu;
            // 0x21f170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f16c) {
            ctx->pc = 0x21F178u;
            goto label_21f178;
        }
    }
    ctx->pc = 0x21F174u;
label_21f174:
    // 0x21f174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f178:
    // 0x21f178: 0x3e00008  jr          $ra
    ctx->pc = 0x21F178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F164u: goto label_21f164;
            case 0x21F174u: goto label_21f174;
            case 0x21F178u: goto label_21f178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F180u;
}

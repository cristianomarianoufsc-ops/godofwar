#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ddc50
// Address: 0x1ddc50 - 0x1ddcc0
void entry_1ddc50_0x1ddcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ddc50_0x1ddcc0");
#endif

    ctx->pc = 0x1ddc50u;

    // 0x1ddc50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ddc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddc54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ddc58: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ddc5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddc60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddc64: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ddc68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDC68u;
    {
        const bool branch_taken_0x1ddc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC68u;
            // 0x1ddc6c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc68) {
            ctx->pc = 0x1DDC80u;
            goto label_1ddc80;
        }
    }
    ctx->pc = 0x1DDC70u;
    // 0x1ddc70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC74u;
    {
        const bool branch_taken_0x1ddc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC74u;
            // 0x1ddc78: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc74) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC7Cu;
    // 0x1ddc7c: 0x0  nop
    ctx->pc = 0x1ddc7cu;
    // NOP
label_1ddc80:
    // 0x1ddc80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddc84:
    // 0x1ddc84: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDC84u;
    {
        const bool branch_taken_0x1ddc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc84) {
            ctx->pc = 0x1DDCB8u;
            goto label_1ddcb8;
        }
    }
    ctx->pc = 0x1DDC8Cu;
    // 0x1ddc8c: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x1ddc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1ddc90: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDC90u;
    {
        const bool branch_taken_0x1ddc90 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1DDC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC90u;
            // 0x1ddc94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc90) {
            ctx->pc = 0x1DDCB8u;
            goto label_1ddcb8;
        }
    }
    ctx->pc = 0x1DDC98u;
label_1ddc98:
    // 0x1ddc98: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ddc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ddc9c: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1ddc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1ddca0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ddca4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1ddca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ddcac: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1ddcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ddcb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DDCB0u;
    {
        const bool branch_taken_0x1ddcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCB0u;
            // 0x1ddcb4: 0x46000868  max.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcb0) {
            ctx->pc = 0x1DDC98u;
            runtime->cooperativeGuestYield();
            goto label_1ddc98;
        }
    }
    ctx->pc = 0x1DDCB8u;
label_1ddcb8:
    // 0x1ddcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCB8u;
            // 0x1ddcbc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDC80u: goto label_1ddc80;
            case 0x1DDC84u: goto label_1ddc84;
            case 0x1DDC98u: goto label_1ddc98;
            case 0x1DDCB8u: goto label_1ddcb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDCC0u;
}

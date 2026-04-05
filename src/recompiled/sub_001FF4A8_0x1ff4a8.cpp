#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF4A8
// Address: 0x1ff4a8 - 0x1ff508
void sub_001FF4A8_0x1ff4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF4A8_0x1ff4a8");
#endif

    ctx->pc = 0x1ff4a8u;

    // 0x1ff4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff4bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF4BCu;
    {
        const bool branch_taken_0x1ff4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4bc) {
            ctx->pc = 0x1FF4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4BCu;
            // 0x1ff4c0: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4C4u;
            goto label_1ff4c4;
        }
    }
    ctx->pc = 0x1FF4C4u;
label_1ff4c4:
    // 0x1ff4c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff4c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF4C8u;
    {
        const bool branch_taken_0x1ff4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4c8) {
            ctx->pc = 0x1FF4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4C8u;
            // 0x1ff4cc: 0xa600000e  sh          $zero, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4E0u;
            goto label_1ff4e0;
        }
    }
    ctx->pc = 0x1FF4D0u;
    // 0x1ff4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4d4: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1FF4D4u;
    SET_GPR_U32(ctx, 31, 0x1FF4DCu);
    ctx->pc = 0x1FF4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4D4u;
            // 0x1ff4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4DCu; }
        if (ctx->pc != 0x1FF4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4DCu; }
        if (ctx->pc != 0x1FF4DCu) { return; }
    }
    ctx->pc = 0x1FF4DCu;
    // 0x1ff4dc: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x1ff4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
label_1ff4e0:
    // 0x1ff4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4e4: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1ff4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ff4e8: 0xc07fd42  jal         func_1FF508
    ctx->pc = 0x1FF4E8u;
    SET_GPR_U32(ctx, 31, 0x1FF4F0u);
    ctx->pc = 0x1FF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4E8u;
            // 0x1ff4ec: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF508u;
    if (runtime->hasFunction(0x1FF508u)) {
        auto targetFn = runtime->lookupFunction(0x1FF508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4F0u; }
        if (ctx->pc != 0x1FF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF508_0x1ff508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4F0u; }
        if (ctx->pc != 0x1FF4F0u) { return; }
    }
    ctx->pc = 0x1FF4F0u;
    // 0x1ff4f0: 0xc07fd50  jal         func_1FF540
    ctx->pc = 0x1FF4F0u;
    SET_GPR_U32(ctx, 31, 0x1FF4F8u);
    ctx->pc = 0x1FF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4F0u;
            // 0x1ff4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF540u;
    if (runtime->hasFunction(0x1FF540u)) {
        auto targetFn = runtime->lookupFunction(0x1FF540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4F8u; }
        if (ctx->pc != 0x1FF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF540_0x1ff540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4F8u; }
        if (ctx->pc != 0x1FF4F8u) { return; }
    }
    ctx->pc = 0x1FF4F8u;
    // 0x1ff4f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff500: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF500u;
            // 0x1ff504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF4C4u: goto label_1ff4c4;
            case 0x1FF4E0u: goto label_1ff4e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF508u;
}

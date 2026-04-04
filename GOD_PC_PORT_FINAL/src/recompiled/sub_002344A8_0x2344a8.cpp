#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002344A8
// Address: 0x2344a8 - 0x234510
void sub_002344A8_0x2344a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002344A8_0x2344a8");
#endif

    ctx->pc = 0x2344a8u;

    // 0x2344a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2344ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2344acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2344b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2344b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2344b4: 0x24421fd0  addiu       $v0, $v0, 0x1FD0
    ctx->pc = 0x2344b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
    // 0x2344b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2344b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2344bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2344bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2344c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2344c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2344c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2344c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2344c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2344cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2344CCu;
    {
        const bool branch_taken_0x2344cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2344CCu;
            // 0x2344d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344cc) {
            ctx->pc = 0x2344DCu;
            goto label_2344dc;
        }
    }
    ctx->pc = 0x2344D4u;
    // 0x2344d4: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x2344D4u;
    SET_GPR_U32(ctx, 31, 0x2344DCu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344DCu; }
        if (ctx->pc != 0x2344DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344DCu; }
        if (ctx->pc != 0x2344DCu) { return; }
    }
    ctx->pc = 0x2344DCu;
label_2344dc:
    // 0x2344dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2344dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2344e0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2344e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2344e4: 0x24421fe8  addiu       $v0, $v0, 0x1FE8
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8168));
    // 0x2344e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2344E8u;
    {
        const bool branch_taken_0x2344e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2344E8u;
            // 0x2344ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344e8) {
            ctx->pc = 0x2344F8u;
            goto label_2344f8;
        }
    }
    ctx->pc = 0x2344F0u;
    // 0x2344f0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2344F0u;
    SET_GPR_U32(ctx, 31, 0x2344F8u);
    ctx->pc = 0x2344F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2344F0u;
            // 0x2344f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344F8u; }
        if (ctx->pc != 0x2344F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344F8u; }
        if (ctx->pc != 0x2344F8u) { return; }
    }
    ctx->pc = 0x2344F8u;
label_2344f8:
    // 0x2344f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2344f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2344fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2344fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234504: 0x3e00008  jr          $ra
    ctx->pc = 0x234504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234504u;
            // 0x234508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2344DCu: goto label_2344dc;
            case 0x2344F8u: goto label_2344f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23450Cu;
    // 0x23450c: 0x0  nop
    ctx->pc = 0x23450cu;
    // NOP
}

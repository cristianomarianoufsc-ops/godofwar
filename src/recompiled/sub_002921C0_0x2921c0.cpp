#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002921C0
// Address: 0x2921c0 - 0x292220
void sub_002921C0_0x2921c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002921C0_0x2921c0");
#endif

    ctx->pc = 0x2921c0u;

    // 0x2921c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2921c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2921c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2921c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2921c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2921c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2921cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2921ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921d0: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x2921d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x2921d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2921d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2921d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2921d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921dc: 0xc0a50bc  jal         func_2942F0
    ctx->pc = 0x2921DCu;
    SET_GPR_U32(ctx, 31, 0x2921E4u);
    ctx->pc = 0x2921E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2921DCu;
            // 0x2921e0: 0xae20c1a4  sw          $zero, -0x3E5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2942F0u;
    if (runtime->hasFunction(0x2942F0u)) {
        auto targetFn = runtime->lookupFunction(0x2942F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002942F0_0x2942f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    }
    ctx->pc = 0x2921E4u;
    // 0x2921e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2921e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2921ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2921ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2921f0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2921F0u;
    {
        const bool branch_taken_0x2921f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2921f0) {
            ctx->pc = 0x2921F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2921F0u;
            // 0x2921f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292208u;
            goto label_292208;
        }
    }
    ctx->pc = 0x2921F8u;
    // 0x2921f8: 0x8e22c1a4  lw          $v0, -0x3E5C($s1)
    ctx->pc = 0x2921f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951332)));
    // 0x2921fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2921FCu;
    {
        const bool branch_taken_0x2921fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2921fc) {
            ctx->pc = 0x292200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2921FCu;
            // 0x292200: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292204u;
            goto label_292204;
        }
    }
    ctx->pc = 0x292204u;
label_292204:
    // 0x292204: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292208:
    // 0x292208: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x292208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29220c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29220cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292214: 0x3e00008  jr          $ra
    ctx->pc = 0x292214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292214u;
            // 0x292218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292204u: goto label_292204;
            case 0x292208u: goto label_292208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29221Cu;
    // 0x29221c: 0x0  nop
    ctx->pc = 0x29221cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001758F8
// Address: 0x1758f8 - 0x175948
void sub_001758F8_0x1758f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001758F8_0x1758f8");
#endif

    ctx->pc = 0x1758f8u;

    // 0x1758f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1758fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1758fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175908: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x175908u;
    SET_GPR_U32(ctx, 31, 0x175910u);
    ctx->pc = 0x17590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175908u;
            // 0x17590c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175910u; }
        if (ctx->pc != 0x175910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175910u; }
        if (ctx->pc != 0x175910u) { return; }
    }
    ctx->pc = 0x175910u;
    // 0x175910: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x175910u;
    {
        const bool branch_taken_0x175910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175910) {
            ctx->pc = 0x175914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175910u;
            // 0x175914: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175920u;
            goto label_175920;
        }
    }
    ctx->pc = 0x175918u;
    // 0x175918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175918u;
    {
        const bool branch_taken_0x175918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175918u;
            // 0x17591c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175918) {
            ctx->pc = 0x17592Cu;
            goto label_17592c;
        }
    }
    ctx->pc = 0x175920u;
label_175920:
    // 0x175920: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x175920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x175924: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x175924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x175928: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17592c:
    // 0x17592c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x17592cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x175930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175934: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x175934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x175938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17593c: 0x3e00008  jr          $ra
    ctx->pc = 0x17593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17593Cu;
            // 0x175940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175920u: goto label_175920;
            case 0x17592Cu: goto label_17592c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175944u;
    // 0x175944: 0x0  nop
    ctx->pc = 0x175944u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C380
// Address: 0x27c380 - 0x27c410
void sub_0027C380_0x27c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C380_0x27c380");
#endif

    ctx->pc = 0x27c380u;

    // 0x27c380: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27c388: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c38c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C38Cu;
    {
        const bool branch_taken_0x27c38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C38Cu;
            // 0x27c390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c38c) {
            ctx->pc = 0x27C3A0u;
            goto label_27c3a0;
        }
    }
    ctx->pc = 0x27C394u;
    // 0x27c394: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c398: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27C398u;
    {
        const bool branch_taken_0x27c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C398u;
            // 0x27c39c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c398) {
            ctx->pc = 0x27C3F0u;
            goto label_27c3f0;
        }
    }
    ctx->pc = 0x27C3A0u;
label_27c3a0:
    // 0x27c3a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27c3a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x27c3a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27c3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27c3ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C3ACu;
    {
        const bool branch_taken_0x27c3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3ac) {
            ctx->pc = 0x27C3C0u;
            goto label_27c3c0;
        }
    }
    ctx->pc = 0x27C3B4u;
    // 0x27c3b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x27c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27c3b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C3B8u;
    {
        const bool branch_taken_0x27c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3b8) {
            ctx->pc = 0x27C3CCu;
            goto label_27c3cc;
        }
    }
    ctx->pc = 0x27C3C0u;
label_27c3c0:
    // 0x27c3c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c3c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C3C4u;
    {
        const bool branch_taken_0x27c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C3C4u;
            // 0x27c3c8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3c4) {
            ctx->pc = 0x27C3F0u;
            goto label_27c3f0;
        }
    }
    ctx->pc = 0x27C3CCu;
label_27c3cc:
    // 0x27c3cc: 0xc0a0b90  jal         func_282E40
    ctx->pc = 0x27C3CCu;
    SET_GPR_U32(ctx, 31, 0x27C3D4u);
    ctx->pc = 0x282E40u;
    if (runtime->hasFunction(0x282E40u)) {
        auto targetFn = runtime->lookupFunction(0x282E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C3D4u; }
        if (ctx->pc != 0x27C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282E40_0x282e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C3D4u; }
        if (ctx->pc != 0x27C3D4u) { return; }
    }
    ctx->pc = 0x27C3D4u;
    // 0x27c3d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C3D4u;
    {
        const bool branch_taken_0x27c3d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27c3d4) {
            ctx->pc = 0x27C3E8u;
            goto label_27c3e8;
        }
    }
    ctx->pc = 0x27C3DCu;
    // 0x27c3dc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c3e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C3E0u;
    {
        const bool branch_taken_0x27c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C3E0u;
            // 0x27c3e4: 0x34420017  ori         $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3e0) {
            ctx->pc = 0x27C3F0u;
            goto label_27c3f0;
        }
    }
    ctx->pc = 0x27C3E8u;
label_27c3e8:
    // 0x27c3e8: 0xc0a0bea  jal         func_282FA8
    ctx->pc = 0x27C3E8u;
    SET_GPR_U32(ctx, 31, 0x27C3F0u);
    ctx->pc = 0x27C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C3E8u;
            // 0x27c3ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282FA8u;
    if (runtime->hasFunction(0x282FA8u)) {
        auto targetFn = runtime->lookupFunction(0x282FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C3F0u; }
        if (ctx->pc != 0x27C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282FA8_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C3F0u; }
        if (ctx->pc != 0x27C3F0u) { return; }
    }
    ctx->pc = 0x27C3F0u;
label_27c3f0:
    // 0x27c3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C3F4u;
            // 0x27c3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C3A0u: goto label_27c3a0;
            case 0x27C3C0u: goto label_27c3c0;
            case 0x27C3CCu: goto label_27c3cc;
            case 0x27C3E8u: goto label_27c3e8;
            case 0x27C3F0u: goto label_27c3f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C3FCu;
    // 0x27c3fc: 0x0  nop
    ctx->pc = 0x27c3fcu;
    // NOP
    // 0x27c400: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27c404: 0x0  nop
    ctx->pc = 0x27c404u;
    // NOP
    // 0x27c408: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27c408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27c40c: 0x0  nop
    ctx->pc = 0x27c40cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117918
// Address: 0x117918 - 0x1179d0
void sub_00117918_0x117918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117918_0x117918");
#endif

    ctx->pc = 0x117918u;

    // 0x117918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11791c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x117920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117924: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11792c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117930: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x117934: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x117934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117938: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11793c: 0x40f809  jalr        $v0
    ctx->pc = 0x11793Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117944u);
        ctx->pc = 0x117940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11793Cu;
            // 0x117940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117944u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117970u: goto label_117970;
            case 0x117978u: goto label_117978;
            case 0x117998u: goto label_117998;
            case 0x1179A8u: goto label_1179a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117944u; }
            if (ctx->pc != 0x117944u) { return; }
        }
        }
    }
    ctx->pc = 0x117944u;
    // 0x117944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117948: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x117948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11794c: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x117950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117950u;
    {
        const bool branch_taken_0x117950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117950u;
            // 0x117954: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117950) {
            ctx->pc = 0x117970u;
            goto label_117970;
        }
    }
    ctx->pc = 0x117958u;
    // 0x117958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x117958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11795c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x11795cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x117960: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x117960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x117964: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x117964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x117968: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x117968u;
    {
        const bool branch_taken_0x117968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117968u;
            // 0x11796c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117968) {
            ctx->pc = 0x1179A8u;
            goto label_1179a8;
        }
    }
    ctx->pc = 0x117970u;
label_117970:
    // 0x117970: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117974: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x117974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_117978:
    // 0x117978: 0x50650007  beql        $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117978u;
    {
        const bool branch_taken_0x117978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x117978) {
            ctx->pc = 0x11797Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117978u;
            // 0x11797c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117998u;
            goto label_117998;
        }
    }
    ctx->pc = 0x117980u;
    // 0x117980: 0x9062002d  lbu         $v0, 0x2D($v1)
    ctx->pc = 0x117980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x117984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117988: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x117988u;
    {
        const bool branch_taken_0x117988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117988) {
            ctx->pc = 0x11798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117988u;
            // 0x11798c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117978u;
            runtime->cooperativeGuestYield();
            goto label_117978;
        }
    }
    ctx->pc = 0x117990u;
    // 0x117990: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x117990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x117994: 0x0  nop
    ctx->pc = 0x117994u;
    // NOP
label_117998:
    // 0x117998: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x117998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x11799c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11799cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1179a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1179a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1179a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1179a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1179a8:
    // 0x1179a8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1179a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1179ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1179acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1179b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1179b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1179b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1179b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1179b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179bc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1179bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1179c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1179c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1179C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1179C4u;
            // 0x1179c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117970u: goto label_117970;
            case 0x117978u: goto label_117978;
            case 0x117998u: goto label_117998;
            case 0x1179A8u: goto label_1179a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1179CCu;
    // 0x1179cc: 0x0  nop
    ctx->pc = 0x1179ccu;
    // NOP
}

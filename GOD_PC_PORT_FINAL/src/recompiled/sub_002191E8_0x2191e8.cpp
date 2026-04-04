#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002191E8
// Address: 0x2191e8 - 0x219228
void sub_002191E8_0x2191e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002191E8_0x2191e8");
#endif

    ctx->pc = 0x2191e8u;

    // 0x2191e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2191ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2191ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2191f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2191f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2191f4: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x2191f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2191f8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2191F8u;
    {
        const bool branch_taken_0x2191f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2191f8) {
            ctx->pc = 0x2191FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2191F8u;
            // 0x2191fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219208u;
            goto label_219208;
        }
    }
    ctx->pc = 0x219200u;
    // 0x219200: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219200u;
    {
        const bool branch_taken_0x219200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219200u;
            // 0x219204: 0x78420050  lq          $v0, 0x50($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219200) {
            ctx->pc = 0x219218u;
            goto label_219218;
        }
    }
    ctx->pc = 0x219208u;
label_219208:
    // 0x219208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21920c: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x21920Cu;
    SET_GPR_U32(ctx, 31, 0x219214u);
    ctx->pc = 0x219210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21920Cu;
            // 0x219210: 0x94460046  lhu         $a2, 0x46($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219214u; }
        if (ctx->pc != 0x219214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219214u; }
        if (ctx->pc != 0x219214u) { return; }
    }
    ctx->pc = 0x219214u;
    // 0x219214: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x219214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219218:
    // 0x219218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x219218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21921c: 0x3e00008  jr          $ra
    ctx->pc = 0x21921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21921Cu;
            // 0x219220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219208u: goto label_219208;
            case 0x219218u: goto label_219218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219224u;
    // 0x219224: 0x0  nop
    ctx->pc = 0x219224u;
    // NOP
}

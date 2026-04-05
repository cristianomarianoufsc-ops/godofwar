#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144628
// Address: 0x144628 - 0x144680
void sub_00144628_0x144628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144628_0x144628");
#endif

    ctx->pc = 0x144628u;

    // 0x144628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14462c: 0x248600c8  addiu       $a2, $a0, 0xC8
    ctx->pc = 0x14462cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x144630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144634: 0x8cc20c00  lw          $v0, 0xC00($a2)
    ctx->pc = 0x144634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x144638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x144638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14463c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14463cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144640: 0xacc20c00  sw          $v0, 0xC00($a2)
    ctx->pc = 0x144640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3072), GPR_U32(ctx, 2));
    // 0x144644: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x144644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144648: 0x948200ca  lhu         $v0, 0xCA($a0)
    ctx->pc = 0x144648u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x14464c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x144650: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x144650u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144654: 0xacc20c04  sw          $v0, 0xC04($a2)
    ctx->pc = 0x144654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3076), GPR_U32(ctx, 2));
    // 0x144658: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x144658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14465c: 0x8cc20c04  lw          $v0, 0xC04($a2)
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3076)));
    // 0x144660: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x144664: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144668: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x144668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14466c: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x14466Cu;
    SET_GPR_U32(ctx, 31, 0x144674u);
    ctx->pc = 0x144670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14466Cu;
            // 0x144670: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144674u; }
        if (ctx->pc != 0x144674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144674u; }
        if (ctx->pc != 0x144674u) { return; }
    }
    ctx->pc = 0x144674u;
    // 0x144674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144678: 0x3e00008  jr          $ra
    ctx->pc = 0x144678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144678u;
            // 0x14467c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144680u;
}

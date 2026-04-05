#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283048
// Address: 0x283048 - 0x283098
void sub_00283048_0x283048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283048_0x283048");
#endif

    ctx->pc = 0x283048u;

    // 0x283048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28304c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x283050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283054: 0x80623640  lb          $v0, 0x3640($v1)
    ctx->pc = 0x283054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 13888)));
    // 0x283058: 0x24703640  addiu       $s0, $v1, 0x3640
    ctx->pc = 0x283058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13888));
    // 0x28305c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28305Cu;
    {
        const bool branch_taken_0x28305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28305Cu;
            // 0x283060: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28305c) {
            ctx->pc = 0x28306Cu;
            goto label_28306c;
        }
    }
    ctx->pc = 0x283064u;
    // 0x283064: 0xc0a0bf6  jal         func_282FD8
    ctx->pc = 0x283064u;
    SET_GPR_U32(ctx, 31, 0x28306Cu);
    ctx->pc = 0x282FD8u;
    if (runtime->hasFunction(0x282FD8u)) {
        auto targetFn = runtime->lookupFunction(0x282FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28306Cu; }
        if (ctx->pc != 0x28306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282FD8_0x282fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28306Cu; }
        if (ctx->pc != 0x28306Cu) { return; }
    }
    ctx->pc = 0x28306Cu;
label_28306c:
    // 0x28306c: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x28306cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x283070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283074: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x283074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x283078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28307c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28307cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283080: 0x3e00008  jr          $ra
    ctx->pc = 0x283080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283080u;
            // 0x283084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28306Cu: goto label_28306c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283088u;
    // 0x283088: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x283088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28308c: 0x0  nop
    ctx->pc = 0x28308cu;
    // NOP
    // 0x283090: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x283090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283094: 0x0  nop
    ctx->pc = 0x283094u;
    // NOP
}

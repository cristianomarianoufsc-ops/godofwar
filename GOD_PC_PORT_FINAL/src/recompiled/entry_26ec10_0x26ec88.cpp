#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ec10
// Address: 0x26ec10 - 0x26ec88
void entry_26ec10_0x26ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ec10_0x26ec88");
#endif

    ctx->pc = 0x26ec10u;

    // 0x26ec10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ec14: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26ec18: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x26ec18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x26ec1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26ec20: 0x8e42a600  lw          $v0, -0x5A00($s2)
    ctx->pc = 0x26ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944256)));
    // 0x26ec24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26ec28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26EC28u;
    {
        const bool branch_taken_0x26ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC28u;
            // 0x26ec2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec28) {
            ctx->pc = 0x26EC68u;
            goto label_26ec68;
        }
    }
    ctx->pc = 0x26EC30u;
    // 0x26ec30: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26ec30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x26ec34: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ec38: 0x2610a5d8  addiu       $s0, $s0, -0x5A28
    ctx->pc = 0x26ec38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944216));
    // 0x26ec3c: 0x8c45a604  lw          $a1, -0x59FC($v0)
    ctx->pc = 0x26ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944260)));
    // 0x26ec40: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x26ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26ec44: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x26ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x26ec48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ec4c: 0x36220041  ori         $v0, $s1, 0x41
    ctx->pc = 0x26ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65);
    // 0x26ec50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x26ec54: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26ec54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ec58: 0xc09bb78  jal         func_26EDE0
    ctx->pc = 0x26EC58u;
    SET_GPR_U32(ctx, 31, 0x26EC60u);
    ctx->pc = 0x26EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC58u;
            // 0x26ec5c: 0x8e45a600  lw          $a1, -0x5A00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EDE0u;
    if (runtime->hasFunction(0x26EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC60u; }
        if (ctx->pc != 0x26EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ede0_0x26ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EC60u; }
        if (ctx->pc != 0x26EC60u) { return; }
    }
    ctx->pc = 0x26EC60u;
    // 0x26ec60: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x26ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x26ec64: 0xae40a600  sw          $zero, -0x5A00($s2)
    ctx->pc = 0x26ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944256), GPR_U32(ctx, 0));
label_26ec68:
    // 0x26ec68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26ec68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ec6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26ec6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ec70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26ec70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ec74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ec78: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC78u;
            // 0x26ec7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EC68u: goto label_26ec68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26EC80u;
    // 0x26ec80: 0xac655044  sw          $a1, 0x5044($v1)
    ctx->pc = 0x26ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20548), GPR_U32(ctx, 5));
    // 0x26ec84: 0x0  nop
    ctx->pc = 0x26ec84u;
    // NOP
}

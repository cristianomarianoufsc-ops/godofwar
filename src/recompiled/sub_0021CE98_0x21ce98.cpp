#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CE98
// Address: 0x21ce98 - 0x21cf18
void sub_0021CE98_0x21ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE98_0x21ce98");
#endif

    ctx->pc = 0x21ce98u;

    // 0x21ce98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ce9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21cea0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21cea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cea8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21ceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ceb0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x21ceb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x21ceb4: 0x48880  sll         $s1, $a0, 2
    ctx->pc = 0x21ceb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21ceb8: 0x26426e88  addiu       $v0, $s2, 0x6E88
    ctx->pc = 0x21ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28296));
    // 0x21cebc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21cec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cec4: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x21CEC4u;
    {
        const bool branch_taken_0x21cec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x21CEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEC4u;
            // 0x21cec8: 0x2602fff6  addiu       $v0, $s0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cec4) {
            ctx->pc = 0x21CEF0u;
            goto label_21cef0;
        }
    }
    ctx->pc = 0x21CECCu;
    // 0x21cecc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x21ceccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21ced0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CED0u;
    {
        const bool branch_taken_0x21ced0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CED0u;
            // 0x21ced4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ced0) {
            ctx->pc = 0x21CEF0u;
            goto label_21cef0;
        }
    }
    ctx->pc = 0x21CED8u;
    // 0x21ced8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x21ced8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x21cedc: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x21cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21cee0: 0x24c67f68  addiu       $a2, $a2, 0x7F68
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32616));
    // 0x21cee4: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x21CEE4u;
    SET_GPR_U32(ctx, 31, 0x21CEECu);
    ctx->pc = 0x21CEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CEE4u;
            // 0x21cee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEECu; }
        if (ctx->pc != 0x21CEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEECu; }
        if (ctx->pc != 0x21CEECu) { return; }
    }
    ctx->pc = 0x21CEECu;
    // 0x21ceec: 0x0  nop
    ctx->pc = 0x21ceecu;
    // NOP
label_21cef0:
    // 0x21cef0: 0x26426e88  addiu       $v0, $s2, 0x6E88
    ctx->pc = 0x21cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28296));
    // 0x21cef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cef8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21cefc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21cefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x21cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x21cf04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21cf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cf08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21cf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF0Cu;
            // 0x21cf10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CEF0u: goto label_21cef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CF14u;
    // 0x21cf14: 0x0  nop
    ctx->pc = 0x21cf14u;
    // NOP
}

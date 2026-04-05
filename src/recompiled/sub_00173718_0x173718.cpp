#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173718
// Address: 0x173718 - 0x173778
void sub_00173718_0x173718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173718_0x173718");
#endif

    ctx->pc = 0x173718u;

    // 0x173718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17371c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173728: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x173728u;
    SET_GPR_U32(ctx, 31, 0x173730u);
    ctx->pc = 0x17372Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173728u;
            // 0x17372c: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173730u; }
        if (ctx->pc != 0x173730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173730u; }
        if (ctx->pc != 0x173730u) { return; }
    }
    ctx->pc = 0x173730u;
    // 0x173730: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173730u;
    {
        const bool branch_taken_0x173730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173730) {
            ctx->pc = 0x173734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173730u;
            // 0x173734: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173748u;
            goto label_173748;
        }
    }
    ctx->pc = 0x173738u;
    // 0x173738: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x173738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17373c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173740: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173740u;
    {
        const bool branch_taken_0x173740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173740u;
            // 0x173744: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173740) {
            ctx->pc = 0x173768u;
            goto label_173768;
        }
    }
    ctx->pc = 0x173748u;
label_173748:
    // 0x173748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17374c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x173750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x173754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173754u;
    {
        const bool branch_taken_0x173754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173754u;
            // 0x173758: 0xa2030018  sb          $v1, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173754) {
            ctx->pc = 0x173768u;
            goto label_173768;
        }
    }
    ctx->pc = 0x17375Cu;
    // 0x17375c: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x17375cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x173760: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x173760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x173764: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x173764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_173768:
    // 0x173768: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17376c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17376cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173770: 0x3e00008  jr          $ra
    ctx->pc = 0x173770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173770u;
            // 0x173774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173748u: goto label_173748;
            case 0x173768u: goto label_173768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173778u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214418
// Address: 0x214418 - 0x214470
void sub_00214418_0x214418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214418_0x214418");
#endif

    ctx->pc = 0x214418u;

    // 0x214418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21441c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x214420: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x214424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214428: 0x8e02e470  lw          $v0, -0x1B90($s0)
    ctx->pc = 0x214428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960240)));
    // 0x21442c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21442Cu;
    {
        const bool branch_taken_0x21442c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21442c) {
            ctx->pc = 0x214430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21442Cu;
            // 0x214430: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21445Cu;
            goto label_21445c;
        }
    }
    ctx->pc = 0x214434u;
    // 0x214434: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x214434u;
    SET_GPR_U32(ctx, 31, 0x21443Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21443Cu; }
        if (ctx->pc != 0x21443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21443Cu; }
        if (ctx->pc != 0x21443Cu) { return; }
    }
    ctx->pc = 0x21443Cu;
    // 0x21443c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x21443cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x214440: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x214440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x214444: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214448: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x214448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21444c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x21444Cu;
    SET_GPR_U32(ctx, 31, 0x214454u);
    ctx->pc = 0x214450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21444Cu;
            // 0x214450: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214454u; }
        if (ctx->pc != 0x214454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214454u; }
        if (ctx->pc != 0x214454u) { return; }
    }
    ctx->pc = 0x214454u;
    // 0x214454: 0xae02e470  sw          $v0, -0x1B90($s0)
    ctx->pc = 0x214454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960240), GPR_U32(ctx, 2));
    // 0x214458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x214458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21445c:
    // 0x21445c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21445cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214460: 0x3e00008  jr          $ra
    ctx->pc = 0x214460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214460u;
            // 0x214464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21445Cu: goto label_21445c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214468u;
    // 0x214468: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21446c: 0x0  nop
    ctx->pc = 0x21446cu;
    // NOP
}

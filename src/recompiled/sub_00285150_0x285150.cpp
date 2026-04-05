#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285150
// Address: 0x285150 - 0x2851a8
void sub_00285150_0x285150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285150_0x285150");
#endif

    ctx->pc = 0x285150u;

    // 0x285150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285154: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x285154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x285158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x285158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28515c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x285160: 0xc0a1186  jal         func_284618
    ctx->pc = 0x285160u;
    SET_GPR_U32(ctx, 31, 0x285168u);
    ctx->pc = 0x285164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285160u;
            // 0x285164: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285168u; }
        if (ctx->pc != 0x285168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285168u; }
        if (ctx->pc != 0x285168u) { return; }
    }
    ctx->pc = 0x285168u;
    // 0x285168: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x285168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28516c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x285170: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x285170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x285174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285178: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x285178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x28517c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28517cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x285180: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x285180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x285184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x285184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x285188: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x285188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x28518c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x28518cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x285190: 0xc0a1504  jal         func_285410
    ctx->pc = 0x285190u;
    SET_GPR_U32(ctx, 31, 0x285198u);
    ctx->pc = 0x285194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285190u;
            // 0x285194: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285410u;
    if (runtime->hasFunction(0x285410u)) {
        auto targetFn = runtime->lookupFunction(0x285410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285198u; }
        if (ctx->pc != 0x285198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285410_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285198u; }
        if (ctx->pc != 0x285198u) { return; }
    }
    ctx->pc = 0x285198u;
    // 0x285198: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28519c: 0x3e00008  jr          $ra
    ctx->pc = 0x28519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2851A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28519Cu;
            // 0x2851a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2851A4u;
    // 0x2851a4: 0x0  nop
    ctx->pc = 0x2851a4u;
    // NOP
}

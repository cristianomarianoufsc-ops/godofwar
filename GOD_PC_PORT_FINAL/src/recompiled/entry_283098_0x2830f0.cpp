#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_283098
// Address: 0x283098 - 0x2830f0
void entry_283098_0x2830f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_283098_0x2830f0");
#endif

    ctx->pc = 0x283098u;

    // 0x283098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28309c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2830a0: 0xc0a0c12  jal         func_283048
    ctx->pc = 0x2830A0u;
    SET_GPR_U32(ctx, 31, 0x2830A8u);
    ctx->pc = 0x283048u;
    if (runtime->hasFunction(0x283048u)) {
        auto targetFn = runtime->lookupFunction(0x283048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830A8u; }
        if (ctx->pc != 0x2830A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283048_0x283048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830A8u; }
        if (ctx->pc != 0x2830A8u) { return; }
    }
    ctx->pc = 0x2830A8u;
    // 0x2830a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2830A8u;
    {
        const bool branch_taken_0x2830a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2830A8u;
            // 0x2830ac: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830a8) {
            ctx->pc = 0x2830B8u;
            goto label_2830b8;
        }
    }
    ctx->pc = 0x2830B0u;
    // 0x2830b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2830B0u;
    {
        const bool branch_taken_0x2830b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2830B0u;
            // 0x2830b4: 0x84423638  lh          $v0, 0x3638($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 13880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830b0) {
            ctx->pc = 0x2830D8u;
            goto label_2830d8;
        }
    }
    ctx->pc = 0x2830B8u;
label_2830b8:
    // 0x2830b8: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x2830B8u;
    SET_GPR_U32(ctx, 31, 0x2830C0u);
    ctx->pc = 0x2830BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2830B8u;
            // 0x2830bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CD0u;
    if (runtime->hasFunction(0x293CD0u)) {
        auto targetFn = runtime->lookupFunction(0x293CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830C0u; }
        if (ctx->pc != 0x2830C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cd0_0x293ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2830C0u; }
        if (ctx->pc != 0x2830C0u) { return; }
    }
    ctx->pc = 0x2830C0u;
    // 0x2830c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2830c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2830c4: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x2830c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2830c8: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2830c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2830cc: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x2830ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x2830d0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2830d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2830d4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2830d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2830d8:
    // 0x2830d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2830d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2830dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2830DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2830DCu;
            // 0x2830e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2830B8u: goto label_2830b8;
            case 0x2830D8u: goto label_2830d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2830E4u;
    // 0x2830e4: 0x0  nop
    ctx->pc = 0x2830e4u;
    // NOP
    // 0x2830e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2830e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2830ec: 0x0  nop
    ctx->pc = 0x2830ecu;
    // NOP
}

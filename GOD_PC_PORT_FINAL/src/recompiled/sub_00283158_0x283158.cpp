#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283158
// Address: 0x283158 - 0x2831c0
void sub_00283158_0x283158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283158_0x283158");
#endif

    ctx->pc = 0x283158u;

    // 0x283158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28315c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283160: 0xc0a0c12  jal         func_283048
    ctx->pc = 0x283160u;
    SET_GPR_U32(ctx, 31, 0x283168u);
    ctx->pc = 0x283048u;
    if (runtime->hasFunction(0x283048u)) {
        auto targetFn = runtime->lookupFunction(0x283048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283168u; }
        if (ctx->pc != 0x283168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283048_0x283048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283168u; }
        if (ctx->pc != 0x283168u) { return; }
    }
    ctx->pc = 0x283168u;
    // 0x283168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283168u;
    {
        const bool branch_taken_0x283168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283168u;
            // 0x28316c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283168) {
            ctx->pc = 0x283178u;
            goto label_283178;
        }
    }
    ctx->pc = 0x283170u;
    // 0x283170: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283170u;
    {
        const bool branch_taken_0x283170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283170u;
            // 0x283174: 0x9042363f  lbu         $v0, 0x363F($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13887)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283170) {
            ctx->pc = 0x2831B4u;
            goto label_2831b4;
        }
    }
    ctx->pc = 0x283178u;
label_283178:
    // 0x283178: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x283178u;
    SET_GPR_U32(ctx, 31, 0x283180u);
    ctx->pc = 0x28317Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283178u;
            // 0x28317c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CD0u;
    if (runtime->hasFunction(0x293CD0u)) {
        auto targetFn = runtime->lookupFunction(0x293CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283180u; }
        if (ctx->pc != 0x283180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cd0_0x293ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283180u; }
        if (ctx->pc != 0x283180u) { return; }
    }
    ctx->pc = 0x283180u;
    // 0x283180: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283184: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x283184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x283188: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x283188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x28318c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28318Cu;
    {
        const bool branch_taken_0x28318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28318Cu;
            // 0x283190: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28318c) {
            ctx->pc = 0x28319Cu;
            goto label_28319c;
        }
    }
    ctx->pc = 0x283194u;
    // 0x283194: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283194u;
    {
        const bool branch_taken_0x283194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283194u;
            // 0x283198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283194) {
            ctx->pc = 0x2831B4u;
            goto label_2831b4;
        }
    }
    ctx->pc = 0x28319Cu;
label_28319c:
    // 0x28319c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2831a0: 0xc0a4fcc  jal         func_293F30
    ctx->pc = 0x2831A0u;
    SET_GPR_U32(ctx, 31, 0x2831A8u);
    ctx->pc = 0x2831A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2831A0u;
            // 0x2831a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F30u;
    if (runtime->hasFunction(0x293F30u)) {
        auto targetFn = runtime->lookupFunction(0x293F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2831A8u; }
        if (ctx->pc != 0x2831A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f30_0x293f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2831A8u; }
        if (ctx->pc != 0x2831A8u) { return; }
    }
    ctx->pc = 0x2831A8u;
    // 0x2831a8: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2831a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2831ac: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2831acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2831b0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2831b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2831b4:
    // 0x2831b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2831b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2831b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2831B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2831BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831B8u;
            // 0x2831bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283178u: goto label_283178;
            case 0x28319Cu: goto label_28319c;
            case 0x2831B4u: goto label_2831b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2831C0u;
}

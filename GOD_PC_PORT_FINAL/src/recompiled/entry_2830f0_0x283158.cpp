#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2830f0
// Address: 0x2830f0 - 0x283158
void entry_2830f0_0x283158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2830f0_0x283158");
#endif

    ctx->pc = 0x2830f0u;

    // 0x2830f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2830f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2830f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2830f8: 0xc0a0c12  jal         func_283048
    ctx->pc = 0x2830F8u;
    SET_GPR_U32(ctx, 31, 0x283100u);
    ctx->pc = 0x283048u;
    if (runtime->hasFunction(0x283048u)) {
        auto targetFn = runtime->lookupFunction(0x283048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283100u; }
        if (ctx->pc != 0x283100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283048_0x283048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283100u; }
        if (ctx->pc != 0x283100u) { return; }
    }
    ctx->pc = 0x283100u;
    // 0x283100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283100u;
    {
        const bool branch_taken_0x283100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283100u;
            // 0x283104: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283100) {
            ctx->pc = 0x283110u;
            goto label_283110;
        }
    }
    ctx->pc = 0x283108u;
    // 0x283108: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283108u;
    {
        const bool branch_taken_0x283108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283108u;
            // 0x28310c: 0x9042363e  lbu         $v0, 0x363E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13886)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283108) {
            ctx->pc = 0x28314Cu;
            goto label_28314c;
        }
    }
    ctx->pc = 0x283110u;
label_283110:
    // 0x283110: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x283110u;
    SET_GPR_U32(ctx, 31, 0x283118u);
    ctx->pc = 0x283114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283110u;
            // 0x283114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293CD0u;
    if (runtime->hasFunction(0x293CD0u)) {
        auto targetFn = runtime->lookupFunction(0x293CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283118u; }
        if (ctx->pc != 0x283118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293cd0_0x293ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283118u; }
        if (ctx->pc != 0x283118u) { return; }
    }
    ctx->pc = 0x283118u;
    // 0x283118: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x283118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28311c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x28311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x283120: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x283120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x283124: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283124u;
    {
        const bool branch_taken_0x283124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283124u;
            // 0x283128: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283124) {
            ctx->pc = 0x283134u;
            goto label_283134;
        }
    }
    ctx->pc = 0x28312Cu;
    // 0x28312c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28312Cu;
    {
        const bool branch_taken_0x28312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28312Cu;
            // 0x283130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28312c) {
            ctx->pc = 0x28314Cu;
            goto label_28314c;
        }
    }
    ctx->pc = 0x283134u;
label_283134:
    // 0x283134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283138: 0xc0a4fcc  jal         func_293F30
    ctx->pc = 0x283138u;
    SET_GPR_U32(ctx, 31, 0x283140u);
    ctx->pc = 0x28313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283138u;
            // 0x28313c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F30u;
    if (runtime->hasFunction(0x293F30u)) {
        auto targetFn = runtime->lookupFunction(0x293F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283140u; }
        if (ctx->pc != 0x283140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f30_0x293f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283140u; }
        if (ctx->pc != 0x283140u) { return; }
    }
    ctx->pc = 0x283140u;
    // 0x283140: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x283140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x283144: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x283144u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x283148: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x283148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_28314c:
    // 0x28314c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283150: 0x3e00008  jr          $ra
    ctx->pc = 0x283150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283150u;
            // 0x283154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283110u: goto label_283110;
            case 0x283134u: goto label_283134;
            case 0x28314Cu: goto label_28314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283158u;
}

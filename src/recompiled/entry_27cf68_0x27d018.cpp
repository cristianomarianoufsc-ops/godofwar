#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27cf68
// Address: 0x27cf68 - 0x27d018
void entry_27cf68_0x27d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27cf68_0x27d018");
#endif

    ctx->pc = 0x27cf68u;

    // 0x27cf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27cf6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27cf70: 0xc09f130  jal         func_27C4C0
    ctx->pc = 0x27CF70u;
    SET_GPR_U32(ctx, 31, 0x27CF78u);
    ctx->pc = 0x27C4C0u;
    if (runtime->hasFunction(0x27C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x27C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF78u; }
        if (ctx->pc != 0x27CF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C4C0_0x27c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF78u; }
        if (ctx->pc != 0x27CF78u) { return; }
    }
    ctx->pc = 0x27CF78u;
    // 0x27cf78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27cf78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf7c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CF7Cu;
    {
        const bool branch_taken_0x27cf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF7Cu;
            // 0x27cf80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf7c) {
            ctx->pc = 0x27CF98u;
            goto label_27cf98;
        }
    }
    ctx->pc = 0x27CF84u;
    // 0x27cf84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27cf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf8c: 0xc09f3a4  jal         func_27CE90
    ctx->pc = 0x27CF8Cu;
    SET_GPR_U32(ctx, 31, 0x27CF94u);
    ctx->pc = 0x27CF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF8Cu;
            // 0x27cf90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CE90u;
    if (runtime->hasFunction(0x27CE90u)) {
        auto targetFn = runtime->lookupFunction(0x27CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF94u; }
        if (ctx->pc != 0x27CF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27ce90_0x27cf38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF94u; }
        if (ctx->pc != 0x27CF94u) { return; }
    }
    ctx->pc = 0x27CF94u;
    // 0x27cf94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27cf98:
    // 0x27cf98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27CF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF9Cu;
            // 0x27cfa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CF98u: goto label_27cf98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27CFA4u;
    // 0x27cfa4: 0x0  nop
    ctx->pc = 0x27cfa4u;
    // NOP
    // 0x27cfa8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfac: 0x0  nop
    ctx->pc = 0x27cfacu;
    // NOP
    // 0x27cfb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfb4: 0x0  nop
    ctx->pc = 0x27cfb4u;
    // NOP
    // 0x27cfb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfbc: 0x0  nop
    ctx->pc = 0x27cfbcu;
    // NOP
    // 0x27cfc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfc4: 0x0  nop
    ctx->pc = 0x27cfc4u;
    // NOP
    // 0x27cfc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfcc: 0x0  nop
    ctx->pc = 0x27cfccu;
    // NOP
    // 0x27cfd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfd4: 0x0  nop
    ctx->pc = 0x27cfd4u;
    // NOP
    // 0x27cfd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfdc: 0x0  nop
    ctx->pc = 0x27cfdcu;
    // NOP
    // 0x27cfe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfe4: 0x0  nop
    ctx->pc = 0x27cfe4u;
    // NOP
    // 0x27cfe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cfec: 0x0  nop
    ctx->pc = 0x27cfecu;
    // NOP
    // 0x27cff0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cff4: 0x0  nop
    ctx->pc = 0x27cff4u;
    // NOP
    // 0x27cff8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27cffc: 0x0  nop
    ctx->pc = 0x27cffcu;
    // NOP
    // 0x27d000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d004: 0x0  nop
    ctx->pc = 0x27d004u;
    // NOP
    // 0x27d008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d00c: 0x0  nop
    ctx->pc = 0x27d00cu;
    // NOP
    // 0x27d010: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d014: 0x0  nop
    ctx->pc = 0x27d014u;
    // NOP
}

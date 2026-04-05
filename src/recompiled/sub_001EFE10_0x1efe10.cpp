#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFE10
// Address: 0x1efe10 - 0x1efe60
void sub_001EFE10_0x1efe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFE10_0x1efe10");
#endif

    ctx->pc = 0x1efe10u;

    // 0x1efe10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efe14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1efe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1efe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efe1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe20: 0x8e020954  lw          $v0, 0x954($s0)
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2388)));
    // 0x1efe24: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFE24u;
    {
        const bool branch_taken_0x1efe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efe24) {
            ctx->pc = 0x1EFE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE24u;
            // 0x1efe28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE54u;
            goto label_1efe54;
        }
    }
    ctx->pc = 0x1EFE2Cu;
    // 0x1efe2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1efe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1efe30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1efe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efe34: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EFE34u;
    SET_GPR_U32(ctx, 31, 0x1EFE3Cu);
    ctx->pc = 0x1EFE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE34u;
            // 0x1efe38: 0x8c44e2c8  lw          $a0, -0x1D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE3Cu; }
        if (ctx->pc != 0x1EFE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE3Cu; }
        if (ctx->pc != 0x1EFE3Cu) { return; }
    }
    ctx->pc = 0x1EFE3Cu;
    // 0x1efe3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efe40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe44: 0xae020954  sw          $v0, 0x954($s0)
    ctx->pc = 0x1efe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2388), GPR_U32(ctx, 2));
    // 0x1efe48: 0xe6000958  swc1        $f0, 0x958($s0)
    ctx->pc = 0x1efe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2392), bits); }
    // 0x1efe4c: 0xae000950  sw          $zero, 0x950($s0)
    ctx->pc = 0x1efe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2384), GPR_U32(ctx, 0));
    // 0x1efe50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1efe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efe54:
    // 0x1efe54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efe58: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE58u;
            // 0x1efe5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFE54u: goto label_1efe54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFE60u;
}

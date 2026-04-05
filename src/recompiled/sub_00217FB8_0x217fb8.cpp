#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217FB8
// Address: 0x217fb8 - 0x218020
void sub_00217FB8_0x217fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217FB8_0x217fb8");
#endif

    ctx->pc = 0x217fb8u;

    // 0x217fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x217fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x217fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217fc4: 0xc0860f2  jal         func_2183C8
    ctx->pc = 0x217FC4u;
    SET_GPR_U32(ctx, 31, 0x217FCCu);
    ctx->pc = 0x217FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217FC4u;
            // 0x217fc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2183C8u;
    if (runtime->hasFunction(0x2183C8u)) {
        auto targetFn = runtime->lookupFunction(0x2183C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FCCu; }
        if (ctx->pc != 0x217FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002183C8_0x2183c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FCCu; }
        if (ctx->pc != 0x217FCCu) { return; }
    }
    ctx->pc = 0x217FCCu;
    // 0x217fcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x217fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217fd0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x217fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x217fd4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x217fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x217fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217fe0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x217fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x217fe4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x217FE4u;
    {
        const bool branch_taken_0x217fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217FE4u;
            // 0x217fe8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fe4) {
            ctx->pc = 0x217FF8u;
            goto label_217ff8;
        }
    }
    ctx->pc = 0x217FECu;
    // 0x217fec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x217FECu;
    {
        const bool branch_taken_0x217fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217FECu;
            // 0x217ff0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fec) {
            ctx->pc = 0x217FFCu;
            goto label_217ffc;
        }
    }
    ctx->pc = 0x217FF4u;
    // 0x217ff4: 0x0  nop
    ctx->pc = 0x217ff4u;
    // NOP
label_217ff8:
    // 0x217ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ffc:
    // 0x217ffc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x217ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218000: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x218000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x218004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218008: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x218008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21800c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21800cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218014: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x218014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x218018: 0x3e00008  jr          $ra
    ctx->pc = 0x218018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218018u;
            // 0x21801c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217FF8u: goto label_217ff8;
            case 0x217FFCu: goto label_217ffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218020u;
}

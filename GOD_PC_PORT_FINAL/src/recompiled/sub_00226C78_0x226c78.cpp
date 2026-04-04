#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226C78
// Address: 0x226c78 - 0x226d30
void sub_00226C78_0x226c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226C78_0x226c78");
#endif

    ctx->pc = 0x226c78u;

    // 0x226c78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x226c7c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x226c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x226c80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x226c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x226c84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c8c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x226c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x226c90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x226c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x226c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c98: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x226c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x226c9c: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226ca0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x226ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ca8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226cac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cb0: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226CB0u;
    SET_GPR_U32(ctx, 31, 0x226CB8u);
    ctx->pc = 0x226CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226CB0u;
            // 0x226cb4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CB8u; }
        if (ctx->pc != 0x226CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226CB8u; }
        if (ctx->pc != 0x226CB8u) { return; }
    }
    ctx->pc = 0x226CB8u;
    // 0x226cb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x226cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x226cbc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x226cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x226cc0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226cc4: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226cc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226ccc: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x226cccu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x226cd0: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x226cd0u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x226cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cd8: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x226cd8u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x226cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ce0: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x226ce0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x226ce4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x226ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226ce8: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x226ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226cec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cf0: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x226cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226cf8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x226cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226cfc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226d00: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x226d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226d04: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x226d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226d08: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x226d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226d0c: 0xc0899c0  jal         func_226700
    ctx->pc = 0x226D0Cu;
    SET_GPR_U32(ctx, 31, 0x226D14u);
    ctx->pc = 0x226D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226D0Cu;
            // 0x226d10: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226700u;
    if (runtime->hasFunction(0x226700u)) {
        auto targetFn = runtime->lookupFunction(0x226700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D14u; }
        if (ctx->pc != 0x226D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226700_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226D14u; }
        if (ctx->pc != 0x226D14u) { return; }
    }
    ctx->pc = 0x226D14u;
    // 0x226d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d18: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x226d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226d1c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x226d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226d20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x226d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226d24: 0x3e00008  jr          $ra
    ctx->pc = 0x226D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226D24u;
            // 0x226d28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226D2Cu;
    // 0x226d2c: 0x0  nop
    ctx->pc = 0x226d2cu;
    // NOP
}

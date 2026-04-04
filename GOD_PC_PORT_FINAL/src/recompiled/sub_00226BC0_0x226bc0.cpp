#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226BC0
// Address: 0x226bc0 - 0x226c78
void sub_00226BC0_0x226bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226BC0_0x226bc0");
#endif

    ctx->pc = 0x226bc0u;

    // 0x226bc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x226bc4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x226bc8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x226bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x226bcc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bd4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x226bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x226bd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x226bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x226bdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226be0: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x226be4: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x226be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x226be8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x226bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bf0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226bf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bf8: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x226BF8u;
    SET_GPR_U32(ctx, 31, 0x226C00u);
    ctx->pc = 0x226BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226BF8u;
            // 0x226bfc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C00u; }
        if (ctx->pc != 0x226C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C00u; }
        if (ctx->pc != 0x226C00u) { return; }
    }
    ctx->pc = 0x226C00u;
    // 0x226c00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x226c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x226c04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x226c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x226c08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x226c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x226c0c: 0x2442a320  addiu       $v0, $v0, -0x5CE0
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x226c10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x226c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x226c14: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x226c14u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x226c18: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x226c18u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x226c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c20: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x226c20u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x226c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c28: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x226c28u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x226c2c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x226c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226c30: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x226c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226c34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x226c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c38: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x226c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c40: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x226c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x226c44: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x226c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226c48: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x226c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x226c4c: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x226c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x226c50: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x226c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x226c54: 0xc089a42  jal         func_226908
    ctx->pc = 0x226C54u;
    SET_GPR_U32(ctx, 31, 0x226C5Cu);
    ctx->pc = 0x226C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226C54u;
            // 0x226c58: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226908u;
    if (runtime->hasFunction(0x226908u)) {
        auto targetFn = runtime->lookupFunction(0x226908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C5Cu; }
        if (ctx->pc != 0x226C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226908_0x226908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226C5Cu; }
        if (ctx->pc != 0x226C5Cu) { return; }
    }
    ctx->pc = 0x226C5Cu;
    // 0x226c5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x226c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226c64: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x226c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226c68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x226c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x226C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226C6Cu;
            // 0x226c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226C74u;
    // 0x226c74: 0x0  nop
    ctx->pc = 0x226c74u;
    // NOP
}

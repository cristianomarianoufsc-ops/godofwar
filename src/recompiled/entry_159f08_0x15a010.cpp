#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_159f08
// Address: 0x159f08 - 0x15a010
void entry_159f08_0x15a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_159f08_0x15a010");
#endif

    ctx->pc = 0x159f08u;

    // 0x159f08: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x159f0c: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x159f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x159f10: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x159f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159f14: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x159f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x159f18: 0x3c01c974  lui         $at, 0xC974
    ctx->pc = 0x159f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51572 << 16));
    // 0x159f1c: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x159f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x159f20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x159f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159f24: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x159f24u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x159f28: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x159f28u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x159f2c: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x159f2cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x159f30: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x159F30u;
    {
        const bool branch_taken_0x159f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F30u;
            // 0x159f34: 0x46000946  mov.s       $f5, $f1 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f30) {
            ctx->pc = 0x159FC4u;
            goto label_159fc4;
        }
    }
    ctx->pc = 0x159F38u;
    // 0x159f38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x159f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x159f3c: 0x0  nop
    ctx->pc = 0x159f3cu;
    // NOP
label_159f40:
    // 0x159f40: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x159f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x159f44: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x159f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x159f48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x159f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f4c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x159f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f50: 0x0  nop
    ctx->pc = 0x159f50u;
    // NOP
    // 0x159f54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159F54u;
    {
        const bool branch_taken_0x159f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159f54) {
            ctx->pc = 0x159F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F54u;
            // 0x159f58: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F5Cu;
            goto label_159f5c;
        }
    }
    ctx->pc = 0x159F5Cu;
label_159f5c:
    // 0x159f5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x159f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f60: 0x0  nop
    ctx->pc = 0x159f60u;
    // NOP
    // 0x159f64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159F64u;
    {
        const bool branch_taken_0x159f64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159f64) {
            ctx->pc = 0x159F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F64u;
            // 0x159f68: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F6Cu;
            goto label_159f6c;
        }
    }
    ctx->pc = 0x159F6Cu;
label_159f6c:
    // 0x159f6c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x159f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f70: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x159f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f74: 0x0  nop
    ctx->pc = 0x159f74u;
    // NOP
    // 0x159f78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159F78u;
    {
        const bool branch_taken_0x159f78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159f78) {
            ctx->pc = 0x159F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F78u;
            // 0x159f7c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F80u;
            goto label_159f80;
        }
    }
    ctx->pc = 0x159F80u;
label_159f80:
    // 0x159f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f84: 0x0  nop
    ctx->pc = 0x159f84u;
    // NOP
    // 0x159f88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159F88u;
    {
        const bool branch_taken_0x159f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159f88) {
            ctx->pc = 0x159F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F88u;
            // 0x159f8c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F90u;
            goto label_159f90;
        }
    }
    ctx->pc = 0x159F90u;
label_159f90:
    // 0x159f90: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x159f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f94: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x159f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159f98: 0x0  nop
    ctx->pc = 0x159f98u;
    // NOP
    // 0x159f9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159F9Cu;
    {
        const bool branch_taken_0x159f9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159f9c) {
            ctx->pc = 0x159FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F9Cu;
            // 0x159fa0: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159FA4u;
            goto label_159fa4;
        }
    }
    ctx->pc = 0x159FA4u;
label_159fa4:
    // 0x159fa4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x159fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159fa8: 0x0  nop
    ctx->pc = 0x159fa8u;
    // NOP
    // 0x159fac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x159FACu;
    {
        const bool branch_taken_0x159fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159fac) {
            ctx->pc = 0x159FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159FACu;
            // 0x159fb0: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159FB4u;
            goto label_159fb4;
        }
    }
    ctx->pc = 0x159FB4u;
label_159fb4:
    // 0x159fb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x159fb8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x159fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x159fbc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x159FBCu;
    {
        const bool branch_taken_0x159fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FBCu;
            // 0x159fc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fbc) {
            ctx->pc = 0x159F40u;
            runtime->cooperativeGuestYield();
            goto label_159f40;
        }
    }
    ctx->pc = 0x159FC4u;
label_159fc4:
    // 0x159fc4: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x159fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x159fc8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x159fc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x159fcc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x159fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159fd0: 0x0  nop
    ctx->pc = 0x159fd0u;
    // NOP
    // 0x159fd4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x159FD4u;
    {
        const bool branch_taken_0x159fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FD4u;
            // 0x159fd8: 0x46062841  sub.s       $f1, $f5, $f6 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fd4) {
            ctx->pc = 0x159FF4u;
            goto label_159ff4;
        }
    }
    ctx->pc = 0x159FDCu;
    // 0x159fdc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x159fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159fe0: 0x0  nop
    ctx->pc = 0x159fe0u;
    // NOP
    // 0x159fe4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x159FE4u;
    {
        const bool branch_taken_0x159fe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FE4u;
            // 0x159fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fe4) {
            ctx->pc = 0x15A008u;
            goto label_15a008;
        }
    }
    ctx->pc = 0x159FECu;
    // 0x159fec: 0x3e00008  jr          $ra
    ctx->pc = 0x159FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FECu;
            // 0x159ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159F40u: goto label_159f40;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F80u: goto label_159f80;
            case 0x159F90u: goto label_159f90;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FF4u: goto label_159ff4;
            case 0x15A008u: goto label_15a008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159FF4u;
label_159ff4:
    // 0x159ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159ff8: 0x0  nop
    ctx->pc = 0x159ff8u;
    // NOP
    // 0x159ffc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x159FFCu;
    {
        const bool branch_taken_0x159ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FFCu;
            // 0x15a000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ffc) {
            ctx->pc = 0x15A008u;
            goto label_15a008;
        }
    }
    ctx->pc = 0x15A004u;
    // 0x15a004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a008:
    // 0x15a008: 0x3e00008  jr          $ra
    ctx->pc = 0x15A008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159F40u: goto label_159f40;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F80u: goto label_159f80;
            case 0x159F90u: goto label_159f90;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FF4u: goto label_159ff4;
            case 0x15A008u: goto label_15a008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A010u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9B18
// Address: 0x1a9b18 - 0x1a9b88
void sub_001A9B18_0x1a9b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9B18_0x1a9b18");
#endif

    ctx->pc = 0x1a9b18u;

    // 0x1a9b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9b1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9b20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9b28: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a9b2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9B2Cu;
    {
        const bool branch_taken_0x1a9b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B2Cu;
            // 0x1a9b30: 0x24900074  addiu       $s0, $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b2c) {
            ctx->pc = 0x1A9B54u;
            goto label_1a9b54;
        }
    }
    ctx->pc = 0x1A9B34u;
    // 0x1a9b34: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9b38: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9b3c: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b44: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9b48: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9B48u;
    SET_GPR_U32(ctx, 31, 0x1A9B50u);
    ctx->pc = 0x1A9B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B48u;
            // 0x1a9b4c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B50u; }
        if (ctx->pc != 0x1A9B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B50u; }
        if (ctx->pc != 0x1A9B50u) { return; }
    }
    ctx->pc = 0x1A9B50u;
    // 0x1a9b50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9b54:
    // 0x1a9b54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a9b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9b5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a9b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9b60: 0x0  nop
    ctx->pc = 0x1a9b60u;
    // NOP
    // 0x1a9b64: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9B64u;
    {
        const bool branch_taken_0x1a9b64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B64u;
            // 0x1a9b68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b64) {
            ctx->pc = 0x1A9B74u;
            goto label_1a9b74;
        }
    }
    ctx->pc = 0x1A9B6Cu;
    // 0x1a9b6c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1a9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1a9b70: 0xc4404280  lwc1        $f0, 0x4280($v0)
    ctx->pc = 0x1a9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9b74:
    // 0x1a9b74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B7Cu;
            // 0x1a9b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9B54u: goto label_1a9b54;
            case 0x1A9B74u: goto label_1a9b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9B84u;
    // 0x1a9b84: 0x0  nop
    ctx->pc = 0x1a9b84u;
    // NOP
}

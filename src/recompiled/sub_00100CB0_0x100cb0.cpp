#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100CB0
// Address: 0x100cb0 - 0x100db8
void sub_00100CB0_0x100cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100CB0_0x100cb0");
#endif

    ctx->pc = 0x100cb0u;

    // 0x100cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x100cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x100cb4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x100cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x100cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100cbc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x100cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100cc0: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x100cc0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x100cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x100cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cc8: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x100cc8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x100ccc: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x100cccu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x100cd0: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x100cd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x100cd4: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x100cd4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x100cd8: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x100cd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x100cdc: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x100cdcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x100ce0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x100ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x100ce4: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x100ce4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x100ce8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x100ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x100cec: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x100cecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x100cf0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x100cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x100cf4: 0x46008d46  mov.s       $f21, $f17
    ctx->pc = 0x100cf4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[17]);
    // 0x100cf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x100cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x100cfc: 0x46009506  mov.s       $f20, $f18
    ctx->pc = 0x100cfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[18]);
    // 0x100d00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100d04: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100d08: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100d0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100d10: 0x10440019  beq         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x100D10u;
    {
        const bool branch_taken_0x100d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D10u;
            // 0x100d14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d10) {
            ctx->pc = 0x100D78u;
            goto label_100d78;
        }
    }
    ctx->pc = 0x100D18u;
label_100d18:
    // 0x100d18: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100d1c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x100d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x100d20: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x100d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x100d24: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x100d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x100d28: 0x40f809  jalr        $v0
    ctx->pc = 0x100D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100D30u);
        ctx->pc = 0x100D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D28u;
            // 0x100d2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100D30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100D18u: goto label_100d18;
            case 0x100D64u: goto label_100d64;
            case 0x100D78u: goto label_100d78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100D30u; }
            if (ctx->pc != 0x100D30u) { return; }
        }
        }
    }
    ctx->pc = 0x100D30u;
    // 0x100d30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100D30u;
    {
        const bool branch_taken_0x100d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D30u;
            // 0x100d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d30) {
            ctx->pc = 0x100D64u;
            goto label_100d64;
        }
    }
    ctx->pc = 0x100D38u;
    // 0x100d38: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x100d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x100d3c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x100d3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x100d40: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x100d40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x100d44: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x100d44u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x100d48: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x100d48u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x100d4c: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x100d4cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x100d50: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x100d50u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x100d54: 0xc0421d8  jal         func_108760
    ctx->pc = 0x100D54u;
    SET_GPR_U32(ctx, 31, 0x100D5Cu);
    ctx->pc = 0x100D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100D54u;
            // 0x100d58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108760u;
    if (runtime->hasFunction(0x108760u)) {
        auto targetFn = runtime->lookupFunction(0x108760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D5Cu; }
        if (ctx->pc != 0x100D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108760_0x108760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D5Cu; }
        if (ctx->pc != 0x100D5Cu) { return; }
    }
    ctx->pc = 0x100D5Cu;
    // 0x100d5c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x100d5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x100d60: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x100d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_100d64:
    // 0x100d64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100d68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100d70: 0x1443ffe9  bne         $v0, $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x100D70u;
    {
        const bool branch_taken_0x100d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D70u;
            // 0x100d74: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d70) {
            ctx->pc = 0x100D18u;
            runtime->cooperativeGuestYield();
            goto label_100d18;
        }
    }
    ctx->pc = 0x100D78u;
label_100d78:
    // 0x100d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x100d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x100d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100d80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x100d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100d8c: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x100d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x100d90: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x100d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x100d94: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x100d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x100d98: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x100d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x100d9c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x100d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x100da0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x100da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x100da4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x100da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100da8: 0x3e00008  jr          $ra
    ctx->pc = 0x100DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100DA8u;
            // 0x100dac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100D18u: goto label_100d18;
            case 0x100D64u: goto label_100d64;
            case 0x100D78u: goto label_100d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100DB0u;
    // 0x100db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x100db4: 0x0  nop
    ctx->pc = 0x100db4u;
    // NOP
}

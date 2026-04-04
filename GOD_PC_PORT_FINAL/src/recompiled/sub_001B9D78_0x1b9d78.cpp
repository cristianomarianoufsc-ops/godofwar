#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9D78
// Address: 0x1b9d78 - 0x1b9f08
void sub_001B9D78_0x1b9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D78_0x1b9d78");
#endif

    ctx->pc = 0x1b9d78u;

    // 0x1b9d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9d84: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9D84u;
    {
        const bool branch_taken_0x1b9d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D84u;
            // 0x1b9d88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d84) {
            ctx->pc = 0x1B9DA0u;
            goto label_1b9da0;
        }
    }
    ctx->pc = 0x1B9D8Cu;
    // 0x1b9d8c: 0xae0014c4  sw          $zero, 0x14C4($s0)
    ctx->pc = 0x1b9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5316), GPR_U32(ctx, 0));
    // 0x1b9d90: 0xae0014f4  sw          $zero, 0x14F4($s0)
    ctx->pc = 0x1b9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5364), GPR_U32(ctx, 0));
    // 0x1b9d94: 0xae0014c8  sw          $zero, 0x14C8($s0)
    ctx->pc = 0x1b9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5320), GPR_U32(ctx, 0));
    // 0x1b9d98: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B9D98u;
    {
        const bool branch_taken_0x1b9d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D98u;
            // 0x1b9d9c: 0xae0014f0  sw          $zero, 0x14F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d98) {
            ctx->pc = 0x1B9E18u;
            goto label_1b9e18;
        }
    }
    ctx->pc = 0x1B9DA0u;
label_1b9da0:
    // 0x1b9da0: 0x8e0214f0  lw          $v0, 0x14F0($s0)
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5360)));
    // 0x1b9da4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B9DA4u;
    {
        const bool branch_taken_0x1b9da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9da4) {
            ctx->pc = 0x1B9DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DA4u;
            // 0x1b9da8: 0x8e0514c0  lw          $a1, 0x14C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E1Cu;
            goto label_1b9e1c;
        }
    }
    ctx->pc = 0x1B9DACu;
    // 0x1b9dac: 0x8e0514c4  lw          $a1, 0x14C4($s0)
    ctx->pc = 0x1b9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5316)));
    // 0x1b9db0: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1B9DB0u;
    {
        const bool branch_taken_0x1b9db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DB0u;
            // 0x1b9db4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9db0) {
            ctx->pc = 0x1B9EF4u;
            goto label_1b9ef4;
        }
    }
    ctx->pc = 0x1B9DB8u;
    // 0x1b9db8: 0xc60214f4  lwc1        $f2, 0x14F4($s0)
    ctx->pc = 0x1b9db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9dbc: 0xc441c64c  lwc1        $f1, -0x39B4($v0)
    ctx->pc = 0x1b9dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9dc0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x1b9dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1b9dc4: 0x8e0414cc  lw          $a0, 0x14CC($s0)
    ctx->pc = 0x1b9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5324)));
    // 0x1b9dc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9dcc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b9dccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1b9dd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b9dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b9dd4: 0x8e0314c8  lw          $v1, 0x14C8($s0)
    ctx->pc = 0x1b9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5320)));
    // 0x1b9dd8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1b9dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9ddc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b9de0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b9de0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b9de4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9de8: 0xe60214f4  swc1        $f2, 0x14F4($s0)
    ctx->pc = 0x1b9de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5364), bits); }
    // 0x1b9dec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9df0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b9df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9df4: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9df8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1b9df8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b9dfc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1b9dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9e00: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1b9e00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1b9e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b9e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e08: 0x50a2003b  beql        $a1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B9E08u;
    {
        const bool branch_taken_0x1b9e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9e08) {
            ctx->pc = 0x1B9E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E08u;
            // 0x1b9e0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9EF8u;
            goto label_1b9ef8;
        }
    }
    ctx->pc = 0x1B9E10u;
    // 0x1b9e10: 0xae0214c0  sw          $v0, 0x14C0($s0)
    ctx->pc = 0x1b9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5312), GPR_U32(ctx, 2));
    // 0x1b9e14: 0x0  nop
    ctx->pc = 0x1b9e14u;
    // NOP
label_1b9e18:
    // 0x1b9e18: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
label_1b9e1c:
    // 0x1b9e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e20: 0x2606015c  addiu       $a2, $s0, 0x15C
    ctx->pc = 0x1b9e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x1b9e24: 0x2607017c  addiu       $a3, $s0, 0x17C
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x1b9e28: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1b9e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1b9e2c: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E34u);
    ctx->pc = 0x1B9E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E2Cu;
            // 0x1b9e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E34u; }
        if (ctx->pc != 0x1B9E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E34u; }
        if (ctx->pc != 0x1B9E34u) { return; }
    }
    ctx->pc = 0x1B9E34u;
    // 0x1b9e34: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e3c: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x1b9e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1b9e40: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x1b9e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1b9e44: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1b9e48: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9E48u;
    SET_GPR_U32(ctx, 31, 0x1B9E50u);
    ctx->pc = 0x1B9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E48u;
            // 0x1b9e4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E50u; }
        if (ctx->pc != 0x1B9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E50u; }
        if (ctx->pc != 0x1B9E50u) { return; }
    }
    ctx->pc = 0x1B9E50u;
    // 0x1b9e50: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e58: 0x26060164  addiu       $a2, $s0, 0x164
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x1b9e5c: 0x26070184  addiu       $a3, $s0, 0x184
    ctx->pc = 0x1b9e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x1b9e60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b9e64: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9E64u;
    SET_GPR_U32(ctx, 31, 0x1B9E6Cu);
    ctx->pc = 0x1B9E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E64u;
            // 0x1b9e68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E6Cu; }
        if (ctx->pc != 0x1B9E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E6Cu; }
        if (ctx->pc != 0x1B9E6Cu) { return; }
    }
    ctx->pc = 0x1B9E6Cu;
    // 0x1b9e6c: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e74: 0x26060168  addiu       $a2, $s0, 0x168
    ctx->pc = 0x1b9e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x1b9e78: 0x26070188  addiu       $a3, $s0, 0x188
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x1b9e7c: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E84u);
    ctx->pc = 0x1B9E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E7Cu;
            // 0x1b9e80: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E84u; }
        if (ctx->pc != 0x1B9E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E84u; }
        if (ctx->pc != 0x1B9E84u) { return; }
    }
    ctx->pc = 0x1B9E84u;
    // 0x1b9e84: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e8c: 0x2606016c  addiu       $a2, $s0, 0x16C
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x1b9e90: 0x2607018c  addiu       $a3, $s0, 0x18C
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    // 0x1b9e94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9e98: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9E98u;
    SET_GPR_U32(ctx, 31, 0x1B9EA0u);
    ctx->pc = 0x1B9E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E98u;
            // 0x1b9e9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EA0u; }
        if (ctx->pc != 0x1B9EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EA0u; }
        if (ctx->pc != 0x1B9EA0u) { return; }
    }
    ctx->pc = 0x1B9EA0u;
    // 0x1b9ea0: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ea8: 0x26060170  addiu       $a2, $s0, 0x170
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1b9eac: 0x26070190  addiu       $a3, $s0, 0x190
    ctx->pc = 0x1b9eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1b9eb0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1b9eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b9eb4: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9EB4u;
    SET_GPR_U32(ctx, 31, 0x1B9EBCu);
    ctx->pc = 0x1B9EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EB4u;
            // 0x1b9eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EBCu; }
        if (ctx->pc != 0x1B9EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EBCu; }
        if (ctx->pc != 0x1B9EBCu) { return; }
    }
    ctx->pc = 0x1B9EBCu;
    // 0x1b9ebc: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ec4: 0x26060174  addiu       $a2, $s0, 0x174
    ctx->pc = 0x1b9ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x1b9ec8: 0x26070194  addiu       $a3, $s0, 0x194
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
    // 0x1b9ecc: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1b9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1b9ed0: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9ED0u;
    SET_GPR_U32(ctx, 31, 0x1B9ED8u);
    ctx->pc = 0x1B9ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ED0u;
            // 0x1b9ed4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ED8u; }
        if (ctx->pc != 0x1B9ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ED8u; }
        if (ctx->pc != 0x1B9ED8u) { return; }
    }
    ctx->pc = 0x1B9ED8u;
    // 0x1b9ed8: 0x8e0514c0  lw          $a1, 0x14C0($s0)
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5312)));
    // 0x1b9edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ee0: 0x24860178  addiu       $a2, $a0, 0x178
    ctx->pc = 0x1b9ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
    // 0x1b9ee4: 0x24870198  addiu       $a3, $a0, 0x198
    ctx->pc = 0x1b9ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 408));
    // 0x1b9ee8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b9eec: 0xc06e7c2  jal         func_1B9F08
    ctx->pc = 0x1B9EECu;
    SET_GPR_U32(ctx, 31, 0x1B9EF4u);
    ctx->pc = 0x1B9EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EECu;
            // 0x1b9ef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F08u;
    if (runtime->hasFunction(0x1B9F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF4u; }
        if (ctx->pc != 0x1B9EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9F08_0x1b9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF4u; }
        if (ctx->pc != 0x1B9EF4u) { return; }
    }
    ctx->pc = 0x1B9EF4u;
label_1b9ef4:
    // 0x1b9ef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9ef8:
    // 0x1b9ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EFCu;
            // 0x1b9f00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9F04u;
    // 0x1b9f04: 0x0  nop
    ctx->pc = 0x1b9f04u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7EF0
// Address: 0x1a7ef0 - 0x1a81f8
void sub_001A7EF0_0x1a7ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7EF0_0x1a7ef0");
#endif

    ctx->pc = 0x1a7ef0u;

    // 0x1a7ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7ef4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a7ef8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a7efc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a7f00: 0x8e032600  lw          $v1, 0x2600($s0)
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9728)));
    // 0x1a7f04: 0x26022600  addiu       $v0, $s0, 0x2600
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9728));
    // 0x1a7f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7f0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7f10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a7f14: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7F14u;
    {
        const bool branch_taken_0x1a7f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F14u;
            // 0x1a7f18: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f14) {
            ctx->pc = 0x1A7F44u;
            goto label_1a7f44;
        }
    }
    ctx->pc = 0x1A7F1Cu;
    // 0x1a7f1c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a7f20:
    // 0x1a7f20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7f24: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1a7f28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7f2c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F34u);
    ctx->pc = 0x1A7F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F2Cu;
            // 0x1a7f30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F34u; }
        if (ctx->pc != 0x1A7F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F34u; }
        if (ctx->pc != 0x1A7F34u) { return; }
    }
    ctx->pc = 0x1A7F34u;
    // 0x1a7f34: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7f38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f3c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A7F3Cu;
    {
        const bool branch_taken_0x1a7f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F3Cu;
            // 0x1a7f40: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f3c) {
            ctx->pc = 0x1A7F20u;
            runtime->cooperativeGuestYield();
            goto label_1a7f20;
        }
    }
    ctx->pc = 0x1A7F44u;
label_1a7f44:
    // 0x1a7f44: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a7f44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1a7f48: 0x26022600  addiu       $v0, $s0, 0x2600
    ctx->pc = 0x1a7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9728));
    // 0x1a7f4c: 0x8e242608  lw          $a0, 0x2608($s1)
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9736)));
    // 0x1a7f50: 0x26232608  addiu       $v1, $s1, 0x2608
    ctx->pc = 0x1a7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9736));
    // 0x1a7f54: 0xae022600  sw          $v0, 0x2600($s0)
    ctx->pc = 0x1a7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9728), GPR_U32(ctx, 2));
    // 0x1a7f58: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a7f5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a7f60: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7F60u;
    {
        const bool branch_taken_0x1a7f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A7F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F60u;
            // 0x1a7f64: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f60) {
            ctx->pc = 0x1A7F94u;
            goto label_1a7f94;
        }
    }
    ctx->pc = 0x1A7F68u;
    // 0x1a7f68: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7f6c: 0x0  nop
    ctx->pc = 0x1a7f6cu;
    // NOP
label_1a7f70:
    // 0x1a7f70: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7f74: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1a7f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7f7c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F84u);
    ctx->pc = 0x1A7F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F7Cu;
            // 0x1a7f80: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F84u; }
        if (ctx->pc != 0x1A7F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F84u; }
        if (ctx->pc != 0x1A7F84u) { return; }
    }
    ctx->pc = 0x1A7F84u;
    // 0x1a7f84: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7f88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f8c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A7F8Cu;
    {
        const bool branch_taken_0x1a7f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F8Cu;
            // 0x1a7f90: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f8c) {
            ctx->pc = 0x1A7F70u;
            runtime->cooperativeGuestYield();
            goto label_1a7f70;
        }
    }
    ctx->pc = 0x1A7F94u;
label_1a7f94:
    // 0x1a7f94: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a7f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a7f98: 0x26222608  addiu       $v0, $s1, 0x2608
    ctx->pc = 0x1a7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9736));
    // 0x1a7f9c: 0x8e042610  lw          $a0, 0x2610($s0)
    ctx->pc = 0x1a7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9744)));
    // 0x1a7fa0: 0x26032610  addiu       $v1, $s0, 0x2610
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9744));
    // 0x1a7fa4: 0xae222608  sw          $v0, 0x2608($s1)
    ctx->pc = 0x1a7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9736), GPR_U32(ctx, 2));
    // 0x1a7fa8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a7fac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a7facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a7fb0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7FB0u;
    {
        const bool branch_taken_0x1a7fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FB0u;
            // 0x1a7fb4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fb0) {
            ctx->pc = 0x1A7FE4u;
            goto label_1a7fe4;
        }
    }
    ctx->pc = 0x1A7FB8u;
    // 0x1a7fb8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7fbc: 0x0  nop
    ctx->pc = 0x1a7fbcu;
    // NOP
label_1a7fc0:
    // 0x1a7fc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7fc4: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1a7fc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7fcc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7FCCu;
    SET_GPR_U32(ctx, 31, 0x1A7FD4u);
    ctx->pc = 0x1A7FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FCCu;
            // 0x1a7fd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FD4u; }
        if (ctx->pc != 0x1A7FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FD4u; }
        if (ctx->pc != 0x1A7FD4u) { return; }
    }
    ctx->pc = 0x1A7FD4u;
    // 0x1a7fd4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7fd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7fdc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A7FDCu;
    {
        const bool branch_taken_0x1a7fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FDCu;
            // 0x1a7fe0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fdc) {
            ctx->pc = 0x1A7FC0u;
            runtime->cooperativeGuestYield();
            goto label_1a7fc0;
        }
    }
    ctx->pc = 0x1A7FE4u;
label_1a7fe4:
    // 0x1a7fe4: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1a7fe8: 0x26022610  addiu       $v0, $s0, 0x2610
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9744));
    // 0x1a7fec: 0x8e242618  lw          $a0, 0x2618($s1)
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9752)));
    // 0x1a7ff0: 0x26232618  addiu       $v1, $s1, 0x2618
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9752));
    // 0x1a7ff4: 0xae022610  sw          $v0, 0x2610($s0)
    ctx->pc = 0x1a7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9744), GPR_U32(ctx, 2));
    // 0x1a7ff8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a7ffc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a8000: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A8000u;
    {
        const bool branch_taken_0x1a8000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8000u;
            // 0x1a8004: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8000) {
            ctx->pc = 0x1A8034u;
            goto label_1a8034;
        }
    }
    ctx->pc = 0x1A8008u;
    // 0x1a8008: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a800c: 0x0  nop
    ctx->pc = 0x1a800cu;
    // NOP
label_1a8010:
    // 0x1a8010: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8014: 0x8c44ca0c  lw          $a0, -0x35F4($v0)
    ctx->pc = 0x1a8014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953484)));
    // 0x1a8018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a801c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A801Cu;
    SET_GPR_U32(ctx, 31, 0x1A8024u);
    ctx->pc = 0x1A8020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A801Cu;
            // 0x1a8020: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8024u; }
        if (ctx->pc != 0x1A8024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8024u; }
        if (ctx->pc != 0x1A8024u) { return; }
    }
    ctx->pc = 0x1A8024u;
    // 0x1a8024: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a802c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A802Cu;
    {
        const bool branch_taken_0x1a802c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A802Cu;
            // 0x1a8030: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a802c) {
            ctx->pc = 0x1A8010u;
            runtime->cooperativeGuestYield();
            goto label_1a8010;
        }
    }
    ctx->pc = 0x1A8034u;
label_1a8034:
    // 0x1a8034: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a8034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a8038: 0x26222618  addiu       $v0, $s1, 0x2618
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9752));
    // 0x1a803c: 0x8e042620  lw          $a0, 0x2620($s0)
    ctx->pc = 0x1a803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9760)));
    // 0x1a8040: 0x26032620  addiu       $v1, $s0, 0x2620
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9760));
    // 0x1a8044: 0xae222618  sw          $v0, 0x2618($s1)
    ctx->pc = 0x1a8044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9752), GPR_U32(ctx, 2));
    // 0x1a8048: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a8048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a804c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a8050: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A8050u;
    {
        const bool branch_taken_0x1a8050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8050u;
            // 0x1a8054: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8050) {
            ctx->pc = 0x1A8084u;
            goto label_1a8084;
        }
    }
    ctx->pc = 0x1A8058u;
    // 0x1a8058: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a805c: 0x0  nop
    ctx->pc = 0x1a805cu;
    // NOP
label_1a8060:
    // 0x1a8060: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8064: 0x8c44ca10  lw          $a0, -0x35F0($v0)
    ctx->pc = 0x1a8064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953488)));
    // 0x1a8068: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a806c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A806Cu;
    SET_GPR_U32(ctx, 31, 0x1A8074u);
    ctx->pc = 0x1A8070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A806Cu;
            // 0x1a8070: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8074u; }
        if (ctx->pc != 0x1A8074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8074u; }
        if (ctx->pc != 0x1A8074u) { return; }
    }
    ctx->pc = 0x1A8074u;
    // 0x1a8074: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a8074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8078: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a807c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A807Cu;
    {
        const bool branch_taken_0x1a807c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A807Cu;
            // 0x1a8080: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a807c) {
            ctx->pc = 0x1A8060u;
            runtime->cooperativeGuestYield();
            goto label_1a8060;
        }
    }
    ctx->pc = 0x1A8084u;
label_1a8084:
    // 0x1a8084: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1a8088: 0x26022620  addiu       $v0, $s0, 0x2620
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9760));
    // 0x1a808c: 0x8e242628  lw          $a0, 0x2628($s1)
    ctx->pc = 0x1a808cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9768)));
    // 0x1a8090: 0x26232628  addiu       $v1, $s1, 0x2628
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9768));
    // 0x1a8094: 0xae022620  sw          $v0, 0x2620($s0)
    ctx->pc = 0x1a8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9760), GPR_U32(ctx, 2));
    // 0x1a8098: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a8098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a809c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a80a0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A80A0u;
    {
        const bool branch_taken_0x1a80a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80A0u;
            // 0x1a80a4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80a0) {
            ctx->pc = 0x1A80D4u;
            goto label_1a80d4;
        }
    }
    ctx->pc = 0x1A80A8u;
    // 0x1a80a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a80ac: 0x0  nop
    ctx->pc = 0x1a80acu;
    // NOP
label_1a80b0:
    // 0x1a80b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a80b4: 0x8c44ca1c  lw          $a0, -0x35E4($v0)
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
    // 0x1a80b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a80bc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A80BCu;
    SET_GPR_U32(ctx, 31, 0x1A80C4u);
    ctx->pc = 0x1A80C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80BCu;
            // 0x1a80c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80C4u; }
        if (ctx->pc != 0x1A80C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80C4u; }
        if (ctx->pc != 0x1A80C4u) { return; }
    }
    ctx->pc = 0x1A80C4u;
    // 0x1a80c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a80c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a80cc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A80CCu;
    {
        const bool branch_taken_0x1a80cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A80D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80CCu;
            // 0x1a80d0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80cc) {
            ctx->pc = 0x1A80B0u;
            runtime->cooperativeGuestYield();
            goto label_1a80b0;
        }
    }
    ctx->pc = 0x1A80D4u;
label_1a80d4:
    // 0x1a80d4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a80d8: 0x26222628  addiu       $v0, $s1, 0x2628
    ctx->pc = 0x1a80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9768));
    // 0x1a80dc: 0x8e042630  lw          $a0, 0x2630($s0)
    ctx->pc = 0x1a80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9776)));
    // 0x1a80e0: 0x26032630  addiu       $v1, $s0, 0x2630
    ctx->pc = 0x1a80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9776));
    // 0x1a80e4: 0xae222628  sw          $v0, 0x2628($s1)
    ctx->pc = 0x1a80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9768), GPR_U32(ctx, 2));
    // 0x1a80e8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a80ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a80f0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80F0u;
            // 0x1a80f4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A8124u;
            goto label_1a8124;
        }
    }
    ctx->pc = 0x1A80F8u;
    // 0x1a80f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a80fc: 0x0  nop
    ctx->pc = 0x1a80fcu;
    // NOP
label_1a8100:
    // 0x1a8100: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8104: 0x8c44ca18  lw          $a0, -0x35E8($v0)
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953496)));
    // 0x1a8108: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a810c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A810Cu;
    SET_GPR_U32(ctx, 31, 0x1A8114u);
    ctx->pc = 0x1A8110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A810Cu;
            // 0x1a8110: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8114u; }
        if (ctx->pc != 0x1A8114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8114u; }
        if (ctx->pc != 0x1A8114u) { return; }
    }
    ctx->pc = 0x1A8114u;
    // 0x1a8114: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8118: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a811c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A811Cu;
    {
        const bool branch_taken_0x1a811c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A811Cu;
            // 0x1a8120: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a811c) {
            ctx->pc = 0x1A8100u;
            runtime->cooperativeGuestYield();
            goto label_1a8100;
        }
    }
    ctx->pc = 0x1A8124u;
label_1a8124:
    // 0x1a8124: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x1a8128: 0x26022630  addiu       $v0, $s0, 0x2630
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9776));
    // 0x1a812c: 0x8e442638  lw          $a0, 0x2638($s2)
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9784)));
    // 0x1a8130: 0x26432638  addiu       $v1, $s2, 0x2638
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9784));
    // 0x1a8134: 0xae022630  sw          $v0, 0x2630($s0)
    ctx->pc = 0x1a8134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9776), GPR_U32(ctx, 2));
    // 0x1a8138: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a8138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a813c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a8140: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A8140u;
    {
        const bool branch_taken_0x1a8140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8140u;
            // 0x1a8144: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8140) {
            ctx->pc = 0x1A8174u;
            goto label_1a8174;
        }
    }
    ctx->pc = 0x1A8148u;
    // 0x1a8148: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a8148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a814c: 0x0  nop
    ctx->pc = 0x1a814cu;
    // NOP
label_1a8150:
    // 0x1a8150: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8154: 0x8c44ca14  lw          $a0, -0x35EC($v0)
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953492)));
    // 0x1a8158: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a815c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A815Cu;
    SET_GPR_U32(ctx, 31, 0x1A8164u);
    ctx->pc = 0x1A8160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A815Cu;
            // 0x1a8160: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8164u; }
        if (ctx->pc != 0x1A8164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8164u; }
        if (ctx->pc != 0x1A8164u) { return; }
    }
    ctx->pc = 0x1A8164u;
    // 0x1a8164: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a8164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a816c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A816Cu;
    {
        const bool branch_taken_0x1a816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A816Cu;
            // 0x1a8170: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a816c) {
            ctx->pc = 0x1A8150u;
            runtime->cooperativeGuestYield();
            goto label_1a8150;
        }
    }
    ctx->pc = 0x1A8174u;
label_1a8174:
    // 0x1a8174: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1a8178: 0x26422638  addiu       $v0, $s2, 0x2638
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9784));
    // 0x1a817c: 0x8e242640  lw          $a0, 0x2640($s1)
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9792)));
    // 0x1a8180: 0x26232640  addiu       $v1, $s1, 0x2640
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9792));
    // 0x1a8184: 0xae422638  sw          $v0, 0x2638($s2)
    ctx->pc = 0x1a8184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 9784), GPR_U32(ctx, 2));
    // 0x1a8188: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a8188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a818c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a8190: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A8190u;
    {
        const bool branch_taken_0x1a8190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8190u;
            // 0x1a8194: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8190) {
            ctx->pc = 0x1A81D0u;
            goto label_1a81d0;
        }
    }
    ctx->pc = 0x1A8198u;
    // 0x1a8198: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a819c: 0x0  nop
    ctx->pc = 0x1a819cu;
    // NOP
label_1a81a0:
    // 0x1a81a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a81a4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a81a8: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1A81A8u;
    SET_GPR_U32(ctx, 31, 0x1A81B0u);
    ctx->pc = 0x1A81ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81A8u;
            // 0x1a81ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81B0u; }
        if (ctx->pc != 0x1A81B0u) { return; }
    }
    ctx->pc = 0x1A81B0u;
    // 0x1a81b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a81b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81b8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A81B8u;
    SET_GPR_U32(ctx, 31, 0x1A81C0u);
    ctx->pc = 0x1A81BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81B8u;
            // 0x1a81bc: 0x8c44ca1c  lw          $a0, -0x35E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C0u; }
        if (ctx->pc != 0x1A81C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81C0u; }
        if (ctx->pc != 0x1A81C0u) { return; }
    }
    ctx->pc = 0x1A81C0u;
    // 0x1a81c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a81c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a81c8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A81C8u;
    {
        const bool branch_taken_0x1a81c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A81CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81C8u;
            // 0x1a81cc: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81c8) {
            ctx->pc = 0x1A81A0u;
            runtime->cooperativeGuestYield();
            goto label_1a81a0;
        }
    }
    ctx->pc = 0x1A81D0u;
label_1a81d0:
    // 0x1a81d0: 0x26222640  addiu       $v0, $s1, 0x2640
    ctx->pc = 0x1a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9792));
    // 0x1a81d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a81d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a81d8: 0xae222640  sw          $v0, 0x2640($s1)
    ctx->pc = 0x1a81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9792), GPR_U32(ctx, 2));
    // 0x1a81dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a81dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a81e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a81e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a81e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a81e8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a81ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A81ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A81F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81ECu;
            // 0x1a81f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7F20u: goto label_1a7f20;
            case 0x1A7F44u: goto label_1a7f44;
            case 0x1A7F70u: goto label_1a7f70;
            case 0x1A7F94u: goto label_1a7f94;
            case 0x1A7FC0u: goto label_1a7fc0;
            case 0x1A7FE4u: goto label_1a7fe4;
            case 0x1A8010u: goto label_1a8010;
            case 0x1A8034u: goto label_1a8034;
            case 0x1A8060u: goto label_1a8060;
            case 0x1A8084u: goto label_1a8084;
            case 0x1A80B0u: goto label_1a80b0;
            case 0x1A80D4u: goto label_1a80d4;
            case 0x1A8100u: goto label_1a8100;
            case 0x1A8124u: goto label_1a8124;
            case 0x1A8150u: goto label_1a8150;
            case 0x1A8174u: goto label_1a8174;
            case 0x1A81A0u: goto label_1a81a0;
            case 0x1A81D0u: goto label_1a81d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A81F4u;
    // 0x1a81f4: 0x0  nop
    ctx->pc = 0x1a81f4u;
    // NOP
}

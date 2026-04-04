#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8EF8
// Address: 0x1d8ef8 - 0x1d90f0
void sub_001D8EF8_0x1d8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8EF8_0x1d8ef8");
#endif

    ctx->pc = 0x1d8ef8u;

label_1d8ef8:
    // 0x1d8ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d8efc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1d8f00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d8f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d8f04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d8f08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D8F08u;
    {
        const bool branch_taken_0x1d8f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F08u;
            // 0x1d8f0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f08) {
            ctx->pc = 0x1D8F44u;
            goto label_1d8f44;
        }
    }
    ctx->pc = 0x1D8F10u;
    // 0x1d8f10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d8f14: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1d8f18: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d8f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8f1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8f20: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d8f24: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d8f28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8f2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8f30: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8F30u;
    {
        const bool branch_taken_0x1d8f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D8F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F30u;
            // 0x1d8f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f30) {
            ctx->pc = 0x1D8F3Cu;
            goto label_1d8f3c;
        }
    }
    ctx->pc = 0x1D8F38u;
    // 0x1d8f38: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d8f3c:
    // 0x1d8f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8F3Cu;
    {
        const bool branch_taken_0x1d8f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F3Cu;
            // 0x1d8f40: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f3c) {
            ctx->pc = 0x1D8F48u;
            goto label_1d8f48;
        }
    }
    ctx->pc = 0x1D8F44u;
label_1d8f44:
    // 0x1d8f44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d8f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f48:
    // 0x1d8f48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8F48u;
    {
        const bool branch_taken_0x1d8f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F48u;
            // 0x1d8f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f48) {
            ctx->pc = 0x1D8F70u;
            goto label_1d8f70;
        }
    }
    ctx->pc = 0x1D8F50u;
    // 0x1d8f50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8f54: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1d8f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1d8f58: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x1d8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1d8f5c: 0x40f809  jalr        $v0
    ctx->pc = 0x1D8F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8F64u);
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F5Cu;
            // 0x1d8f60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8F64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8EF8u: goto label_1d8ef8;
            case 0x1D8F3Cu: goto label_1d8f3c;
            case 0x1D8F44u: goto label_1d8f44;
            case 0x1D8F48u: goto label_1d8f48;
            case 0x1D8F70u: goto label_1d8f70;
            case 0x1D8F98u: goto label_1d8f98;
            case 0x1D8FB4u: goto label_1d8fb4;
            case 0x1D8FF4u: goto label_1d8ff4;
            case 0x1D9034u: goto label_1d9034;
            case 0x1D9050u: goto label_1d9050;
            case 0x1D9058u: goto label_1d9058;
            case 0x1D9068u: goto label_1d9068;
            case 0x1D90B8u: goto label_1d90b8;
            case 0x1D90E0u: goto label_1d90e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F64u; }
            if (ctx->pc != 0x1D8F64u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1d8f64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1d8f68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8F68u;
    {
        const bool branch_taken_0x1d8f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F68u;
            // 0x1d8f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f68) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8F70u;
label_1d8f70:
    // 0x1d8f70: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d8f74: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x1d8f78: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d8f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8f7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8f80: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d8f84: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d8f88: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8f8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8f90: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8F90u;
    {
        const bool branch_taken_0x1d8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d8f90) {
            ctx->pc = 0x1D8F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F90u;
            // 0x1d8f94: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8F98u;
            goto label_1d8f98;
        }
    }
    ctx->pc = 0x1D8F98u;
label_1d8f98:
    // 0x1d8f98: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8F98u;
    {
        const bool branch_taken_0x1d8f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F98u;
            // 0x1d8f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f98) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8FA0u;
    // 0x1d8fa0: 0xc04c612  jal         func_131848
    ctx->pc = 0x1D8FA0u;
    SET_GPR_U32(ctx, 31, 0x1D8FA8u);
    ctx->pc = 0x1D8FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FA0u;
            // 0x1d8fa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131848u;
    if (runtime->hasFunction(0x131848u)) {
        auto targetFn = runtime->lookupFunction(0x131848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FA8u; }
        if (ctx->pc != 0x1D8FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131848_0x131848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FA8u; }
        if (ctx->pc != 0x1D8FA8u) { return; }
    }
    ctx->pc = 0x1D8FA8u;
    // 0x1d8fa8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x1d8fa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8fb0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d8fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1d8fb4:
    // 0x1d8fb4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d8fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8fb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d8fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FBCu;
            // 0x1d8fc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8EF8u: goto label_1d8ef8;
            case 0x1D8F3Cu: goto label_1d8f3c;
            case 0x1D8F44u: goto label_1d8f44;
            case 0x1D8F48u: goto label_1d8f48;
            case 0x1D8F70u: goto label_1d8f70;
            case 0x1D8F98u: goto label_1d8f98;
            case 0x1D8FB4u: goto label_1d8fb4;
            case 0x1D8FF4u: goto label_1d8ff4;
            case 0x1D9034u: goto label_1d9034;
            case 0x1D9050u: goto label_1d9050;
            case 0x1D9058u: goto label_1d9058;
            case 0x1D9068u: goto label_1d9068;
            case 0x1D90B8u: goto label_1d90b8;
            case 0x1D90E0u: goto label_1d90e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8FC4u;
    // 0x1d8fc4: 0x0  nop
    ctx->pc = 0x1d8fc4u;
    // NOP
    // 0x1d8fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d8fcc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d8fd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d8fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8fd8: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x1d8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1d8fdc: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d8fe0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8FE0u;
    {
        const bool branch_taken_0x1d8fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FE0u;
            // 0x1d8fe4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8fe0) {
            ctx->pc = 0x1D8FF4u;
            goto label_1d8ff4;
        }
    }
    ctx->pc = 0x1D8FE8u;
    // 0x1d8fe8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8fec: 0x54450001  bnel        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8FECu;
    {
        const bool branch_taken_0x1d8fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d8fec) {
            ctx->pc = 0x1D8FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FECu;
            // 0x1d8ff0: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FF4u;
            goto label_1d8ff4;
        }
    }
    ctx->pc = 0x1D8FF4u;
label_1d8ff4:
    // 0x1d8ff4: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D8FF4u;
    {
        const bool branch_taken_0x1d8ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FF4u;
            // 0x1d8ff8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ff4) {
            ctx->pc = 0x1D90E0u;
            goto label_1d90e0;
        }
    }
    ctx->pc = 0x1D8FFCu;
    // 0x1d8ffc: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x1d8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1d9000: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D9000u;
    {
        const bool branch_taken_0x1d9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9000u;
            // 0x1d9004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9000) {
            ctx->pc = 0x1D9034u;
            goto label_1d9034;
        }
    }
    ctx->pc = 0x1D9008u;
    // 0x1d9008: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d900c: 0x101dc2  srl         $v1, $s0, 23
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
    // 0x1d9010: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d9010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d9014: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d9018: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d901c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d9020: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d9020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9028: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9028u;
    {
        const bool branch_taken_0x1d9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d9028) {
            ctx->pc = 0x1D9034u;
            goto label_1d9034;
        }
    }
    ctx->pc = 0x1D9030u;
    // 0x1d9030: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d9034:
    // 0x1d9034: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9034u;
    {
        const bool branch_taken_0x1d9034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9034) {
            ctx->pc = 0x1D9038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9034u;
            // 0x1d9038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9050u;
            goto label_1d9050;
        }
    }
    ctx->pc = 0x1D903Cu;
    // 0x1d903c: 0xc0783a6  jal         func_1E0E98
    ctx->pc = 0x1D903Cu;
    SET_GPR_U32(ctx, 31, 0x1D9044u);
    ctx->pc = 0x1E0E98u;
    if (runtime->hasFunction(0x1E0E98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9044u; }
        if (ctx->pc != 0x1D9044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0E98_0x1e0e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9044u; }
        if (ctx->pc != 0x1D9044u) { return; }
    }
    ctx->pc = 0x1D9044u;
    // 0x1d9044: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D9044u;
    {
        const bool branch_taken_0x1d9044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9044u;
            // 0x1d9048: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9044) {
            ctx->pc = 0x1D90E0u;
            goto label_1d90e0;
        }
    }
    ctx->pc = 0x1D904Cu;
    // 0x1d904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9050:
    // 0x1d9050: 0xc0763be  jal         func_1D8EF8
    ctx->pc = 0x1D9050u;
    SET_GPR_U32(ctx, 31, 0x1D9058u);
    ctx->pc = 0x1D9054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9050u;
            // 0x1d9054: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF8u;
    runtime->cooperativeGuestYield();
    goto label_1d8ef8;
    ctx->pc = 0x1D9058u;
label_1d9058:
    // 0x1d9058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9058u;
    {
        const bool branch_taken_0x1d9058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9058u;
            // 0x1d905c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9058) {
            ctx->pc = 0x1D9068u;
            goto label_1d9068;
        }
    }
    ctx->pc = 0x1D9060u;
    // 0x1d9060: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D9060u;
    {
        const bool branch_taken_0x1d9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9060u;
            // 0x1d9064: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9060) {
            ctx->pc = 0x1D90E0u;
            goto label_1d90e0;
        }
    }
    ctx->pc = 0x1D9068u;
label_1d9068:
    // 0x1d9068: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d9068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d906c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
    // 0x1d9070: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d9070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9074: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1d9074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9078: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1d9078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d907c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1d907cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9080: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1d9080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d9084: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d9084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d9088: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1d9088u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d908c: 0xc4814f58  lwc1        $f1, 0x4F58($a0)
    ctx->pc = 0x1d908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9094: 0x46000004  c1          0x4
    ctx->pc = 0x1d9094u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d9098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d909c: 0x0  nop
    ctx->pc = 0x1d909cu;
    // NOP
    // 0x1d90a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D90A0u;
    {
        const bool branch_taken_0x1d90a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D90A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90A0u;
            // 0x1d90a4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90a0) {
            ctx->pc = 0x1D90B8u;
            goto label_1d90b8;
        }
    }
    ctx->pc = 0x1D90A8u;
    // 0x1d90a8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d90ac: 0x8c424f60  lw          $v0, 0x4F60($v0)
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20320)));
    // 0x1d90b0: 0xe4804f58  swc1        $f0, 0x4F58($a0)
    ctx->pc = 0x1d90b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20312), bits); }
    // 0x1d90b4: 0xac624f64  sw          $v0, 0x4F64($v1)
    ctx->pc = 0x1d90b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20324), GPR_U32(ctx, 2));
label_1d90b8:
    // 0x1d90b8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1d90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1d90bc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d90c0: 0x8ca24f60  lw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20320)));
    // 0x1d90c4: 0x24842de0  addiu       $a0, $a0, 0x2DE0
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
    // 0x1d90c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d90cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d90d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d90d4: 0xaca24f60  sw          $v0, 0x4F60($a1)
    ctx->pc = 0x1d90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20320), GPR_U32(ctx, 2));
    // 0x1d90d8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1d90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1d90dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d90dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d90e0:
    // 0x1d90e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d90e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d90e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d90e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d90e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D90E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D90ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90E8u;
            // 0x1d90ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8EF8u: goto label_1d8ef8;
            case 0x1D8F3Cu: goto label_1d8f3c;
            case 0x1D8F44u: goto label_1d8f44;
            case 0x1D8F48u: goto label_1d8f48;
            case 0x1D8F70u: goto label_1d8f70;
            case 0x1D8F98u: goto label_1d8f98;
            case 0x1D8FB4u: goto label_1d8fb4;
            case 0x1D8FF4u: goto label_1d8ff4;
            case 0x1D9034u: goto label_1d9034;
            case 0x1D9050u: goto label_1d9050;
            case 0x1D9058u: goto label_1d9058;
            case 0x1D9068u: goto label_1d9068;
            case 0x1D90B8u: goto label_1d90b8;
            case 0x1D90E0u: goto label_1d90e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D90F0u;
}

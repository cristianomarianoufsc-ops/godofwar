#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_270e10
// Address: 0x270e10 - 0x270fd0
void entry_270e10_0x270fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_270e10_0x270fd0");
#endif

    ctx->pc = 0x270e10u;

    // 0x270e10: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x270e14: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x270e18: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x270e18u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x270e1c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x270e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x270e20: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x270e24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e28: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x270e2c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x270e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x270e30: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x270e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x270e34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x270e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x270e38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x270e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x270e3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x270e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x270e40: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x270e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x270e44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x270e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x270e48: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270E48u;
    {
        const bool branch_taken_0x270e48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e48) {
            ctx->pc = 0x270E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270E48u;
            // 0x270e4c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x270E50u;
            goto label_270e50;
        }
    }
    ctx->pc = 0x270E50u;
label_270e50:
    // 0x270e50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x270e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x270e54: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x270e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x270e58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e5c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x270e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x270e60: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x270e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270e64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x270e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x270e68: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x270e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x270e6c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x270e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x270e70: 0x4012  mflo        $t0
    ctx->pc = 0x270e70u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x270e74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x270e78: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x270e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x270e7c: 0x0  nop
    ctx->pc = 0x270e7cu;
    // NOP
label_270e80:
    // 0x270e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270e84: 0x0  nop
    ctx->pc = 0x270e84u;
    // NOP
    // 0x270e88: 0x0  nop
    ctx->pc = 0x270e88u;
    // NOP
    // 0x270e8c: 0x0  nop
    ctx->pc = 0x270e8cu;
    // NOP
    // 0x270e90: 0x0  nop
    ctx->pc = 0x270e90u;
    // NOP
    // 0x270e94: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270E94u;
    {
        const bool branch_taken_0x270e94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270e94) {
            ctx->pc = 0x270E80u;
            runtime->cooperativeGuestYield();
            goto label_270e80;
        }
    }
    ctx->pc = 0x270E9Cu;
    // 0x270e9c: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x270e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x270ea0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270ea4: 0x24a514a8  addiu       $a1, $a1, 0x14A8
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5288));
    // 0x270ea8: 0xc0a4e50  jal         func_293940
    ctx->pc = 0x270EA8u;
    SET_GPR_U32(ctx, 31, 0x270EB0u);
    ctx->pc = 0x270EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270EA8u;
            // 0x270eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293940u;
    if (runtime->hasFunction(0x293940u)) {
        auto targetFn = runtime->lookupFunction(0x293940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270EB0u; }
        if (ctx->pc != 0x270EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293940_0x293950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270EB0u; }
        if (ctx->pc != 0x270EB0u) { return; }
    }
    ctx->pc = 0x270EB0u;
    // 0x270eb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270eb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x270eb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x270eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x270ebc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x270ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270ec0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x270ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x270ec4: 0xc0a51d8  jal         func_294760
    ctx->pc = 0x270EC4u;
    SET_GPR_U32(ctx, 31, 0x270ECCu);
    ctx->pc = 0x270EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270EC4u;
            // 0x270ec8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294760u;
    if (runtime->hasFunction(0x294760u)) {
        auto targetFn = runtime->lookupFunction(0x294760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270ECCu; }
        if (ctx->pc != 0x270ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294760_0x294760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270ECCu; }
        if (ctx->pc != 0x270ECCu) { return; }
    }
    ctx->pc = 0x270ECCu;
    // 0x270ecc: 0xc0a648c  jal         func_299230
    ctx->pc = 0x270ECCu;
    SET_GPR_U32(ctx, 31, 0x270ED4u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270ED4u; }
        if (ctx->pc != 0x270ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270ED4u; }
        if (ctx->pc != 0x270ED4u) { return; }
    }
    ctx->pc = 0x270ED4u;
    // 0x270ed4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x270ed8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x270ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x270edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x270edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x270ee0: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x270ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x270ee4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x270ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x270ee8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x270ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x270eec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x270eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x270ef0: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x270ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x270ef4: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x270ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x270ef8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x270ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x270efc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x270efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x270f00: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x270f04: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270f08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x270f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x270f0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270F0Cu;
    {
        const bool branch_taken_0x270f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F0Cu;
            // 0x270f10: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f0c) {
            ctx->pc = 0x270F20u;
            goto label_270f20;
        }
    }
    ctx->pc = 0x270F14u;
    // 0x270f14: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x270F14u;
    SET_GPR_U32(ctx, 31, 0x270F1Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F1Cu; }
        if (ctx->pc != 0x270F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F1Cu; }
        if (ctx->pc != 0x270F1Cu) { return; }
    }
    ctx->pc = 0x270F1Cu;
    // 0x270f1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x270f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_270f20:
    // 0x270f20: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x270f24: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x270f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x270f28: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x270f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x270f2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x270f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x270f30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x270f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270f34: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x270f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x270f38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x270f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f3c: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x270F3Cu;
    SET_GPR_U32(ctx, 31, 0x270F44u);
    ctx->pc = 0x270F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F3Cu;
            // 0x270f40: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F44u; }
        if (ctx->pc != 0x270F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F44u; }
        if (ctx->pc != 0x270F44u) { return; }
    }
    ctx->pc = 0x270F44u;
    // 0x270f44: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x270f48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x270f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270f4c: 0x0  nop
    ctx->pc = 0x270f4cu;
    // NOP
label_270f50:
    // 0x270f50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270f54: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270f58: 0x0  nop
    ctx->pc = 0x270f58u;
    // NOP
    // 0x270f5c: 0x0  nop
    ctx->pc = 0x270f5cu;
    // NOP
    // 0x270f60: 0x0  nop
    ctx->pc = 0x270f60u;
    // NOP
    // 0x270f64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270F64u;
    {
        const bool branch_taken_0x270f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270f64) {
            ctx->pc = 0x270F50u;
            runtime->cooperativeGuestYield();
            goto label_270f50;
        }
    }
    ctx->pc = 0x270F6Cu;
    // 0x270f6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270F6Cu;
    {
        const bool branch_taken_0x270f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F6Cu;
            // 0x270f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f6c) {
            ctx->pc = 0x270F80u;
            goto label_270f80;
        }
    }
    ctx->pc = 0x270F74u;
    // 0x270f74: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x270f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x270f78: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x270F78u;
    SET_GPR_U32(ctx, 31, 0x270F80u);
    ctx->pc = 0x270F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F78u;
            // 0x270f7c: 0x24a544a8  addiu       $a1, $a1, 0x44A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F80u; }
        if (ctx->pc != 0x270F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F80u; }
        if (ctx->pc != 0x270F80u) { return; }
    }
    ctx->pc = 0x270F80u;
label_270f80:
    // 0x270f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x270f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x270f84: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x270f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_270f88:
    // 0x270f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270f8c: 0x0  nop
    ctx->pc = 0x270f8cu;
    // NOP
    // 0x270f90: 0x0  nop
    ctx->pc = 0x270f90u;
    // NOP
    // 0x270f94: 0x0  nop
    ctx->pc = 0x270f94u;
    // NOP
    // 0x270f98: 0x0  nop
    ctx->pc = 0x270f98u;
    // NOP
    // 0x270f9c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270F9Cu;
    {
        const bool branch_taken_0x270f9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270f9c) {
            ctx->pc = 0x270F88u;
            runtime->cooperativeGuestYield();
            goto label_270f88;
        }
    }
    ctx->pc = 0x270FA4u;
    // 0x270fa4: 0xc0a51be  jal         func_2946F8
    ctx->pc = 0x270FA4u;
    SET_GPR_U32(ctx, 31, 0x270FACu);
    ctx->pc = 0x270FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FA4u;
            // 0x270fa8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2946F8u;
    if (runtime->hasFunction(0x2946F8u)) {
        auto targetFn = runtime->lookupFunction(0x2946F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FACu; }
        if (ctx->pc != 0x270FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002946F8_0x2946f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FACu; }
        if (ctx->pc != 0x270FACu) { return; }
    }
    ctx->pc = 0x270FACu;
    // 0x270fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x270facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fb0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x270FB0u;
    SET_GPR_U32(ctx, 31, 0x270FB8u);
    ctx->pc = 0x270FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270FB0u;
            // 0x270fb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (runtime->hasFunction(0x293950u)) {
        auto targetFn = runtime->lookupFunction(0x293950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FB8u; }
        if (ctx->pc != 0x270FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293950_0x293960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FB8u; }
        if (ctx->pc != 0x270FB8u) { return; }
    }
    ctx->pc = 0x270FB8u;
    // 0x270fb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x270fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270fbc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x270fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x270fc0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x270fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270fc4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x270fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x270FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270FC8u;
            // 0x270fcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270E50u: goto label_270e50;
            case 0x270E80u: goto label_270e80;
            case 0x270F20u: goto label_270f20;
            case 0x270F50u: goto label_270f50;
            case 0x270F80u: goto label_270f80;
            case 0x270F88u: goto label_270f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270FD0u;
}

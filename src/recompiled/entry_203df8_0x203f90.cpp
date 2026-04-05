#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_203df8
// Address: 0x203df8 - 0x203f90
void entry_203df8_0x203f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_203df8_0x203f90");
#endif

    ctx->pc = 0x203df8u;

    // 0x203df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203e00: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x203e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x203e04: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x203e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x203e08: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x203e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x203e0c: 0x24423f08  addiu       $v0, $v0, 0x3F08
    ctx->pc = 0x203e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16136));
    // 0x203e10: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x203e14: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x203e18: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x203e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x203e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x203e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203e20: 0xac80631c  sw          $zero, 0x631C($a0)
    ctx->pc = 0x203e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25372), GPR_U32(ctx, 0));
    // 0x203e24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x203e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x203e28: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x203e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x203e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x203e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x203e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203e38: 0xe4606320  swc1        $f0, 0x6320($v1)
    ctx->pc = 0x203e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25376), bits); }
    // 0x203e3c: 0xacc06324  sw          $zero, 0x6324($a2)
    ctx->pc = 0x203e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 25380), GPR_U32(ctx, 0));
    // 0x203e40: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x203e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x203e44: 0xa7a70008  sh          $a3, 0x8($sp)
    ctx->pc = 0x203e44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x203e48: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x203e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x203e4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x203e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x203e50: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x203e50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x203e54: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x203e54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x203e58: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x203e58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x203e5c: 0x0  nop
    ctx->pc = 0x203e5cu;
    // NOP
label_203e60:
    // 0x203e60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x203e64: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x203e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x203e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x203e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x203e6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203e70: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x203e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x203e74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x203E74u;
    {
        const bool branch_taken_0x203e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E74u;
            // 0x203e78: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e74) {
            ctx->pc = 0x203E60u;
            runtime->cooperativeGuestYield();
            goto label_203e60;
        }
    }
    ctx->pc = 0x203E7Cu;
    // 0x203e7c: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x203e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x203e80: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x203e80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x203e84: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x203e84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
    // 0x203e88: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x203e8c: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x203e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x203e90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x203e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e94: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x203e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203e98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x203e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x203e9c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x203e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x203ea0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x203ea4: 0x40f809  jalr        $v0
    ctx->pc = 0x203EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203EACu);
        ctx->pc = 0x203EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203EA4u;
            // 0x203ea8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203EACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203E60u: goto label_203e60;
            case 0x203EC0u: goto label_203ec0;
            case 0x203F5Cu: goto label_203f5c;
            case 0x203F64u: goto label_203f64;
            case 0x203F6Cu: goto label_203f6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203EACu; }
            if (ctx->pc != 0x203EACu) { return; }
        }
        }
    }
    ctx->pc = 0x203EACu;
    // 0x203eac: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x203eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x203eb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EB0u;
    {
        const bool branch_taken_0x203eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203EB0u;
            // 0x203eb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb0) {
            ctx->pc = 0x203EC0u;
            goto label_203ec0;
        }
    }
    ctx->pc = 0x203EB8u;
    // 0x203eb8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x203EB8u;
    SET_GPR_U32(ctx, 31, 0x203EC0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EC0u; }
        if (ctx->pc != 0x203EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EC0u; }
        if (ctx->pc != 0x203EC0u) { return; }
    }
    ctx->pc = 0x203EC0u;
label_203ec0:
    // 0x203ec0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x203ec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x203ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x203ec8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x203ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x203ecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x203ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203ed4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x203ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x203ed8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x203ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203edc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x203edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x203ee0: 0x40f809  jalr        $v0
    ctx->pc = 0x203EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203EE8u);
        ctx->pc = 0x203EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203EE0u;
            // 0x203ee4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203EE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203E60u: goto label_203e60;
            case 0x203EC0u: goto label_203ec0;
            case 0x203F5Cu: goto label_203f5c;
            case 0x203F64u: goto label_203f64;
            case 0x203F6Cu: goto label_203f6c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203EE8u; }
            if (ctx->pc != 0x203EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x203EE8u;
    // 0x203ee8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203eec: 0xc082780  jal         func_209E00
    ctx->pc = 0x203EECu;
    SET_GPR_U32(ctx, 31, 0x203EF4u);
    ctx->pc = 0x203EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203EECu;
            // 0x203ef0: 0xac50e430  sw          $s0, -0x1BD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960176), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209E00u;
    if (runtime->hasFunction(0x209E00u)) {
        auto targetFn = runtime->lookupFunction(0x209E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EF4u; }
        if (ctx->pc != 0x203EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209E00_0x209e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EF4u; }
        if (ctx->pc != 0x203EF4u) { return; }
    }
    ctx->pc = 0x203EF4u;
    // 0x203ef4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x203ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203ef8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x203ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203efc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203f00: 0x3e00008  jr          $ra
    ctx->pc = 0x203F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F00u;
            // 0x203f04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203E60u: goto label_203e60;
            case 0x203EC0u: goto label_203ec0;
            case 0x203F5Cu: goto label_203f5c;
            case 0x203F64u: goto label_203f64;
            case 0x203F6Cu: goto label_203f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F08u;
    // 0x203f08: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x203f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x203f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203f10: 0xc482631c  lwc1        $f2, 0x631C($a0)
    ctx->pc = 0x203f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 25372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x203f14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203f18: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x203f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f1c: 0x0  nop
    ctx->pc = 0x203f1cu;
    // NOP
    // 0x203f20: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F20u;
            // 0x203f24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F64u;
            goto label_203f64;
        }
    }
    ctx->pc = 0x203F28u;
    // 0x203f28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203f2c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x203f30: 0xc440c64c  lwc1        $f0, -0x39B4($v0)
    ctx->pc = 0x203f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203f34: 0xc4616320  lwc1        $f1, 0x6320($v1)
    ctx->pc = 0x203f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203f38: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x203f3c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x203f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x203f40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203f44: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x203f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x203f48: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x203f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203f4c: 0x0  nop
    ctx->pc = 0x203f4cu;
    // NOP
    // 0x203f50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x203F50u;
    {
        const bool branch_taken_0x203f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F50u;
            // 0x203f54: 0xe480631c  swc1        $f0, 0x631C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 25372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f50) {
            ctx->pc = 0x203F5Cu;
            goto label_203f5c;
        }
    }
    ctx->pc = 0x203F58u;
    // 0x203f58: 0xe4636320  swc1        $f3, 0x6320($v1)
    ctx->pc = 0x203f58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25376), bits); }
label_203f5c:
    // 0x203f5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203F5Cu;
    {
        const bool branch_taken_0x203f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F5Cu;
            // 0x203f60: 0xc4606320  lwc1        $f0, 0x6320($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f5c) {
            ctx->pc = 0x203F6Cu;
            goto label_203f6c;
        }
    }
    ctx->pc = 0x203F64u;
label_203f64:
    // 0x203f64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x203f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203f6c:
    // 0x203f6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203f70: 0xc06559c  jal         func_195670
    ctx->pc = 0x203F70u;
    SET_GPR_U32(ctx, 31, 0x203F78u);
    ctx->pc = 0x203F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F70u;
            // 0x203f74: 0xe440c648  swc1        $f0, -0x39B8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952520), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x195670u;
    if (runtime->hasFunction(0x195670u)) {
        auto targetFn = runtime->lookupFunction(0x195670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F78u; }
        if (ctx->pc != 0x203F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_195670_0x1956b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F78u; }
        if (ctx->pc != 0x203F78u) { return; }
    }
    ctx->pc = 0x203F78u;
    // 0x203f78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x203f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x203f7c: 0xc047b62  jal         func_11ED88
    ctx->pc = 0x203F7Cu;
    SET_GPR_U32(ctx, 31, 0x203F84u);
    ctx->pc = 0x203F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F7Cu;
            // 0x203f80: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED88u;
    if (runtime->hasFunction(0x11ED88u)) {
        auto targetFn = runtime->lookupFunction(0x11ED88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F84u; }
        if (ctx->pc != 0x203F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED88_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F84u; }
        if (ctx->pc != 0x203F84u) { return; }
    }
    ctx->pc = 0x203F84u;
    // 0x203f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203f88: 0x3e00008  jr          $ra
    ctx->pc = 0x203F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F88u;
            // 0x203f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203E60u: goto label_203e60;
            case 0x203EC0u: goto label_203ec0;
            case 0x203F5Cu: goto label_203f5c;
            case 0x203F64u: goto label_203f64;
            case 0x203F6Cu: goto label_203f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F90u;
}

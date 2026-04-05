#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292F10
// Address: 0x292f10 - 0x293068
void sub_00292F10_0x292f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292F10_0x292f10");
#endif

    ctx->pc = 0x292f10u;

    // 0x292f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292f14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x292f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x292f18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x292f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x292f1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x292f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x292f20: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x292f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x292f24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x292f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f28: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x292f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x292f2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x292f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292f34: 0x148943  sra         $s1, $s4, 5
    ctx->pc = 0x292f34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
    // 0x292f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292f3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x292f3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f40: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x292f44: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x292f48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x292f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x292f4c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292f50: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x292f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x292f54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292F54u;
    {
        const bool branch_taken_0x292f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F54u;
            // 0x292f58: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f54) {
            ctx->pc = 0x292F78u;
            goto label_292f78;
        }
    }
    ctx->pc = 0x292F5Cu;
    // 0x292f5c: 0x0  nop
    ctx->pc = 0x292f5cu;
    // NOP
label_292f60:
    // 0x292f60: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x292f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x292f64: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x292f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x292f68: 0x0  nop
    ctx->pc = 0x292f68u;
    // NOP
    // 0x292f6c: 0x0  nop
    ctx->pc = 0x292f6cu;
    // NOP
    // 0x292f70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x292F70u;
    {
        const bool branch_taken_0x292f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F70u;
            // 0x292f74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f70) {
            ctx->pc = 0x292F60u;
            runtime->cooperativeGuestYield();
            goto label_292f60;
        }
    }
    ctx->pc = 0x292F78u;
label_292f78:
    // 0x292f78: 0xc0a49da  jal         func_292768
    ctx->pc = 0x292F78u;
    SET_GPR_U32(ctx, 31, 0x292F80u);
    ctx->pc = 0x292F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292F78u;
            // 0x292f7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F80u; }
        if (ctx->pc != 0x292F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292F80u; }
        if (ctx->pc != 0x292F80u) { return; }
    }
    ctx->pc = 0x292F80u;
    // 0x292f80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x292f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f84: 0x3286001f  andi        $a2, $s4, 0x1F
    ctx->pc = 0x292f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x292f88: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x292f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x292f8c: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x292F8Cu;
    {
        const bool branch_taken_0x292f8c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x292F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F8Cu;
            // 0x292f90: 0x26680014  addiu       $t0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f8c) {
            ctx->pc = 0x292FB0u;
            goto label_292fb0;
        }
    }
    ctx->pc = 0x292F94u;
    // 0x292f94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x292f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_292f98:
    // 0x292f98: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x292f98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x292f9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x292f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x292fa0: 0x0  nop
    ctx->pc = 0x292fa0u;
    // NOP
    // 0x292fa4: 0x0  nop
    ctx->pc = 0x292fa4u;
    // NOP
    // 0x292fa8: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x292FA8u;
    {
        const bool branch_taken_0x292fa8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x292FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FA8u;
            // 0x292fac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fa8) {
            ctx->pc = 0x292F98u;
            runtime->cooperativeGuestYield();
            goto label_292f98;
        }
    }
    ctx->pc = 0x292FB0u;
label_292fb0:
    // 0x292fb0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x292fb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x292fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292fbc: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x292FBCu;
    {
        const bool branch_taken_0x292fbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FBCu;
            // 0x292fc0: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fbc) {
            ctx->pc = 0x293010u;
            goto label_293010;
        }
    }
    ctx->pc = 0x292FC4u;
    // 0x292fc4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x292fc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x292fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fcc: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x292fccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292fd0: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x292fd4: 0x0  nop
    ctx->pc = 0x292fd4u;
    // NOP
label_292fd8:
    // 0x292fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292fdc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x292fe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x292fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x292fe4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x292fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x292fe8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x292fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x292fec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x292fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292ff0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x292ff4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x292ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x292ff8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x292FF8u;
    {
        const bool branch_taken_0x292ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292FF8u;
            // 0x292ffc: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ff8) {
            ctx->pc = 0x292FD8u;
            runtime->cooperativeGuestYield();
            goto label_292fd8;
        }
    }
    ctx->pc = 0x293000u;
    // 0x293000: 0x123800b  movn        $s0, $t1, $v1
    ctx->pc = 0x293000u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x293004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293004u;
    {
        const bool branch_taken_0x293004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293004u;
            // 0x293008: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293004) {
            ctx->pc = 0x293028u;
            goto label_293028;
        }
    }
    ctx->pc = 0x29300Cu;
    // 0x29300c: 0x0  nop
    ctx->pc = 0x29300cu;
    // NOP
label_293010:
    // 0x293010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x293010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x293014: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x293018: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x293018u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x29301c: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x29301cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x293020: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293020u;
    {
        const bool branch_taken_0x293020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293020u;
            // 0x293024: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293020) {
            ctx->pc = 0x293010u;
            runtime->cooperativeGuestYield();
            goto label_293010;
        }
    }
    ctx->pc = 0x293028u;
label_293028:
    // 0x293028: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x293028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x29302c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293030: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x293030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x293034: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x293034u;
    SET_GPR_U32(ctx, 31, 0x29303Cu);
    ctx->pc = 0x293038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293034u;
            // 0x293038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29303Cu; }
        if (ctx->pc != 0x29303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29303Cu; }
        if (ctx->pc != 0x29303Cu) { return; }
    }
    ctx->pc = 0x29303Cu;
    // 0x29303c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29303cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293040: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x293040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293044: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x293044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293048: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x293048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29304c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29304cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293050: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x293050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293054: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x293054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29305c: 0x3e00008  jr          $ra
    ctx->pc = 0x29305Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29305Cu;
            // 0x293060: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292F60u: goto label_292f60;
            case 0x292F78u: goto label_292f78;
            case 0x292F98u: goto label_292f98;
            case 0x292FB0u: goto label_292fb0;
            case 0x292FD8u: goto label_292fd8;
            case 0x293010u: goto label_293010;
            case 0x293028u: goto label_293028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293064u;
    // 0x293064: 0x0  nop
    ctx->pc = 0x293064u;
    // NOP
}

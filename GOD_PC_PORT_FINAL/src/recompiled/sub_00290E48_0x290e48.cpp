#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290E48
// Address: 0x290e48 - 0x291078
void sub_00290E48_0x290e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E48_0x290e48");
#endif

    ctx->pc = 0x290e48u;

    // 0x290e48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x290e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x290e4c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x290e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x290e50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x290e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x290e54: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x290e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x290e58: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x290e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x290e5c: 0x3c1e002c  lui         $fp, 0x2C
    ctx->pc = 0x290e5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
    // 0x290e60: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x290e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x290e64: 0x27c55a19  addiu       $a1, $fp, 0x5A19
    ctx->pc = 0x290e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 23065));
    // 0x290e68: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x290e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x290e6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x290e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e70: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x290e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x290e74: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x290e74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x290e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x290e7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x290e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x290e80: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x290e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x290e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290e88: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x290e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x290e8c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x290e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x290e90: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x290e94: 0x0  nop
    ctx->pc = 0x290e94u;
    // NOP
label_290e98:
    // 0x290e98: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x290e98u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290e9c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x290e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x290ea0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x290ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x290ea4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x290ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x290ea8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x290EA8u;
    {
        const bool branch_taken_0x290ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290EA8u;
            // 0x290eac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ea8) {
            ctx->pc = 0x290E98u;
            runtime->cooperativeGuestYield();
            goto label_290e98;
        }
    }
    ctx->pc = 0x290EB0u;
    // 0x290eb0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x290eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x290eb4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290EB4u;
    {
        const bool branch_taken_0x290eb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x290EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290EB4u;
            // 0x290eb8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290eb4) {
            ctx->pc = 0x290EC8u;
            goto label_290ec8;
        }
    }
    ctx->pc = 0x290EBCu;
    // 0x290ebc: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x290ebcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290ec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290EC0u;
    {
        const bool branch_taken_0x290ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290EC0u;
            // 0x290ec4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ec0) {
            ctx->pc = 0x290ED4u;
            goto label_290ed4;
        }
    }
    ctx->pc = 0x290EC8u;
label_290ec8:
    // 0x290ec8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290EC8u;
    {
        const bool branch_taken_0x290ec8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x290ec8) {
            ctx->pc = 0x290ED8u;
            goto label_290ed8;
        }
    }
    ctx->pc = 0x290ED0u;
    // 0x290ed0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x290ed0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_290ed4:
    // 0x290ed4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x290ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_290ed8:
    // 0x290ed8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x290ED8u;
    {
        const bool branch_taken_0x290ed8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290ED8u;
            // 0x290edc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ed8) {
            ctx->pc = 0x290EE8u;
            goto label_290ee8;
        }
    }
    ctx->pc = 0x290EE0u;
    // 0x290ee0: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x290EE0u;
    {
        const bool branch_taken_0x290ee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x290ee0) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EE8u;
label_290ee8:
    // 0x290ee8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x290ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x290eec: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290EECu;
    {
        const bool branch_taken_0x290eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x290EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290EECu;
            // 0x290ef0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290eec) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290EF4u;
    // 0x290ef4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290ef8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290EF8u;
    {
        const bool branch_taken_0x290ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290EF8u;
            // 0x290efc: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ef8) {
            ctx->pc = 0x290F08u;
            goto label_290f08;
        }
    }
    ctx->pc = 0x290F00u;
    // 0x290f00: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F00u;
    {
        const bool branch_taken_0x290f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290f00) {
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290F08u;
label_290f08:
    // 0x290f08: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x290f08u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x290f0c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x290f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x290f10: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x290f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_290f14:
    // 0x290f14: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F14u;
    {
        const bool branch_taken_0x290f14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x290F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F14u;
            // 0x290f18: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f14) {
            ctx->pc = 0x290F28u;
            goto label_290f28;
        }
    }
    ctx->pc = 0x290F1Cu;
    // 0x290f1c: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x290f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x290f20: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x290f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x290f24: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x290f24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_290f28:
    // 0x290f28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290f2c: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x290f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x290f30: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x290f30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290f34: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x290f34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x290f38: 0x57a00b  movn        $s4, $v0, $s7
    ctx->pc = 0x290f38u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x290f3c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x290f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x290f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f44: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x290F44u;
    SET_GPR_U32(ctx, 31, 0x290F4Cu);
    ctx->pc = 0x290F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F44u;
            // 0x290f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F4Cu; }
        if (ctx->pc != 0x290F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F4Cu; }
        if (ctx->pc != 0x290F4Cu) { return; }
    }
    ctx->pc = 0x290F4Cu;
    // 0x290f4c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x290f4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x290f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f54: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x290f54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290f58: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x290f58u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x290f5c: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x290F5Cu;
    SET_GPR_U32(ctx, 31, 0x290F64u);
    ctx->pc = 0x290F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F5Cu;
            // 0x290f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F64u; }
        if (ctx->pc != 0x290F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F64u; }
        if (ctx->pc != 0x290F64u) { return; }
    }
    ctx->pc = 0x290F64u;
    // 0x290f64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x290f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x290F68u;
    {
        const bool branch_taken_0x290f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F68u;
            // 0x290f6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f68) {
            ctx->pc = 0x290FBCu;
            goto label_290fbc;
        }
    }
    ctx->pc = 0x290F70u;
label_290f70:
    // 0x290f70: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x290f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x290f74: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x290F74u;
    {
        const bool branch_taken_0x290f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f74) {
            ctx->pc = 0x290FF4u;
            goto label_290ff4;
        }
    }
    ctx->pc = 0x290F7Cu;
    // 0x290f7c: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x290F7Cu;
    {
        const bool branch_taken_0x290f7c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x290F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F7Cu;
            // 0x290f80: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f7c) {
            ctx->pc = 0x290FA0u;
            goto label_290fa0;
        }
    }
    ctx->pc = 0x290F84u;
    // 0x290f84: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x290F84u;
    {
        const bool branch_taken_0x290f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f84) {
            ctx->pc = 0x290F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290F84u;
            // 0x290f88: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F8Cu;
    // 0x290f8c: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x290F8Cu;
    {
        const bool branch_taken_0x290f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x290F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F8Cu;
            // 0x290f90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f8c) {
            ctx->pc = 0x290FA8u;
            goto label_290fa8;
        }
    }
    ctx->pc = 0x290F94u;
    // 0x290f94: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x290f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x290f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290F98u;
    {
        const bool branch_taken_0x290f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f98) {
            ctx->pc = 0x290FA8u;
            goto label_290fa8;
        }
    }
    ctx->pc = 0x290FA0u;
label_290fa0:
    // 0x290fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290FA0u;
    {
        const bool branch_taken_0x290fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FA0u;
            // 0x290fa4: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fa0) {
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290FA8u;
label_290fa8:
    // 0x290fa8: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x290FA8u;
    SET_GPR_U32(ctx, 31, 0x290FB0u);
    ctx->pc = 0x290FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FA8u;
            // 0x290fac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FB0u; }
        if (ctx->pc != 0x290FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FB0u; }
        if (ctx->pc != 0x290FB0u) { return; }
    }
    ctx->pc = 0x290FB0u;
    // 0x290fb0: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x290fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_290fb4:
    // 0x290fb4: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x290fb4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x290fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_290fbc:
    // 0x290fbc: 0x27c25a19  addiu       $v0, $fp, 0x5A19
    ctx->pc = 0x290fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23065));
    // 0x290fc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x290fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x290fc4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x290fc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290fc8: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x290fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x290fcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290FCCu;
    {
        const bool branch_taken_0x290fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FCCu;
            // 0x290fd0: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fcc) {
            ctx->pc = 0x290FDCu;
            goto label_290fdc;
        }
    }
    ctx->pc = 0x290FD4u;
    // 0x290fd4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x290FD4u;
    {
        const bool branch_taken_0x290fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FD4u;
            // 0x290fd8: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fd4) {
            ctx->pc = 0x290F70u;
            runtime->cooperativeGuestYield();
            goto label_290f70;
        }
    }
    ctx->pc = 0x290FDCu;
label_290fdc:
    // 0x290fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290FDCu;
    {
        const bool branch_taken_0x290fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FDCu;
            // 0x290fe0: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fdc) {
            ctx->pc = 0x290FF4u;
            goto label_290ff4;
        }
    }
    ctx->pc = 0x290FE4u;
    // 0x290fe4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x290fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x290fe8: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x290fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x290fec: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x290FECu;
    {
        const bool branch_taken_0x290fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FECu;
            // 0x290ff0: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fec) {
            ctx->pc = 0x290F70u;
            runtime->cooperativeGuestYield();
            goto label_290f70;
        }
    }
    ctx->pc = 0x290FF4u;
label_290ff4:
    // 0x290ff4: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x290FF4u;
    {
        const bool branch_taken_0x290ff4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x290FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290FF4u;
            // 0x290ff8: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ff4) {
            ctx->pc = 0x291020u;
            goto label_291020;
        }
    }
    ctx->pc = 0x290FFCu;
    // 0x290ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291000: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x291000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x291004: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x291004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291008: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x291008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x29100c: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x29100cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x291010: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x291010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x291014: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x291018u;
    {
        const bool branch_taken_0x291018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291018u;
            // 0x29101c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291018) {
            ctx->pc = 0x291024u;
            goto label_291024;
        }
    }
    ctx->pc = 0x291020u;
label_291020:
    // 0x291020: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x291020u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_291024:
    // 0x291024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x291024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291028: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x291028u;
    {
        const bool branch_taken_0x291028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291028u;
            // 0x29102c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291028) {
            ctx->pc = 0x291040u;
            goto label_291040;
        }
    }
    ctx->pc = 0x291030u;
    // 0x291030: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x291030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x291034: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x291034u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x291038: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x291038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29103c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29103cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_291040:
    // 0x291040: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x291040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x291044: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x291044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291048: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x291048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29104c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29104cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x291050: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x291050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x291054: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x291054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x291058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29105c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x29105cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291060: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x291060u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291064: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x291064u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29106c: 0x3e00008  jr          $ra
    ctx->pc = 0x29106Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29106Cu;
            // 0x291070: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290E98u: goto label_290e98;
            case 0x290EC8u: goto label_290ec8;
            case 0x290ED4u: goto label_290ed4;
            case 0x290ED8u: goto label_290ed8;
            case 0x290EE8u: goto label_290ee8;
            case 0x290F08u: goto label_290f08;
            case 0x290F14u: goto label_290f14;
            case 0x290F28u: goto label_290f28;
            case 0x290F70u: goto label_290f70;
            case 0x290FA0u: goto label_290fa0;
            case 0x290FA8u: goto label_290fa8;
            case 0x290FB4u: goto label_290fb4;
            case 0x290FBCu: goto label_290fbc;
            case 0x290FDCu: goto label_290fdc;
            case 0x290FF4u: goto label_290ff4;
            case 0x291020u: goto label_291020;
            case 0x291024u: goto label_291024;
            case 0x291040u: goto label_291040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291074u;
    // 0x291074: 0x0  nop
    ctx->pc = 0x291074u;
    // NOP
}

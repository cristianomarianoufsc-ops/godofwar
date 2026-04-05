#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100EA8
// Address: 0x100ea8 - 0x101828
void sub_00100EA8_0x100ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100EA8_0x100ea8");
#endif

    ctx->pc = 0x100ea8u;

    // 0x100ea8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x100eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100eb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x100eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x100eb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x100eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100eb8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x100eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x100ebc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x100ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ec0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x100ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x100ec4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x100ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x100ec8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x100ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x100ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100ed0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x100ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100ed4: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x100ed4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x100ed8: 0x10400249  beqz        $v0, . + 4 + (0x249 << 2)
    ctx->pc = 0x100ED8u;
    {
        const bool branch_taken_0x100ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100ED8u;
            // 0x100edc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ed8) {
            ctx->pc = 0x101800u;
            goto label_101800;
        }
    }
    ctx->pc = 0x100EE0u;
    // 0x100ee0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x100ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100ee4: 0x0  nop
    ctx->pc = 0x100ee4u;
    // NOP
label_100ee8:
    // 0x100ee8: 0xc08e48a  jal         func_239228
    ctx->pc = 0x100EE8u;
    SET_GPR_U32(ctx, 31, 0x100EF0u);
    ctx->pc = 0x100EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100EE8u;
            // 0x100eec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EF0u; }
        if (ctx->pc != 0x100EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EF0u; }
        if (ctx->pc != 0x100EF0u) { return; }
    }
    ctx->pc = 0x100EF0u;
    // 0x100ef0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x100ef0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100ef4: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x100ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x100ef8: 0x5040023c  beql        $v0, $zero, . + 4 + (0x23C << 2)
    ctx->pc = 0x100EF8u;
    {
        const bool branch_taken_0x100ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ef8) {
            ctx->pc = 0x100EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100EF8u;
            // 0x100efc: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1017ECu;
            goto label_1017ec;
        }
    }
    ctx->pc = 0x100F00u;
    // 0x100f00: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100f08: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x100f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x100f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x100f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100f14: 0x400008  jr          $v0
    ctx->pc = 0x100F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100F1Cu: goto label_100f1c;
            case 0x100FA0u: goto label_100fa0;
            case 0x101070u: goto label_101070;
            case 0x101148u: goto label_101148;
            case 0x101220u: goto label_101220;
            case 0x1012F0u: goto label_1012f0;
            case 0x1013C8u: goto label_1013c8;
            case 0x101498u: goto label_101498;
            case 0x101568u: goto label_101568;
            case 0x1016E8u: goto label_1016e8;
            case 0x1017E8u: goto label_1017e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100F1Cu;
label_100f1c:
    // 0x100f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f20: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x100F20u;
    SET_GPR_U32(ctx, 31, 0x100F28u);
    ctx->pc = 0x100F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F20u;
            // 0x100f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F28u; }
        if (ctx->pc != 0x100F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F28u; }
        if (ctx->pc != 0x100F28u) { return; }
    }
    ctx->pc = 0x100F28u;
    // 0x100f28: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x100f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f34: 0xc08e48a  jal         func_239228
    ctx->pc = 0x100F34u;
    SET_GPR_U32(ctx, 31, 0x100F3Cu);
    ctx->pc = 0x100F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F34u;
            // 0x100f38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F3Cu; }
        if (ctx->pc != 0x100F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F3Cu; }
        if (ctx->pc != 0x100F3Cu) { return; }
    }
    ctx->pc = 0x100F3Cu;
    // 0x100f3c: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x100f3cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x100f40: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x100f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100f44: 0xc08e48a  jal         func_239228
    ctx->pc = 0x100F44u;
    SET_GPR_U32(ctx, 31, 0x100F4Cu);
    ctx->pc = 0x100F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F44u;
            // 0x100f48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F4Cu; }
        if (ctx->pc != 0x100F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F4Cu; }
        if (ctx->pc != 0x100F4Cu) { return; }
    }
    ctx->pc = 0x100F4Cu;
    // 0x100f4c: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x100f4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x100f50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f54: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x100f54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f60: 0xc0418ca  jal         func_106328
    ctx->pc = 0x100F60u;
    SET_GPR_U32(ctx, 31, 0x100F68u);
    ctx->pc = 0x100F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F60u;
            // 0x100f64: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F68u; }
        if (ctx->pc != 0x100F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F68u; }
        if (ctx->pc != 0x100F68u) { return; }
    }
    ctx->pc = 0x100F68u;
    // 0x100f68: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100f6c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x100f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x100f70: 0x2442f360  addiu       $v0, $v0, -0xCA0
    ctx->pc = 0x100f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964064));
    // 0x100f74: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x100f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x100f78: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x100f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x100f7c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x100f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x100f80: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x100f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x100f84: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x100f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x100f88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x100f8c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x100f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x100f90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x100f94: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x100f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x100f98: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x100F98u;
    {
        const bool branch_taken_0x100f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F98u;
            // 0x100f9c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f98) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x100FA0u;
label_100fa0:
    // 0x100fa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fa4: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x100FA4u;
    SET_GPR_U32(ctx, 31, 0x100FACu);
    ctx->pc = 0x100FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FA4u;
            // 0x100fa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FACu; }
        if (ctx->pc != 0x100FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FACu; }
        if (ctx->pc != 0x100FACu) { return; }
    }
    ctx->pc = 0x100FACu;
    // 0x100fac: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fb8: 0xc08e48a  jal         func_239228
    ctx->pc = 0x100FB8u;
    SET_GPR_U32(ctx, 31, 0x100FC0u);
    ctx->pc = 0x100FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FB8u;
            // 0x100fbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FC0u; }
        if (ctx->pc != 0x100FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FC0u; }
        if (ctx->pc != 0x100FC0u) { return; }
    }
    ctx->pc = 0x100FC0u;
    // 0x100fc0: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x100fc0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x100fc4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x100fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100fc8: 0xc08e48a  jal         func_239228
    ctx->pc = 0x100FC8u;
    SET_GPR_U32(ctx, 31, 0x100FD0u);
    ctx->pc = 0x100FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FC8u;
            // 0x100fcc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FD0u; }
        if (ctx->pc != 0x100FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FD0u; }
        if (ctx->pc != 0x100FD0u) { return; }
    }
    ctx->pc = 0x100FD0u;
    // 0x100fd0: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x100fd0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x100fd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fd8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x100fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fe0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x100fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fe4: 0xc0418ca  jal         func_106328
    ctx->pc = 0x100FE4u;
    SET_GPR_U32(ctx, 31, 0x100FECu);
    ctx->pc = 0x100FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FE4u;
            // 0x100fe8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FECu; }
        if (ctx->pc != 0x100FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FECu; }
        if (ctx->pc != 0x100FECu) { return; }
    }
    ctx->pc = 0x100FECu;
    // 0x100fec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100ff0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x100ff4: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x100ff8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x100ffc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x100ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x101000: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x101000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x101004: 0xc04060a  jal         func_101828
    ctx->pc = 0x101004u;
    SET_GPR_U32(ctx, 31, 0x10100Cu);
    ctx->pc = 0x101008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101004u;
            // 0x101008: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10100Cu; }
        if (ctx->pc != 0x10100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10100Cu; }
        if (ctx->pc != 0x10100Cu) { return; }
    }
    ctx->pc = 0x10100Cu;
    // 0x10100c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101010: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x101014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101018: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101018u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x10101c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10101Cu;
    {
        const bool branch_taken_0x10101c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10101c) {
            ctx->pc = 0x101020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10101Cu;
            // 0x101020: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x101024u;
            goto label_101024;
        }
    }
    ctx->pc = 0x101024u;
label_101024:
    // 0x101024: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x101024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101028: 0x2012  mflo        $a0
    ctx->pc = 0x101028u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x10102c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10102cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101030: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101034: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x101034u;
    SET_GPR_U32(ctx, 31, 0x10103Cu);
    ctx->pc = 0x101038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101034u;
            // 0x101038: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10103Cu; }
        if (ctx->pc != 0x10103Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10103Cu; }
        if (ctx->pc != 0x10103Cu) { return; }
    }
    ctx->pc = 0x10103Cu;
    // 0x10103c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101040: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x101044: 0x2463f280  addiu       $v1, $v1, -0xD80
    ctx->pc = 0x101044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963840));
    // 0x101048: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10104c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101050: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x101050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x101054: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x101054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101058: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x101058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x10105c: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x10105cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x101060: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x101064: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x101064u;
    {
        const bool branch_taken_0x101064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101064u;
            // 0x101068: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101064) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x10106Cu;
    // 0x10106c: 0x0  nop
    ctx->pc = 0x10106cu;
    // NOP
label_101070:
    // 0x101070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101074: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x101074u;
    SET_GPR_U32(ctx, 31, 0x10107Cu);
    ctx->pc = 0x101078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101074u;
            // 0x101078: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10107Cu; }
        if (ctx->pc != 0x10107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10107Cu; }
        if (ctx->pc != 0x10107Cu) { return; }
    }
    ctx->pc = 0x10107Cu;
    // 0x10107c: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x10107cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101088: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101088u;
    SET_GPR_U32(ctx, 31, 0x101090u);
    ctx->pc = 0x10108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101088u;
            // 0x10108c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101090u; }
        if (ctx->pc != 0x101090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101090u; }
        if (ctx->pc != 0x101090u) { return; }
    }
    ctx->pc = 0x101090u;
    // 0x101090: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101090u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x101094: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x101094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101098: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101098u;
            // 0x10109c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    }
    ctx->pc = 0x1010A0u;
    // 0x1010a0: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x1010a0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1010a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1010a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010a8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1010a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1010acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1010b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010b4: 0xc0418ca  jal         func_106328
    ctx->pc = 0x1010B4u;
    SET_GPR_U32(ctx, 31, 0x1010BCu);
    ctx->pc = 0x1010B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010B4u;
            // 0x1010b8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010BCu; }
        if (ctx->pc != 0x1010BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010BCu; }
        if (ctx->pc != 0x1010BCu) { return; }
    }
    ctx->pc = 0x1010BCu;
    // 0x1010bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1010bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1010c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1010c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1010c4: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x1010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x1010c8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1010c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1010cc: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1010ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1010d0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1010d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1010d4: 0xc04060a  jal         func_101828
    ctx->pc = 0x1010D4u;
    SET_GPR_U32(ctx, 31, 0x1010DCu);
    ctx->pc = 0x1010D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010D4u;
            // 0x1010d8: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010DCu; }
        if (ctx->pc != 0x1010DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010DCu; }
        if (ctx->pc != 0x1010DCu) { return; }
    }
    ctx->pc = 0x1010DCu;
    // 0x1010dc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1010e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1010e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1010e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1010e8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1010e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1010ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1010ECu;
    {
        const bool branch_taken_0x1010ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1010ec) {
            ctx->pc = 0x1010F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1010ECu;
            // 0x1010f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1010F4u;
            goto label_1010f4;
        }
    }
    ctx->pc = 0x1010F4u;
label_1010f4:
    // 0x1010f4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1010f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1010f8: 0x2012  mflo        $a0
    ctx->pc = 0x1010f8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1010fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1010fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101100: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101104: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x101104u;
    SET_GPR_U32(ctx, 31, 0x10110Cu);
    ctx->pc = 0x101108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101104u;
            // 0x101108: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10110Cu; }
        if (ctx->pc != 0x10110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10110Cu; }
        if (ctx->pc != 0x10110Cu) { return; }
    }
    ctx->pc = 0x10110Cu;
    // 0x10110c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101110: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x101114: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x101114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x101118: 0x2463efe0  addiu       $v1, $v1, -0x1020
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963168));
    // 0x10111c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101120: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x101120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x101124: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101128: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x101128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x10112c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x101130: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101134: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x101134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x101138: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10113c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10113cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x101140: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x101140u;
    {
        const bool branch_taken_0x101140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101140u;
            // 0x101144: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101140) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x101148u;
label_101148:
    // 0x101148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10114c: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x10114Cu;
    SET_GPR_U32(ctx, 31, 0x101154u);
    ctx->pc = 0x101150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10114Cu;
            // 0x101150: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101154u; }
        if (ctx->pc != 0x101154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101154u; }
        if (ctx->pc != 0x101154u) { return; }
    }
    ctx->pc = 0x101154u;
    // 0x101154: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10115c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101160: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101160u;
    SET_GPR_U32(ctx, 31, 0x101168u);
    ctx->pc = 0x101164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101160u;
            // 0x101164: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101168u; }
        if (ctx->pc != 0x101168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101168u; }
        if (ctx->pc != 0x101168u) { return; }
    }
    ctx->pc = 0x101168u;
    // 0x101168: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101168u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x10116c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101170: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101170u;
    SET_GPR_U32(ctx, 31, 0x101178u);
    ctx->pc = 0x101174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101170u;
            // 0x101174: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101178u; }
        if (ctx->pc != 0x101178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101178u; }
        if (ctx->pc != 0x101178u) { return; }
    }
    ctx->pc = 0x101178u;
    // 0x101178: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x101178u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x10117c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101180: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x101180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101188: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10118c: 0xc0418ca  jal         func_106328
    ctx->pc = 0x10118Cu;
    SET_GPR_U32(ctx, 31, 0x101194u);
    ctx->pc = 0x101190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10118Cu;
            // 0x101190: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101194u; }
        if (ctx->pc != 0x101194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101194u; }
        if (ctx->pc != 0x101194u) { return; }
    }
    ctx->pc = 0x101194u;
    // 0x101194: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x101198: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x101198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10119c: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x10119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x1011a0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1011a4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1011a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1011a8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1011a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1011ac: 0xc04060a  jal         func_101828
    ctx->pc = 0x1011ACu;
    SET_GPR_U32(ctx, 31, 0x1011B4u);
    ctx->pc = 0x1011B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1011ACu;
            // 0x1011b0: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    }
    ctx->pc = 0x1011B4u;
    // 0x1011b4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1011b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1011b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1011bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1011bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1011c0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1011c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1011c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1011C4u;
    {
        const bool branch_taken_0x1011c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1011c4) {
            ctx->pc = 0x1011C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1011C4u;
            // 0x1011c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1011CCu;
            goto label_1011cc;
        }
    }
    ctx->pc = 0x1011CCu;
label_1011cc:
    // 0x1011cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1011d0: 0x2012  mflo        $a0
    ctx->pc = 0x1011d0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1011d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1011d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1011d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1011d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1011dc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1011DCu;
    SET_GPR_U32(ctx, 31, 0x1011E4u);
    ctx->pc = 0x1011E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1011DCu;
            // 0x1011e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011E4u; }
        if (ctx->pc != 0x1011E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011E4u; }
        if (ctx->pc != 0x1011E4u) { return; }
    }
    ctx->pc = 0x1011E4u;
    // 0x1011e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1011e8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1011ec: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1011ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1011f0: 0x2463f0c0  addiu       $v1, $v1, -0xF40
    ctx->pc = 0x1011f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963392));
    // 0x1011f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1011f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1011f8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1011f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1011fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1011fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101200: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x101200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x101204: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x101208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10120c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x10120cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x101210: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x101214: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x101214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x101218: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x101218u;
    {
        const bool branch_taken_0x101218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101218u;
            // 0x10121c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101218) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x101220u;
label_101220:
    // 0x101220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101224: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x101224u;
    SET_GPR_U32(ctx, 31, 0x10122Cu);
    ctx->pc = 0x101228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101224u;
            // 0x101228: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10122Cu; }
        if (ctx->pc != 0x10122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10122Cu; }
        if (ctx->pc != 0x10122Cu) { return; }
    }
    ctx->pc = 0x10122Cu;
    // 0x10122c: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x10122cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101238: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101238u;
    SET_GPR_U32(ctx, 31, 0x101240u);
    ctx->pc = 0x10123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101238u;
            // 0x10123c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101240u; }
        if (ctx->pc != 0x101240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101240u; }
        if (ctx->pc != 0x101240u) { return; }
    }
    ctx->pc = 0x101240u;
    // 0x101240: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101240u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x101244: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101248: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101248u;
    SET_GPR_U32(ctx, 31, 0x101250u);
    ctx->pc = 0x10124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101248u;
            // 0x10124c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101250u; }
        if (ctx->pc != 0x101250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101250u; }
        if (ctx->pc != 0x101250u) { return; }
    }
    ctx->pc = 0x101250u;
    // 0x101250: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x101250u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x101254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101258: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x101258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10125c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101260: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101264: 0xc0418ca  jal         func_106328
    ctx->pc = 0x101264u;
    SET_GPR_U32(ctx, 31, 0x10126Cu);
    ctx->pc = 0x101268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101264u;
            // 0x101268: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10126Cu; }
        if (ctx->pc != 0x10126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10126Cu; }
        if (ctx->pc != 0x10126Cu) { return; }
    }
    ctx->pc = 0x10126Cu;
    // 0x10126c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x101270: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101274: 0x2442f210  addiu       $v0, $v0, -0xDF0
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
    // 0x101278: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10127c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x10127cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x101280: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x101280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x101284: 0xc04060a  jal         func_101828
    ctx->pc = 0x101284u;
    SET_GPR_U32(ctx, 31, 0x10128Cu);
    ctx->pc = 0x101288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101284u;
            // 0x101288: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    }
    ctx->pc = 0x10128Cu;
    // 0x10128c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101290: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x101294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101298: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101298u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x10129c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10129Cu;
    {
        const bool branch_taken_0x10129c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10129c) {
            ctx->pc = 0x1012A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10129Cu;
            // 0x1012a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1012A4u;
            goto label_1012a4;
        }
    }
    ctx->pc = 0x1012A4u;
label_1012a4:
    // 0x1012a4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1012a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1012a8: 0x2012  mflo        $a0
    ctx->pc = 0x1012a8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1012ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1012acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1012b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1012b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1012b4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1012B4u;
    SET_GPR_U32(ctx, 31, 0x1012BCu);
    ctx->pc = 0x1012B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1012B4u;
            // 0x1012b8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012BCu; }
        if (ctx->pc != 0x1012BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012BCu; }
        if (ctx->pc != 0x1012BCu) { return; }
    }
    ctx->pc = 0x1012BCu;
    // 0x1012bc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1012c0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1012c4: 0x2463f1a0  addiu       $v1, $v1, -0xE60
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963616));
    // 0x1012c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1012cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1012d0: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1012d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1012d4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1012d8: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x1012d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x1012dc: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x1012dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x1012e0: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1012e4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x1012E4u;
    {
        const bool branch_taken_0x1012e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1012E4u;
            // 0x1012e8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012e4) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x1012ECu;
    // 0x1012ec: 0x0  nop
    ctx->pc = 0x1012ecu;
    // NOP
label_1012f0:
    // 0x1012f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1012f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012f4: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x1012F4u;
    SET_GPR_U32(ctx, 31, 0x1012FCu);
    ctx->pc = 0x1012F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1012F4u;
            // 0x1012f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012FCu; }
        if (ctx->pc != 0x1012FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012FCu; }
        if (ctx->pc != 0x1012FCu) { return; }
    }
    ctx->pc = 0x1012FCu;
    // 0x1012fc: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x1012fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101308: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101308u;
    SET_GPR_U32(ctx, 31, 0x101310u);
    ctx->pc = 0x10130Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101308u;
            // 0x10130c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101310u; }
        if (ctx->pc != 0x101310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101310u; }
        if (ctx->pc != 0x101310u) { return; }
    }
    ctx->pc = 0x101310u;
    // 0x101310: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101310u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x101314: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x101314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101318: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101318u;
    SET_GPR_U32(ctx, 31, 0x101320u);
    ctx->pc = 0x10131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101318u;
            // 0x10131c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101320u; }
        if (ctx->pc != 0x101320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101320u; }
        if (ctx->pc != 0x101320u) { return; }
    }
    ctx->pc = 0x101320u;
    // 0x101320: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x101320u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x101324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101328: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x101328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10132c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101330: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101334: 0xc0418ca  jal         func_106328
    ctx->pc = 0x101334u;
    SET_GPR_U32(ctx, 31, 0x10133Cu);
    ctx->pc = 0x101338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101334u;
            // 0x101338: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10133Cu; }
        if (ctx->pc != 0x10133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10133Cu; }
        if (ctx->pc != 0x10133Cu) { return; }
    }
    ctx->pc = 0x10133Cu;
    // 0x10133c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x101340: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101344: 0x2442ef70  addiu       $v0, $v0, -0x1090
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x101348: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10134c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x10134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x101350: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x101350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x101354: 0xc04060a  jal         func_101828
    ctx->pc = 0x101354u;
    SET_GPR_U32(ctx, 31, 0x10135Cu);
    ctx->pc = 0x101358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101354u;
            // 0x101358: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10135Cu; }
        if (ctx->pc != 0x10135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10135Cu; }
        if (ctx->pc != 0x10135Cu) { return; }
    }
    ctx->pc = 0x10135Cu;
    // 0x10135c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101360: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x101364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101368: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101368u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x10136c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10136Cu;
    {
        const bool branch_taken_0x10136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10136c) {
            ctx->pc = 0x101370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10136Cu;
            // 0x101370: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x101374u;
            goto label_101374;
        }
    }
    ctx->pc = 0x101374u;
label_101374:
    // 0x101374: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x101374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101378: 0x2012  mflo        $a0
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x10137c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10137cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101380: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101384: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x101384u;
    SET_GPR_U32(ctx, 31, 0x10138Cu);
    ctx->pc = 0x101388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101384u;
            // 0x101388: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10138Cu; }
        if (ctx->pc != 0x10138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10138Cu; }
        if (ctx->pc != 0x10138Cu) { return; }
    }
    ctx->pc = 0x10138Cu;
    // 0x10138c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101390: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x101394: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x101394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x101398: 0x2463ef00  addiu       $v1, $v1, -0x1100
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x10139c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1013a0: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1013a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1013a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1013a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1013a8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1013ac: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1013acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1013b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1013b4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1013b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1013b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1013b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1013bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1013bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1013c0: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1013C0u;
    {
        const bool branch_taken_0x1013c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1013C0u;
            // 0x1013c4: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013c0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1013C8u;
label_1013c8:
    // 0x1013c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1013c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013cc: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x1013CCu;
    SET_GPR_U32(ctx, 31, 0x1013D4u);
    ctx->pc = 0x1013D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013CCu;
            // 0x1013d0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013D4u; }
        if (ctx->pc != 0x1013D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013D4u; }
        if (ctx->pc != 0x1013D4u) { return; }
    }
    ctx->pc = 0x1013D4u;
    // 0x1013d4: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x1013d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1013d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1013d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1013dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013e0: 0xc08e48a  jal         func_239228
    ctx->pc = 0x1013E0u;
    SET_GPR_U32(ctx, 31, 0x1013E8u);
    ctx->pc = 0x1013E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013E0u;
            // 0x1013e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013E8u; }
        if (ctx->pc != 0x1013E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013E8u; }
        if (ctx->pc != 0x1013E8u) { return; }
    }
    ctx->pc = 0x1013E8u;
    // 0x1013e8: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x1013e8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1013ec: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1013f0: 0xc08e48a  jal         func_239228
    ctx->pc = 0x1013F0u;
    SET_GPR_U32(ctx, 31, 0x1013F8u);
    ctx->pc = 0x1013F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013F0u;
            // 0x1013f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013F8u; }
        if (ctx->pc != 0x1013F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013F8u; }
        if (ctx->pc != 0x1013F8u) { return; }
    }
    ctx->pc = 0x1013F8u;
    // 0x1013f8: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x1013f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1013fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1013fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101400: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x101400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101408: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10140c: 0xc0418ca  jal         func_106328
    ctx->pc = 0x10140Cu;
    SET_GPR_U32(ctx, 31, 0x101414u);
    ctx->pc = 0x101410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10140Cu;
            // 0x101410: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101414u; }
        if (ctx->pc != 0x101414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101414u; }
        if (ctx->pc != 0x101414u) { return; }
    }
    ctx->pc = 0x101414u;
    // 0x101414: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x101414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x101418: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x101418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10141c: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x10141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x101420: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101424: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x101424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x101428: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x101428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x10142c: 0xc04060a  jal         func_101828
    ctx->pc = 0x10142Cu;
    SET_GPR_U32(ctx, 31, 0x101434u);
    ctx->pc = 0x101430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10142Cu;
            // 0x101430: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101434u; }
        if (ctx->pc != 0x101434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101434u; }
        if (ctx->pc != 0x101434u) { return; }
    }
    ctx->pc = 0x101434u;
    // 0x101434: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101438: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x10143c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101440: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101440u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x101444: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x101444u;
    {
        const bool branch_taken_0x101444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101444) {
            ctx->pc = 0x101448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101444u;
            // 0x101448: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10144Cu;
            goto label_10144c;
        }
    }
    ctx->pc = 0x10144Cu;
label_10144c:
    // 0x10144c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101450: 0x2012  mflo        $a0
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x101454: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10145c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x10145Cu;
    SET_GPR_U32(ctx, 31, 0x101464u);
    ctx->pc = 0x101460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10145Cu;
            // 0x101460: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101464u; }
        if (ctx->pc != 0x101464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101464u; }
        if (ctx->pc != 0x101464u) { return; }
    }
    ctx->pc = 0x101464u;
    // 0x101464: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101468: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x10146c: 0x2463ee90  addiu       $v1, $v1, -0x1170
    ctx->pc = 0x10146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962832));
    // 0x101470: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x101474: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101478: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x101478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x10147c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x10147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101480: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x101480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x101484: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x101484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x101488: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x10148c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x10148Cu;
    {
        const bool branch_taken_0x10148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10148Cu;
            // 0x101490: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10148c) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x101494u;
    // 0x101494: 0x0  nop
    ctx->pc = 0x101494u;
    // NOP
label_101498:
    // 0x101498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10149c: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x10149Cu;
    SET_GPR_U32(ctx, 31, 0x1014A4u);
    ctx->pc = 0x1014A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10149Cu;
            // 0x1014a0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A4u; }
        if (ctx->pc != 0x1014A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A4u; }
        if (ctx->pc != 0x1014A4u) { return; }
    }
    ctx->pc = 0x1014A4u;
    // 0x1014a4: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x1014a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1014a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1014a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1014acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014b0: 0xc08e48a  jal         func_239228
    ctx->pc = 0x1014B0u;
    SET_GPR_U32(ctx, 31, 0x1014B8u);
    ctx->pc = 0x1014B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014B0u;
            // 0x1014b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B8u; }
        if (ctx->pc != 0x1014B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B8u; }
        if (ctx->pc != 0x1014B8u) { return; }
    }
    ctx->pc = 0x1014B8u;
    // 0x1014b8: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x1014b8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1014bc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1014bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1014c0: 0xc08e48a  jal         func_239228
    ctx->pc = 0x1014C0u;
    SET_GPR_U32(ctx, 31, 0x1014C8u);
    ctx->pc = 0x1014C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014C0u;
            // 0x1014c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014C8u; }
        if (ctx->pc != 0x1014C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014C8u; }
        if (ctx->pc != 0x1014C8u) { return; }
    }
    ctx->pc = 0x1014C8u;
    // 0x1014c8: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x1014c8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1014cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1014ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1014d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1014d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1014d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014dc: 0xc0418ca  jal         func_106328
    ctx->pc = 0x1014DCu;
    SET_GPR_U32(ctx, 31, 0x1014E4u);
    ctx->pc = 0x1014E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014DCu;
            // 0x1014e0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014E4u; }
        if (ctx->pc != 0x1014E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014E4u; }
        if (ctx->pc != 0x1014E4u) { return; }
    }
    ctx->pc = 0x1014E4u;
    // 0x1014e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1014e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1014e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1014e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1014ec: 0x2442ee20  addiu       $v0, $v0, -0x11E0
    ctx->pc = 0x1014ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962720));
    // 0x1014f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1014f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1014f4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1014f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1014f8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1014f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1014fc: 0xc04060a  jal         func_101828
    ctx->pc = 0x1014FCu;
    SET_GPR_U32(ctx, 31, 0x101504u);
    ctx->pc = 0x101500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014FCu;
            // 0x101500: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101504u; }
        if (ctx->pc != 0x101504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101504u; }
        if (ctx->pc != 0x101504u) { return; }
    }
    ctx->pc = 0x101504u;
    // 0x101504: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101508: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x10150c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101510: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101510u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x101514: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x101514u;
    {
        const bool branch_taken_0x101514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101514) {
            ctx->pc = 0x101518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101514u;
            // 0x101518: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10151Cu;
            goto label_10151c;
        }
    }
    ctx->pc = 0x10151Cu;
label_10151c:
    // 0x10151c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x10151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101520: 0x2012  mflo        $a0
    ctx->pc = 0x101520u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x101524: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101528: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10152c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x10152Cu;
    SET_GPR_U32(ctx, 31, 0x101534u);
    ctx->pc = 0x101530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10152Cu;
            // 0x101530: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101534u; }
        if (ctx->pc != 0x101534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101534u; }
        if (ctx->pc != 0x101534u) { return; }
    }
    ctx->pc = 0x101534u;
    // 0x101534: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101538: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x10153c: 0x2463edb0  addiu       $v1, $v1, -0x1250
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962608));
    // 0x101540: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x101540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x101544: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101548: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x101548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x10154c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x10154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101550: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x101550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x101554: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x101554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x101558: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x101558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x10155c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x10155Cu;
    {
        const bool branch_taken_0x10155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10155Cu;
            // 0x101560: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10155c) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x101564u;
    // 0x101564: 0x0  nop
    ctx->pc = 0x101564u;
    // NOP
label_101568:
    // 0x101568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10156c: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x10156Cu;
    SET_GPR_U32(ctx, 31, 0x101574u);
    ctx->pc = 0x101570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10156Cu;
            // 0x101570: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101574u; }
        if (ctx->pc != 0x101574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101574u; }
        if (ctx->pc != 0x101574u) { return; }
    }
    ctx->pc = 0x101574u;
    // 0x101574: 0x8e70001c  lw          $s0, 0x1C($s3)
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10157c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101580: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101580u;
            // 0x101584: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101588u; }
        if (ctx->pc != 0x101588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101588u; }
        if (ctx->pc != 0x101588u) { return; }
    }
    ctx->pc = 0x101588u;
    // 0x101588: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101588u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x10158c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101590: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101590u;
    SET_GPR_U32(ctx, 31, 0x101598u);
    ctx->pc = 0x101594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101590u;
            // 0x101594: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101598u; }
        if (ctx->pc != 0x101598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101598u; }
        if (ctx->pc != 0x101598u) { return; }
    }
    ctx->pc = 0x101598u;
    // 0x101598: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x101598u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x10159c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015a0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1015a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1015a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1015a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015ac: 0xc0418ca  jal         func_106328
    ctx->pc = 0x1015ACu;
    SET_GPR_U32(ctx, 31, 0x1015B4u);
    ctx->pc = 0x1015B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1015ACu;
            // 0x1015b0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015B4u; }
        if (ctx->pc != 0x1015B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015B4u; }
        if (ctx->pc != 0x1015B4u) { return; }
    }
    ctx->pc = 0x1015B4u;
    // 0x1015b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1015b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1015b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1015bc: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x1015c0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1015c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1015c4: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x1015c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x1015c8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1015c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1015cc: 0xc04060a  jal         func_101828
    ctx->pc = 0x1015CCu;
    SET_GPR_U32(ctx, 31, 0x1015D4u);
    ctx->pc = 0x1015D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1015CCu;
            // 0x1015d0: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D4u; }
        if (ctx->pc != 0x1015D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D4u; }
        if (ctx->pc != 0x1015D4u) { return; }
    }
    ctx->pc = 0x1015D4u;
    // 0x1015d4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1015d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1015d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1015dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1015e0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1015e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1015e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1015E4u;
    {
        const bool branch_taken_0x1015e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015e4) {
            ctx->pc = 0x1015E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1015E4u;
            // 0x1015e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1015ECu;
            goto label_1015ec;
        }
    }
    ctx->pc = 0x1015ECu;
label_1015ec:
    // 0x1015ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1015ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1015f0: 0x2012  mflo        $a0
    ctx->pc = 0x1015f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1015f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1015f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1015f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1015f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1015fc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1015FCu;
    SET_GPR_U32(ctx, 31, 0x101604u);
    ctx->pc = 0x101600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1015FCu;
            // 0x101600: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101604u; }
        if (ctx->pc != 0x101604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101604u; }
        if (ctx->pc != 0x101604u) { return; }
    }
    ctx->pc = 0x101604u;
    // 0x101604: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x101608: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x10160c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x10160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x101610: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x101610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x101614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x101618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10161c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101620: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x101620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
    // 0x101624: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x101624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x101628: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x101628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
    // 0x10162c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10162cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101630: 0xae450068  sw          $a1, 0x68($s2)
    ctx->pc = 0x101630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 5));
    // 0x101634: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x101634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x101638: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x101638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
    // 0x10163c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_101640:
    // 0x101640: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x101640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x101644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x101644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x101648: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x101648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x10164c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x10164cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x101650: 0x0  nop
    ctx->pc = 0x101650u;
    // NOP
    // 0x101654: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101654u;
    {
        const bool branch_taken_0x101654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101654u;
            // 0x101658: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101654) {
            ctx->pc = 0x101640u;
            runtime->cooperativeGuestYield();
            goto label_101640;
        }
    }
    ctx->pc = 0x10165Cu;
    // 0x10165c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x101660: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x101664: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x101664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x101668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10166c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10166cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101670: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x101670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x101674: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x101674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x101678: 0xc04060a  jal         func_101828
    ctx->pc = 0x101678u;
    SET_GPR_U32(ctx, 31, 0x101680u);
    ctx->pc = 0x10167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101678u;
            // 0x10167c: 0xae42007c  sw          $v0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101680u; }
        if (ctx->pc != 0x101680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101680u; }
        if (ctx->pc != 0x101680u) { return; }
    }
    ctx->pc = 0x101680u;
    // 0x101680: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x101680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x101684: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x101684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x101688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10168c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x10168cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x101690: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x101690u;
    {
        const bool branch_taken_0x101690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101690) {
            ctx->pc = 0x101694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101690u;
            // 0x101694: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x101698u;
            goto label_101698;
        }
    }
    ctx->pc = 0x101698u;
label_101698:
    // 0x101698: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x101698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x10169c: 0x2012  mflo        $a0
    ctx->pc = 0x10169cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1016a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1016a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1016a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1016a8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1016A8u;
    SET_GPR_U32(ctx, 31, 0x1016B0u);
    ctx->pc = 0x1016ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016A8u;
            // 0x1016ac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B0u; }
        if (ctx->pc != 0x1016B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B0u; }
        if (ctx->pc != 0x1016B0u) { return; }
    }
    ctx->pc = 0x1016B0u;
    // 0x1016b0: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x1016b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x1016b4: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1016b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1016b8: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x1016b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x1016bc: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x1016bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x1016c0: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x1016c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x1016c4: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x1016c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
    // 0x1016c8: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x1016c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x1016cc: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x1016ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
    // 0x1016d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1016d4: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x1016d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1016d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1016d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1016dc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1016dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1016e0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1016E0u;
    {
        const bool branch_taken_0x1016e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1016E0u;
            // 0x1016e4: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016e0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1016E8u;
label_1016e8:
    // 0x1016e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1016e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016ec: 0xc04036e  jal         func_100DB8
    ctx->pc = 0x1016ECu;
    SET_GPR_U32(ctx, 31, 0x1016F4u);
    ctx->pc = 0x1016F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016ECu;
            // 0x1016f0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100DB8u;
    if (runtime->hasFunction(0x100DB8u)) {
        auto targetFn = runtime->lookupFunction(0x100DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016F4u; }
        if (ctx->pc != 0x1016F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100db8_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016F4u; }
        if (ctx->pc != 0x1016F4u) { return; }
    }
    ctx->pc = 0x1016F4u;
    // 0x1016f4: 0x8e72001c  lw          $s2, 0x1C($s3)
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1016f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1016f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1016fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101700: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101700u;
    SET_GPR_U32(ctx, 31, 0x101708u);
    ctx->pc = 0x101704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101700u;
            // 0x101704: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101708u; }
        if (ctx->pc != 0x101708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101708u; }
        if (ctx->pc != 0x101708u) { return; }
    }
    ctx->pc = 0x101708u;
    // 0x101708: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x101708u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x10170c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x10170cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x101710: 0xc08e48a  jal         func_239228
    ctx->pc = 0x101710u;
    SET_GPR_U32(ctx, 31, 0x101718u);
    ctx->pc = 0x101714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101710u;
            // 0x101714: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101718u; }
        if (ctx->pc != 0x101718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101718u; }
        if (ctx->pc != 0x101718u) { return; }
    }
    ctx->pc = 0x101718u;
    // 0x101718: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x101718u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x10171c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101720: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x101720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101728: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10172c: 0xc0418ca  jal         func_106328
    ctx->pc = 0x10172Cu;
    SET_GPR_U32(ctx, 31, 0x101734u);
    ctx->pc = 0x101730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10172Cu;
            // 0x101730: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106328u;
    if (runtime->hasFunction(0x106328u)) {
        auto targetFn = runtime->lookupFunction(0x106328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101734u; }
        if (ctx->pc != 0x101734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_106328_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101734u; }
        if (ctx->pc != 0x101734u) { return; }
    }
    ctx->pc = 0x101734u;
    // 0x101734: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x101734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x101738: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x101738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10173c: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x101740: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101744: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x101744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x101748: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x101748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x10174c: 0xc04060a  jal         func_101828
    ctx->pc = 0x10174Cu;
    SET_GPR_U32(ctx, 31, 0x101754u);
    ctx->pc = 0x101750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10174Cu;
            // 0x101750: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101754u; }
        if (ctx->pc != 0x101754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101754u; }
        if (ctx->pc != 0x101754u) { return; }
    }
    ctx->pc = 0x101754u;
    // 0x101754: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101758: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x101758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x10175c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101760: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x101760u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x101764: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x101764u;
    {
        const bool branch_taken_0x101764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101764) {
            ctx->pc = 0x101768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101764u;
            // 0x101768: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10176Cu;
            goto label_10176c;
        }
    }
    ctx->pc = 0x10176Cu;
label_10176c:
    // 0x10176c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x10176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x101770: 0x2012  mflo        $a0
    ctx->pc = 0x101770u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x101774: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101778: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10177c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x10177Cu;
    SET_GPR_U32(ctx, 31, 0x101784u);
    ctx->pc = 0x101780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10177Cu;
            // 0x101780: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101784u; }
        if (ctx->pc != 0x101784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101784u; }
        if (ctx->pc != 0x101784u) { return; }
    }
    ctx->pc = 0x101784u;
    // 0x101784: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101788: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x10178c: 0x2463ebe8  addiu       $v1, $v1, -0x1418
    ctx->pc = 0x10178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962152));
    // 0x101790: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x101790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x101794: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101798: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x101798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x10179c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x10179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1017a0: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x1017a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x1017a4: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x1017a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x1017a8: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1017ac: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1017acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1017b0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1017b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1017b4: 0x0  nop
    ctx->pc = 0x1017b4u;
    // NOP
label_1017b8:
    // 0x1017b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1017bc: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1017bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1017c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1017c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1017c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1017c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1017c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1017c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1017cc: 0x0  nop
    ctx->pc = 0x1017ccu;
    // NOP
label_1017d0:
    // 0x1017d0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1017d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1017d4: 0xc08e48a  jal         func_239228
    ctx->pc = 0x1017D4u;
    SET_GPR_U32(ctx, 31, 0x1017DCu);
    ctx->pc = 0x1017D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017D4u;
            // 0x1017d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239228u;
    if (runtime->hasFunction(0x239228u)) {
        auto targetFn = runtime->lookupFunction(0x239228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017DCu; }
        if (ctx->pc != 0x1017DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239228_0x239248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017DCu; }
        if (ctx->pc != 0x1017DCu) { return; }
    }
    ctx->pc = 0x1017DCu;
    // 0x1017dc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1017dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1017e0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1017e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1017e4: 0x0  nop
    ctx->pc = 0x1017e4u;
    // NOP
label_1017e8:
    // 0x1017e8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1017e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1017ec:
    // 0x1017ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1017ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1017f0: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x1017f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1017f4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1017f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1017f8: 0x5440fdbb  bnel        $v0, $zero, . + 4 + (-0x245 << 2)
    ctx->pc = 0x1017F8u;
    {
        const bool branch_taken_0x1017f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1017f8) {
            ctx->pc = 0x1017FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1017F8u;
            // 0x1017fc: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100EE8u;
            runtime->cooperativeGuestYield();
            goto label_100ee8;
        }
    }
    ctx->pc = 0x101800u;
label_101800:
    // 0x101800: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x101800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101804: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x101804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101808: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x101808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10180c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10180cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101810: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x101810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101814: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x101814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10181c: 0x3e00008  jr          $ra
    ctx->pc = 0x10181Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10181Cu;
            // 0x101820: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100EE8u: goto label_100ee8;
            case 0x100F1Cu: goto label_100f1c;
            case 0x100FA0u: goto label_100fa0;
            case 0x101024u: goto label_101024;
            case 0x101070u: goto label_101070;
            case 0x1010F4u: goto label_1010f4;
            case 0x101148u: goto label_101148;
            case 0x1011CCu: goto label_1011cc;
            case 0x101220u: goto label_101220;
            case 0x1012A4u: goto label_1012a4;
            case 0x1012F0u: goto label_1012f0;
            case 0x101374u: goto label_101374;
            case 0x1013C8u: goto label_1013c8;
            case 0x10144Cu: goto label_10144c;
            case 0x101498u: goto label_101498;
            case 0x10151Cu: goto label_10151c;
            case 0x101568u: goto label_101568;
            case 0x1015ECu: goto label_1015ec;
            case 0x101640u: goto label_101640;
            case 0x101698u: goto label_101698;
            case 0x1016E8u: goto label_1016e8;
            case 0x10176Cu: goto label_10176c;
            case 0x1017B8u: goto label_1017b8;
            case 0x1017D0u: goto label_1017d0;
            case 0x1017E8u: goto label_1017e8;
            case 0x1017ECu: goto label_1017ec;
            case 0x101800u: goto label_101800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101824u;
    // 0x101824: 0x0  nop
    ctx->pc = 0x101824u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144BE8
// Address: 0x144be8 - 0x144d20
void sub_00144BE8_0x144be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144BE8_0x144be8");
#endif

    ctx->pc = 0x144be8u;

    // 0x144be8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x144bec: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x144becu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x144bf0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x144bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x144bf4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x144bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x144bf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bfc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x144bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x144c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x144c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c04: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x144c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x144c08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x144c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c0c: 0x8d02720c  lw          $v0, 0x720C($t0)
    ctx->pc = 0x144c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29196)));
    // 0x144c10: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x144c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x144c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x144c18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144C18u;
    {
        const bool branch_taken_0x144c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C18u;
            // 0x144c1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c18) {
            ctx->pc = 0x144C34u;
            goto label_144c34;
        }
    }
    ctx->pc = 0x144C20u;
    // 0x144c20: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x144c24: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x144c28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144c2c: 0xac437208  sw          $v1, 0x7208($v0)
    ctx->pc = 0x144c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29192), GPR_U32(ctx, 3));
    // 0x144c30: 0xad04720c  sw          $a0, 0x720C($t0)
    ctx->pc = 0x144c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 29196), GPR_U32(ctx, 4));
label_144c34:
    // 0x144c34: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144c38: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x144c3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x144C3Cu;
    {
        const bool branch_taken_0x144c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x144C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C3Cu;
            // 0x144c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c3c) {
            ctx->pc = 0x144C68u;
            goto label_144c68;
        }
    }
    ctx->pc = 0x144C44u;
    // 0x144c44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x144c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x144c48: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x144c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x144c4c: 0x8c467208  lw          $a2, 0x7208($v0)
    ctx->pc = 0x144c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29192)));
    // 0x144c50: 0x24a51818  addiu       $a1, $a1, 0x1818
    ctx->pc = 0x144c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6168));
    // 0x144c54: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x144C54u;
    SET_GPR_U32(ctx, 31, 0x144C5Cu);
    ctx->pc = 0x144C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C54u;
            // 0x144c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C5Cu; }
        if (ctx->pc != 0x144C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C5Cu; }
        if (ctx->pc != 0x144C5Cu) { return; }
    }
    ctx->pc = 0x144C5Cu;
    // 0x144c5c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x144C5Cu;
    {
        const bool branch_taken_0x144c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C5Cu;
            // 0x144c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c5c) {
            ctx->pc = 0x144C94u;
            goto label_144c94;
        }
    }
    ctx->pc = 0x144C64u;
    // 0x144c64: 0x0  nop
    ctx->pc = 0x144c64u;
    // NOP
label_144c68:
    // 0x144c68: 0xc0a2589  jal         func_289624
    ctx->pc = 0x144C68u;
    SET_GPR_U32(ctx, 31, 0x144C70u);
    ctx->pc = 0x144C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C68u;
            // 0x144c6c: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C70u; }
        if (ctx->pc != 0x144C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C70u; }
        if (ctx->pc != 0x144C70u) { return; }
    }
    ctx->pc = 0x144C70u;
    // 0x144c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c74: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x144C74u;
    {
        const bool branch_taken_0x144c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C74u;
            // 0x144c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c74) {
            ctx->pc = 0x144C9Cu;
            goto label_144c9c;
        }
    }
    ctx->pc = 0x144C7Cu;
    // 0x144c7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c80: 0xc051274  jal         func_1449D0
    ctx->pc = 0x144C80u;
    SET_GPR_U32(ctx, 31, 0x144C88u);
    ctx->pc = 0x144C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C80u;
            // 0x144c84: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1449D0u;
    if (runtime->hasFunction(0x1449D0u)) {
        auto targetFn = runtime->lookupFunction(0x1449D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C88u; }
        if (ctx->pc != 0x144C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001449D0_0x1449d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C88u; }
        if (ctx->pc != 0x144C88u) { return; }
    }
    ctx->pc = 0x144C88u;
    // 0x144c88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c8c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x144C8Cu;
    {
        const bool branch_taken_0x144c8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x144C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C8Cu;
            // 0x144c90: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c8c) {
            ctx->pc = 0x144C9Cu;
            goto label_144c9c;
        }
    }
    ctx->pc = 0x144C94u;
label_144c94:
    // 0x144c94: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x144C94u;
    {
        const bool branch_taken_0x144c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C94u;
            // 0x144c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c94) {
            ctx->pc = 0x144D00u;
            goto label_144d00;
        }
    }
    ctx->pc = 0x144C9Cu;
label_144c9c:
    // 0x144c9c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x144c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144ca0: 0xc0511cc  jal         func_144730
    ctx->pc = 0x144CA0u;
    SET_GPR_U32(ctx, 31, 0x144CA8u);
    ctx->pc = 0x144CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CA0u;
            // 0x144ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144730u;
    if (runtime->hasFunction(0x144730u)) {
        auto targetFn = runtime->lookupFunction(0x144730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CA8u; }
        if (ctx->pc != 0x144CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144730_0x144730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CA8u; }
        if (ctx->pc != 0x144CA8u) { return; }
    }
    ctx->pc = 0x144CA8u;
    // 0x144ca8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x144ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cac: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x144CACu;
    {
        const bool branch_taken_0x144cac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x144cac) {
            ctx->pc = 0x144CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144CACu;
            // 0x144cb0: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144CD0u;
            goto label_144cd0;
        }
    }
    ctx->pc = 0x144CB4u;
    // 0x144cb4: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x144cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x144cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x144cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cc0: 0xc05104e  jal         func_144138
    ctx->pc = 0x144CC0u;
    SET_GPR_U32(ctx, 31, 0x144CC8u);
    ctx->pc = 0x144CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CC0u;
            // 0x144cc4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144138u;
    if (runtime->hasFunction(0x144138u)) {
        auto targetFn = runtime->lookupFunction(0x144138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CC8u; }
        if (ctx->pc != 0x144CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144138_0x144138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CC8u; }
        if (ctx->pc != 0x144CC8u) { return; }
    }
    ctx->pc = 0x144CC8u;
    // 0x144cc8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x144CC8u;
    {
        const bool branch_taken_0x144cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144CC8u;
            // 0x144ccc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cc8) {
            ctx->pc = 0x144D04u;
            goto label_144d04;
        }
    }
    ctx->pc = 0x144CD0u;
label_144cd0:
    // 0x144cd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd4: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x144cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x144cd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x144cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cdc: 0xac720d30  sw          $s2, 0xD30($v1)
    ctx->pc = 0x144cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 18));
    // 0x144ce0: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x144ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x144ce4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x144ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x144ce8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x144ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x144cec: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x144cf0: 0x40f809  jalr        $v0
    ctx->pc = 0x144CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144CF8u);
        ctx->pc = 0x144CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144CF0u;
            // 0x144cf4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x144CF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144C34u: goto label_144c34;
            case 0x144C68u: goto label_144c68;
            case 0x144C94u: goto label_144c94;
            case 0x144C9Cu: goto label_144c9c;
            case 0x144CD0u: goto label_144cd0;
            case 0x144D00u: goto label_144d00;
            case 0x144D04u: goto label_144d04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144CF8u; }
            if (ctx->pc != 0x144CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x144CF8u;
    // 0x144cf8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x144cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x144cfc: 0xac600d30  sw          $zero, 0xD30($v1)
    ctx->pc = 0x144cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 0));
label_144d00:
    // 0x144d00: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x144d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144d04:
    // 0x144d04: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x144d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144d08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x144d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144d0c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x144d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144d10: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x144d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d18: 0x3e00008  jr          $ra
    ctx->pc = 0x144D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144D18u;
            // 0x144d1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144C34u: goto label_144c34;
            case 0x144C68u: goto label_144c68;
            case 0x144C94u: goto label_144c94;
            case 0x144C9Cu: goto label_144c9c;
            case 0x144CD0u: goto label_144cd0;
            case 0x144D00u: goto label_144d00;
            case 0x144D04u: goto label_144d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144D20u;
}

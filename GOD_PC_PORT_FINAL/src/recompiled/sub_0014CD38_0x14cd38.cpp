#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CD38
// Address: 0x14cd38 - 0x14cdf8
void sub_0014CD38_0x14cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CD38_0x14cd38");
#endif

    ctx->pc = 0x14cd38u;

    // 0x14cd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cd3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14cd40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cd44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd48: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14cd48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14cd4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14cd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14cd50: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14CD50u;
    {
        const bool branch_taken_0x14cd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD50u;
            // 0x14cd54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd50) {
            ctx->pc = 0x14CDB0u;
            goto label_14cdb0;
        }
    }
    ctx->pc = 0x14CD58u;
    // 0x14cd58: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x14cd5c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x14cd60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cd64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CD64u;
    {
        const bool branch_taken_0x14cd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD64u;
            // 0x14cd68: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd64) {
            ctx->pc = 0x14CD78u;
            goto label_14cd78;
        }
    }
    ctx->pc = 0x14CD6Cu;
    // 0x14cd6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14cd70: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x14cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x14cd74: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x14cd74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14cd78:
    // 0x14cd78: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CD78u;
    {
        const bool branch_taken_0x14cd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cd78) {
            ctx->pc = 0x14CD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD78u;
            // 0x14cd7c: 0x96020022  lhu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CD90u;
            goto label_14cd90;
        }
    }
    ctx->pc = 0x14CD80u;
    // 0x14cd80: 0xc053b56  jal         func_14ED58
    ctx->pc = 0x14CD80u;
    SET_GPR_U32(ctx, 31, 0x14CD88u);
    ctx->pc = 0x14CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD80u;
            // 0x14cd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ED58u;
    if (runtime->hasFunction(0x14ED58u)) {
        auto targetFn = runtime->lookupFunction(0x14ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ED58_0x14ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    }
    ctx->pc = 0x14CD88u;
    // 0x14cd88: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x14cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x14cd8c: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x14cd8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_14cd90:
    // 0x14cd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd94: 0xc053254  jal         func_14C950
    ctx->pc = 0x14CD94u;
    SET_GPR_U32(ctx, 31, 0x14CD9Cu);
    ctx->pc = 0x14CD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD94u;
            // 0x14cd98: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (runtime->hasFunction(0x14C950u)) {
        auto targetFn = runtime->lookupFunction(0x14C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD9Cu; }
        if (ctx->pc != 0x14CD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C950_0x14c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD9Cu; }
        if (ctx->pc != 0x14CD9Cu) { return; }
    }
    ctx->pc = 0x14CD9Cu;
    // 0x14cd9c: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x14cd9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14cda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cda4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14cda8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14CDA8u;
    {
        const bool branch_taken_0x14cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDA8u;
            // 0x14cdac: 0xa2030030  sb          $v1, 0x30($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cda8) {
            ctx->pc = 0x14CDE8u;
            goto label_14cde8;
        }
    }
    ctx->pc = 0x14CDB0u;
label_14cdb0:
    // 0x14cdb0: 0xc053b78  jal         func_14EDE0
    ctx->pc = 0x14CDB0u;
    SET_GPR_U32(ctx, 31, 0x14CDB8u);
    ctx->pc = 0x14CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDB0u;
            // 0x14cdb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EDE0u;
    if (runtime->hasFunction(0x14EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDB8u; }
        if (ctx->pc != 0x14CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ede0_0x14ee18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDB8u; }
        if (ctx->pc != 0x14CDB8u) { return; }
    }
    ctx->pc = 0x14CDB8u;
    // 0x14cdb8: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x14cdb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x14cdbc: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x14cdbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14cdc0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CDC0u;
    {
        const bool branch_taken_0x14cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cdc0) {
            ctx->pc = 0x14CDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDC0u;
            // 0x14cdc4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CDD0u;
            goto label_14cdd0;
        }
    }
    ctx->pc = 0x14CDC8u;
    // 0x14cdc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14CDC8u;
    {
        const bool branch_taken_0x14cdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDC8u;
            // 0x14cdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdc8) {
            ctx->pc = 0x14CDE8u;
            goto label_14cde8;
        }
    }
    ctx->pc = 0x14CDD0u;
label_14cdd0:
    // 0x14cdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cdd4: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x14cdd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x14cdd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cddc: 0xc053254  jal         func_14C950
    ctx->pc = 0x14CDDCu;
    SET_GPR_U32(ctx, 31, 0x14CDE4u);
    ctx->pc = 0x14CDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDDCu;
            // 0x14cde0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (runtime->hasFunction(0x14C950u)) {
        auto targetFn = runtime->lookupFunction(0x14C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDE4u; }
        if (ctx->pc != 0x14CDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C950_0x14c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDE4u; }
        if (ctx->pc != 0x14CDE4u) { return; }
    }
    ctx->pc = 0x14CDE4u;
    // 0x14cde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cde8:
    // 0x14cde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDF0u;
            // 0x14cdf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CD78u: goto label_14cd78;
            case 0x14CD90u: goto label_14cd90;
            case 0x14CDB0u: goto label_14cdb0;
            case 0x14CDD0u: goto label_14cdd0;
            case 0x14CDE8u: goto label_14cde8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CDF8u;
}

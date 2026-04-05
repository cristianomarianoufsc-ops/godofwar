#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_136050
// Address: 0x136050 - 0x136260
void entry_136050_0x136260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_136050_0x136260");
#endif

    ctx->pc = 0x136050u;

    // 0x136050: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x136050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x136054: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x136054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x136058: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x136058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13605c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x13605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x136060: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x136060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136064: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x136064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x136068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13606c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136070: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x136074: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x136078: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x136078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13607c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x13607Cu;
    {
        const bool branch_taken_0x13607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13607Cu;
            // 0x136080: 0x27bdff50  addiu       $sp, $sp, -0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13607c) {
            ctx->pc = 0x136250u;
            goto label_136250;
        }
    }
    ctx->pc = 0x136084u;
    // 0x136084: 0x0  nop
    ctx->pc = 0x136084u;
    // NOP
label_136088:
    // 0x136088: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x136088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x13608c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136090: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x136090u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x136094: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x136094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x136098: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x136098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13609c: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x13609Cu;
    {
        const bool branch_taken_0x13609c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13609c) {
            ctx->pc = 0x1360A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13609Cu;
            // 0x1360a0: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136248u;
            goto label_136248;
        }
    }
    ctx->pc = 0x1360A4u;
    // 0x1360a4: 0x24830024  addiu       $v1, $a0, 0x24
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1360a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1360a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360ac: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1360acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1360b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1360b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1360b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1360b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1360b8:
    // 0x1360b8: 0x0  nop
    ctx->pc = 0x1360b8u;
    // NOP
    // 0x1360bc: 0x0  nop
    ctx->pc = 0x1360bcu;
    // NOP
    // 0x1360c0: 0x0  nop
    ctx->pc = 0x1360c0u;
    // NOP
    // 0x1360c4: 0x0  nop
    ctx->pc = 0x1360c4u;
    // NOP
    // 0x1360c8: 0x0  nop
    ctx->pc = 0x1360c8u;
    // NOP
    // 0x1360cc: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1360CCu;
    {
        const bool branch_taken_0x1360cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1360cc) {
            ctx->pc = 0x1360D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1360CCu;
            // 0x1360d0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1360B8u;
            runtime->cooperativeGuestYield();
            goto label_1360b8;
        }
    }
    ctx->pc = 0x1360D4u;
    // 0x1360d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1360d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1360d8: 0xacc40080  sw          $a0, 0x80($a2)
    ctx->pc = 0x1360d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 4));
    // 0x1360dc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1360dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1360e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1360E0u;
    {
        const bool branch_taken_0x1360e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1360E0u;
            // 0x1360e4: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360e0) {
            ctx->pc = 0x136120u;
            goto label_136120;
        }
    }
    ctx->pc = 0x1360E8u;
    // 0x1360e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1360ec: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1360ECu;
    {
        const bool branch_taken_0x1360ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1360F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1360ECu;
            // 0x1360f0: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360ec) {
            ctx->pc = 0x136124u;
            goto label_136124;
        }
    }
    ctx->pc = 0x1360F4u;
    // 0x1360f4: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x1360f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x1360f8: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1360f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1360fc: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1360fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x136100: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x136100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136104: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x136104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136108: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x136108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x13610c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x136110: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x136110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x136114: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x136118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x136118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13611c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13611cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_136120:
    // 0x136120: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x136120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_136124:
    // 0x136124: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x136124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x136128: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x136128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13612c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x13612Cu;
    {
        const bool branch_taken_0x13612c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13612Cu;
            // 0x136130: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13612c) {
            ctx->pc = 0x13621Cu;
            goto label_13621c;
        }
    }
    ctx->pc = 0x136134u;
    // 0x136134: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
    ctx->pc = 0x136134u;
    {
        const bool branch_taken_0x136134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136134) {
            ctx->pc = 0x13621Cu;
            goto label_13621c;
        }
    }
    ctx->pc = 0x13613Cu;
    // 0x13613c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x13613cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_136140:
    // 0x136140: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x136140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136144: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x136148: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x13614c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x13614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x136150: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x136150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136154: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x136154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x136158: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x136158u;
    {
        const bool branch_taken_0x136158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136158u;
            // 0x13615c: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136158) {
            ctx->pc = 0x1361B0u;
            goto label_1361b0;
        }
    }
    ctx->pc = 0x136160u;
    // 0x136160: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x136160u;
    {
        const bool branch_taken_0x136160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x136160) {
            ctx->pc = 0x136164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136160u;
            // 0x136164: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1361B4u;
            goto label_1361b4;
        }
    }
    ctx->pc = 0x136168u;
    // 0x136168: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13616c: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x13616Cu;
    {
        const bool branch_taken_0x13616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x136170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13616Cu;
            // 0x136170: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13616c) {
            ctx->pc = 0x1361B0u;
            goto label_1361b0;
        }
    }
    ctx->pc = 0x136174u;
    // 0x136174: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x136174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x136178: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x136178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x13617c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136180: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x136180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x136184: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x136184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x136188: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x136188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13618c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x13618cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136190: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136194: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x136194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x136198: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x136198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x13619c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13619cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1361a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1361a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1361A4u;
    {
        const bool branch_taken_0x1361a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361A4u;
            // 0x1361a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361a4) {
            ctx->pc = 0x1361F8u;
            goto label_1361f8;
        }
    }
    ctx->pc = 0x1361ACu;
    // 0x1361ac: 0x0  nop
    ctx->pc = 0x1361acu;
    // NOP
label_1361b0:
    // 0x1361b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1361b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1361b4:
    // 0x1361b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1361b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1361b8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1361B8u;
    {
        const bool branch_taken_0x1361b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1361BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361B8u;
            // 0x1361bc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361b8) {
            ctx->pc = 0x1361F8u;
            goto label_1361f8;
        }
    }
    ctx->pc = 0x1361C0u;
label_1361c0:
    // 0x1361c0: 0x8d220080  lw          $v0, 0x80($t1)
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x1361c4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1361c8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1361cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1361ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1361d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1361D0u;
    {
        const bool branch_taken_0x1361d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361D0u;
            // 0x1361d4: 0xad230080  sw          $v1, 0x80($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361d0) {
            ctx->pc = 0x1361F8u;
            goto label_1361f8;
        }
    }
    ctx->pc = 0x1361D8u;
    // 0x1361d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1361d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1361dc: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1361e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1361e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1361e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1361ec: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1361ECu;
    {
        const bool branch_taken_0x1361ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1361F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361ECu;
            // 0x1361f0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361ec) {
            ctx->pc = 0x1361C0u;
            runtime->cooperativeGuestYield();
            goto label_1361c0;
        }
    }
    ctx->pc = 0x1361F4u;
    // 0x1361f4: 0x0  nop
    ctx->pc = 0x1361f4u;
    // NOP
label_1361f8:
    // 0x1361f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1361f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1361fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x136200: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x136204: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x136204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x136208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136208u;
    {
        const bool branch_taken_0x136208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136208u;
            // 0x13620c: 0xad200084  sw          $zero, 0x84($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136208) {
            ctx->pc = 0x13621Cu;
            goto label_13621c;
        }
    }
    ctx->pc = 0x136210u;
    // 0x136210: 0x145102b  sltu        $v0, $t2, $a1
    ctx->pc = 0x136210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x136214: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x136214u;
    {
        const bool branch_taken_0x136214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136214) {
            ctx->pc = 0x136218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136214u;
            // 0x136218: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136140u;
            runtime->cooperativeGuestYield();
            goto label_136140;
        }
    }
    ctx->pc = 0x13621Cu;
label_13621c:
    // 0x13621c: 0x1545000e  bne         $t2, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x13621Cu;
    {
        const bool branch_taken_0x13621c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x136220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13621Cu;
            // 0x136220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13621c) {
            ctx->pc = 0x136258u;
            goto label_136258;
        }
    }
    ctx->pc = 0x136224u;
    // 0x136224: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136228: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x13622c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13622cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x136230: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136230u;
    {
        const bool branch_taken_0x136230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136230u;
            // 0x136234: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136230) {
            ctx->pc = 0x136250u;
            goto label_136250;
        }
    }
    ctx->pc = 0x136238u;
    // 0x136238: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x136238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x13623c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x136240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x136240u;
    {
        const bool branch_taken_0x136240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136240u;
            // 0x136244: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136240) {
            ctx->pc = 0x136258u;
            goto label_136258;
        }
    }
    ctx->pc = 0x136248u;
label_136248:
    // 0x136248: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x136248u;
    {
        const bool branch_taken_0x136248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136248u;
            // 0x13624c: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136248) {
            ctx->pc = 0x136088u;
            runtime->cooperativeGuestYield();
            goto label_136088;
        }
    }
    ctx->pc = 0x136250u;
label_136250:
    // 0x136250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136254: 0x0  nop
    ctx->pc = 0x136254u;
    // NOP
label_136258:
    // 0x136258: 0x3e00008  jr          $ra
    ctx->pc = 0x136258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136258u;
            // 0x13625c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136088u: goto label_136088;
            case 0x1360B8u: goto label_1360b8;
            case 0x136120u: goto label_136120;
            case 0x136124u: goto label_136124;
            case 0x136140u: goto label_136140;
            case 0x1361B0u: goto label_1361b0;
            case 0x1361B4u: goto label_1361b4;
            case 0x1361C0u: goto label_1361c0;
            case 0x1361F8u: goto label_1361f8;
            case 0x13621Cu: goto label_13621c;
            case 0x136248u: goto label_136248;
            case 0x136250u: goto label_136250;
            case 0x136258u: goto label_136258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136260u;
}

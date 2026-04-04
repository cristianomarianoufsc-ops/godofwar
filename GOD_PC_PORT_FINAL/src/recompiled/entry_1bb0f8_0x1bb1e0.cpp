#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1bb0f8
// Address: 0x1bb0f8 - 0x1bb1e0
void entry_1bb0f8_0x1bb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1bb0f8_0x1bb1e0");
#endif

    ctx->pc = 0x1bb0f8u;

    // 0x1bb0f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1bb0f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb100: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1bb100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb104: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x1bb104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x1bb108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bb10c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1bb10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb114: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bb114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB118u;
    {
        const bool branch_taken_0x1bb118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB118u;
            // 0x1bb11c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb118) {
            ctx->pc = 0x1BB12Cu;
            goto label_1bb12c;
        }
    }
    ctx->pc = 0x1BB120u;
    // 0x1bb120: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1bb120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bb124: 0x15220003  bne         $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB124u;
    {
        const bool branch_taken_0x1bb124 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB124u;
            // 0x1bb128: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb124) {
            ctx->pc = 0x1BB134u;
            goto label_1bb134;
        }
    }
    ctx->pc = 0x1BB12Cu;
label_1bb12c:
    // 0x1bb12c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb130: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bb130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1bb134:
    // 0x1bb134: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bb138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb13c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BB13Cu;
    {
        const bool branch_taken_0x1bb13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB13Cu;
            // 0x1bb140: 0xac62cc40  sw          $v0, -0x33C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb13c) {
            ctx->pc = 0x1BB168u;
            goto label_1bb168;
        }
    }
    ctx->pc = 0x1BB144u;
    // 0x1bb144: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1bb144u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1bb148: 0x8d04cc48  lw          $a0, -0x33B8($t0)
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954056)));
    // 0x1bb14c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bb150: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1bb150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bb154: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB154u;
    {
        const bool branch_taken_0x1bb154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB154u;
            // 0x1bb158: 0xad02cc48  sw          $v0, -0x33B8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb154) {
            ctx->pc = 0x1BB190u;
            goto label_1bb190;
        }
    }
    ctx->pc = 0x1BB15Cu;
    // 0x1bb15c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BB15Cu;
    {
        const bool branch_taken_0x1bb15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB15Cu;
            // 0x1bb160: 0xad00cc48  sw          $zero, -0x33B8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294954056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb15c) {
            ctx->pc = 0x1BB190u;
            goto label_1bb190;
        }
    }
    ctx->pc = 0x1BB164u;
    // 0x1bb164: 0x0  nop
    ctx->pc = 0x1bb164u;
    // NOP
label_1bb168:
    // 0x1bb168: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bb168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bb16c: 0x8c62cc44  lw          $v0, -0x33BC($v1)
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954052)));
    // 0x1bb170: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB170u;
    {
        const bool branch_taken_0x1bb170 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BB174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB170u;
            // 0x1bb174: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb170) {
            ctx->pc = 0x1BB188u;
            goto label_1bb188;
        }
    }
    ctx->pc = 0x1BB178u;
    // 0x1bb178: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bb17c: 0xac62cc44  sw          $v0, -0x33BC($v1)
    ctx->pc = 0x1bb17cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954052), GPR_U32(ctx, 2));
    // 0x1bb180: 0x8c62cc44  lw          $v0, -0x33BC($v1)
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954052)));
    // 0x1bb184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bb188:
    // 0x1bb188: 0xac62cc44  sw          $v0, -0x33BC($v1)
    ctx->pc = 0x1bb188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954052), GPR_U32(ctx, 2));
    // 0x1bb18c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bb18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb190:
    // 0x1bb190: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1bb194: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bb198: 0x24445a68  addiu       $a0, $v0, 0x5A68
    ctx->pc = 0x1bb198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
    // 0x1bb19c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1bb19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb1a0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bb1a4: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1bb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1bb1a8: 0xa6090000  sh          $t1, 0x0($s0)
    ctx->pc = 0x1bb1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1bb1ac: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB1ACu;
    {
        const bool branch_taken_0x1bb1ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1ACu;
            // 0x1bb1b0: 0xa60a0002  sh          $t2, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1ac) {
            ctx->pc = 0x1BB1CCu;
            goto label_1bb1cc;
        }
    }
    ctx->pc = 0x1BB1B4u;
    // 0x1bb1b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bb1b8: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1bb1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bb1bc: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1BB1BCu;
    SET_GPR_U32(ctx, 31, 0x1BB1C4u);
    ctx->pc = 0x1BB1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1BCu;
            // 0x1bb1c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1C4u; }
        if (ctx->pc != 0x1BB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1C4u; }
        if (ctx->pc != 0x1BB1C4u) { return; }
    }
    ctx->pc = 0x1BB1C4u;
    // 0x1bb1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB1C4u;
    {
        const bool branch_taken_0x1bb1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1C4u;
            // 0x1bb1c8: 0xa200001f  sb          $zero, 0x1F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1c4) {
            ctx->pc = 0x1BB1D0u;
            goto label_1bb1d0;
        }
    }
    ctx->pc = 0x1BB1CCu;
label_1bb1cc:
    // 0x1bb1cc: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1bb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1bb1d0:
    // 0x1bb1d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1D8u;
            // 0x1bb1dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB12Cu: goto label_1bb12c;
            case 0x1BB134u: goto label_1bb134;
            case 0x1BB168u: goto label_1bb168;
            case 0x1BB188u: goto label_1bb188;
            case 0x1BB190u: goto label_1bb190;
            case 0x1BB1CCu: goto label_1bb1cc;
            case 0x1BB1D0u: goto label_1bb1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB1E0u;
}

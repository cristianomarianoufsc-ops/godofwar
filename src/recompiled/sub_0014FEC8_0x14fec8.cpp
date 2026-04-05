#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014FEC8
// Address: 0x14fec8 - 0x1500b0
void sub_0014FEC8_0x14fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FEC8_0x14fec8");
#endif

    ctx->pc = 0x14fec8u;

    // 0x14fec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fecc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14feccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14fed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14fed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fedc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14fedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14fee0:
    // 0x14fee0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14fee4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14FEE4u;
    {
        const bool branch_taken_0x14fee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEE4u;
            // 0x14fee8: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee4) {
            ctx->pc = 0x14FF18u;
            goto label_14ff18;
        }
    }
    ctx->pc = 0x14FEECu;
    // 0x14feec: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x14feecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14fef0: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x14fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x14fef4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14fef8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FEF8u;
    {
        const bool branch_taken_0x14fef8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x14FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEF8u;
            // 0x14fefc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fef8) {
            ctx->pc = 0x14FF0Cu;
            goto label_14ff0c;
        }
    }
    ctx->pc = 0x14FF00u;
    // 0x14ff00: 0x70a01804  plzcw       $v1, $a1
    ctx->pc = 0x14ff00u;
    { uint64_t v = GPR_U64(ctx, 5); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x14ff04: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14ff08: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ff0c:
    // 0x14ff0c: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x14ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14ff10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF10u;
    {
        const bool branch_taken_0x14ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF10u;
            // 0x14ff14: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff10) {
            ctx->pc = 0x14FF2Cu;
            goto label_14ff2c;
        }
    }
    ctx->pc = 0x14FF18u;
label_14ff18:
    // 0x14ff18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ff18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14ff1c: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x14ff1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14ff20: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14FF20u;
    {
        const bool branch_taken_0x14ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF20u;
            // 0x14ff24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff20) {
            ctx->pc = 0x14FEE0u;
            runtime->cooperativeGuestYield();
            goto label_14fee0;
        }
    }
    ctx->pc = 0x14FF28u;
    // 0x14ff28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ff2c:
    // 0x14ff2c: 0x4c10048  bgez        $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x14FF2Cu;
    {
        const bool branch_taken_0x14ff2c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x14FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF2Cu;
            // 0x14ff30: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff2c) {
            ctx->pc = 0x150050u;
            goto label_150050;
        }
    }
    ctx->pc = 0x14FF34u;
    // 0x14ff34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff38: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14ff3c: 0x0  nop
    ctx->pc = 0x14ff3cu;
    // NOP
label_14ff40:
    // 0x14ff40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ff44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14FF44u;
    {
        const bool branch_taken_0x14ff44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF44u;
            // 0x14ff48: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff44) {
            ctx->pc = 0x14FF78u;
            goto label_14ff78;
        }
    }
    ctx->pc = 0x14FF4Cu;
    // 0x14ff4c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x14ff4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ff50: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x14ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x14ff54: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14ff58: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FF58u;
    {
        const bool branch_taken_0x14ff58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x14FF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF58u;
            // 0x14ff5c: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff58) {
            ctx->pc = 0x14FF6Cu;
            goto label_14ff6c;
        }
    }
    ctx->pc = 0x14FF60u;
    // 0x14ff60: 0x70a01804  plzcw       $v1, $a1
    ctx->pc = 0x14ff60u;
    { uint64_t v = GPR_U64(ctx, 5); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x14ff64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14ff68: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ff6c:
    // 0x14ff6c: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14ff70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF70u;
    {
        const bool branch_taken_0x14ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF70u;
            // 0x14ff74: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff70) {
            ctx->pc = 0x14FF8Cu;
            goto label_14ff8c;
        }
    }
    ctx->pc = 0x14FF78u;
label_14ff78:
    // 0x14ff78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14ff7c: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x14ff7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14ff80: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14FF80u;
    {
        const bool branch_taken_0x14ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF80u;
            // 0x14ff84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff80) {
            ctx->pc = 0x14FF40u;
            runtime->cooperativeGuestYield();
            goto label_14ff40;
        }
    }
    ctx->pc = 0x14FF88u;
    // 0x14ff88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ff8c:
    // 0x14ff8c: 0x4c10030  bgez        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x14FF8Cu;
    {
        const bool branch_taken_0x14ff8c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x14FF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF8Cu;
            // 0x14ff90: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff8c) {
            ctx->pc = 0x150050u;
            goto label_150050;
        }
    }
    ctx->pc = 0x14FF94u;
    // 0x14ff94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ff94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff98: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x14ff9c: 0x0  nop
    ctx->pc = 0x14ff9cu;
    // NOP
label_14ffa0:
    // 0x14ffa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ffa4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14FFA4u;
    {
        const bool branch_taken_0x14ffa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFA4u;
            // 0x14ffa8: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffa4) {
            ctx->pc = 0x14FFD8u;
            goto label_14ffd8;
        }
    }
    ctx->pc = 0x14FFACu;
    // 0x14ffac: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x14ffacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ffb0: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x14ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x14ffb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14ffb8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FFB8u;
    {
        const bool branch_taken_0x14ffb8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x14FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFB8u;
            // 0x14ffbc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffb8) {
            ctx->pc = 0x14FFCCu;
            goto label_14ffcc;
        }
    }
    ctx->pc = 0x14FFC0u;
    // 0x14ffc0: 0x70a01804  plzcw       $v1, $a1
    ctx->pc = 0x14ffc0u;
    { uint64_t v = GPR_U64(ctx, 5); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x14ffc4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14ffc8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ffcc:
    // 0x14ffcc: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x14ffd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FFD0u;
    {
        const bool branch_taken_0x14ffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFD0u;
            // 0x14ffd4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffd0) {
            ctx->pc = 0x14FFECu;
            goto label_14ffec;
        }
    }
    ctx->pc = 0x14FFD8u;
label_14ffd8:
    // 0x14ffd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14ffdc: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x14ffdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14ffe0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFE0u;
            // 0x14ffe4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x14FFA0u;
            runtime->cooperativeGuestYield();
            goto label_14ffa0;
        }
    }
    ctx->pc = 0x14FFE8u;
    // 0x14ffe8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ffec:
    // 0x14ffec: 0x4c10018  bgez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x14FFECu;
    {
        const bool branch_taken_0x14ffec = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x14FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFECu;
            // 0x14fff0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffec) {
            ctx->pc = 0x150050u;
            goto label_150050;
        }
    }
    ctx->pc = 0x14FFF4u;
    // 0x14fff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fff8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x14fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x14fffc: 0x0  nop
    ctx->pc = 0x14fffcu;
    // NOP
label_150000:
    // 0x150000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150004: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x150004u;
    {
        const bool branch_taken_0x150004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150004u;
            // 0x150008: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150004) {
            ctx->pc = 0x150030u;
            goto label_150030;
        }
    }
    ctx->pc = 0x15000Cu;
    // 0x15000c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150010: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150010u;
    {
        const bool branch_taken_0x150010 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150010u;
            // 0x150014: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150010) {
            ctx->pc = 0x150024u;
            goto label_150024;
        }
    }
    ctx->pc = 0x150018u;
    // 0x150018: 0x70401804  plzcw       $v1, $v0
    ctx->pc = 0x150018u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x15001c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x150020: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x150020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150024:
    // 0x150024: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x150024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x150028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x150028u;
    {
        const bool branch_taken_0x150028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150028u;
            // 0x15002c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150028) {
            ctx->pc = 0x150044u;
            goto label_150044;
        }
    }
    ctx->pc = 0x150030u;
label_150030:
    // 0x150030: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150034: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x150034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x150038: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x150038u;
    {
        const bool branch_taken_0x150038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150038u;
            // 0x15003c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150038) {
            ctx->pc = 0x150000u;
            runtime->cooperativeGuestYield();
            goto label_150000;
        }
    }
    ctx->pc = 0x150040u;
    // 0x150040: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150044:
    // 0x150044: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x150044u;
    {
        const bool branch_taken_0x150044 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x150048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150044u;
            // 0x150048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150044) {
            ctx->pc = 0x15009Cu;
            goto label_15009c;
        }
    }
    ctx->pc = 0x15004Cu;
    // 0x15004c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_150050:
    // 0x150050: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x150050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x150054: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x150054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150058: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x150058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15005c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150060: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x150060u;
    {
        const bool branch_taken_0x150060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150060) {
            ctx->pc = 0x150064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150060u;
            // 0x150064: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150080u;
            goto label_150080;
        }
    }
    ctx->pc = 0x150068u;
    // 0x150068: 0x90620030  lbu         $v0, 0x30($v1)
    ctx->pc = 0x150068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15006c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x15006cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x150070: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x150070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x150074: 0xa0620030  sb          $v0, 0x30($v1)
    ctx->pc = 0x150074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x150078: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15007c: 0x0  nop
    ctx->pc = 0x15007cu;
    // NOP
label_150080:
    // 0x150080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150084: 0xc054094  jal         func_150250
    ctx->pc = 0x150084u;
    SET_GPR_U32(ctx, 31, 0x15008Cu);
    ctx->pc = 0x150088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150084u;
            // 0x150088: 0xae080004  sw          $t0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150250u;
    if (runtime->hasFunction(0x150250u)) {
        auto targetFn = runtime->lookupFunction(0x150250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15008Cu; }
        if (ctx->pc != 0x15008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150250_0x1502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15008Cu; }
        if (ctx->pc != 0x15008Cu) { return; }
    }
    ctx->pc = 0x15008Cu;
    // 0x15008c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x150090: 0xc054070  jal         func_1501C0
    ctx->pc = 0x150090u;
    SET_GPR_U32(ctx, 31, 0x150098u);
    ctx->pc = 0x150094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150090u;
            // 0x150094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1501C0u;
    if (runtime->hasFunction(0x1501C0u)) {
        auto targetFn = runtime->lookupFunction(0x1501C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150098u; }
        if (ctx->pc != 0x150098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1501c0_0x150220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150098u; }
        if (ctx->pc != 0x150098u) { return; }
    }
    ctx->pc = 0x150098u;
    // 0x150098: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15009c:
    // 0x15009c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15009cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1500a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1500a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1500a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1500A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1500A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500A4u;
            // 0x1500a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FEE0u: goto label_14fee0;
            case 0x14FF0Cu: goto label_14ff0c;
            case 0x14FF18u: goto label_14ff18;
            case 0x14FF2Cu: goto label_14ff2c;
            case 0x14FF40u: goto label_14ff40;
            case 0x14FF6Cu: goto label_14ff6c;
            case 0x14FF78u: goto label_14ff78;
            case 0x14FF8Cu: goto label_14ff8c;
            case 0x14FFA0u: goto label_14ffa0;
            case 0x14FFCCu: goto label_14ffcc;
            case 0x14FFD8u: goto label_14ffd8;
            case 0x14FFECu: goto label_14ffec;
            case 0x150000u: goto label_150000;
            case 0x150024u: goto label_150024;
            case 0x150030u: goto label_150030;
            case 0x150044u: goto label_150044;
            case 0x150050u: goto label_150050;
            case 0x150080u: goto label_150080;
            case 0x15009Cu: goto label_15009c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1500ACu;
    // 0x1500ac: 0x0  nop
    ctx->pc = 0x1500acu;
    // NOP
}

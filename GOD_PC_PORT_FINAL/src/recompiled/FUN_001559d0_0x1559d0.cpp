#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001559d0
// Address: 0x1559d0 - 0x155ab0
void FUN_001559d0_0x1559d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001559d0_0x1559d0");
#endif

    ctx->pc = 0x1559d0u;

    // 0x1559d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1559d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1559d4: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x1559d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1559d8: 0x19400033  blez        $t2, . + 4 + (0x33 << 2)
    ctx->pc = 0x1559D8u;
    {
        const bool branch_taken_0x1559d8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1559DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559D8u;
            // 0x1559dc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559d8) {
            ctx->pc = 0x155AA8u;
            goto label_155aa8;
        }
    }
    ctx->pc = 0x1559E0u;
    // 0x1559e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1559e4: 0x0  nop
    ctx->pc = 0x1559e4u;
    // NOP
label_1559e8:
    // 0x1559e8: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1559ec: 0x244239a8  addiu       $v0, $v0, 0x39A8
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14760));
    // 0x1559f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1559f4: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1559f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1559f8: 0x8d820060  lw          $v0, 0x60($t4)
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x1559fc: 0xdc4b0000  ld          $t3, 0x0($v0)
    ctx->pc = 0x1559fcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155a00: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x155a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x155a04: 0x1671824  and         $v1, $t3, $a3
    ctx->pc = 0x155a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x155a08: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x155a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x155a0c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x155A0Cu;
    {
        const bool branch_taken_0x155a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A0Cu;
            // 0x155a10: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a0c) {
            ctx->pc = 0x155A58u;
            goto label_155a58;
        }
    }
    ctx->pc = 0x155A14u;
    // 0x155a14: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x155a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x155a18: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x155a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x155a1c: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x155a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x155a20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x155A20u;
    {
        const bool branch_taken_0x155a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155a20) {
            ctx->pc = 0x155A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155A20u;
            // 0x155a24: 0x9582003c  lhu         $v0, 0x3C($t4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155A40u;
            goto label_155a40;
        }
    }
    ctx->pc = 0x155A28u;
    // 0x155a28: 0x85830040  lh          $v1, 0x40($t4)
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x155a2c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x155a2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155a30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155a34: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x155a34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x155a38: 0x9582003c  lhu         $v0, 0x3C($t4)
    ctx->pc = 0x155a38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x155a3c: 0x0  nop
    ctx->pc = 0x155a3cu;
    // NOP
label_155a40:
    // 0x155a40: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x155a40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155a44: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x155a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155a48: 0xa589003e  sh          $t1, 0x3E($t4)
    ctx->pc = 0x155a48u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 62), (uint16_t)GPR_U32(ctx, 9));
    // 0x155a4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155a50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x155A50u;
    {
        const bool branch_taken_0x155a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A50u;
            // 0x155a54: 0xa583003c  sh          $v1, 0x3C($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a50) {
            ctx->pc = 0x155A98u;
            goto label_155a98;
        }
    }
    ctx->pc = 0x155A58u;
label_155a58:
    // 0x155a58: 0x1681024  and         $v0, $t3, $t0
    ctx->pc = 0x155a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x155a5c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x155A5Cu;
    {
        const bool branch_taken_0x155a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a5c) {
            ctx->pc = 0x155A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155A5Cu;
            // 0x155a60: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155A9Cu;
            goto label_155a9c;
        }
    }
    ctx->pc = 0x155A64u;
    // 0x155a64: 0x9582003c  lhu         $v0, 0x3C($t4)
    ctx->pc = 0x155a64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x155a68: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x155a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x155a6c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x155a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x155a70: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x155a70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155a74: 0x1642024  and         $a0, $t3, $a0
    ctx->pc = 0x155a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x155a78: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x155a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x155a7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155a80: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155A80u;
    {
        const bool branch_taken_0x155a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A80u;
            // 0x155a84: 0xa583003c  sh          $v1, 0x3C($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a80) {
            ctx->pc = 0x155A98u;
            goto label_155a98;
        }
    }
    ctx->pc = 0x155A88u;
    // 0x155a88: 0x85830040  lh          $v1, 0x40($t4)
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x155a8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x155a8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155a94: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x155a94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_155a98:
    // 0x155a98: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x155a98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_155a9c:
    // 0x155a9c: 0x1aa102a  slt         $v0, $t5, $t2
    ctx->pc = 0x155a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x155aa0: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x155AA0u;
    {
        const bool branch_taken_0x155aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AA0u;
            // 0x155aa4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155aa0) {
            ctx->pc = 0x1559E8u;
            runtime->cooperativeGuestYield();
            goto label_1559e8;
        }
    }
    ctx->pc = 0x155AA8u;
label_155aa8:
    // 0x155aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x155AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AA8u;
            // 0x155aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1559E8u: goto label_1559e8;
            case 0x155A40u: goto label_155a40;
            case 0x155A58u: goto label_155a58;
            case 0x155A98u: goto label_155a98;
            case 0x155A9Cu: goto label_155a9c;
            case 0x155AA8u: goto label_155aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155AB0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17b0c8
// Address: 0x17b0c8 - 0x17b200
void entry_17b0c8_0x17b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17b0c8_0x17b200");
#endif

    ctx->pc = 0x17b0c8u;

    // 0x17b0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17b0d0:
    // 0x17b0d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b0d4: 0x2442c4f0  addiu       $v0, $v0, -0x3B10
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952176));
    // 0x17b0d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b0e0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B0E0u;
    {
        const bool branch_taken_0x17b0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0E0u;
            // 0x17b0e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0e0) {
            ctx->pc = 0x17B0F4u;
            goto label_17b0f4;
        }
    }
    ctx->pc = 0x17B0E8u;
    // 0x17b0e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0ECu;
            // 0x17b0f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0D0u: goto label_17b0d0;
            case 0x17B0F4u: goto label_17b0f4;
            case 0x17B128u: goto label_17b128;
            case 0x17B160u: goto label_17b160;
            case 0x17B190u: goto label_17b190;
            case 0x17B1C8u: goto label_17b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B0F4u;
label_17b0f4:
    // 0x17b0f4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x17b0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b0f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17B0F8u;
    {
        const bool branch_taken_0x17b0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B0F8u;
            // 0x17b0fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0f8) {
            ctx->pc = 0x17B0D0u;
            runtime->cooperativeGuestYield();
            goto label_17b0d0;
        }
    }
    ctx->pc = 0x17B100u;
    // 0x17b100: 0x3e00008  jr          $ra
    ctx->pc = 0x17B100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0D0u: goto label_17b0d0;
            case 0x17B0F4u: goto label_17b0f4;
            case 0x17B128u: goto label_17b128;
            case 0x17B160u: goto label_17b160;
            case 0x17B190u: goto label_17b190;
            case 0x17B1C8u: goto label_17b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B108u;
    // 0x17b108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b10c: 0x0  nop
    ctx->pc = 0x17b10cu;
    // NOP
    // 0x17b110: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17b114: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B114u;
    {
        const bool branch_taken_0x17b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B114u;
            // 0x17b118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b114) {
            ctx->pc = 0x17B160u;
            goto label_17b160;
        }
    }
    ctx->pc = 0x17B11Cu;
    // 0x17b11c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B11Cu;
    {
        const bool branch_taken_0x17b11c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b11c) {
            ctx->pc = 0x17B160u;
            goto label_17b160;
        }
    }
    ctx->pc = 0x17B124u;
    // 0x17b124: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_17b128:
    // 0x17b128: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17b12c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17b130: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17b130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b134: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x17b134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b138: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17b13c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x17b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17b140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b144: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17b148: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x17b148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x17b14c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B14Cu;
    {
        const bool branch_taken_0x17b14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B14Cu;
            // 0x17b150: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b14c) {
            ctx->pc = 0x17B160u;
            goto label_17b160;
        }
    }
    ctx->pc = 0x17B154u;
    // 0x17b154: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x17b154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17b158: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x17B158u;
    {
        const bool branch_taken_0x17b158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b158) {
            ctx->pc = 0x17B15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B158u;
            // 0x17b15c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B128u;
            runtime->cooperativeGuestYield();
            goto label_17b128;
        }
    }
    ctx->pc = 0x17B160u;
label_17b160:
    // 0x17b160: 0x3e00008  jr          $ra
    ctx->pc = 0x17B160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B160u;
            // 0x17b164: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0D0u: goto label_17b0d0;
            case 0x17B0F4u: goto label_17b0f4;
            case 0x17B128u: goto label_17b128;
            case 0x17B160u: goto label_17b160;
            case 0x17B190u: goto label_17b190;
            case 0x17B1C8u: goto label_17b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B168u;
    // 0x17b168: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17b16c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B16Cu;
            // 0x17b170: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0D0u: goto label_17b0d0;
            case 0x17B0F4u: goto label_17b0f4;
            case 0x17B128u: goto label_17b128;
            case 0x17B160u: goto label_17b160;
            case 0x17B190u: goto label_17b190;
            case 0x17B1C8u: goto label_17b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B174u;
    // 0x17b174: 0x0  nop
    ctx->pc = 0x17b174u;
    // NOP
    // 0x17b178: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17b17c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B17Cu;
    {
        const bool branch_taken_0x17b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B17Cu;
            // 0x17b180: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b17c) {
            ctx->pc = 0x17B1C8u;
            goto label_17b1c8;
        }
    }
    ctx->pc = 0x17B184u;
    // 0x17b184: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B184u;
    {
        const bool branch_taken_0x17b184 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B184u;
            // 0x17b188: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b184) {
            ctx->pc = 0x17B1C8u;
            goto label_17b1c8;
        }
    }
    ctx->pc = 0x17B18Cu;
    // 0x17b18c: 0x0  nop
    ctx->pc = 0x17b18cu;
    // NOP
label_17b190:
    // 0x17b190: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17b194: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17b194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17b19c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x17b19cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b1a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17b1a4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17b1a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b1ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17b1b0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x17b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x17b1b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B1B4u;
    {
        const bool branch_taken_0x17b1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1B4u;
            // 0x17b1b8: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1b4) {
            ctx->pc = 0x17B1C8u;
            goto label_17b1c8;
        }
    }
    ctx->pc = 0x17B1BCu;
    // 0x17b1bc: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17b1c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17B1C0u;
    {
        const bool branch_taken_0x17b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1C0u;
            // 0x17b1c4: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1c0) {
            ctx->pc = 0x17B190u;
            runtime->cooperativeGuestYield();
            goto label_17b190;
        }
    }
    ctx->pc = 0x17B1C8u;
label_17b1c8:
    // 0x17b1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B1C8u;
            // 0x17b1cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0D0u: goto label_17b0d0;
            case 0x17B0F4u: goto label_17b0f4;
            case 0x17B128u: goto label_17b128;
            case 0x17B160u: goto label_17b160;
            case 0x17B190u: goto label_17b190;
            case 0x17B1C8u: goto label_17b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B1D0u;
    // 0x17b1d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b1d4: 0x0  nop
    ctx->pc = 0x17b1d4u;
    // NOP
    // 0x17b1d8: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x17b1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x17b1dc: 0x0  nop
    ctx->pc = 0x17b1dcu;
    // NOP
    // 0x17b1e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b1e4: 0x0  nop
    ctx->pc = 0x17b1e4u;
    // NOP
    // 0x17b1e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b1ec: 0x0  nop
    ctx->pc = 0x17b1ecu;
    // NOP
    // 0x17b1f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b1f4: 0x0  nop
    ctx->pc = 0x17b1f4u;
    // NOP
    // 0x17b1f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17b1fc: 0x0  nop
    ctx->pc = 0x17b1fcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_106328
// Address: 0x106328 - 0x1063d8
void entry_106328_0x1063d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_106328_0x1063d8");
#endif

    ctx->pc = 0x106328u;

    // 0x106328: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x106328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10632c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x106330: 0x25430014  addiu       $v1, $t2, 0x14
    ctx->pc = 0x106330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x106334: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x106334u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x106338: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x10633c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x10633cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x106340: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x106340u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x106344: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106348: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x106348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10634c: 0xad42005c  sw          $v0, 0x5C($t2)
    ctx->pc = 0x10634cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 92), GPR_U32(ctx, 2));
    // 0x106350: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x106350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x106354: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x106354u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
    // 0x106358: 0xad47001c  sw          $a3, 0x1C($t2)
    ctx->pc = 0x106358u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
    // 0x10635c: 0xad480020  sw          $t0, 0x20($t2)
    ctx->pc = 0x10635cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 8));
    // 0x106360: 0xad490024  sw          $t1, 0x24($t2)
    ctx->pc = 0x106360u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 9));
    // 0x106364: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x106364u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x106368: 0xad450008  sw          $a1, 0x8($t2)
    ctx->pc = 0x106368u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 5));
    // 0x10636c: 0xad400048  sw          $zero, 0x48($t2)
    ctx->pc = 0x10636cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 0));
    // 0x106370: 0xad40004c  sw          $zero, 0x4C($t2)
    ctx->pc = 0x106370u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 76), GPR_U32(ctx, 0));
    // 0x106374: 0xad400050  sw          $zero, 0x50($t2)
    ctx->pc = 0x106374u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 0));
    // 0x106378: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106378u;
    {
        const bool branch_taken_0x106378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10637Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106378u;
            // 0x10637c: 0xad400058  sw          $zero, 0x58($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106378) {
            ctx->pc = 0x1063C8u;
            goto label_1063c8;
        }
    }
    ctx->pc = 0x106380u;
    // 0x106380: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x106380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x106384: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106388: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x106388u;
    {
        const bool branch_taken_0x106388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106388u;
            // 0x10638c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106388) {
            ctx->pc = 0x1063C8u;
            goto label_1063c8;
        }
    }
    ctx->pc = 0x106390u;
    // 0x106390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106394: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x106394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106398: 0x8d420048  lw          $v0, 0x48($t2)
    ctx->pc = 0x106398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x10639c: 0x0  nop
    ctx->pc = 0x10639cu;
    // NOP
label_1063a0:
    // 0x1063a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1063a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1063a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1063a8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1063ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1063acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1063b0: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1063b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x1063b4: 0xad420048  sw          $v0, 0x48($t2)
    ctx->pc = 0x1063b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 2));
    // 0x1063b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1063bc: 0x54a6fff8  bnel        $a1, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1063BCu;
    {
        const bool branch_taken_0x1063bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1063bc) {
            ctx->pc = 0x1063C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1063BCu;
            // 0x1063c0: 0x8d420048  lw          $v0, 0x48($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1063A0u;
            runtime->cooperativeGuestYield();
            goto label_1063a0;
        }
    }
    ctx->pc = 0x1063C4u;
    // 0x1063c4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1063c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1063c8:
    // 0x1063c8: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1063c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1063CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063CCu;
            // 0x1063d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1063A0u: goto label_1063a0;
            case 0x1063C8u: goto label_1063c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1063D4u;
    // 0x1063d4: 0x0  nop
    ctx->pc = 0x1063d4u;
    // NOP
}

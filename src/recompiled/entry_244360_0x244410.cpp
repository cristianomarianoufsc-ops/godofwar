#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244360
// Address: 0x244360 - 0x244410
void entry_244360_0x244410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244360_0x244410");
#endif

    ctx->pc = 0x244360u;

    // 0x244360: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244364: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x244364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244368: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x244368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x24436c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x24436cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x244370: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x244370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x244374: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x244374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x244378: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x244378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24437c: 0x3e00008  jr          $ra
    ctx->pc = 0x24437Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24437Cu;
            // 0x244380: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244384u;
    // 0x244384: 0x0  nop
    ctx->pc = 0x244384u;
    // NOP
    // 0x244388: 0x8c422870  lw          $v0, 0x2870($v0)
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10352)));
    // 0x24438c: 0x0  nop
    ctx->pc = 0x24438cu;
    // NOP
    // 0x244390: 0x3e00008  jr          $ra
    ctx->pc = 0x244390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244390u;
            // 0x244394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244398u;
    // 0x244398: 0x3e00008  jr          $ra
    ctx->pc = 0x244398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244398u;
            // 0x24439c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443A0u;
    // 0x2443a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2443A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443A0u;
            // 0x2443a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443A8u;
    // 0x2443a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2443A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443A8u;
            // 0x2443ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443B0u;
    // 0x2443b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2443B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443B0u;
            // 0x2443b4: 0x8c8201dc  lw          $v0, 0x1DC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443B8u;
    // 0x2443b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2443B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443B8u;
            // 0x2443bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443C0u;
    // 0x2443c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2443C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2443C0u;
            // 0x2443c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443C8u;
    // 0x2443c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2443c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2443cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2443CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443D4u;
    // 0x2443d4: 0x0  nop
    ctx->pc = 0x2443d4u;
    // NOP
    // 0x2443d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2443d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2443dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2443dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2443e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2443E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443E8u;
    // 0x2443e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2443ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2443ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2443f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2443F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2443F8u;
    // 0x2443f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2443F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244400u;
    // 0x244400: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x244400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x244404: 0x0  nop
    ctx->pc = 0x244404u;
    // NOP
    // 0x244408: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24440c: 0x0  nop
    ctx->pc = 0x24440cu;
    // NOP
}

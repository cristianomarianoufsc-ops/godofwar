#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_244410
// Address: 0x244410 - 0x2444d0
void entry_244410_0x2444d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_244410_0x2444d0");
#endif

    ctx->pc = 0x244410u;

    // 0x244410: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x244410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x244414: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x244414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244418: 0x24631f20  addiu       $v1, $v1, 0x1F20
    ctx->pc = 0x244418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7968));
    // 0x24441c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x24441cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x244420: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x244420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x244424: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x244424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x244428: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x244428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24442c: 0x3e00008  jr          $ra
    ctx->pc = 0x24442Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24442Cu;
            // 0x244430: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244434u;
    // 0x244434: 0x0  nop
    ctx->pc = 0x244434u;
    // NOP
    // 0x244438: 0x8c422868  lw          $v0, 0x2868($v0)
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10344)));
    // 0x24443c: 0x0  nop
    ctx->pc = 0x24443cu;
    // NOP
    // 0x244440: 0x3e00008  jr          $ra
    ctx->pc = 0x244440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244440u;
            // 0x244444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244448u;
    // 0x244448: 0x3e00008  jr          $ra
    ctx->pc = 0x244448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244448u;
            // 0x24444c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244450u;
    // 0x244450: 0x3e00008  jr          $ra
    ctx->pc = 0x244450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244450u;
            // 0x244454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244458u;
    // 0x244458: 0x3e00008  jr          $ra
    ctx->pc = 0x244458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244458u;
            // 0x24445c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244460u;
    // 0x244460: 0x3e00008  jr          $ra
    ctx->pc = 0x244460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244460u;
            // 0x244464: 0x8c8201e0  lw          $v0, 0x1E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244468u;
    // 0x244468: 0x3e00008  jr          $ra
    ctx->pc = 0x244468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244468u;
            // 0x24446c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244470u;
    // 0x244470: 0x3e00008  jr          $ra
    ctx->pc = 0x244470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244470u;
            // 0x244474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244478u;
    // 0x244478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24447c: 0x3e00008  jr          $ra
    ctx->pc = 0x24447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244484u;
    // 0x244484: 0x0  nop
    ctx->pc = 0x244484u;
    // NOP
    // 0x244488: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x244488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24448c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24448cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244490: 0x3e00008  jr          $ra
    ctx->pc = 0x244490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244498u;
    // 0x244498: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x244498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24449c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24449cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2444a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2444A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2444A8u;
    // 0x2444a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2444A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2444B0u;
    // 0x2444b0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2444b0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2444b4: 0x0  nop
    ctx->pc = 0x2444b4u;
    // NOP
    // 0x2444b8: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x2444bc: 0x0  nop
    ctx->pc = 0x2444bcu;
    // NOP
    // 0x2444c0: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x2444c4: 0x0  nop
    ctx->pc = 0x2444c4u;
    // NOP
    // 0x2444c8: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x2444c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x2444cc: 0x0  nop
    ctx->pc = 0x2444ccu;
    // NOP
}

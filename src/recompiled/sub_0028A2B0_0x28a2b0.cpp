#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A2B0
// Address: 0x28a2b0 - 0x28a338
void sub_0028A2B0_0x28a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A2B0_0x28a2b0");
#endif

    ctx->pc = 0x28a2b0u;

    // 0x28a2b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28a2b4: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x28a2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28a2b8: 0x8c4d4294  lw          $t5, 0x4294($v0)
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28a2bc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x28a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x28a2c0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x28a2c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28a2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28a2c8: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x28a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x28a2cc: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x28a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x28a2d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28a2d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2d8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x28a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x28a2dc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x28a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28a2e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x28a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x28a2e4: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x28a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x28a2e8: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x28a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x28a2ec: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x28a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x28a2f0: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x28a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x28a2f4: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x28a2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x28a2f8: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x28a2f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28a2fc: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x28a2fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x28a300: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x28a300u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x28a304: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x28a304u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x28a308: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x28a308u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a30c: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x28a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x28a310: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x28a310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x28a314: 0xc0a375c  jal         func_28DD70
    ctx->pc = 0x28A314u;
    SET_GPR_U32(ctx, 31, 0x28A31Cu);
    ctx->pc = 0x28A318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A314u;
            // 0x28a318: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DD70u;
    if (runtime->hasFunction(0x28DD70u)) {
        auto targetFn = runtime->lookupFunction(0x28DD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A31Cu; }
        if (ctx->pc != 0x28A31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DD70_0x28dd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A31Cu; }
        if (ctx->pc != 0x28A31Cu) { return; }
    }
    ctx->pc = 0x28A31Cu;
    // 0x28a31c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a320: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28a320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a324: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x28a324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a328: 0x3e00008  jr          $ra
    ctx->pc = 0x28A328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A328u;
            // 0x28a32c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A330u;
    // 0x28a330: 0x3e00008  jr          $ra
    ctx->pc = 0x28A330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A330u;
            // 0x28a334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A338u;
}

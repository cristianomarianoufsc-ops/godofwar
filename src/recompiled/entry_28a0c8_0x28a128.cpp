#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28a0c8
// Address: 0x28a0c8 - 0x28a128
void entry_28a0c8_0x28a128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28a0c8_0x28a128");
#endif

    ctx->pc = 0x28a0c8u;

    // 0x28a0c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28a0cc: 0x3c0c002a  lui         $t4, 0x2A
    ctx->pc = 0x28a0ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)42 << 16));
    // 0x28a0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a0d4: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x28a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x28a0d8: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x28a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x28a0dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0e0: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x28a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x28a0e4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x28a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28a0e8: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x28a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x28a0ec: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x28a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x28a0f0: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x28a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x28a0f4: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x28a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x28a0f8: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x28a0f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x28a0fc: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x28a0fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x28a100: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x28a100u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28a104: 0xe7b20054  swc1        $f18, 0x54($sp)
    ctx->pc = 0x28a104u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28a108: 0x8d824294  lw          $v0, 0x4294($t4)
    ctx->pc = 0x28a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 17044)));
    // 0x28a10c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28a110: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x28a110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x28a114: 0xc0a375c  jal         func_28DD70
    ctx->pc = 0x28A114u;
    SET_GPR_U32(ctx, 31, 0x28A11Cu);
    ctx->pc = 0x28A118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A114u;
            // 0x28a118: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DD70u;
    if (runtime->hasFunction(0x28DD70u)) {
        auto targetFn = runtime->lookupFunction(0x28DD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A11Cu; }
        if (ctx->pc != 0x28A11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DD70_0x28dd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A11Cu; }
        if (ctx->pc != 0x28A11Cu) { return; }
    }
    ctx->pc = 0x28A11Cu;
    // 0x28a11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a120: 0x3e00008  jr          $ra
    ctx->pc = 0x28A120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A120u;
            // 0x28a124: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A128u;
}

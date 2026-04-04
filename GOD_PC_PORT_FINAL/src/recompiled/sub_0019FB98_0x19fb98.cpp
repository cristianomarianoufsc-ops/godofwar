#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019FB98
// Address: 0x19fb98 - 0x19fc38
void sub_0019FB98_0x19fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FB98_0x19fb98");
#endif

    ctx->pc = 0x19fb98u;

    // 0x19fb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fb9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fba0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19fba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19fba4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19fba8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19fba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19fbac: 0x84445060  lh          $a0, 0x5060($v0)
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20576)));
    // 0x19fbb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fbb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19fbb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19fbb8: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FBB8u;
    SET_GPR_U32(ctx, 31, 0x19FBC0u);
    ctx->pc = 0x19FBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBB8u;
            // 0x19fbbc: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBC0u; }
        if (ctx->pc != 0x19FBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBC0u; }
        if (ctx->pc != 0x19FBC0u) { return; }
    }
    ctx->pc = 0x19FBC0u;
    // 0x19fbc0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x19fbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19fbc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fbc8: 0x84445062  lh          $a0, 0x5062($v0)
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20578)));
    // 0x19fbcc: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FBCCu;
    SET_GPR_U32(ctx, 31, 0x19FBD4u);
    ctx->pc = 0x19FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBCCu;
            // 0x19fbd0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBD4u; }
        if (ctx->pc != 0x19FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBD4u; }
        if (ctx->pc != 0x19FBD4u) { return; }
    }
    ctx->pc = 0x19FBD4u;
    // 0x19fbd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fbd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19fbd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x19fbdc: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FBDCu;
    SET_GPR_U32(ctx, 31, 0x19FBE4u);
    ctx->pc = 0x19FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBDCu;
            // 0x19fbe0: 0x84445064  lh          $a0, 0x5064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE4u; }
        if (ctx->pc != 0x19FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE4u; }
        if (ctx->pc != 0x19FBE4u) { return; }
    }
    ctx->pc = 0x19FBE4u;
    // 0x19fbe4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fbe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19fbe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19fbec: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FBECu;
    SET_GPR_U32(ctx, 31, 0x19FBF4u);
    ctx->pc = 0x19FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBECu;
            // 0x19fbf0: 0x84445066  lh          $a0, 0x5066($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20582)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF4u; }
        if (ctx->pc != 0x19FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF4u; }
        if (ctx->pc != 0x19FBF4u) { return; }
    }
    ctx->pc = 0x19FBF4u;
    // 0x19fbf4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fbf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19fbf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19fbfc: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FBFCu;
    SET_GPR_U32(ctx, 31, 0x19FC04u);
    ctx->pc = 0x19FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBFCu;
            // 0x19fc00: 0x84445068  lh          $a0, 0x5068($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC04u; }
        if (ctx->pc != 0x19FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC04u; }
        if (ctx->pc != 0x19FC04u) { return; }
    }
    ctx->pc = 0x19FC04u;
    // 0x19fc04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fc08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19fc08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19fc0c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FC0Cu;
    SET_GPR_U32(ctx, 31, 0x19FC14u);
    ctx->pc = 0x19FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC0Cu;
            // 0x19fc10: 0x8444506a  lh          $a0, 0x506A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20586)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC14u; }
        if (ctx->pc != 0x19FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC14u; }
        if (ctx->pc != 0x19FC14u) { return; }
    }
    ctx->pc = 0x19FC14u;
    // 0x19fc14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19fc18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19fc18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19fc1c: 0xc067eb4  jal         func_19FAD0
    ctx->pc = 0x19FC1Cu;
    SET_GPR_U32(ctx, 31, 0x19FC24u);
    ctx->pc = 0x19FC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC1Cu;
            // 0x19fc20: 0x8444506c  lh          $a0, 0x506C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FAD0u;
    if (runtime->hasFunction(0x19FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x19FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC24u; }
        if (ctx->pc != 0x19FC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FAD0_0x19fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC24u; }
        if (ctx->pc != 0x19FC24u) { return; }
    }
    ctx->pc = 0x19FC24u;
    // 0x19fc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc28: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x19fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19fc2c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fc30: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC30u;
            // 0x19fc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FC38u;
}

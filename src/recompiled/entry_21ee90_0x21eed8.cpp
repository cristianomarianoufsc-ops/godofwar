#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21ee90
// Address: 0x21ee90 - 0x21eed8
void entry_21ee90_0x21eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21ee90_0x21eed8");
#endif

    ctx->pc = 0x21ee90u;

    // 0x21ee90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21ee94: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x21ee94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x21ee98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21ee98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21ee9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ee9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eea0: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21eea4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21eea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21eea8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eeac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21eeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21eeb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21eeb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21eeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21eeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21eeb8: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x21EEB8u;
    SET_GPR_U32(ctx, 31, 0x21EEC0u);
    ctx->pc = 0x21EEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EEB8u;
            // 0x21eebc: 0xe440e5b8  swc1        $f0, -0x1A48($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960568), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEC0u; }
        if (ctx->pc != 0x21EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EEC0u; }
        if (ctx->pc != 0x21EEC0u) { return; }
    }
    ctx->pc = 0x21EEC0u;
    // 0x21eec0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21eec4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21eec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eecc: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x21EED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EED0u;
            // 0x21eed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EED8u;
}

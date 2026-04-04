#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A0F8
// Address: 0x25a0f8 - 0x25a188
void sub_0025A0F8_0x25a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A0F8_0x25a0f8");
#endif

    ctx->pc = 0x25a0f8u;

    // 0x25a0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a0fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a104: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A104u;
    SET_GPR_U32(ctx, 31, 0x25A10Cu);
    ctx->pc = 0x25A108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A104u;
            // 0x25a108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A10Cu; }
        if (ctx->pc != 0x25A10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A10Cu; }
        if (ctx->pc != 0x25A10Cu) { return; }
    }
    ctx->pc = 0x25A10Cu;
    // 0x25a10c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a110: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a114: 0x24428f50  addiu       $v0, $v0, -0x70B0
    ctx->pc = 0x25a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938448));
    // 0x25a118: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x25a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x25a11c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a124: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a128: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a12c: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x25a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x25a130: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x25a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x25a134: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x25a134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x25a138: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x25a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x25a13c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x25a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x25a140: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x25a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x25a144: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x25a144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x25a148: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x25a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x25a14c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x25a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x25a150: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x25a150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x25a154: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x25a154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x25a158: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x25a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x25a15c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x25a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x25a160: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x25a160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x25a164: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x25a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x25a168: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x25a168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x25a16c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x25a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x25a170: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x25a170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x25a174: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x25a174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x25a178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a180: 0x3e00008  jr          $ra
    ctx->pc = 0x25A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A180u;
            // 0x25a184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A188u;
}

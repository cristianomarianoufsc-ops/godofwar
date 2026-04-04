#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A220
// Address: 0x25a220 - 0x25a2a8
void sub_0025A220_0x25a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A220_0x25a220");
#endif

    ctx->pc = 0x25a220u;

    // 0x25a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a22c: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A22Cu;
    SET_GPR_U32(ctx, 31, 0x25A234u);
    ctx->pc = 0x25A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A22Cu;
            // 0x25a230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A234u; }
        if (ctx->pc != 0x25A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A234u; }
        if (ctx->pc != 0x25A234u) { return; }
    }
    ctx->pc = 0x25A234u;
    // 0x25a234: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25a238: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a23c: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x25a240: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x25a240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x25a244: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x25a244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x25a248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a24c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x25a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x25a250: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x25a250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x25a254: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x25a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x25a258: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x25a258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x25a25c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x25a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x25a260: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x25a260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x25a264: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x25a264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x25a268: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x25a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x25a26c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x25a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x25a270: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x25a270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x25a274: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x25a274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x25a278: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x25a278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x25a27c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x25a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x25a280: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x25a280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x25a284: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x25a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x25a288: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x25a288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x25a28c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x25a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x25a290: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x25a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x25a294: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x25a294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x25a298: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A2A0u;
            // 0x25a2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A2A8u;
}

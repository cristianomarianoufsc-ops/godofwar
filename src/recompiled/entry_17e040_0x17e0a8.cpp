#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17e040
// Address: 0x17e040 - 0x17e0a8
void entry_17e040_0x17e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17e040_0x17e0a8");
#endif

    ctx->pc = 0x17e040u;

    // 0x17e040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e044: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e048: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e050: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17e050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17e054: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17e054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e058: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17e058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e060: 0xc060292  jal         func_180A48
    ctx->pc = 0x17E060u;
    SET_GPR_U32(ctx, 31, 0x17E068u);
    ctx->pc = 0x17E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E060u;
            // 0x17e064: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A48u;
    if (runtime->hasFunction(0x180A48u)) {
        auto targetFn = runtime->lookupFunction(0x180A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E068u; }
        if (ctx->pc != 0x17E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A48_0x180a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E068u; }
        if (ctx->pc != 0x17E068u) { return; }
    }
    ctx->pc = 0x17E068u;
    // 0x17e068: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17e06c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e070: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x17e074: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x17e074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x17e078: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17e07c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x17e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x17e080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e084: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x17e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x17e088: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17e088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17e08c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e094: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17e094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E09Cu;
            // 0x17e0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E0A4u;
    // 0x17e0a4: 0x0  nop
    ctx->pc = 0x17e0a4u;
    // NOP
}

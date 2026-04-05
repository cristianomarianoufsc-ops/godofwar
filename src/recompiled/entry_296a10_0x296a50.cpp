#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_296a10
// Address: 0x296a10 - 0x296a50
void entry_296a10_0x296a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_296a10_0x296a50");
#endif

    ctx->pc = 0x296a10u;

    // 0x296a10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x296a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x296a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x296a18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296a20: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x296a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x296a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296a2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x296a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x296a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a34: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x296a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a38: 0xc0a5a26  jal         func_296898
    ctx->pc = 0x296A38u;
    SET_GPR_U32(ctx, 31, 0x296A40u);
    ctx->pc = 0x296A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296A38u;
            // 0x296a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296898u;
    if (runtime->hasFunction(0x296898u)) {
        auto targetFn = runtime->lookupFunction(0x296898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296A40u; }
        if (ctx->pc != 0x296A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296898_0x296898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296A40u; }
        if (ctx->pc != 0x296A40u) { return; }
    }
    ctx->pc = 0x296A40u;
    // 0x296a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296a44: 0x3e00008  jr          $ra
    ctx->pc = 0x296A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296A44u;
            // 0x296a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296A4Cu;
    // 0x296a4c: 0x0  nop
    ctx->pc = 0x296a4cu;
    // NOP
}

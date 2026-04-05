#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173848
// Address: 0x173848 - 0x173890
void sub_00173848_0x173848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173848_0x173848");
#endif

    ctx->pc = 0x173848u;

    // 0x173848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17384c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17384cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173854: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x173854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x173858: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x173858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17385c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x17385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x173860: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x173860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x173864: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x173868: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x173868u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x17386c: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17386cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x173870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17387c: 0xc09b260  jal         func_26C980
    ctx->pc = 0x17387Cu;
    SET_GPR_U32(ctx, 31, 0x173884u);
    ctx->pc = 0x173880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17387Cu;
            // 0x173880: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173884u; }
        if (ctx->pc != 0x173884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173884u; }
        if (ctx->pc != 0x173884u) { return; }
    }
    ctx->pc = 0x173884u;
    // 0x173884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173888: 0x3e00008  jr          $ra
    ctx->pc = 0x173888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17388Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173888u;
            // 0x17388c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173890u;
}

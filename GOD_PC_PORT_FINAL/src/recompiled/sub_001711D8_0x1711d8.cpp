#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001711D8
// Address: 0x1711d8 - 0x171240
void sub_001711D8_0x1711d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001711D8_0x1711d8");
#endif

    ctx->pc = 0x1711d8u;

    // 0x1711d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1711dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1711dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1711e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1711e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1711e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1711e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1711e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1711ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1711ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711f0: 0x922200c0  lbu         $v0, 0xC0($s1)
    ctx->pc = 0x1711f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1711f4: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1711F4u;
    {
        const bool branch_taken_0x1711f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1711f4) {
            ctx->pc = 0x1711F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1711F4u;
            // 0x1711f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17122Cu;
            goto label_17122c;
        }
    }
    ctx->pc = 0x1711FCu;
    // 0x1711fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1711FCu;
    {
        const bool branch_taken_0x1711fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1711fc) {
            ctx->pc = 0x17120Cu;
            goto label_17120c;
        }
    }
    ctx->pc = 0x171204u;
    // 0x171204: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x171204u;
    {
        const bool branch_taken_0x171204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x171204) {
            ctx->pc = 0x171208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171204u;
            // 0x171208: 0xa23000c0  sb          $s0, 0xC0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 192), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171228u;
            goto label_171228;
        }
    }
    ctx->pc = 0x17120Cu;
label_17120c:
    // 0x17120c: 0xc05c440  jal         func_171100
    ctx->pc = 0x17120Cu;
    SET_GPR_U32(ctx, 31, 0x171214u);
    ctx->pc = 0x171210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17120Cu;
            // 0x171210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171100u;
    if (runtime->hasFunction(0x171100u)) {
        auto targetFn = runtime->lookupFunction(0x171100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171214u; }
        if (ctx->pc != 0x171214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171100_0x171100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171214u; }
        if (ctx->pc != 0x171214u) { return; }
    }
    ctx->pc = 0x171214u;
    // 0x171214: 0xa23000c0  sb          $s0, 0xC0($s1)
    ctx->pc = 0x171214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 192), (uint8_t)GPR_U32(ctx, 16));
    // 0x171218: 0xc05cac8  jal         func_172B20
    ctx->pc = 0x171218u;
    SET_GPR_U32(ctx, 31, 0x171220u);
    ctx->pc = 0x17121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171218u;
            // 0x17121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B20u;
    if (runtime->hasFunction(0x172B20u)) {
        auto targetFn = runtime->lookupFunction(0x172B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171220u; }
        if (ctx->pc != 0x171220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B20_0x172b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171220u; }
        if (ctx->pc != 0x171220u) { return; }
    }
    ctx->pc = 0x171220u;
    // 0x171220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171220u;
    {
        const bool branch_taken_0x171220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171220u;
            // 0x171224: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171220) {
            ctx->pc = 0x17122Cu;
            goto label_17122c;
        }
    }
    ctx->pc = 0x171228u;
label_171228:
    // 0x171228: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17122c:
    // 0x17122c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17122cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171234: 0x3e00008  jr          $ra
    ctx->pc = 0x171234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171234u;
            // 0x171238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17120Cu: goto label_17120c;
            case 0x171228u: goto label_171228;
            case 0x17122Cu: goto label_17122c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17123Cu;
    // 0x17123c: 0x0  nop
    ctx->pc = 0x17123cu;
    // NOP
}

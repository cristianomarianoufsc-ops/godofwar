#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167568
// Address: 0x167568 - 0x1675b0
void sub_00167568_0x167568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167568_0x167568");
#endif

    ctx->pc = 0x167568u;

    // 0x167568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16756c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167578: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x16757c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x16757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x167580: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167580u;
    {
        const bool branch_taken_0x167580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167580) {
            ctx->pc = 0x167584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167580u;
            // 0x167584: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1675A4u;
            goto label_1675a4;
        }
    }
    ctx->pc = 0x167588u;
    // 0x167588: 0xde060028  ld          $a2, 0x28($s0)
    ctx->pc = 0x167588u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16758c: 0xc059c06  jal         func_167018
    ctx->pc = 0x16758Cu;
    SET_GPR_U32(ctx, 31, 0x167594u);
    ctx->pc = 0x167590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16758Cu;
            // 0x167590: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167018u;
    if (runtime->hasFunction(0x167018u)) {
        auto targetFn = runtime->lookupFunction(0x167018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167594u; }
        if (ctx->pc != 0x167594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_167018_0x167318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167594u; }
        if (ctx->pc != 0x167594u) { return; }
    }
    ctx->pc = 0x167594u;
    // 0x167594: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x167598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16759c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x16759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1675a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1675a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1675a4:
    // 0x1675a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1675a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1675a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1675A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1675ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675A8u;
            // 0x1675ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1675A4u: goto label_1675a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1675B0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D638
// Address: 0x22d638 - 0x22d6b0
void sub_0022D638_0x22d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D638_0x22d638");
#endif

    ctx->pc = 0x22d638u;

    // 0x22d638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d63c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x22d63cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d644: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x22d644u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x22d648: 0x8d461268  lw          $a2, 0x1268($t2)
    ctx->pc = 0x22d648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4712)));
    // 0x22d64c: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x22d64cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x22d650: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x22d650u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d654: 0x8d25126c  lw          $a1, 0x126C($t1)
    ctx->pc = 0x22d654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4716)));
    // 0x22d658: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x22d658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x22d65c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d660: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x22d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
    // 0x22d664: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x22d664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x22d668: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x22d668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d66c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22d670: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x22d670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22d674: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x22d674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22d678: 0x24e7b6c0  addiu       $a3, $a3, -0x4940
    ctx->pc = 0x22d678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948544));
    // 0x22d67c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22d680: 0xad461268  sw          $a2, 0x1268($t2)
    ctx->pc = 0x22d680u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4712), GPR_U32(ctx, 6));
    // 0x22d684: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d688: 0xad25126c  sw          $a1, 0x126C($t1)
    ctx->pc = 0x22d688u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4716), GPR_U32(ctx, 5));
    // 0x22d68c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22d690: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x22d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d694: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x22d694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x22d698: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22d698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22d69c: 0xc08b46e  jal         func_22D1B8
    ctx->pc = 0x22D69Cu;
    SET_GPR_U32(ctx, 31, 0x22D6A4u);
    ctx->pc = 0x22D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D69Cu;
            // 0x22d6a0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D1B8u;
    if (runtime->hasFunction(0x22D1B8u)) {
        auto targetFn = runtime->lookupFunction(0x22D1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6A4u; }
        if (ctx->pc != 0x22D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D1B8_0x22d1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D6A4u; }
        if (ctx->pc != 0x22D6A4u) { return; }
    }
    ctx->pc = 0x22D6A4u;
    // 0x22d6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6A8u;
            // 0x22d6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D6B0u;
}

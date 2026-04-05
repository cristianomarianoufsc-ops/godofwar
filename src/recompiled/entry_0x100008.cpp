#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry
// Address: 0x100008 - 0x10008c
void entry_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0x100008");
#endif

    ctx->pc = 0x100008u;

    // 0x100008: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x100008u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10000c: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x10000cu;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100010: 0x70001c28  padduw      $v1, $zero, $zero
    ctx->pc = 0x100010u;
    SET_GPR_VEC(ctx, 3, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100014: 0x70002428  padduw      $a0, $zero, $zero
    ctx->pc = 0x100014u;
    SET_GPR_VEC(ctx, 4, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100018: 0x70002c28  padduw      $a1, $zero, $zero
    ctx->pc = 0x100018u;
    SET_GPR_VEC(ctx, 5, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10001c: 0x70003428  padduw      $a2, $zero, $zero
    ctx->pc = 0x10001cu;
    SET_GPR_VEC(ctx, 6, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100020: 0x70003c28  padduw      $a3, $zero, $zero
    ctx->pc = 0x100020u;
    SET_GPR_VEC(ctx, 7, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100024: 0x70004428  padduw      $t0, $zero, $zero
    ctx->pc = 0x100024u;
    SET_GPR_VEC(ctx, 8, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100028: 0x70004c28  padduw      $t1, $zero, $zero
    ctx->pc = 0x100028u;
    SET_GPR_VEC(ctx, 9, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10002c: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x10002cu;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100030: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x100030u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100034: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x100034u;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100038: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x100038u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10003c: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x10003cu;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100040: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x100040u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100044: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x100044u;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100048: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x100048u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10004c: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x10004cu;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100050: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x100050u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100054: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x100054u;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100058: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x100058u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10005c: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x10005cu;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100060: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x100060u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100064: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x100064u;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100068: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x100068u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10006c: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x10006cu;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100070: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x100070u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100074: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x100074u;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100078: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x100078u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10007c: 0x11  mthi        $zero
    ctx->pc = 0x10007cu;
    ctx->hi = GPR_U64(ctx, 0);
    // 0x100080: 0x70000011  mthi1       $zero
    ctx->pc = 0x100080u;
    ctx->hi1 = GPR_U64(ctx, 0);
    // 0x100084: 0x13  mtlo        $zero
    ctx->pc = 0x100084u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x100088: 0x70000013  mtlo1       $zero
    ctx->pc = 0x100088u;
    ctx->lo1 = GPR_U64(ctx, 0);

    // Patch: Jump to next entry point to avoid unimplemented function error at 0x10008c
    ctx->pc = 0x1001d0u;
    if (runtime->hasFunction(0x1001d0u)) {
        auto targetFn = runtime->lookupFunction(0x1001d0u);
        targetFn(rdram, ctx, runtime);
    }
}

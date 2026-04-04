#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024f908
// Address: 0x24f908 - 0x24f968
void FUN_0024f908_0x24f908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024f908_0x24f908");
#endif

    ctx->pc = 0x24f908u;

    // 0x24f908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f90c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24f90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f910: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F910u;
    {
        const bool branch_taken_0x24f910 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F910u;
            // 0x24f914: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f910) {
            ctx->pc = 0x24F958u;
            goto label_24f958;
        }
    }
    ctx->pc = 0x24F918u;
    // 0x24f918: 0x25060048  addiu       $a2, $t0, 0x48
    ctx->pc = 0x24f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x24f91c: 0x8d070044  lw          $a3, 0x44($t0)
    ctx->pc = 0x24f91cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x24f920: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x24f920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x24f924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24f928: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x24f928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x24f92c: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x24f930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f938: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x24f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x24f93c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24f940: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x24f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x24f944: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24f948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f94c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24F94Cu;
    {
        const bool branch_taken_0x24f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F94Cu;
            // 0x24f950: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f94c) {
            ctx->pc = 0x24F980u;
            return;
        }
    }
    ctx->pc = 0x24F954u;
    // 0x24f954: 0x0  nop
    ctx->pc = 0x24f954u;
    // NOP
label_24f958:
    // 0x24f958: 0x8d040044  lw          $a0, 0x44($t0)
    ctx->pc = 0x24f958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x24f95c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24f960: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x24f964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}

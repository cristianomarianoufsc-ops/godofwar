#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279270
// Address: 0x279270 - 0x2792e8
void sub_00279270_0x279270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279270_0x279270");
#endif

    ctx->pc = 0x279270u;

    // 0x279270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27927c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27927Cu;
    SET_GPR_U32(ctx, 31, 0x279284u);
    ctx->pc = 0x279280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27927Cu;
            // 0x279280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279284u; }
        if (ctx->pc != 0x279284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279284u; }
        if (ctx->pc != 0x279284u) { return; }
    }
    ctx->pc = 0x279284u;
    // 0x279284: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x279284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x279288: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x279288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x27928c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x27928cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x279290: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x279294: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x279294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279298: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x279298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x27929c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x27929cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2792a0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x2792a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x2792a4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2792a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2792a8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x2792a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x2792ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2792acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2792b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2792b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2792b4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2792b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2792b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2792b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2792bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2792bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2792c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2792c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2792c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2792C4u;
    {
        const bool branch_taken_0x2792c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2792C4u;
            // 0x2792c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792c4) {
            ctx->pc = 0x2792D8u;
            goto label_2792d8;
        }
    }
    ctx->pc = 0x2792CCu;
    // 0x2792cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2792ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2792d0: 0x80a64a0  j           func_299280
    ctx->pc = 0x2792D0u;
    ctx->pc = 0x2792D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792D0u;
            // 0x2792d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2792D8u;
label_2792d8:
    // 0x2792d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2792d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2792dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2792DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2792E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2792DCu;
            // 0x2792e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2792D8u: goto label_2792d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2792E4u;
    // 0x2792e4: 0x0  nop
    ctx->pc = 0x2792e4u;
    // NOP
}

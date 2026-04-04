#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279588
// Address: 0x279588 - 0x279600
void sub_00279588_0x279588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279588_0x279588");
#endif

    ctx->pc = 0x279588u;

    // 0x279588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27958c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279594: 0xc0a648c  jal         func_299230
    ctx->pc = 0x279594u;
    SET_GPR_U32(ctx, 31, 0x27959Cu);
    ctx->pc = 0x279598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279594u;
            // 0x279598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27959Cu; }
        if (ctx->pc != 0x27959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27959Cu; }
        if (ctx->pc != 0x27959Cu) { return; }
    }
    ctx->pc = 0x27959Cu;
    // 0x27959c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x27959cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2795a0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2795a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2795a4: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x2795a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x2795a8: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2795ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2795acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2795b0: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x2795b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x2795b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2795b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2795b8: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x2795b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x2795bc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2795bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2795c0: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x2795c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x2795c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2795c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2795c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2795c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2795cc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2795ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2795d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2795d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2795d4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2795d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2795d8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2795d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2795dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2795DCu;
    {
        const bool branch_taken_0x2795dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795DCu;
            // 0x2795e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795dc) {
            ctx->pc = 0x2795F0u;
            goto label_2795f0;
        }
    }
    ctx->pc = 0x2795E4u;
    // 0x2795e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2795e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2795e8: 0x80a64a0  j           func_299280
    ctx->pc = 0x2795E8u;
    ctx->pc = 0x2795ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2795E8u;
            // 0x2795ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2795F0u;
label_2795f0:
    // 0x2795f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2795f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2795f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2795F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2795F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795F4u;
            // 0x2795f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2795F0u: goto label_2795f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2795FCu;
    // 0x2795fc: 0x0  nop
    ctx->pc = 0x2795fcu;
    // NOP
}

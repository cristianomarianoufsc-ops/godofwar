#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27a298
// Address: 0x27a298 - 0x27a340
void entry_27a298_0x27a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27a298_0x27a340");
#endif

    ctx->pc = 0x27a298u;

    // 0x27a298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a29c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a2a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a2a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2a8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27A2A8u;
    SET_GPR_U32(ctx, 31, 0x27A2B0u);
    ctx->pc = 0x27A2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2A8u;
            // 0x27a2ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2B0u; }
        if (ctx->pc != 0x27A2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2B0u; }
        if (ctx->pc != 0x27A2B0u) { return; }
    }
    ctx->pc = 0x27A2B0u;
    // 0x27a2b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27a2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2b4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27a2b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27a2bc: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x27a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x27a2c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27a2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a2c4: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x27a2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x27a2c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A2C8u;
    {
        const bool branch_taken_0x27a2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2C8u;
            // 0x27a2cc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2c8) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2D0u;
    // 0x27a2d0: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x27a2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x27a2d4: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x27a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x27a2d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27a2dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_27a2e0:
    // 0x27a2e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x27a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x27a2e4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27a2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27a2e8: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x27a2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x27a2ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a2f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27a2f4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27a2f8: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x27a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x27a2fc: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x27a2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x27a300: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x27a300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x27a304: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x27a304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x27a308: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A308u;
    {
        const bool branch_taken_0x27a308 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A308u;
            // 0x27a30c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a308) {
            ctx->pc = 0x27A31Cu;
            goto label_27a31c;
        }
    }
    ctx->pc = 0x27A310u;
    // 0x27a310: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x27A310u;
    SET_GPR_U32(ctx, 31, 0x27A318u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A318u; }
        if (ctx->pc != 0x27A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A318u; }
        if (ctx->pc != 0x27A318u) { return; }
    }
    ctx->pc = 0x27A318u;
    // 0x27a318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a31c:
    // 0x27a31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a328: 0x3e00008  jr          $ra
    ctx->pc = 0x27A328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A328u;
            // 0x27a32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A2E0u: goto label_27a2e0;
            case 0x27A31Cu: goto label_27a31c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A330u;
    // 0x27a330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a334: 0x0  nop
    ctx->pc = 0x27a334u;
    // NOP
    // 0x27a338: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a33c: 0x0  nop
    ctx->pc = 0x27a33cu;
    // NOP
}

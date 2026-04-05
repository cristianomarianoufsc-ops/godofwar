#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D928
// Address: 0x27d928 - 0x27d990
void sub_0027D928_0x27d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D928_0x27d928");
#endif

    ctx->pc = 0x27d928u;

    // 0x27d928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d934: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27D934u;
    SET_GPR_U32(ctx, 31, 0x27D93Cu);
    ctx->pc = 0x27D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D934u;
            // 0x27d938: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D93Cu; }
        if (ctx->pc != 0x27D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D93Cu; }
        if (ctx->pc != 0x27D93Cu) { return; }
    }
    ctx->pc = 0x27D93Cu;
    // 0x27d93c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d944: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27D944u;
    {
        const bool branch_taken_0x27d944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D944u;
            // 0x27d948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d944) {
            ctx->pc = 0x27D97Cu;
            goto label_27d97c;
        }
    }
    ctx->pc = 0x27D94Cu;
    // 0x27d94c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27d950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27d950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27d954: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D954u;
    {
        const bool branch_taken_0x27d954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D954u;
            // 0x27d958: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d954) {
            ctx->pc = 0x27D974u;
            goto label_27d974;
        }
    }
    ctx->pc = 0x27D95Cu;
    // 0x27d95c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27d960: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27d964: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x27d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x27d968: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27d96c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D96Cu;
    {
        const bool branch_taken_0x27d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D96Cu;
            // 0x27d970: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d96c) {
            ctx->pc = 0x27D97Cu;
            goto label_27d97c;
        }
    }
    ctx->pc = 0x27D974u;
label_27d974:
    // 0x27d974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27d978: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x27d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_27d97c:
    // 0x27d97c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d984: 0x3e00008  jr          $ra
    ctx->pc = 0x27D984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D984u;
            // 0x27d988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D974u: goto label_27d974;
            case 0x27D97Cu: goto label_27d97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D98Cu;
    // 0x27d98c: 0x0  nop
    ctx->pc = 0x27d98cu;
    // NOP
}

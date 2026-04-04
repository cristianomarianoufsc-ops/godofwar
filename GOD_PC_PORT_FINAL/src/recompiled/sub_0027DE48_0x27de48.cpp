#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DE48
// Address: 0x27de48 - 0x27ded8
void sub_0027DE48_0x27de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DE48_0x27de48");
#endif

    ctx->pc = 0x27de48u;

    // 0x27de48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27de48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27de4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27de50: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27de54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27de58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27de5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27de5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de60: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE60u;
    {
        const bool branch_taken_0x27de60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE60u;
            // 0x27de64: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de60) {
            ctx->pc = 0x27DE70u;
            goto label_27de70;
        }
    }
    ctx->pc = 0x27DE68u;
    // 0x27de68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27DE68u;
    {
        const bool branch_taken_0x27de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE68u;
            // 0x27de6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de68) {
            ctx->pc = 0x27DEC4u;
            goto label_27dec4;
        }
    }
    ctx->pc = 0x27DE70u;
label_27de70:
    // 0x27de70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27DE70u;
    {
        const bool branch_taken_0x27de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE70u;
            // 0x27de74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de70) {
            ctx->pc = 0x27DE84u;
            goto label_27de84;
        }
    }
    ctx->pc = 0x27DE78u;
label_27de78:
    // 0x27de78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27de78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27de7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27de80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x27de80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_27de84:
    // 0x27de84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27de84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de88: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27DE88u;
    SET_GPR_U32(ctx, 31, 0x27DE90u);
    ctx->pc = 0x27DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE88u;
            // 0x27de8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE90u; }
        if (ctx->pc != 0x27DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE90u; }
        if (ctx->pc != 0x27DE90u) { return; }
    }
    ctx->pc = 0x27DE90u;
    // 0x27de90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27de90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27de94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE94u;
    {
        const bool branch_taken_0x27de94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE94u;
            // 0x27de98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de94) {
            ctx->pc = 0x27DEA4u;
            goto label_27dea4;
        }
    }
    ctx->pc = 0x27DE9Cu;
    // 0x27de9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27DE9Cu;
    {
        const bool branch_taken_0x27de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE9Cu;
            // 0x27dea0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de9c) {
            ctx->pc = 0x27DEC4u;
            goto label_27dec4;
        }
    }
    ctx->pc = 0x27DEA4u;
label_27dea4:
    // 0x27dea4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27dea8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27deac: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DEACu;
    {
        const bool branch_taken_0x27deac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEACu;
            // 0x27deb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deac) {
            ctx->pc = 0x27DEC4u;
            goto label_27dec4;
        }
    }
    ctx->pc = 0x27DEB4u;
    // 0x27deb4: 0x4a0fff0  bltz        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27DEB4u;
    {
        const bool branch_taken_0x27deb4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x27DEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEB4u;
            // 0x27deb8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deb4) {
            ctx->pc = 0x27DE78u;
            runtime->cooperativeGuestYield();
            goto label_27de78;
        }
    }
    ctx->pc = 0x27DEBCu;
    // 0x27debc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27dec0: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x27dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
label_27dec4:
    // 0x27dec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27dec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27dec8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27dec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27decc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27deccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x27DED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DED0u;
            // 0x27ded4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DE70u: goto label_27de70;
            case 0x27DE78u: goto label_27de78;
            case 0x27DE84u: goto label_27de84;
            case 0x27DEA4u: goto label_27dea4;
            case 0x27DEC4u: goto label_27dec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DED8u;
}

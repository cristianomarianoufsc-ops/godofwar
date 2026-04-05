#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294268
// Address: 0x294268 - 0x2942e0
void sub_00294268_0x294268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294268_0x294268");
#endif

    ctx->pc = 0x294268u;

    // 0x294268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29426c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294274: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x294274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29427c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29427cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294280: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x294280u;
    {
        const bool branch_taken_0x294280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x294284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294280u;
            // 0x294284: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294280) {
            ctx->pc = 0x2942C0u;
            goto label_2942c0;
        }
    }
    ctx->pc = 0x294288u;
    // 0x294288: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x29428c: 0x8e024aa8  lw          $v0, 0x4AA8($s0)
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19112)));
    // 0x294290: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294290u;
    {
        const bool branch_taken_0x294290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294290u;
            // 0x294294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294290) {
            ctx->pc = 0x2942B0u;
            goto label_2942b0;
        }
    }
    ctx->pc = 0x294298u;
    // 0x294298: 0xc0a5448  jal         func_295120
    ctx->pc = 0x294298u;
    SET_GPR_U32(ctx, 31, 0x2942A0u);
    ctx->pc = 0x295120u;
    if (runtime->hasFunction(0x295120u)) {
        auto targetFn = runtime->lookupFunction(0x295120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942A0u; }
        if (ctx->pc != 0x2942A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295120_0x295120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942A0u; }
        if (ctx->pc != 0x2942A0u) { return; }
    }
    ctx->pc = 0x2942A0u;
    // 0x2942a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2942A0u;
    {
        const bool branch_taken_0x2942a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2942A0u;
            // 0x2942a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942a0) {
            ctx->pc = 0x2942C0u;
            goto label_2942c0;
        }
    }
    ctx->pc = 0x2942A8u;
    // 0x2942a8: 0xae024aa8  sw          $v0, 0x4AA8($s0)
    ctx->pc = 0x2942a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19112), GPR_U32(ctx, 2));
    // 0x2942ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2942acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2942b0:
    // 0x2942b0: 0xc0a5414  jal         func_295050
    ctx->pc = 0x2942B0u;
    SET_GPR_U32(ctx, 31, 0x2942B8u);
    ctx->pc = 0x2942B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2942B0u;
            // 0x2942b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295050u;
    if (runtime->hasFunction(0x295050u)) {
        auto targetFn = runtime->lookupFunction(0x295050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942B8u; }
        if (ctx->pc != 0x2942B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295050_0x295050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942B8u; }
        if (ctx->pc != 0x2942B8u) { return; }
    }
    ctx->pc = 0x2942B8u;
    // 0x2942b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2942B8u;
    {
        const bool branch_taken_0x2942b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2942B8u;
            // 0x2942bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942b8) {
            ctx->pc = 0x2942C8u;
            goto label_2942c8;
        }
    }
    ctx->pc = 0x2942C0u;
label_2942c0:
    // 0x2942c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2942c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2942c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2942c8:
    // 0x2942c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2942c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2942cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2942ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2942d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2942d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2942d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2942D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2942D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2942D4u;
            // 0x2942d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2942B0u: goto label_2942b0;
            case 0x2942C0u: goto label_2942c0;
            case 0x2942C8u: goto label_2942c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2942DCu;
    // 0x2942dc: 0x0  nop
    ctx->pc = 0x2942dcu;
    // NOP
}

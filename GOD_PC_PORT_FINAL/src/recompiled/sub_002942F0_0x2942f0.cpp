#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002942F0
// Address: 0x2942f0 - 0x2943a0
void sub_002942F0_0x2942f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002942F0_0x2942f0");
#endif

    ctx->pc = 0x2942f0u;

    // 0x2942f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2942f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2942f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2942f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2942f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2942f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2942fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2942fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294304: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x294304u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x294308: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29430c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x29430cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x294310: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x294310u;
    {
        const bool branch_taken_0x294310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x294314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294310u;
            // 0x294314: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294310) {
            ctx->pc = 0x29433Cu;
            goto label_29433c;
        }
    }
    ctx->pc = 0x294318u;
label_294318:
    // 0x294318: 0x42000039  di
    ctx->pc = 0x294318u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x29431c: 0x40f  sync.p
    ctx->pc = 0x29431cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294320: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x294320u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x294324: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x294328: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29432c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29432Cu;
    {
        const bool branch_taken_0x29432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29432c) {
            ctx->pc = 0x294318u;
            runtime->cooperativeGuestYield();
            goto label_294318;
        }
    }
    ctx->pc = 0x294334u;
    // 0x294334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294334u;
    {
        const bool branch_taken_0x294334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294334u;
            // 0x294338: 0x8e424aac  lw          $v0, 0x4AAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294334) {
            ctx->pc = 0x294340u;
            goto label_294340;
        }
    }
    ctx->pc = 0x29433Cu;
label_29433c:
    // 0x29433c: 0x8e424aac  lw          $v0, 0x4AAC($s2)
    ctx->pc = 0x29433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19116)));
label_294340:
    // 0x294340: 0xc0a4f00  jal         func_293C00
    ctx->pc = 0x294340u;
    SET_GPR_U32(ctx, 31, 0x294348u);
    ctx->pc = 0x294344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294340u;
            // 0x294344: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C00u;
    if (runtime->hasFunction(0x293C00u)) {
        auto targetFn = runtime->lookupFunction(0x293C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294348u; }
        if (ctx->pc != 0x294348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c00_0x293c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294348u; }
        if (ctx->pc != 0x294348u) { return; }
    }
    ctx->pc = 0x294348u;
    // 0x294348: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x294348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x29434c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29434Cu;
    {
        const bool branch_taken_0x29434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29434Cu;
            // 0x294350: 0x8e424aac  lw          $v0, 0x4AAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29434c) {
            ctx->pc = 0x294378u;
            goto label_294378;
        }
    }
    ctx->pc = 0x294354u;
    // 0x294354: 0xc0a247c  jal         func_2891F0
    ctx->pc = 0x294354u;
    SET_GPR_U32(ctx, 31, 0x29435Cu);
    ctx->pc = 0x2891F0u;
    if (runtime->hasFunction(0x2891F0u)) {
        auto targetFn = runtime->lookupFunction(0x2891F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29435Cu; }
        if (ctx->pc != 0x29435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891f0_0x289200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29435Cu; }
        if (ctx->pc != 0x29435Cu) { return; }
    }
    ctx->pc = 0x29435Cu;
    // 0x29435c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x294360: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x294360u;
    {
        const bool branch_taken_0x294360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x294364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294360u;
            // 0x294364: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294360) {
            ctx->pc = 0x29436Cu;
            goto label_29436c;
        }
    }
    ctx->pc = 0x294368u;
    // 0x294368: 0x42000038  ei
    ctx->pc = 0x294368u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_29436c:
    // 0x29436c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x294370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x294370u;
    {
        const bool branch_taken_0x294370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294370u;
            // 0x294374: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294370) {
            ctx->pc = 0x294384u;
            goto label_294384;
        }
    }
    ctx->pc = 0x294378u;
label_294378:
    // 0x294378: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x294378u;
    {
        const bool branch_taken_0x294378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294378u;
            // 0x29437c: 0xae504aac  sw          $s0, 0x4AAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 19116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294378) {
            ctx->pc = 0x294384u;
            goto label_294384;
        }
    }
    ctx->pc = 0x294380u;
    // 0x294380: 0x42000038  ei
    ctx->pc = 0x294380u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_294384:
    // 0x294384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294388: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29438c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29438cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294394: 0x3e00008  jr          $ra
    ctx->pc = 0x294394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294394u;
            // 0x294398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294318u: goto label_294318;
            case 0x29433Cu: goto label_29433c;
            case 0x294340u: goto label_294340;
            case 0x29436Cu: goto label_29436c;
            case 0x294378u: goto label_294378;
            case 0x294384u: goto label_294384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29439Cu;
    // 0x29439c: 0x0  nop
    ctx->pc = 0x29439cu;
    // NOP
}

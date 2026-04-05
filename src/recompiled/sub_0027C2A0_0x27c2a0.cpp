#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C2A0
// Address: 0x27c2a0 - 0x27c380
void sub_0027C2A0_0x27c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C2A0_0x27c2a0");
#endif

    ctx->pc = 0x27c2a0u;

    // 0x27c2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c2a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c2a8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x27c2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x27c2ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27c2b0: 0x8e423310  lw          $v0, 0x3310($s2)
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13072)));
    // 0x27c2b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c2b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C2B8u;
    {
        const bool branch_taken_0x27c2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2B8u;
            // 0x27c2bc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2b8) {
            ctx->pc = 0x27C2CCu;
            goto label_27c2cc;
        }
    }
    ctx->pc = 0x27C2C0u;
    // 0x27c2c0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c2c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27C2C4u;
    {
        const bool branch_taken_0x27c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2C4u;
            // 0x27c2c8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2c4) {
            ctx->pc = 0x27C368u;
            goto label_27c368;
        }
    }
    ctx->pc = 0x27C2CCu;
label_27c2cc:
    // 0x27c2cc: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27c2d0: 0x8c430384  lw          $v1, 0x384($v0)
    ctx->pc = 0x27c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 900)));
    // 0x27c2d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C2D4u;
    {
        const bool branch_taken_0x27c2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2D4u;
            // 0x27c2d8: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2d4) {
            ctx->pc = 0x27C2E8u;
            goto label_27c2e8;
        }
    }
    ctx->pc = 0x27C2DCu;
    // 0x27c2dc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c2e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27C2E0u;
    {
        const bool branch_taken_0x27c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2E0u;
            // 0x27c2e4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2e0) {
            ctx->pc = 0x27C368u;
            goto label_27c368;
        }
    }
    ctx->pc = 0x27C2E8u;
label_27c2e8:
    // 0x27c2e8: 0x263008a0  addiu       $s0, $s1, 0x8A0
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
    // 0x27c2ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27c2f0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C2F0u;
    {
        const bool branch_taken_0x27c2f0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x27c2f0) {
            ctx->pc = 0x27C2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2F0u;
            // 0x27c2f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C304u;
            goto label_27c304;
        }
    }
    ctx->pc = 0x27C2F8u;
    // 0x27c2f8: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27C2F8u;
    SET_GPR_U32(ctx, 31, 0x27C300u);
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C300u; }
        if (ctx->pc != 0x27C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C300u; }
        if (ctx->pc != 0x27C300u) { return; }
    }
    ctx->pc = 0x27C300u;
    // 0x27c300: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27c304:
    // 0x27c304: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C304u;
    {
        const bool branch_taken_0x27c304 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C304u;
            // 0x27c308: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c304) {
            ctx->pc = 0x27C318u;
            goto label_27c318;
        }
    }
    ctx->pc = 0x27C30Cu;
    // 0x27c30c: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27C30Cu;
    SET_GPR_U32(ctx, 31, 0x27C314u);
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C314u; }
        if (ctx->pc != 0x27C314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C314u; }
        if (ctx->pc != 0x27C314u) { return; }
    }
    ctx->pc = 0x27C314u;
    // 0x27c314: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_27c318:
    // 0x27c318: 0x8c4408ac  lw          $a0, 0x8AC($v0)
    ctx->pc = 0x27c318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2220)));
    // 0x27c31c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C31Cu;
    {
        const bool branch_taken_0x27c31c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x27c31c) {
            ctx->pc = 0x27C320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C31Cu;
            // 0x27c320: 0x8e2408a0  lw          $a0, 0x8A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C330u;
            goto label_27c330;
        }
    }
    ctx->pc = 0x27C324u;
    // 0x27c324: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x27C324u;
    SET_GPR_U32(ctx, 31, 0x27C32Cu);
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C32Cu; }
        if (ctx->pc != 0x27C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C32Cu; }
        if (ctx->pc != 0x27C32Cu) { return; }
    }
    ctx->pc = 0x27C32Cu;
    // 0x27c32c: 0x8e2408a0  lw          $a0, 0x8A0($s1)
    ctx->pc = 0x27c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
label_27c330:
    // 0x27c330: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C330u;
    {
        const bool branch_taken_0x27c330 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x27c330) {
            ctx->pc = 0x27C358u;
            goto label_27c358;
        }
    }
    ctx->pc = 0x27C338u;
    // 0x27c338: 0xc0a4e9c  jal         func_293A70
    ctx->pc = 0x27C338u;
    SET_GPR_U32(ctx, 31, 0x27C340u);
    ctx->pc = 0x293A70u;
    if (runtime->hasFunction(0x293A70u)) {
        auto targetFn = runtime->lookupFunction(0x293A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C340u; }
        if (ctx->pc != 0x27C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293a70_0x293ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C340u; }
        if (ctx->pc != 0x27C340u) { return; }
    }
    ctx->pc = 0x27C340u;
    // 0x27c340: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C340u;
    {
        const bool branch_taken_0x27c340 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C340u;
            // 0x27c344: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c340) {
            ctx->pc = 0x27C350u;
            goto label_27c350;
        }
    }
    ctx->pc = 0x27C348u;
    // 0x27c348: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27C348u;
    SET_GPR_U32(ctx, 31, 0x27C350u);
    ctx->pc = 0x27C34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C348u;
            // 0x27c34c: 0x24845068  addiu       $a0, $a0, 0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C350u; }
        if (ctx->pc != 0x27C350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C350u; }
        if (ctx->pc != 0x27C350u) { return; }
    }
    ctx->pc = 0x27C350u;
label_27c350:
    // 0x27c350: 0xc0a4e8c  jal         func_293A30
    ctx->pc = 0x27C350u;
    SET_GPR_U32(ctx, 31, 0x27C358u);
    ctx->pc = 0x27C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C350u;
            // 0x27c354: 0x8e2408a0  lw          $a0, 0x8A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293A30u;
    if (runtime->hasFunction(0x293A30u)) {
        auto targetFn = runtime->lookupFunction(0x293A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C358u; }
        if (ctx->pc != 0x27C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293a30_0x293a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C358u; }
        if (ctx->pc != 0x27C358u) { return; }
    }
    ctx->pc = 0x27C358u;
label_27c358:
    // 0x27c358: 0xc0a0876  jal         func_2821D8
    ctx->pc = 0x27C358u;
    SET_GPR_U32(ctx, 31, 0x27C360u);
    ctx->pc = 0x2821D8u;
    if (runtime->hasFunction(0x2821D8u)) {
        auto targetFn = runtime->lookupFunction(0x2821D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C360u; }
        if (ctx->pc != 0x27C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002821D8_0x2821d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C360u; }
        if (ctx->pc != 0x27C360u) { return; }
    }
    ctx->pc = 0x27C360u;
    // 0x27c360: 0xae403310  sw          $zero, 0x3310($s2)
    ctx->pc = 0x27c360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 13072), GPR_U32(ctx, 0));
    // 0x27c364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c368:
    // 0x27c368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c36c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c370: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c378: 0x3e00008  jr          $ra
    ctx->pc = 0x27C378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C378u;
            // 0x27c37c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C2CCu: goto label_27c2cc;
            case 0x27C2E8u: goto label_27c2e8;
            case 0x27C304u: goto label_27c304;
            case 0x27C318u: goto label_27c318;
            case 0x27C330u: goto label_27c330;
            case 0x27C350u: goto label_27c350;
            case 0x27C358u: goto label_27c358;
            case 0x27C368u: goto label_27c368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C380u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECF70
// Address: 0x1ecf70 - 0x1ed018
void sub_001ECF70_0x1ecf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECF70_0x1ecf70");
#endif

    ctx->pc = 0x1ecf70u;

    // 0x1ecf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecf74: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ecf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ecf78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecf7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ecf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ecf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ecf84: 0x8e22e248  lw          $v0, -0x1DB8($s1)
    ctx->pc = 0x1ecf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959688)));
    // 0x1ecf88: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ECF88u;
    {
        const bool branch_taken_0x1ecf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF88u;
            // 0x1ecf8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf88) {
            ctx->pc = 0x1ECFFCu;
            goto label_1ecffc;
        }
    }
    ctx->pc = 0x1ECF90u;
    // 0x1ecf90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ecf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf94: 0x2622e248  addiu       $v0, $s1, -0x1DB8
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959688));
label_1ecf98:
    // 0x1ecf98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ecf9c: 0xc04d7fa  jal         func_135FE8
    ctx->pc = 0x1ECF9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECFA4u);
    ctx->pc = 0x1ECFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF9Cu;
            // 0x1ecfa0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FE8u;
    if (runtime->hasFunction(0x135FE8u)) {
        auto targetFn = runtime->lookupFunction(0x135FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFA4u; }
        if (ctx->pc != 0x1ECFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FE8_0x135fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFA4u; }
        if (ctx->pc != 0x1ECFA4u) { return; }
    }
    ctx->pc = 0x1ECFA4u;
    // 0x1ecfa4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ecfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1ecfa8: 0x8c63ec7c  lw          $v1, -0x1384($v1)
    ctx->pc = 0x1ecfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962300)));
    // 0x1ecfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ecfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecfb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ecfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ecfb4: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1ecfb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECFB8u;
    {
        const bool branch_taken_0x1ecfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFB8u;
            // 0x1ecfbc: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfb8) {
            ctx->pc = 0x1ECFD0u;
            goto label_1ecfd0;
        }
    }
    ctx->pc = 0x1ECFC0u;
    // 0x1ecfc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecfc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECFC4u;
    {
        const bool branch_taken_0x1ecfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFC4u;
            // 0x1ecfc8: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfc4) {
            ctx->pc = 0x1ECFD4u;
            goto label_1ecfd4;
        }
    }
    ctx->pc = 0x1ECFCCu;
    // 0x1ecfcc: 0x0  nop
    ctx->pc = 0x1ecfccu;
    // NOP
label_1ecfd0:
    // 0x1ecfd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecfd4:
    // 0x1ecfd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ecfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ecfd8: 0x2623e248  addiu       $v1, $s1, -0x1DB8
    ctx->pc = 0x1ecfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959688));
    // 0x1ecfdc: 0x24426268  addiu       $v0, $v0, 0x6268
    ctx->pc = 0x1ecfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25192));
    // 0x1ecfe0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ecfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ecfe4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ecfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ecfe8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ecfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ecfec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ecfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ecff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecff4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1ECFF4u;
    {
        const bool branch_taken_0x1ecff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFF4u;
            // 0x1ecff8: 0x2622e248  addiu       $v0, $s1, -0x1DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecff4) {
            ctx->pc = 0x1ECF98u;
            runtime->cooperativeGuestYield();
            goto label_1ecf98;
        }
    }
    ctx->pc = 0x1ECFFCu;
label_1ecffc:
    // 0x1ecffc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ecffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed008: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED008u;
            // 0x1ed00c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECF98u: goto label_1ecf98;
            case 0x1ECFD0u: goto label_1ecfd0;
            case 0x1ECFD4u: goto label_1ecfd4;
            case 0x1ECFFCu: goto label_1ecffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED010u;
    // 0x1ed010: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1ed010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ed014: 0x0  nop
    ctx->pc = 0x1ed014u;
    // NOP
}

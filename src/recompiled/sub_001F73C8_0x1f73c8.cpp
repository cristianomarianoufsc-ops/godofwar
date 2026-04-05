#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F73C8
// Address: 0x1f73c8 - 0x1f7540
void sub_001F73C8_0x1f73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F73C8_0x1f73c8");
#endif

    ctx->pc = 0x1f73c8u;

    // 0x1f73c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f73cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1f73d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1f73d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f73d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1f73dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f73dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f73e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1f73e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f73e8: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1F73E8u;
    SET_GPR_U32(ctx, 31, 0x1F73F0u);
    ctx->pc = 0x1F73ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F73E8u;
            // 0x1f73ec: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73F0u; }
        if (ctx->pc != 0x1F73F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73F0u; }
        if (ctx->pc != 0x1F73F0u) { return; }
    }
    ctx->pc = 0x1F73F0u;
    // 0x1f73f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f73f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73f4: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F73F4u;
    {
        const bool branch_taken_0x1f73f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F73F4u;
            // 0x1f73f8: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73f4) {
            ctx->pc = 0x1F7520u;
            goto label_1f7520;
        }
    }
    ctx->pc = 0x1F73FCu;
    // 0x1f73fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7400: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f7400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f7404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7408: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x1f7408u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f740c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f740cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7410: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x1f7410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x1f7414: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f7414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f7418: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x1f7418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f741c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x1f741cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7420: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x1f7420u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7424: 0x0  nop
    ctx->pc = 0x1f7424u;
    // NOP
label_1f7428:
    // 0x1f7428: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f7428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f742c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1f7430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7434: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f7434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f7438: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1f7438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f743c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F743Cu;
    {
        const bool branch_taken_0x1f743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F743Cu;
            // 0x1f7440: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f743c) {
            ctx->pc = 0x1F7428u;
            runtime->cooperativeGuestYield();
            goto label_1f7428;
        }
    }
    ctx->pc = 0x1F7444u;
    // 0x1f7444: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1f7444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1f7448: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1f7448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1f744c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1f744cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1f7450: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1f7454: 0x2662e848  addiu       $v0, $s3, -0x17B8
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x1f7458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f745c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f7460: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f7464: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f7464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f7468: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f7468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f746c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F746Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7474u);
        ctx->pc = 0x1F7470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F746Cu;
            // 0x1f7470: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7474u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7428u: goto label_1f7428;
            case 0x1F7488u: goto label_1f7488;
            case 0x1F74B0u: goto label_1f74b0;
            case 0x1F74C8u: goto label_1f74c8;
            case 0x1F74CCu: goto label_1f74cc;
            case 0x1F74DCu: goto label_1f74dc;
            case 0x1F74E0u: goto label_1f74e0;
            case 0x1F7520u: goto label_1f7520;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7474u; }
            if (ctx->pc != 0x1F7474u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7474u;
    // 0x1f7474: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1f7474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f7478: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7478u;
    {
        const bool branch_taken_0x1f7478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7478u;
            // 0x1f747c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7478) {
            ctx->pc = 0x1F7488u;
            goto label_1f7488;
        }
    }
    ctx->pc = 0x1F7480u;
    // 0x1f7480: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x1F7480u;
    SET_GPR_U32(ctx, 31, 0x1F7488u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7488u; }
        if (ctx->pc != 0x1F7488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7488u; }
        if (ctx->pc != 0x1F7488u) { return; }
    }
    ctx->pc = 0x1F7488u;
label_1f7488:
    // 0x1f7488: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1f7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1f748c: 0xae300094  sw          $s0, 0x94($s1)
    ctx->pc = 0x1f748cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
    // 0x1f7490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7494: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1f7494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7498: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7498u;
    {
        const bool branch_taken_0x1f7498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7498u;
            // 0x1f749c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7498) {
            ctx->pc = 0x1F74DCu;
            goto label_1f74dc;
        }
    }
    ctx->pc = 0x1F74A0u;
    // 0x1f74a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1f74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1f74a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F74A4u;
    {
        const bool branch_taken_0x1f74a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74A4u;
            // 0x1f74a8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74a4) {
            ctx->pc = 0x1F74CCu;
            goto label_1f74cc;
        }
    }
    ctx->pc = 0x1F74ACu;
    // 0x1f74ac: 0x0  nop
    ctx->pc = 0x1f74acu;
    // NOP
label_1f74b0:
    // 0x1f74b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f74b4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1f74b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1f74b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F74B8u;
    {
        const bool branch_taken_0x1f74b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f74b8) {
            ctx->pc = 0x1F74BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74B8u;
            // 0x1f74bc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F74C8u;
            goto label_1f74c8;
        }
    }
    ctx->pc = 0x1F74C0u;
    // 0x1f74c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F74C0u;
    {
        const bool branch_taken_0x1f74c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74C0u;
            // 0x1f74c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74c0) {
            ctx->pc = 0x1F74E0u;
            goto label_1f74e0;
        }
    }
    ctx->pc = 0x1F74C8u;
label_1f74c8:
    // 0x1f74c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f74cc:
    // 0x1f74cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1f74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1f74d0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1f74d4: 0x5443fff6  bnel        $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F74D4u;
    {
        const bool branch_taken_0x1f74d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f74d4) {
            ctx->pc = 0x1F74D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F74D4u;
            // 0x1f74d8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F74B0u;
            runtime->cooperativeGuestYield();
            goto label_1f74b0;
        }
    }
    ctx->pc = 0x1F74DCu;
label_1f74dc:
    // 0x1f74dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f74dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f74e0:
    // 0x1f74e0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1f74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1f74e4: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x1f74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x1f74e8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1f74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1f74ec: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x1f74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
    // 0x1f74f0: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x1f74f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f74f4: 0xaca20068  sw          $v0, 0x68($a1)
    ctx->pc = 0x1f74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 2));
    // 0x1f74f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f74f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f74fc: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x1f74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x1f7500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f7500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f7504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f7508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f750c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f7510: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f7514: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f7518: 0x40f809  jalr        $v0
    ctx->pc = 0x1F7518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7520u);
        ctx->pc = 0x1F751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7518u;
            // 0x1f751c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F7520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7428u: goto label_1f7428;
            case 0x1F7488u: goto label_1f7488;
            case 0x1F74B0u: goto label_1f74b0;
            case 0x1F74C8u: goto label_1f74c8;
            case 0x1F74CCu: goto label_1f74cc;
            case 0x1F74DCu: goto label_1f74dc;
            case 0x1F74E0u: goto label_1f74e0;
            case 0x1F7520u: goto label_1f7520;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F7520u; }
            if (ctx->pc != 0x1F7520u) { return; }
        }
        }
    }
    ctx->pc = 0x1F7520u;
label_1f7520:
    // 0x1f7520: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f7520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7524: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f7524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7528: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f7528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f752c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f752cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f7530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7534: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7534u;
            // 0x1f7538: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7428u: goto label_1f7428;
            case 0x1F7488u: goto label_1f7488;
            case 0x1F74B0u: goto label_1f74b0;
            case 0x1F74C8u: goto label_1f74c8;
            case 0x1F74CCu: goto label_1f74cc;
            case 0x1F74DCu: goto label_1f74dc;
            case 0x1F74E0u: goto label_1f74e0;
            case 0x1F7520u: goto label_1f7520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F753Cu;
    // 0x1f753c: 0x0  nop
    ctx->pc = 0x1f753cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299748
// Address: 0x299748 - 0x299890
void sub_00299748_0x299748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299748_0x299748");
#endif

    ctx->pc = 0x299748u;

    // 0x299748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x299748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29974c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x299750: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x299750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x299754: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x299754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x299758: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29975c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x299760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299768: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x299768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x29976c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x29976Cu;
    {
        const bool branch_taken_0x29976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29976Cu;
            // 0x299770: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29976c) {
            ctx->pc = 0x299808u;
            goto label_299808;
        }
    }
    ctx->pc = 0x299774u;
    // 0x299774: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x299774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x299778: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29977c: 0x24505ab8  addiu       $s0, $v0, 0x5AB8
    ctx->pc = 0x29977cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23224));
    // 0x299780: 0x8c445ab8  lw          $a0, 0x5AB8($v0)
    ctx->pc = 0x299780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23224)));
    // 0x299784: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x299788: 0xc0a65b8  jal         func_2996E0
    ctx->pc = 0x299788u;
    SET_GPR_U32(ctx, 31, 0x299790u);
    ctx->pc = 0x29978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299788u;
            // 0x29978c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996E0u;
    if (runtime->hasFunction(0x2996E0u)) {
        auto targetFn = runtime->lookupFunction(0x2996E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299790u; }
        if (ctx->pc != 0x299790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996e0_0x2996f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299790u; }
        if (ctx->pc != 0x299790u) { return; }
    }
    ctx->pc = 0x299790u;
    // 0x299790: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x299794: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x299794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x299798: 0x24a55350  addiu       $a1, $a1, 0x5350
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
    // 0x29979c: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x29979cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x2997a0: 0xc0a65bc  jal         func_2996F0
    ctx->pc = 0x2997A0u;
    SET_GPR_U32(ctx, 31, 0x2997A8u);
    ctx->pc = 0x2997A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997A0u;
            // 0x2997a4: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996F0u;
    if (runtime->hasFunction(0x2996F0u)) {
        auto targetFn = runtime->lookupFunction(0x2996F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997A8u; }
        if (ctx->pc != 0x2997A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996f0_0x299738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997A8u; }
        if (ctx->pc != 0x2997A8u) { return; }
    }
    ctx->pc = 0x2997A8u;
    // 0x2997a8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2997ac: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2997acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2997b0: 0x24a55a90  addiu       $a1, $a1, 0x5A90
    ctx->pc = 0x2997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23184));
    // 0x2997b4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2997b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2997b8: 0xc0a65bc  jal         func_2996F0
    ctx->pc = 0x2997B8u;
    SET_GPR_U32(ctx, 31, 0x2997C0u);
    ctx->pc = 0x2997BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997B8u;
            // 0x2997bc: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996F0u;
    if (runtime->hasFunction(0x2996F0u)) {
        auto targetFn = runtime->lookupFunction(0x2996F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997C0u; }
        if (ctx->pc != 0x2997C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996f0_0x299738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997C0u; }
        if (ctx->pc != 0x2997C0u) { return; }
    }
    ctx->pc = 0x2997C0u;
    // 0x2997c0: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x2997C0u;
    SET_GPR_U32(ctx, 31, 0x2997C8u);
    ctx->pc = 0x2997C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997C0u;
            // 0x2997c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997C8u; }
        if (ctx->pc != 0x2997C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997C8u; }
        if (ctx->pc != 0x2997C8u) { return; }
    }
    ctx->pc = 0x2997C8u;
    // 0x2997c8: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x2997C8u;
    SET_GPR_U32(ctx, 31, 0x2997D0u);
    ctx->pc = 0x2997CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997C8u;
            // 0x2997cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997D0u; }
        if (ctx->pc != 0x2997D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997D0u; }
        if (ctx->pc != 0x2997D0u) { return; }
    }
    ctx->pc = 0x2997D0u;
    // 0x2997d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2997d4: 0xc0a65b8  jal         func_2996E0
    ctx->pc = 0x2997D4u;
    SET_GPR_U32(ctx, 31, 0x2997DCu);
    ctx->pc = 0x2997D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997D4u;
            // 0x2997d8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996E0u;
    if (runtime->hasFunction(0x2996E0u)) {
        auto targetFn = runtime->lookupFunction(0x2996E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997DCu; }
        if (ctx->pc != 0x2997DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996e0_0x2996f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997DCu; }
        if (ctx->pc != 0x2997DCu) { return; }
    }
    ctx->pc = 0x2997DCu;
    // 0x2997dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2997e0:
    // 0x2997e0: 0xc0a65ce  jal         func_299738
    ctx->pc = 0x2997E0u;
    SET_GPR_U32(ctx, 31, 0x2997E8u);
    ctx->pc = 0x2997E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997E0u;
            // 0x2997e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299738u;
    if (runtime->hasFunction(0x299738u)) {
        auto targetFn = runtime->lookupFunction(0x299738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997E8u; }
        if (ctx->pc != 0x2997E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299738_0x299748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997E8u; }
        if (ctx->pc != 0x2997E8u) { return; }
    }
    ctx->pc = 0x2997E8u;
    // 0x2997e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2997ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2997ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997f0: 0xc0a65b8  jal         func_2996E0
    ctx->pc = 0x2997F0u;
    SET_GPR_U32(ctx, 31, 0x2997F8u);
    ctx->pc = 0x2997F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2997F0u;
            // 0x2997f4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996E0u;
    if (runtime->hasFunction(0x2996E0u)) {
        auto targetFn = runtime->lookupFunction(0x2996E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997F8u; }
        if (ctx->pc != 0x2997F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2996e0_0x2996f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997F8u; }
        if (ctx->pc != 0x2997F8u) { return; }
    }
    ctx->pc = 0x2997F8u;
    // 0x2997f8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x2997f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2997fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2997FCu;
    {
        const bool branch_taken_0x2997fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2997fc) {
            ctx->pc = 0x299800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2997FCu;
            // 0x299800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2997E0u;
            runtime->cooperativeGuestYield();
            goto label_2997e0;
        }
    }
    ctx->pc = 0x299804u;
    // 0x299804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_299808:
    // 0x299808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29980c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29980cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299814: 0x3e00008  jr          $ra
    ctx->pc = 0x299814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299814u;
            // 0x299818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2997E0u: goto label_2997e0;
            case 0x299808u: goto label_299808;
            case 0x299838u: goto label_299838;
            case 0x29985Cu: goto label_29985c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29981Cu;
    // 0x29981c: 0x0  nop
    ctx->pc = 0x29981cu;
    // NOP
    // 0x299820: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x299820u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x299824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x299828: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29982c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29982Cu;
    {
        const bool branch_taken_0x29982c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29982Cu;
            // 0x299830: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29982c) {
            ctx->pc = 0x29985Cu;
            goto label_29985c;
        }
    }
    ctx->pc = 0x299834u;
    // 0x299834: 0x0  nop
    ctx->pc = 0x299834u;
    // NOP
label_299838:
    // 0x299838: 0x42000039  di
    ctx->pc = 0x299838u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x29983c: 0x40f  sync.p
    ctx->pc = 0x29983cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299840: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x299844: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x299844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x299848: 0x0  nop
    ctx->pc = 0x299848u;
    // NOP
    // 0x29984c: 0x0  nop
    ctx->pc = 0x29984cu;
    // NOP
    // 0x299850: 0x0  nop
    ctx->pc = 0x299850u;
    // NOP
    // 0x299854: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299854u;
    {
        const bool branch_taken_0x299854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299854) {
            ctx->pc = 0x299838u;
            runtime->cooperativeGuestYield();
            goto label_299838;
        }
    }
    ctx->pc = 0x29985Cu;
label_29985c:
    // 0x29985c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x29985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x299860: 0x40f  sync.p
    ctx->pc = 0x299860u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299864: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x299864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x299868: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x299868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x29986c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299870: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x299870u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x299874: 0x40f  sync.p
    ctx->pc = 0x299874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299878: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x299878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29987c: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x29987cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x299880: 0x40f  sync.p
    ctx->pc = 0x299880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299884: 0x42000018  eret
    ctx->pc = 0x299884u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x299888: 0x3e00008  jr          $ra
    ctx->pc = 0x299888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2997E0u: goto label_2997e0;
            case 0x299808u: goto label_299808;
            case 0x299838u: goto label_299838;
            case 0x29985Cu: goto label_29985c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299890u;
}

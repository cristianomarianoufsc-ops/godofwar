#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C048
// Address: 0x14c048 - 0x14c1a0
void sub_0014C048_0x14c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C048_0x14c048");
#endif

    ctx->pc = 0x14c048u;

    // 0x14c048: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14c04c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x14c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x14c050: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14c054: 0x24a51d30  addiu       $a1, $a1, 0x1D30
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
    // 0x14c058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c05c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14c060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c064: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14c068: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14c06c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14c070: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x14C070u;
    SET_GPR_U32(ctx, 31, 0x14C078u);
    ctx->pc = 0x14C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C070u;
            // 0x14c074: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    }
    ctx->pc = 0x14C078u;
    // 0x14c078: 0xc05e996  jal         func_17A658
    ctx->pc = 0x14C078u;
    SET_GPR_U32(ctx, 31, 0x14C080u);
    ctx->pc = 0x14C07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C078u;
            // 0x14c07c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C080u; }
        if (ctx->pc != 0x14C080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C080u; }
        if (ctx->pc != 0x14C080u) { return; }
    }
    ctx->pc = 0x14C080u;
    // 0x14c080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c084: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C084u;
    {
        const bool branch_taken_0x14c084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C084u;
            // 0x14c088: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c084) {
            ctx->pc = 0x14C0B0u;
            goto label_14c0b0;
        }
    }
    ctx->pc = 0x14C08Cu;
    // 0x14c08c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c090: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14c090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c094: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x14C094u;
    SET_GPR_U32(ctx, 31, 0x14C09Cu);
    ctx->pc = 0x14C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C094u;
            // 0x14c098: 0x24a51d38  addiu       $a1, $a1, 0x1D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C09Cu; }
        if (ctx->pc != 0x14C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C09Cu; }
        if (ctx->pc != 0x14C09Cu) { return; }
    }
    ctx->pc = 0x14C09Cu;
    // 0x14c09c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x14C09Cu;
    SET_GPR_U32(ctx, 31, 0x14C0A4u);
    ctx->pc = 0x14C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C09Cu;
            // 0x14c0a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A4u; }
        if (ctx->pc != 0x14C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A4u; }
        if (ctx->pc != 0x14C0A4u) { return; }
    }
    ctx->pc = 0x14C0A4u;
    // 0x14c0a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14c0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0a8: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C0A8u;
    {
        const bool branch_taken_0x14c0a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c0a8) {
            ctx->pc = 0x14C0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0A8u;
            // 0x14c0ac: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C0B8u;
            goto label_14c0b8;
        }
    }
    ctx->pc = 0x14C0B0u;
label_14c0b0:
    // 0x14c0b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14C0B0u;
    {
        const bool branch_taken_0x14c0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0B0u;
            // 0x14c0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0b0) {
            ctx->pc = 0x14C180u;
            goto label_14c180;
        }
    }
    ctx->pc = 0x14C0B8u;
label_14c0b8:
    // 0x14c0b8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x14c0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14c0bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c0c0: 0x2623e848  addiu       $v1, $s1, -0x17B8
    ctx->pc = 0x14c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x14c0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c0d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c0d4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x14c0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x14c0d8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x14c0dc: 0x40f809  jalr        $v0
    ctx->pc = 0x14C0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C0E4u);
        ctx->pc = 0x14C0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0DCu;
            // 0x14c0e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C0E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C0B0u: goto label_14c0b0;
            case 0x14C0B8u: goto label_14c0b8;
            case 0x14C110u: goto label_14c110;
            case 0x14C114u: goto label_14c114;
            case 0x14C180u: goto label_14c180;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E4u; }
            if (ctx->pc != 0x14C0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x14C0E4u;
    // 0x14c0e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14c0e8: 0x8c63ec94  lw          $v1, -0x136C($v1)
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962324)));
    // 0x14c0ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c0f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c0f4: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x14c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x14c0f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C0F8u;
    {
        const bool branch_taken_0x14c0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0F8u;
            // 0x14c0fc: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0f8) {
            ctx->pc = 0x14C110u;
            goto label_14c110;
        }
    }
    ctx->pc = 0x14C100u;
    // 0x14c100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14c100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C104u;
    {
        const bool branch_taken_0x14c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C104u;
            // 0x14c108: 0x45980b  movn        $s3, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c104) {
            ctx->pc = 0x14C114u;
            goto label_14c114;
        }
    }
    ctx->pc = 0x14C10Cu;
    // 0x14c10c: 0x0  nop
    ctx->pc = 0x14c10cu;
    // NOP
label_14c110:
    // 0x14c110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14c110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c114:
    // 0x14c114: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x14c114u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14c118: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x14c118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x14c11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14c120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14c128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c12c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c130: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x14c130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x14c134: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x14c138: 0x40f809  jalr        $v0
    ctx->pc = 0x14C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C140u);
        ctx->pc = 0x14C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C138u;
            // 0x14c13c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C140u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C0B0u: goto label_14c0b0;
            case 0x14C0B8u: goto label_14c0b8;
            case 0x14C110u: goto label_14c110;
            case 0x14C114u: goto label_14c114;
            case 0x14C180u: goto label_14c180;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C140u; }
            if (ctx->pc != 0x14C140u) { return; }
        }
        }
    }
    ctx->pc = 0x14C140u;
    // 0x14c140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c148: 0xc052ac0  jal         func_14AB00
    ctx->pc = 0x14C148u;
    SET_GPR_U32(ctx, 31, 0x14C150u);
    ctx->pc = 0x14C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C148u;
            // 0x14c14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AB00u;
    if (runtime->hasFunction(0x14AB00u)) {
        auto targetFn = runtime->lookupFunction(0x14AB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C150u; }
        if (ctx->pc != 0x14C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ab00_0x14ab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C150u; }
        if (ctx->pc != 0x14C150u) { return; }
    }
    ctx->pc = 0x14C150u;
    // 0x14c150: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x14c150u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c158: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14c15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c164: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c168: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x14c168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14c16c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x14c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14c170: 0x40f809  jalr        $v0
    ctx->pc = 0x14C170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C178u);
        ctx->pc = 0x14C174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C170u;
            // 0x14c174: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C178u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C0B0u: goto label_14c0b0;
            case 0x14C0B8u: goto label_14c0b8;
            case 0x14C110u: goto label_14c110;
            case 0x14C114u: goto label_14c114;
            case 0x14C180u: goto label_14c180;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C178u; }
            if (ctx->pc != 0x14C178u) { return; }
        }
        }
    }
    ctx->pc = 0x14C178u;
    // 0x14c178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14c178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c17c: 0x0  nop
    ctx->pc = 0x14c17cu;
    // NOP
label_14c180:
    // 0x14c180: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14c180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c184: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14c184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c188: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14c188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c18c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14c18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c190: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c194: 0x3e00008  jr          $ra
    ctx->pc = 0x14C194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C194u;
            // 0x14c198: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C0B0u: goto label_14c0b0;
            case 0x14C0B8u: goto label_14c0b8;
            case 0x14C110u: goto label_14c110;
            case 0x14C114u: goto label_14c114;
            case 0x14C180u: goto label_14c180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C19Cu;
    // 0x14c19c: 0x0  nop
    ctx->pc = 0x14c19cu;
    // NOP
}

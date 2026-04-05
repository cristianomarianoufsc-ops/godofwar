#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E908
// Address: 0x22e908 - 0x22eaa8
void sub_0022E908_0x22e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E908_0x22e908");
#endif

    ctx->pc = 0x22e908u;

    // 0x22e908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e90c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22e910: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22e910u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22e914: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22e918: 0x8e2312b4  lw          $v1, 0x12B4($s1)
    ctx->pc = 0x22e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4788)));
    // 0x22e91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e920: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22e924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22e928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e92c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22e92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22e930: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x22E930u;
    {
        const bool branch_taken_0x22e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E930u;
            // 0x22e934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e930) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22E938u;
    // 0x22e938: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22e93c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e940: 0x244283e0  addiu       $v0, $v0, -0x7C20
    ctx->pc = 0x22e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935520));
    // 0x22e944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e948: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e94c: 0x400008  jr          $v0
    ctx->pc = 0x22E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E954u: goto label_22e954;
            case 0x22E9ACu: goto label_22e9ac;
            case 0x22E9E4u: goto label_22e9e4;
            case 0x22EA34u: goto label_22ea34;
            case 0x22EA5Cu: goto label_22ea5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E954u;
label_22e954:
    // 0x22e954: 0xc08b852  jal         func_22E148
    ctx->pc = 0x22E954u;
    SET_GPR_U32(ctx, 31, 0x22E95Cu);
    ctx->pc = 0x22E958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E954u;
            // 0x22e958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E148u;
    if (runtime->hasFunction(0x22E148u)) {
        auto targetFn = runtime->lookupFunction(0x22E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E95Cu; }
        if (ctx->pc != 0x22E95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E148_0x22e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E95Cu; }
        if (ctx->pc != 0x22E95Cu) { return; }
    }
    ctx->pc = 0x22E95Cu;
    // 0x22e95c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22E95Cu;
    {
        const bool branch_taken_0x22e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E95Cu;
            // 0x22e960: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e95c) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22E964u;
    // 0x22e964: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x22e964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e968: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22e96c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E974u;
    {
        const bool branch_taken_0x22e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E974u;
            // 0x22e978: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e974) {
            ctx->pc = 0x22E994u;
            goto label_22e994;
        }
    }
    ctx->pc = 0x22E97Cu;
    // 0x22e97c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22e980: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x22e984: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e98c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22E98Cu;
    {
        const bool branch_taken_0x22e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E98Cu;
            // 0x22e990: 0x8e2212b4  lw          $v0, 0x12B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e98c) {
            ctx->pc = 0x22EA38u;
            goto label_22ea38;
        }
    }
    ctx->pc = 0x22E994u;
label_22e994:
    // 0x22e994: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22e998: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22e998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e99c: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22e9a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e9a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x22E9A4u;
    {
        const bool branch_taken_0x22e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9A4u;
            // 0x22e9a8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9a4) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22E9ACu;
label_22e9ac:
    // 0x22e9ac: 0xc08b8dc  jal         func_22E370
    ctx->pc = 0x22E9ACu;
    SET_GPR_U32(ctx, 31, 0x22E9B4u);
    ctx->pc = 0x22E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9ACu;
            // 0x22e9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E370u;
    if (runtime->hasFunction(0x22E370u)) {
        auto targetFn = runtime->lookupFunction(0x22E370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9B4u; }
        if (ctx->pc != 0x22E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E370_0x22e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9B4u; }
        if (ctx->pc != 0x22E9B4u) { return; }
    }
    ctx->pc = 0x22E9B4u;
    // 0x22e9b4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x22E9B4u;
    {
        const bool branch_taken_0x22e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9B4u;
            // 0x22e9b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9b4) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22E9BCu;
    // 0x22e9bc: 0x8c421284  lw          $v0, 0x1284($v0)
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4740)));
    // 0x22e9c0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E9C0u;
    {
        const bool branch_taken_0x22e9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9C0u;
            // 0x22e9c4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9c0) {
            ctx->pc = 0x22EA44u;
            goto label_22ea44;
        }
    }
    ctx->pc = 0x22E9C8u;
    // 0x22e9c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e9cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22e9d0: 0x8c42129c  lw          $v0, 0x129C($v0)
    ctx->pc = 0x22e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4764)));
    // 0x22e9d4: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22E9D4u;
    {
        const bool branch_taken_0x22e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9D4u;
            // 0x22e9d8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9d4) {
            ctx->pc = 0x22EA34u;
            goto label_22ea34;
        }
    }
    ctx->pc = 0x22E9DCu;
    // 0x22e9dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22E9DCu;
    {
        const bool branch_taken_0x22e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E9DCu;
            // 0x22e9e0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9dc) {
            ctx->pc = 0x22EA48u;
            goto label_22ea48;
        }
    }
    ctx->pc = 0x22E9E4u;
label_22e9e4:
    // 0x22e9e4: 0x24120044  addiu       $s2, $zero, 0x44
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22e9e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e9ec: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x22e9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e9f0: 0x8c451298  lw          $a1, 0x1298($v0)
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x22e9f4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x22e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x22e9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9fc: 0x24c6be80  addiu       $a2, $a2, -0x4180
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950528));
    // 0x22ea00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22ea04: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22ea08: 0xc08b9be  jal         func_22E6F8
    ctx->pc = 0x22EA08u;
    SET_GPR_U32(ctx, 31, 0x22EA10u);
    ctx->pc = 0x22EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA08u;
            // 0x22ea0c: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E6F8u;
    if (runtime->hasFunction(0x22E6F8u)) {
        auto targetFn = runtime->lookupFunction(0x22E6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA10u; }
        if (ctx->pc != 0x22EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E6F8_0x22e6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA10u; }
        if (ctx->pc != 0x22EA10u) { return; }
    }
    ctx->pc = 0x22EA10u;
    // 0x22ea10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22EA10u;
    {
        const bool branch_taken_0x22ea10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA10u;
            // 0x22ea14: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea10) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22EA18u;
    // 0x22ea18: 0x8c421288  lw          $v0, 0x1288($v0)
    ctx->pc = 0x22ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4744)));
    // 0x22ea1c: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22EA1Cu;
    {
        const bool branch_taken_0x22ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x22EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA1Cu;
            // 0x22ea20: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea1c) {
            ctx->pc = 0x22EA44u;
            goto label_22ea44;
        }
    }
    ctx->pc = 0x22EA24u;
    // 0x22ea24: 0xc08b706  jal         func_22DC18
    ctx->pc = 0x22EA24u;
    SET_GPR_U32(ctx, 31, 0x22EA2Cu);
    ctx->pc = 0x22EA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA24u;
            // 0x22ea28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DC18u;
    if (runtime->hasFunction(0x22DC18u)) {
        auto targetFn = runtime->lookupFunction(0x22DC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA2Cu; }
        if (ctx->pc != 0x22EA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DC18_0x22dc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA2Cu; }
        if (ctx->pc != 0x22EA2Cu) { return; }
    }
    ctx->pc = 0x22EA2Cu;
    // 0x22ea2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EA2Cu;
    {
        const bool branch_taken_0x22ea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA2Cu;
            // 0x22ea30: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea2c) {
            ctx->pc = 0x22EA44u;
            goto label_22ea44;
        }
    }
    ctx->pc = 0x22EA34u;
label_22ea34:
    // 0x22ea34: 0x8e2212b4  lw          $v0, 0x12B4($s1)
    ctx->pc = 0x22ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4788)));
label_22ea38:
    // 0x22ea38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ea3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22EA3Cu;
    {
        const bool branch_taken_0x22ea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA3Cu;
            // 0x22ea40: 0xae2212b4  sw          $v0, 0x12B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea3c) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22EA44u;
label_22ea44:
    // 0x22ea44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22ea48:
    // 0x22ea48: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22ea4c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ea50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ea54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22EA54u;
    {
        const bool branch_taken_0x22ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA54u;
            // 0x22ea58: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea54) {
            ctx->pc = 0x22EA78u;
            goto label_22ea78;
        }
    }
    ctx->pc = 0x22EA5Cu;
label_22ea5c:
    // 0x22ea5c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22ea60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ea64: 0x2442bc78  addiu       $v0, $v0, -0x4388
    ctx->pc = 0x22ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x22ea68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ea6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ea70: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ea74: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x22ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_22ea78:
    // 0x22ea78: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EA78u;
    {
        const bool branch_taken_0x22ea78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA78u;
            // 0x22ea7c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea78) {
            ctx->pc = 0x22EA84u;
            goto label_22ea84;
        }
    }
    ctx->pc = 0x22EA80u;
    // 0x22ea80: 0xac4012b4  sw          $zero, 0x12B4($v0)
    ctx->pc = 0x22ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 0));
label_22ea84:
    // 0x22ea84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22ea84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22ea88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ea8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22ea8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ea90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ea90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ea94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22ea94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ea98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA9Cu;
            // 0x22eaa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E954u: goto label_22e954;
            case 0x22E994u: goto label_22e994;
            case 0x22E9ACu: goto label_22e9ac;
            case 0x22E9E4u: goto label_22e9e4;
            case 0x22EA34u: goto label_22ea34;
            case 0x22EA38u: goto label_22ea38;
            case 0x22EA44u: goto label_22ea44;
            case 0x22EA48u: goto label_22ea48;
            case 0x22EA5Cu: goto label_22ea5c;
            case 0x22EA78u: goto label_22ea78;
            case 0x22EA84u: goto label_22ea84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22EAA4u;
    // 0x22eaa4: 0x0  nop
    ctx->pc = 0x22eaa4u;
    // NOP
}

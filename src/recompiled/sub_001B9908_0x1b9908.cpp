#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9908
// Address: 0x1b9908 - 0x1b9af0
void sub_001B9908_0x1b9908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9908_0x1b9908");
#endif

    ctx->pc = 0x1b9908u;

    // 0x1b9908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b990c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b9910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b9914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b991c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b9920: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B9920u;
    {
        const bool branch_taken_0x1b9920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9920u;
            // 0x1b9924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9920) {
            ctx->pc = 0x1B99ECu;
            goto label_1b99ec;
        }
    }
    ctx->pc = 0x1B9928u;
    // 0x1b9928: 0x8e02157c  lw          $v0, 0x157C($s0)
    ctx->pc = 0x1b9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x1b992c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B992Cu;
    {
        const bool branch_taken_0x1b992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b992c) {
            ctx->pc = 0x1B9930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B992Cu;
            // 0x1b9930: 0x8e02159c  lw          $v0, 0x159C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5532)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9948u;
            goto label_1b9948;
        }
    }
    ctx->pc = 0x1B9934u;
    // 0x1b9934: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1b9934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1b9938: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9938u;
    SET_GPR_U32(ctx, 31, 0x1B9940u);
    ctx->pc = 0x1B993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9938u;
            // 0x1b993c: 0xae00157c  sw          $zero, 0x157C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9940u; }
        if (ctx->pc != 0x1B9940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9940u; }
        if (ctx->pc != 0x1B9940u) { return; }
    }
    ctx->pc = 0x1B9940u;
    // 0x1b9940: 0xae001580  sw          $zero, 0x1580($s0)
    ctx->pc = 0x1b9940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5504), GPR_U32(ctx, 0));
    // 0x1b9944: 0x8e02159c  lw          $v0, 0x159C($s0)
    ctx->pc = 0x1b9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5532)));
label_1b9948:
    // 0x1b9948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9948u;
    {
        const bool branch_taken_0x1b9948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9948u;
            // 0x1b994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9948) {
            ctx->pc = 0x1B995Cu;
            goto label_1b995c;
        }
    }
    ctx->pc = 0x1B9950u;
    // 0x1b9950: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1b9950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1b9954: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9954u;
    SET_GPR_U32(ctx, 31, 0x1B995Cu);
    ctx->pc = 0x1B9958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9954u;
            // 0x1b9958: 0xae00159c  sw          $zero, 0x159C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B995Cu; }
        if (ctx->pc != 0x1B995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B995Cu; }
        if (ctx->pc != 0x1B995Cu) { return; }
    }
    ctx->pc = 0x1B995Cu;
label_1b995c:
    // 0x1b995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b9968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b996c: 0xc06e60a  jal         func_1B9828
    ctx->pc = 0x1B996Cu;
    SET_GPR_U32(ctx, 31, 0x1B9974u);
    ctx->pc = 0x1B9970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B996Cu;
            // 0x1b9970: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9828u;
    if (runtime->hasFunction(0x1B9828u)) {
        auto targetFn = runtime->lookupFunction(0x1B9828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9974u; }
        if (ctx->pc != 0x1B9974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9828_0x1b9828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9974u; }
        if (ctx->pc != 0x1B9974u) { return; }
    }
    ctx->pc = 0x1B9974u;
    // 0x1b9974: 0x8e021528  lw          $v0, 0x1528($s0)
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5416)));
    // 0x1b9978: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9978u;
    {
        const bool branch_taken_0x1b9978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9978u;
            // 0x1b997c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9978) {
            ctx->pc = 0x1B99ACu;
            goto label_1b99ac;
        }
    }
    ctx->pc = 0x1B9980u;
    // 0x1b9980: 0x8e02152c  lw          $v0, 0x152C($s0)
    ctx->pc = 0x1b9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5420)));
    // 0x1b9984: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9984u;
    {
        const bool branch_taken_0x1b9984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9984) {
            ctx->pc = 0x1B9988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9984u;
            // 0x1b9988: 0x8e0215a0  lw          $v0, 0x15A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99B4u;
            goto label_1b99b4;
        }
    }
    ctx->pc = 0x1B998Cu;
    // 0x1b998c: 0x8e021530  lw          $v0, 0x1530($s0)
    ctx->pc = 0x1b998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5424)));
    // 0x1b9990: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9990u;
    {
        const bool branch_taken_0x1b9990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9990) {
            ctx->pc = 0x1B9994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9990u;
            // 0x1b9994: 0x8e0215a0  lw          $v0, 0x15A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99B4u;
            goto label_1b99b4;
        }
    }
    ctx->pc = 0x1B9998u;
    // 0x1b9998: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b999c: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1b999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1b99a0: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1b99a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1b99a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B99A4u;
    {
        const bool branch_taken_0x1b99a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b99a4) {
            ctx->pc = 0x1B99A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99A4u;
            // 0x1b99a8: 0x8e0215a0  lw          $v0, 0x15A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99B4u;
            goto label_1b99b4;
        }
    }
    ctx->pc = 0x1B99ACu;
label_1b99ac:
    // 0x1b99ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b99acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99b0: 0x8e0215a0  lw          $v0, 0x15A0($s0)
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5536)));
label_1b99b4:
    // 0x1b99b4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B99B4u;
    {
        const bool branch_taken_0x1b99b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b99b4) {
            ctx->pc = 0x1B99B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99B4u;
            // 0x1b99b8: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99D8u;
            goto label_1b99d8;
        }
    }
    ctx->pc = 0x1B99BCu;
    // 0x1b99bc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1b99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1b99c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B99C0u;
    {
        const bool branch_taken_0x1b99c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b99c0) {
            ctx->pc = 0x1B99C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99C0u;
            // 0x1b99c4: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B99D8u;
            goto label_1b99d8;
        }
    }
    ctx->pc = 0x1B99C8u;
    // 0x1b99c8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b99cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B99CCu;
    {
        const bool branch_taken_0x1b99cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99CCu;
            // 0x1b99d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99cc) {
            ctx->pc = 0x1B99F0u;
            goto label_1b99f0;
        }
    }
    ctx->pc = 0x1B99D4u;
    // 0x1b99d4: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1b99d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
label_1b99d8:
    // 0x1b99d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b99d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99dc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1b99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1b99e0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1b99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1b99e4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B99E4u;
    SET_GPR_U32(ctx, 31, 0x1B99ECu);
    ctx->pc = 0x1B99E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99E4u;
            // 0x1b99e8: 0xae0015a0  sw          $zero, 0x15A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99ECu; }
        if (ctx->pc != 0x1B99ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99ECu; }
        if (ctx->pc != 0x1B99ECu) { return; }
    }
    ctx->pc = 0x1B99ECu;
label_1b99ec:
    // 0x1b99ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b99ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b99f0:
    // 0x1b99f0: 0xc06e6bc  jal         func_1B9AF0
    ctx->pc = 0x1B99F0u;
    SET_GPR_U32(ctx, 31, 0x1B99F8u);
    ctx->pc = 0x1B99F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99F0u;
            // 0x1b99f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AF0u;
    if (runtime->hasFunction(0x1B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F8u; }
        if (ctx->pc != 0x1B99F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9AF0_0x1b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F8u; }
        if (ctx->pc != 0x1B99F8u) { return; }
    }
    ctx->pc = 0x1B99F8u;
    // 0x1b99f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b99f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99fc: 0x8e021584  lw          $v0, 0x1584($s0)
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5508)));
    // 0x1b9a00: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9A00u;
    {
        const bool branch_taken_0x1b9a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B9A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A00u;
            // 0x1b9a04: 0x8e11001c  lw          $s1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a00) {
            ctx->pc = 0x1B9A20u;
            goto label_1b9a20;
        }
    }
    ctx->pc = 0x1B9A08u;
    // 0x1b9a08: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1b9a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b9a0c: 0xae031584  sw          $v1, 0x1584($s0)
    ctx->pc = 0x1b9a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5508), GPR_U32(ctx, 3));
    // 0x1b9a10: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x1b9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x1b9a14: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9A14u;
    SET_GPR_U32(ctx, 31, 0x1B9A1Cu);
    ctx->pc = 0x1B9A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A14u;
            // 0x1b9a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A1Cu; }
        if (ctx->pc != 0x1B9A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A1Cu; }
        if (ctx->pc != 0x1B9A1Cu) { return; }
    }
    ctx->pc = 0x1B9A1Cu;
    // 0x1b9a1c: 0x0  nop
    ctx->pc = 0x1b9a1cu;
    // NOP
label_1b9a20:
    // 0x1b9a20: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x1b9a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b9a24: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1b9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1b9a28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b9a28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a2c: 0x8e021588  lw          $v0, 0x1588($s0)
    ctx->pc = 0x1b9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5512)));
    // 0x1b9a30: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9A30u;
    {
        const bool branch_taken_0x1b9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A30u;
            // 0x1b9a34: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a30) {
            ctx->pc = 0x1B9A48u;
            goto label_1b9a48;
        }
    }
    ctx->pc = 0x1B9A38u;
    // 0x1b9a38: 0xae031588  sw          $v1, 0x1588($s0)
    ctx->pc = 0x1b9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5512), GPR_U32(ctx, 3));
    // 0x1b9a3c: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1b9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1b9a40: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9A40u;
    SET_GPR_U32(ctx, 31, 0x1B9A48u);
    ctx->pc = 0x1B9A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A40u;
            // 0x1b9a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A48u; }
        if (ctx->pc != 0x1B9A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A48u; }
        if (ctx->pc != 0x1B9A48u) { return; }
    }
    ctx->pc = 0x1B9A48u;
label_1b9a48:
    // 0x1b9a48: 0x8e130024  lw          $s3, 0x24($s0)
    ctx->pc = 0x1b9a48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9a4c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1b9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x1b9a50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b9a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a54: 0x8e02158c  lw          $v0, 0x158C($s0)
    ctx->pc = 0x1b9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5516)));
    // 0x1b9a58: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9A58u;
    {
        const bool branch_taken_0x1b9a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B9A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A58u;
            // 0x1b9a5c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a58) {
            ctx->pc = 0x1B9A70u;
            goto label_1b9a70;
        }
    }
    ctx->pc = 0x1B9A60u;
    // 0x1b9a60: 0xae03158c  sw          $v1, 0x158C($s0)
    ctx->pc = 0x1b9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5516), GPR_U32(ctx, 3));
    // 0x1b9a64: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x1b9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    // 0x1b9a68: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9A68u;
    SET_GPR_U32(ctx, 31, 0x1B9A70u);
    ctx->pc = 0x1B9A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A68u;
            // 0x1b9a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A70u; }
        if (ctx->pc != 0x1B9A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A70u; }
        if (ctx->pc != 0x1B9A70u) { return; }
    }
    ctx->pc = 0x1B9A70u;
label_1b9a70:
    // 0x1b9a70: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b9a74: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x1b9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x1b9a78: 0x8e021590  lw          $v0, 0x1590($s0)
    ctx->pc = 0x1b9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5520)));
    // 0x1b9a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9A7Cu;
    {
        const bool branch_taken_0x1b9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A7Cu;
            // 0x1b9a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a7c) {
            ctx->pc = 0x1B9A90u;
            goto label_1b9a90;
        }
    }
    ctx->pc = 0x1B9A84u;
    // 0x1b9a84: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x1b9a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x1b9a88: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9A88u;
    SET_GPR_U32(ctx, 31, 0x1B9A90u);
    ctx->pc = 0x1B9A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A88u;
            // 0x1b9a8c: 0xae001590  sw          $zero, 0x1590($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A90u; }
        if (ctx->pc != 0x1B9A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A90u; }
        if (ctx->pc != 0x1B9A90u) { return; }
    }
    ctx->pc = 0x1B9A90u;
label_1b9a90:
    // 0x1b9a90: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x1b9a90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1b9a94: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x1b9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x1b9a98: 0x8e021594  lw          $v0, 0x1594($s0)
    ctx->pc = 0x1b9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5524)));
    // 0x1b9a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9A9Cu;
    {
        const bool branch_taken_0x1b9a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A9Cu;
            // 0x1b9aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a9c) {
            ctx->pc = 0x1B9AB0u;
            goto label_1b9ab0;
        }
    }
    ctx->pc = 0x1B9AA4u;
    // 0x1b9aa4: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1b9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1b9aa8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9AA8u;
    SET_GPR_U32(ctx, 31, 0x1B9AB0u);
    ctx->pc = 0x1B9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AA8u;
            // 0x1b9aac: 0xae001594  sw          $zero, 0x1594($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB0u; }
        if (ctx->pc != 0x1B9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB0u; }
        if (ctx->pc != 0x1B9AB0u) { return; }
    }
    ctx->pc = 0x1B9AB0u;
label_1b9ab0:
    // 0x1b9ab0: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1b9ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b9ab4: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x1b9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x1b9ab8: 0x8e021598  lw          $v0, 0x1598($s0)
    ctx->pc = 0x1b9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5528)));
    // 0x1b9abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9ABCu;
    {
        const bool branch_taken_0x1b9abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9ABCu;
            // 0x1b9ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9abc) {
            ctx->pc = 0x1B9AD0u;
            goto label_1b9ad0;
        }
    }
    ctx->pc = 0x1B9AC4u;
    // 0x1b9ac4: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1b9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1b9ac8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1B9AC8u;
    SET_GPR_U32(ctx, 31, 0x1B9AD0u);
    ctx->pc = 0x1B9ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AC8u;
            // 0x1b9acc: 0xae001598  sw          $zero, 0x1598($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD0u; }
        if (ctx->pc != 0x1B9AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD0u; }
        if (ctx->pc != 0x1B9AD0u) { return; }
    }
    ctx->pc = 0x1B9AD0u;
label_1b9ad0:
    // 0x1b9ad0: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1b9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x1b9ad4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b9ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9ad8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b9ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9ae0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b9ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AE8u;
            // 0x1b9aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9948u: goto label_1b9948;
            case 0x1B995Cu: goto label_1b995c;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AD0u: goto label_1b9ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9AF0u;
}

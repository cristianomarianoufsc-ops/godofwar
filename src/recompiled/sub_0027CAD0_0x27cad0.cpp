#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027CAD0
// Address: 0x27cad0 - 0x27ce90
void sub_0027CAD0_0x27cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CAD0_0x27cad0");
#endif

    ctx->pc = 0x27cad0u;

label_27cad0:
    // 0x27cad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27cad4:
    // 0x27cad4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_27cad8:
    // 0x27cad8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_27cadc:
    // 0x27cadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_27cae0:
    // 0x27cae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27cae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27cae4:
    // 0x27cae4: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
label_27cae8:
    // 0x27cae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27cae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27caec:
    // 0x27caec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27caf0:
    // 0x27caf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_27caf4:
    // 0x27caf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_27caf8:
    if (ctx->pc == 0x27CAF8u) {
        ctx->pc = 0x27CAF8u;
            // 0x27caf8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x27CAFCu;
        goto label_27cafc;
    }
    ctx->pc = 0x27CAF4u;
    {
        const bool branch_taken_0x27caf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAF4u;
            // 0x27caf8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caf4) {
            ctx->pc = 0x27CB08u;
            goto label_27cb08;
        }
    }
    ctx->pc = 0x27CAFCu;
label_27cafc:
    // 0x27cafc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27cb00:
    // 0x27cb00: 0x1000002a  b           . + 4 + (0x2A << 2)
label_27cb04:
    if (ctx->pc == 0x27CB04u) {
        ctx->pc = 0x27CB04u;
            // 0x27cb04: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->pc = 0x27CB08u;
        goto label_27cb08;
    }
    ctx->pc = 0x27CB00u;
    {
        const bool branch_taken_0x27cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB00u;
            // 0x27cb04: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb00) {
            ctx->pc = 0x27CBACu;
            goto label_27cbac;
        }
    }
    ctx->pc = 0x27CB08u;
label_27cb08:
    // 0x27cb08: 0xc0a0bd8  jal         func_282F60
label_27cb0c:
    if (ctx->pc == 0x27CB0Cu) {
        ctx->pc = 0x27CB0Cu;
            // 0x27cb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CB10u;
        goto label_27cb10;
    }
    ctx->pc = 0x27CB08u;
    SET_GPR_U32(ctx, 31, 0x27CB10u);
    ctx->pc = 0x27CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB08u;
            // 0x27cb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB10u; }
        if (ctx->pc != 0x27CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB10u; }
        if (ctx->pc != 0x27CB10u) { return; }
    }
    ctx->pc = 0x27CB10u;
label_27cb10:
    // 0x27cb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27cb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27cb14:
    // 0x27cb14: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_27cb18:
    if (ctx->pc == 0x27CB18u) {
        ctx->pc = 0x27CB1Cu;
        goto label_27cb1c;
    }
    ctx->pc = 0x27CB14u;
    {
        const bool branch_taken_0x27cb14 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27cb14) {
            ctx->pc = 0x27CB28u;
            goto label_27cb28;
        }
    }
    ctx->pc = 0x27CB1Cu;
label_27cb1c:
    // 0x27cb1c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27cb20:
    // 0x27cb20: 0x10000022  b           . + 4 + (0x22 << 2)
label_27cb24:
    if (ctx->pc == 0x27CB24u) {
        ctx->pc = 0x27CB24u;
            // 0x27cb24: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->pc = 0x27CB28u;
        goto label_27cb28;
    }
    ctx->pc = 0x27CB20u;
    {
        const bool branch_taken_0x27cb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB20u;
            // 0x27cb24: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb20) {
            ctx->pc = 0x27CBACu;
            goto label_27cbac;
        }
    }
    ctx->pc = 0x27CB28u;
label_27cb28:
    // 0x27cb28: 0xc0a268a  jal         func_289A28
label_27cb2c:
    if (ctx->pc == 0x27CB2Cu) {
        ctx->pc = 0x27CB2Cu;
            // 0x27cb2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CB30u;
        goto label_27cb30;
    }
    ctx->pc = 0x27CB28u;
    SET_GPR_U32(ctx, 31, 0x27CB30u);
    ctx->pc = 0x27CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB28u;
            // 0x27cb2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB30u; }
        if (ctx->pc != 0x27CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB30u; }
        if (ctx->pc != 0x27CB30u) { return; }
    }
    ctx->pc = 0x27CB30u;
label_27cb30:
    // 0x27cb30: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27cb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_27cb34:
    // 0x27cb34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27cb38:
    if (ctx->pc == 0x27CB38u) {
        ctx->pc = 0x27CB38u;
            // 0x27cb38: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->pc = 0x27CB3Cu;
        goto label_27cb3c;
    }
    ctx->pc = 0x27CB34u;
    {
        const bool branch_taken_0x27cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB34u;
            // 0x27cb38: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb34) {
            ctx->pc = 0x27CB48u;
            goto label_27cb48;
        }
    }
    ctx->pc = 0x27CB3Cu;
label_27cb3c:
    // 0x27cb3c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27cb40:
    // 0x27cb40: 0x1000001a  b           . + 4 + (0x1A << 2)
label_27cb44:
    if (ctx->pc == 0x27CB44u) {
        ctx->pc = 0x27CB44u;
            // 0x27cb44: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->pc = 0x27CB48u;
        goto label_27cb48;
    }
    ctx->pc = 0x27CB40u;
    {
        const bool branch_taken_0x27cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB40u;
            // 0x27cb44: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb40) {
            ctx->pc = 0x27CBACu;
            goto label_27cbac;
        }
    }
    ctx->pc = 0x27CB48u;
label_27cb48:
    // 0x27cb48: 0xc0a4f18  jal         func_293C60
label_27cb4c:
    if (ctx->pc == 0x27CB4Cu) {
        ctx->pc = 0x27CB4Cu;
            // 0x27cb4c: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->pc = 0x27CB50u;
        goto label_27cb50;
    }
    ctx->pc = 0x27CB48u;
    SET_GPR_U32(ctx, 31, 0x27CB50u);
    ctx->pc = 0x27CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB48u;
            // 0x27cb4c: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB50u; }
        if (ctx->pc != 0x27CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB50u; }
        if (ctx->pc != 0x27CB50u) { return; }
    }
    ctx->pc = 0x27CB50u;
label_27cb50:
    // 0x27cb50: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_27cb54:
    // 0x27cb54: 0x24710380  addiu       $s1, $v1, 0x380
    ctx->pc = 0x27cb54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
label_27cb58:
    // 0x27cb58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x27cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27cb5c:
    // 0x27cb5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_27cb60:
    if (ctx->pc == 0x27CB60u) {
        ctx->pc = 0x27CB60u;
            // 0x27cb60: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x27CB64u;
        goto label_27cb64;
    }
    ctx->pc = 0x27CB5Cu;
    {
        const bool branch_taken_0x27cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb5c) {
            ctx->pc = 0x27CB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB5Cu;
            // 0x27cb60: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27CB78u;
            goto label_27cb78;
        }
    }
    ctx->pc = 0x27CB64u;
label_27cb64:
    // 0x27cb64: 0xc0a4f10  jal         func_293C40
label_27cb68:
    if (ctx->pc == 0x27CB68u) {
        ctx->pc = 0x27CB68u;
            // 0x27cb68: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->pc = 0x27CB6Cu;
        goto label_27cb6c;
    }
    ctx->pc = 0x27CB64u;
    SET_GPR_U32(ctx, 31, 0x27CB6Cu);
    ctx->pc = 0x27CB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB64u;
            // 0x27cb68: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB6Cu; }
        if (ctx->pc != 0x27CB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB6Cu; }
        if (ctx->pc != 0x27CB6Cu) { return; }
    }
    ctx->pc = 0x27CB6Cu;
label_27cb6c:
    // 0x27cb6c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27cb70:
    // 0x27cb70: 0x1000000e  b           . + 4 + (0xE << 2)
label_27cb74:
    if (ctx->pc == 0x27CB74u) {
        ctx->pc = 0x27CB74u;
            // 0x27cb74: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->pc = 0x27CB78u;
        goto label_27cb78;
    }
    ctx->pc = 0x27CB70u;
    {
        const bool branch_taken_0x27cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB70u;
            // 0x27cb74: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb70) {
            ctx->pc = 0x27CBACu;
            goto label_27cbac;
        }
    }
    ctx->pc = 0x27CB78u;
label_27cb78:
    // 0x27cb78: 0xac700380  sw          $s0, 0x380($v1)
    ctx->pc = 0x27cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 16));
label_27cb7c:
    // 0x27cb7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x27cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_27cb80:
    // 0x27cb80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27cb84:
    // 0x27cb84: 0xc0a2644  jal         func_289910
label_27cb88:
    if (ctx->pc == 0x27CB88u) {
        ctx->pc = 0x27CB88u;
            // 0x27cb88: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
        ctx->pc = 0x27CB8Cu;
        goto label_27cb8c;
    }
    ctx->pc = 0x27CB84u;
    SET_GPR_U32(ctx, 31, 0x27CB8Cu);
    ctx->pc = 0x27CB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB84u;
            // 0x27cb88: 0x2624041c  addiu       $a0, $s1, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB8Cu; }
        if (ctx->pc != 0x27CB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB8Cu; }
        if (ctx->pc != 0x27CB8Cu) { return; }
    }
    ctx->pc = 0x27CB8Cu;
label_27cb8c:
    // 0x27cb8c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_27cb90:
    // 0x27cb90: 0x34028427  ori         $v0, $zero, 0x8427
    ctx->pc = 0x27cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
label_27cb94:
    // 0x27cb94: 0x8c6408a4  lw          $a0, 0x8A4($v1)
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
label_27cb98:
    // 0x27cb98: 0xc0a4f10  jal         func_293C40
label_27cb9c:
    if (ctx->pc == 0x27CB9Cu) {
        ctx->pc = 0x27CB9Cu;
            // 0x27cb9c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x27CBA0u;
        goto label_27cba0;
    }
    ctx->pc = 0x27CB98u;
    SET_GPR_U32(ctx, 31, 0x27CBA0u);
    ctx->pc = 0x27CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB98u;
            // 0x27cb9c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBA0u; }
        if (ctx->pc != 0x27CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBA0u; }
        if (ctx->pc != 0x27CBA0u) { return; }
    }
    ctx->pc = 0x27CBA0u;
label_27cba0:
    // 0x27cba0: 0xc0a4f10  jal         func_293C40
label_27cba4:
    if (ctx->pc == 0x27CBA4u) {
        ctx->pc = 0x27CBA4u;
            // 0x27cba4: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->pc = 0x27CBA8u;
        goto label_27cba8;
    }
    ctx->pc = 0x27CBA0u;
    SET_GPR_U32(ctx, 31, 0x27CBA8u);
    ctx->pc = 0x27CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CBA0u;
            // 0x27cba4: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBA8u; }
        if (ctx->pc != 0x27CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CBA8u; }
        if (ctx->pc != 0x27CBA8u) { return; }
    }
    ctx->pc = 0x27CBA8u;
label_27cba8:
    // 0x27cba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27cba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cbac:
    // 0x27cbac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27cbb0:
    // 0x27cbb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27cbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27cbb4:
    // 0x27cbb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27cbb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27cbb8:
    // 0x27cbb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27cbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27cbbc:
    // 0x27cbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27cbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27cbc0:
    // 0x27cbc0: 0x3e00008  jr          $ra
label_27cbc4:
    if (ctx->pc == 0x27CBC4u) {
        ctx->pc = 0x27CBC4u;
            // 0x27cbc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27CBC8u;
        goto label_27cbc8;
    }
    ctx->pc = 0x27CBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CBC0u;
            // 0x27cbc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CAD0u: goto label_27cad0;
            case 0x27CAD4u: goto label_27cad4;
            case 0x27CAD8u: goto label_27cad8;
            case 0x27CADCu: goto label_27cadc;
            case 0x27CAE0u: goto label_27cae0;
            case 0x27CAE4u: goto label_27cae4;
            case 0x27CAE8u: goto label_27cae8;
            case 0x27CAECu: goto label_27caec;
            case 0x27CAF0u: goto label_27caf0;
            case 0x27CAF4u: goto label_27caf4;
            case 0x27CAF8u: goto label_27caf8;
            case 0x27CAFCu: goto label_27cafc;
            case 0x27CB00u: goto label_27cb00;
            case 0x27CB04u: goto label_27cb04;
            case 0x27CB08u: goto label_27cb08;
            case 0x27CB0Cu: goto label_27cb0c;
            case 0x27CB10u: goto label_27cb10;
            case 0x27CB14u: goto label_27cb14;
            case 0x27CB18u: goto label_27cb18;
            case 0x27CB1Cu: goto label_27cb1c;
            case 0x27CB20u: goto label_27cb20;
            case 0x27CB24u: goto label_27cb24;
            case 0x27CB28u: goto label_27cb28;
            case 0x27CB2Cu: goto label_27cb2c;
            case 0x27CB30u: goto label_27cb30;
            case 0x27CB34u: goto label_27cb34;
            case 0x27CB38u: goto label_27cb38;
            case 0x27CB3Cu: goto label_27cb3c;
            case 0x27CB40u: goto label_27cb40;
            case 0x27CB44u: goto label_27cb44;
            case 0x27CB48u: goto label_27cb48;
            case 0x27CB4Cu: goto label_27cb4c;
            case 0x27CB50u: goto label_27cb50;
            case 0x27CB54u: goto label_27cb54;
            case 0x27CB58u: goto label_27cb58;
            case 0x27CB5Cu: goto label_27cb5c;
            case 0x27CB60u: goto label_27cb60;
            case 0x27CB64u: goto label_27cb64;
            case 0x27CB68u: goto label_27cb68;
            case 0x27CB6Cu: goto label_27cb6c;
            case 0x27CB70u: goto label_27cb70;
            case 0x27CB74u: goto label_27cb74;
            case 0x27CB78u: goto label_27cb78;
            case 0x27CB7Cu: goto label_27cb7c;
            case 0x27CB80u: goto label_27cb80;
            case 0x27CB84u: goto label_27cb84;
            case 0x27CB88u: goto label_27cb88;
            case 0x27CB8Cu: goto label_27cb8c;
            case 0x27CB90u: goto label_27cb90;
            case 0x27CB94u: goto label_27cb94;
            case 0x27CB98u: goto label_27cb98;
            case 0x27CB9Cu: goto label_27cb9c;
            case 0x27CBA0u: goto label_27cba0;
            case 0x27CBA4u: goto label_27cba4;
            case 0x27CBA8u: goto label_27cba8;
            case 0x27CBACu: goto label_27cbac;
            case 0x27CBB0u: goto label_27cbb0;
            case 0x27CBB4u: goto label_27cbb4;
            case 0x27CBB8u: goto label_27cbb8;
            case 0x27CBBCu: goto label_27cbbc;
            case 0x27CBC0u: goto label_27cbc0;
            case 0x27CBC4u: goto label_27cbc4;
            case 0x27CBC8u: goto label_27cbc8;
            case 0x27CBCCu: goto label_27cbcc;
            case 0x27CBD0u: goto label_27cbd0;
            case 0x27CBD4u: goto label_27cbd4;
            case 0x27CBD8u: goto label_27cbd8;
            case 0x27CBDCu: goto label_27cbdc;
            case 0x27CBE0u: goto label_27cbe0;
            case 0x27CBE4u: goto label_27cbe4;
            case 0x27CBE8u: goto label_27cbe8;
            case 0x27CBECu: goto label_27cbec;
            case 0x27CBF0u: goto label_27cbf0;
            case 0x27CBF4u: goto label_27cbf4;
            case 0x27CBF8u: goto label_27cbf8;
            case 0x27CBFCu: goto label_27cbfc;
            case 0x27CC00u: goto label_27cc00;
            case 0x27CC04u: goto label_27cc04;
            case 0x27CC08u: goto label_27cc08;
            case 0x27CC0Cu: goto label_27cc0c;
            case 0x27CC10u: goto label_27cc10;
            case 0x27CC14u: goto label_27cc14;
            case 0x27CC18u: goto label_27cc18;
            case 0x27CC1Cu: goto label_27cc1c;
            case 0x27CC20u: goto label_27cc20;
            case 0x27CC24u: goto label_27cc24;
            case 0x27CC28u: goto label_27cc28;
            case 0x27CC2Cu: goto label_27cc2c;
            case 0x27CC30u: goto label_27cc30;
            case 0x27CC34u: goto label_27cc34;
            case 0x27CC38u: goto label_27cc38;
            case 0x27CC3Cu: goto label_27cc3c;
            case 0x27CC40u: goto label_27cc40;
            case 0x27CC44u: goto label_27cc44;
            case 0x27CC48u: goto label_27cc48;
            case 0x27CC4Cu: goto label_27cc4c;
            case 0x27CC50u: goto label_27cc50;
            case 0x27CC54u: goto label_27cc54;
            case 0x27CC58u: goto label_27cc58;
            case 0x27CC5Cu: goto label_27cc5c;
            case 0x27CC60u: goto label_27cc60;
            case 0x27CC64u: goto label_27cc64;
            case 0x27CC68u: goto label_27cc68;
            case 0x27CC6Cu: goto label_27cc6c;
            case 0x27CC70u: goto label_27cc70;
            case 0x27CC74u: goto label_27cc74;
            case 0x27CC78u: goto label_27cc78;
            case 0x27CC7Cu: goto label_27cc7c;
            case 0x27CC80u: goto label_27cc80;
            case 0x27CC84u: goto label_27cc84;
            case 0x27CC88u: goto label_27cc88;
            case 0x27CC8Cu: goto label_27cc8c;
            case 0x27CC90u: goto label_27cc90;
            case 0x27CC94u: goto label_27cc94;
            case 0x27CC98u: goto label_27cc98;
            case 0x27CC9Cu: goto label_27cc9c;
            case 0x27CCA0u: goto label_27cca0;
            case 0x27CCA4u: goto label_27cca4;
            case 0x27CCA8u: goto label_27cca8;
            case 0x27CCACu: goto label_27ccac;
            case 0x27CCB0u: goto label_27ccb0;
            case 0x27CCB4u: goto label_27ccb4;
            case 0x27CCB8u: goto label_27ccb8;
            case 0x27CCBCu: goto label_27ccbc;
            case 0x27CCC0u: goto label_27ccc0;
            case 0x27CCC4u: goto label_27ccc4;
            case 0x27CCC8u: goto label_27ccc8;
            case 0x27CCCCu: goto label_27cccc;
            case 0x27CCD0u: goto label_27ccd0;
            case 0x27CCD4u: goto label_27ccd4;
            case 0x27CCD8u: goto label_27ccd8;
            case 0x27CCDCu: goto label_27ccdc;
            case 0x27CCE0u: goto label_27cce0;
            case 0x27CCE4u: goto label_27cce4;
            case 0x27CCE8u: goto label_27cce8;
            case 0x27CCECu: goto label_27ccec;
            case 0x27CCF0u: goto label_27ccf0;
            case 0x27CCF4u: goto label_27ccf4;
            case 0x27CCF8u: goto label_27ccf8;
            case 0x27CCFCu: goto label_27ccfc;
            case 0x27CD00u: goto label_27cd00;
            case 0x27CD04u: goto label_27cd04;
            case 0x27CD08u: goto label_27cd08;
            case 0x27CD0Cu: goto label_27cd0c;
            case 0x27CD10u: goto label_27cd10;
            case 0x27CD14u: goto label_27cd14;
            case 0x27CD18u: goto label_27cd18;
            case 0x27CD1Cu: goto label_27cd1c;
            case 0x27CD20u: goto label_27cd20;
            case 0x27CD24u: goto label_27cd24;
            case 0x27CD28u: goto label_27cd28;
            case 0x27CD2Cu: goto label_27cd2c;
            case 0x27CD30u: goto label_27cd30;
            case 0x27CD34u: goto label_27cd34;
            case 0x27CD38u: goto label_27cd38;
            case 0x27CD3Cu: goto label_27cd3c;
            case 0x27CD40u: goto label_27cd40;
            case 0x27CD44u: goto label_27cd44;
            case 0x27CD48u: goto label_27cd48;
            case 0x27CD4Cu: goto label_27cd4c;
            case 0x27CD50u: goto label_27cd50;
            case 0x27CD54u: goto label_27cd54;
            case 0x27CD58u: goto label_27cd58;
            case 0x27CD5Cu: goto label_27cd5c;
            case 0x27CD60u: goto label_27cd60;
            case 0x27CD64u: goto label_27cd64;
            case 0x27CD68u: goto label_27cd68;
            case 0x27CD6Cu: goto label_27cd6c;
            case 0x27CD70u: goto label_27cd70;
            case 0x27CD74u: goto label_27cd74;
            case 0x27CD78u: goto label_27cd78;
            case 0x27CD7Cu: goto label_27cd7c;
            case 0x27CD80u: goto label_27cd80;
            case 0x27CD84u: goto label_27cd84;
            case 0x27CD88u: goto label_27cd88;
            case 0x27CD8Cu: goto label_27cd8c;
            case 0x27CD90u: goto label_27cd90;
            case 0x27CD94u: goto label_27cd94;
            case 0x27CD98u: goto label_27cd98;
            case 0x27CD9Cu: goto label_27cd9c;
            case 0x27CDA0u: goto label_27cda0;
            case 0x27CDA4u: goto label_27cda4;
            case 0x27CDA8u: goto label_27cda8;
            case 0x27CDACu: goto label_27cdac;
            case 0x27CDB0u: goto label_27cdb0;
            case 0x27CDB4u: goto label_27cdb4;
            case 0x27CDB8u: goto label_27cdb8;
            case 0x27CDBCu: goto label_27cdbc;
            case 0x27CDC0u: goto label_27cdc0;
            case 0x27CDC4u: goto label_27cdc4;
            case 0x27CDC8u: goto label_27cdc8;
            case 0x27CDCCu: goto label_27cdcc;
            case 0x27CDD0u: goto label_27cdd0;
            case 0x27CDD4u: goto label_27cdd4;
            case 0x27CDD8u: goto label_27cdd8;
            case 0x27CDDCu: goto label_27cddc;
            case 0x27CDE0u: goto label_27cde0;
            case 0x27CDE4u: goto label_27cde4;
            case 0x27CDE8u: goto label_27cde8;
            case 0x27CDECu: goto label_27cdec;
            case 0x27CDF0u: goto label_27cdf0;
            case 0x27CDF4u: goto label_27cdf4;
            case 0x27CDF8u: goto label_27cdf8;
            case 0x27CDFCu: goto label_27cdfc;
            case 0x27CE00u: goto label_27ce00;
            case 0x27CE04u: goto label_27ce04;
            case 0x27CE08u: goto label_27ce08;
            case 0x27CE0Cu: goto label_27ce0c;
            case 0x27CE10u: goto label_27ce10;
            case 0x27CE14u: goto label_27ce14;
            case 0x27CE18u: goto label_27ce18;
            case 0x27CE1Cu: goto label_27ce1c;
            case 0x27CE20u: goto label_27ce20;
            case 0x27CE24u: goto label_27ce24;
            case 0x27CE28u: goto label_27ce28;
            case 0x27CE2Cu: goto label_27ce2c;
            case 0x27CE30u: goto label_27ce30;
            case 0x27CE34u: goto label_27ce34;
            case 0x27CE38u: goto label_27ce38;
            case 0x27CE3Cu: goto label_27ce3c;
            case 0x27CE40u: goto label_27ce40;
            case 0x27CE44u: goto label_27ce44;
            case 0x27CE48u: goto label_27ce48;
            case 0x27CE4Cu: goto label_27ce4c;
            case 0x27CE50u: goto label_27ce50;
            case 0x27CE54u: goto label_27ce54;
            case 0x27CE58u: goto label_27ce58;
            case 0x27CE5Cu: goto label_27ce5c;
            case 0x27CE60u: goto label_27ce60;
            case 0x27CE64u: goto label_27ce64;
            case 0x27CE68u: goto label_27ce68;
            case 0x27CE6Cu: goto label_27ce6c;
            case 0x27CE70u: goto label_27ce70;
            case 0x27CE74u: goto label_27ce74;
            case 0x27CE78u: goto label_27ce78;
            case 0x27CE7Cu: goto label_27ce7c;
            case 0x27CE80u: goto label_27ce80;
            case 0x27CE84u: goto label_27ce84;
            case 0x27CE88u: goto label_27ce88;
            case 0x27CE8Cu: goto label_27ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27CBC8u;
label_27cbc8:
    // 0x27cbc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27cbcc:
    // 0x27cbcc: 0x0  nop
    ctx->pc = 0x27cbccu;
    // NOP
label_27cbd0:
    // 0x27cbd0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x27cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_27cbd4:
    // 0x27cbd4: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x27cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
label_27cbd8:
    // 0x27cbd8: 0xffb30230  sd          $s3, 0x230($sp)
    ctx->pc = 0x27cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 19));
label_27cbdc:
    // 0x27cbdc: 0x3c14002c  lui         $s4, 0x2C
    ctx->pc = 0x27cbdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)44 << 16));
label_27cbe0:
    // 0x27cbe0: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x27cbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
label_27cbe4:
    // 0x27cbe4: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x27cbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
label_27cbe8:
    // 0x27cbe8: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x27cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
label_27cbec:
    // 0x27cbec: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x27cbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27cbf0:
    // 0x27cbf0: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x27cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_27cbf4:
    // 0x27cbf4: 0x3c110031  lui         $s1, 0x31
    ctx->pc = 0x27cbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
label_27cbf8:
    // 0x27cbf8: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x27cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
label_27cbfc:
    // 0x27cbfc: 0x266208a0  addiu       $v0, $s3, 0x8A0
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
label_27cc00:
    // 0x27cc00: 0xc0a4f18  jal         func_293C60
label_27cc04:
    if (ctx->pc == 0x27CC04u) {
        ctx->pc = 0x27CC04u;
            // 0x27cc04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x27CC08u;
        goto label_27cc08;
    }
    ctx->pc = 0x27CC00u;
    SET_GPR_U32(ctx, 31, 0x27CC08u);
    ctx->pc = 0x27CC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC00u;
            // 0x27cc04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC08u; }
        if (ctx->pc != 0x27CC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC08u; }
        if (ctx->pc != 0x27CC08u) { return; }
    }
    ctx->pc = 0x27CC08u;
label_27cc08:
    // 0x27cc08: 0x26230380  addiu       $v1, $s1, 0x380
    ctx->pc = 0x27cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cc0c:
    // 0x27cc0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27cc10:
    // 0x27cc10: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_27cc14:
    // 0x27cc14: 0x2c430063  sltiu       $v1, $v0, 0x63
    ctx->pc = 0x27cc14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
label_27cc18:
    // 0x27cc18: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_27cc1c:
    if (ctx->pc == 0x27CC1Cu) {
        ctx->pc = 0x27CC1Cu;
            // 0x27cc1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x27CC20u;
        goto label_27cc20;
    }
    ctx->pc = 0x27CC18u;
    {
        const bool branch_taken_0x27cc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC18u;
            // 0x27cc1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc18) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0x26835090  addiu       $v1, $s4, 0x5090
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20624));
label_27cc24:
    // 0x27cc24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27cc28:
    // 0x27cc28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27cc2c:
    // 0x27cc2c: 0x800008  jr          $a0
label_27cc30:
    if (ctx->pc == 0x27CC30u) {
        ctx->pc = 0x27CC34u;
        goto label_27cc34;
    }
    ctx->pc = 0x27CC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CAD0u: goto label_27cad0;
            case 0x27CAD4u: goto label_27cad4;
            case 0x27CAD8u: goto label_27cad8;
            case 0x27CADCu: goto label_27cadc;
            case 0x27CAE0u: goto label_27cae0;
            case 0x27CAE4u: goto label_27cae4;
            case 0x27CAE8u: goto label_27cae8;
            case 0x27CAECu: goto label_27caec;
            case 0x27CAF0u: goto label_27caf0;
            case 0x27CAF4u: goto label_27caf4;
            case 0x27CAF8u: goto label_27caf8;
            case 0x27CAFCu: goto label_27cafc;
            case 0x27CB00u: goto label_27cb00;
            case 0x27CB04u: goto label_27cb04;
            case 0x27CB08u: goto label_27cb08;
            case 0x27CB0Cu: goto label_27cb0c;
            case 0x27CB10u: goto label_27cb10;
            case 0x27CB14u: goto label_27cb14;
            case 0x27CB18u: goto label_27cb18;
            case 0x27CB1Cu: goto label_27cb1c;
            case 0x27CB20u: goto label_27cb20;
            case 0x27CB24u: goto label_27cb24;
            case 0x27CB28u: goto label_27cb28;
            case 0x27CB2Cu: goto label_27cb2c;
            case 0x27CB30u: goto label_27cb30;
            case 0x27CB34u: goto label_27cb34;
            case 0x27CB38u: goto label_27cb38;
            case 0x27CB3Cu: goto label_27cb3c;
            case 0x27CB40u: goto label_27cb40;
            case 0x27CB44u: goto label_27cb44;
            case 0x27CB48u: goto label_27cb48;
            case 0x27CB4Cu: goto label_27cb4c;
            case 0x27CB50u: goto label_27cb50;
            case 0x27CB54u: goto label_27cb54;
            case 0x27CB58u: goto label_27cb58;
            case 0x27CB5Cu: goto label_27cb5c;
            case 0x27CB60u: goto label_27cb60;
            case 0x27CB64u: goto label_27cb64;
            case 0x27CB68u: goto label_27cb68;
            case 0x27CB6Cu: goto label_27cb6c;
            case 0x27CB70u: goto label_27cb70;
            case 0x27CB74u: goto label_27cb74;
            case 0x27CB78u: goto label_27cb78;
            case 0x27CB7Cu: goto label_27cb7c;
            case 0x27CB80u: goto label_27cb80;
            case 0x27CB84u: goto label_27cb84;
            case 0x27CB88u: goto label_27cb88;
            case 0x27CB8Cu: goto label_27cb8c;
            case 0x27CB90u: goto label_27cb90;
            case 0x27CB94u: goto label_27cb94;
            case 0x27CB98u: goto label_27cb98;
            case 0x27CB9Cu: goto label_27cb9c;
            case 0x27CBA0u: goto label_27cba0;
            case 0x27CBA4u: goto label_27cba4;
            case 0x27CBA8u: goto label_27cba8;
            case 0x27CBACu: goto label_27cbac;
            case 0x27CBB0u: goto label_27cbb0;
            case 0x27CBB4u: goto label_27cbb4;
            case 0x27CBB8u: goto label_27cbb8;
            case 0x27CBBCu: goto label_27cbbc;
            case 0x27CBC0u: goto label_27cbc0;
            case 0x27CBC4u: goto label_27cbc4;
            case 0x27CBC8u: goto label_27cbc8;
            case 0x27CBCCu: goto label_27cbcc;
            case 0x27CBD0u: goto label_27cbd0;
            case 0x27CBD4u: goto label_27cbd4;
            case 0x27CBD8u: goto label_27cbd8;
            case 0x27CBDCu: goto label_27cbdc;
            case 0x27CBE0u: goto label_27cbe0;
            case 0x27CBE4u: goto label_27cbe4;
            case 0x27CBE8u: goto label_27cbe8;
            case 0x27CBECu: goto label_27cbec;
            case 0x27CBF0u: goto label_27cbf0;
            case 0x27CBF4u: goto label_27cbf4;
            case 0x27CBF8u: goto label_27cbf8;
            case 0x27CBFCu: goto label_27cbfc;
            case 0x27CC00u: goto label_27cc00;
            case 0x27CC04u: goto label_27cc04;
            case 0x27CC08u: goto label_27cc08;
            case 0x27CC0Cu: goto label_27cc0c;
            case 0x27CC10u: goto label_27cc10;
            case 0x27CC14u: goto label_27cc14;
            case 0x27CC18u: goto label_27cc18;
            case 0x27CC1Cu: goto label_27cc1c;
            case 0x27CC20u: goto label_27cc20;
            case 0x27CC24u: goto label_27cc24;
            case 0x27CC28u: goto label_27cc28;
            case 0x27CC2Cu: goto label_27cc2c;
            case 0x27CC30u: goto label_27cc30;
            case 0x27CC34u: goto label_27cc34;
            case 0x27CC38u: goto label_27cc38;
            case 0x27CC3Cu: goto label_27cc3c;
            case 0x27CC40u: goto label_27cc40;
            case 0x27CC44u: goto label_27cc44;
            case 0x27CC48u: goto label_27cc48;
            case 0x27CC4Cu: goto label_27cc4c;
            case 0x27CC50u: goto label_27cc50;
            case 0x27CC54u: goto label_27cc54;
            case 0x27CC58u: goto label_27cc58;
            case 0x27CC5Cu: goto label_27cc5c;
            case 0x27CC60u: goto label_27cc60;
            case 0x27CC64u: goto label_27cc64;
            case 0x27CC68u: goto label_27cc68;
            case 0x27CC6Cu: goto label_27cc6c;
            case 0x27CC70u: goto label_27cc70;
            case 0x27CC74u: goto label_27cc74;
            case 0x27CC78u: goto label_27cc78;
            case 0x27CC7Cu: goto label_27cc7c;
            case 0x27CC80u: goto label_27cc80;
            case 0x27CC84u: goto label_27cc84;
            case 0x27CC88u: goto label_27cc88;
            case 0x27CC8Cu: goto label_27cc8c;
            case 0x27CC90u: goto label_27cc90;
            case 0x27CC94u: goto label_27cc94;
            case 0x27CC98u: goto label_27cc98;
            case 0x27CC9Cu: goto label_27cc9c;
            case 0x27CCA0u: goto label_27cca0;
            case 0x27CCA4u: goto label_27cca4;
            case 0x27CCA8u: goto label_27cca8;
            case 0x27CCACu: goto label_27ccac;
            case 0x27CCB0u: goto label_27ccb0;
            case 0x27CCB4u: goto label_27ccb4;
            case 0x27CCB8u: goto label_27ccb8;
            case 0x27CCBCu: goto label_27ccbc;
            case 0x27CCC0u: goto label_27ccc0;
            case 0x27CCC4u: goto label_27ccc4;
            case 0x27CCC8u: goto label_27ccc8;
            case 0x27CCCCu: goto label_27cccc;
            case 0x27CCD0u: goto label_27ccd0;
            case 0x27CCD4u: goto label_27ccd4;
            case 0x27CCD8u: goto label_27ccd8;
            case 0x27CCDCu: goto label_27ccdc;
            case 0x27CCE0u: goto label_27cce0;
            case 0x27CCE4u: goto label_27cce4;
            case 0x27CCE8u: goto label_27cce8;
            case 0x27CCECu: goto label_27ccec;
            case 0x27CCF0u: goto label_27ccf0;
            case 0x27CCF4u: goto label_27ccf4;
            case 0x27CCF8u: goto label_27ccf8;
            case 0x27CCFCu: goto label_27ccfc;
            case 0x27CD00u: goto label_27cd00;
            case 0x27CD04u: goto label_27cd04;
            case 0x27CD08u: goto label_27cd08;
            case 0x27CD0Cu: goto label_27cd0c;
            case 0x27CD10u: goto label_27cd10;
            case 0x27CD14u: goto label_27cd14;
            case 0x27CD18u: goto label_27cd18;
            case 0x27CD1Cu: goto label_27cd1c;
            case 0x27CD20u: goto label_27cd20;
            case 0x27CD24u: goto label_27cd24;
            case 0x27CD28u: goto label_27cd28;
            case 0x27CD2Cu: goto label_27cd2c;
            case 0x27CD30u: goto label_27cd30;
            case 0x27CD34u: goto label_27cd34;
            case 0x27CD38u: goto label_27cd38;
            case 0x27CD3Cu: goto label_27cd3c;
            case 0x27CD40u: goto label_27cd40;
            case 0x27CD44u: goto label_27cd44;
            case 0x27CD48u: goto label_27cd48;
            case 0x27CD4Cu: goto label_27cd4c;
            case 0x27CD50u: goto label_27cd50;
            case 0x27CD54u: goto label_27cd54;
            case 0x27CD58u: goto label_27cd58;
            case 0x27CD5Cu: goto label_27cd5c;
            case 0x27CD60u: goto label_27cd60;
            case 0x27CD64u: goto label_27cd64;
            case 0x27CD68u: goto label_27cd68;
            case 0x27CD6Cu: goto label_27cd6c;
            case 0x27CD70u: goto label_27cd70;
            case 0x27CD74u: goto label_27cd74;
            case 0x27CD78u: goto label_27cd78;
            case 0x27CD7Cu: goto label_27cd7c;
            case 0x27CD80u: goto label_27cd80;
            case 0x27CD84u: goto label_27cd84;
            case 0x27CD88u: goto label_27cd88;
            case 0x27CD8Cu: goto label_27cd8c;
            case 0x27CD90u: goto label_27cd90;
            case 0x27CD94u: goto label_27cd94;
            case 0x27CD98u: goto label_27cd98;
            case 0x27CD9Cu: goto label_27cd9c;
            case 0x27CDA0u: goto label_27cda0;
            case 0x27CDA4u: goto label_27cda4;
            case 0x27CDA8u: goto label_27cda8;
            case 0x27CDACu: goto label_27cdac;
            case 0x27CDB0u: goto label_27cdb0;
            case 0x27CDB4u: goto label_27cdb4;
            case 0x27CDB8u: goto label_27cdb8;
            case 0x27CDBCu: goto label_27cdbc;
            case 0x27CDC0u: goto label_27cdc0;
            case 0x27CDC4u: goto label_27cdc4;
            case 0x27CDC8u: goto label_27cdc8;
            case 0x27CDCCu: goto label_27cdcc;
            case 0x27CDD0u: goto label_27cdd0;
            case 0x27CDD4u: goto label_27cdd4;
            case 0x27CDD8u: goto label_27cdd8;
            case 0x27CDDCu: goto label_27cddc;
            case 0x27CDE0u: goto label_27cde0;
            case 0x27CDE4u: goto label_27cde4;
            case 0x27CDE8u: goto label_27cde8;
            case 0x27CDECu: goto label_27cdec;
            case 0x27CDF0u: goto label_27cdf0;
            case 0x27CDF4u: goto label_27cdf4;
            case 0x27CDF8u: goto label_27cdf8;
            case 0x27CDFCu: goto label_27cdfc;
            case 0x27CE00u: goto label_27ce00;
            case 0x27CE04u: goto label_27ce04;
            case 0x27CE08u: goto label_27ce08;
            case 0x27CE0Cu: goto label_27ce0c;
            case 0x27CE10u: goto label_27ce10;
            case 0x27CE14u: goto label_27ce14;
            case 0x27CE18u: goto label_27ce18;
            case 0x27CE1Cu: goto label_27ce1c;
            case 0x27CE20u: goto label_27ce20;
            case 0x27CE24u: goto label_27ce24;
            case 0x27CE28u: goto label_27ce28;
            case 0x27CE2Cu: goto label_27ce2c;
            case 0x27CE30u: goto label_27ce30;
            case 0x27CE34u: goto label_27ce34;
            case 0x27CE38u: goto label_27ce38;
            case 0x27CE3Cu: goto label_27ce3c;
            case 0x27CE40u: goto label_27ce40;
            case 0x27CE44u: goto label_27ce44;
            case 0x27CE48u: goto label_27ce48;
            case 0x27CE4Cu: goto label_27ce4c;
            case 0x27CE50u: goto label_27ce50;
            case 0x27CE54u: goto label_27ce54;
            case 0x27CE58u: goto label_27ce58;
            case 0x27CE5Cu: goto label_27ce5c;
            case 0x27CE60u: goto label_27ce60;
            case 0x27CE64u: goto label_27ce64;
            case 0x27CE68u: goto label_27ce68;
            case 0x27CE6Cu: goto label_27ce6c;
            case 0x27CE70u: goto label_27ce70;
            case 0x27CE74u: goto label_27ce74;
            case 0x27CE78u: goto label_27ce78;
            case 0x27CE7Cu: goto label_27ce7c;
            case 0x27CE80u: goto label_27ce80;
            case 0x27CE84u: goto label_27ce84;
            case 0x27CE88u: goto label_27ce88;
            case 0x27CE8Cu: goto label_27ce8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27CC34u;
label_27cc34:
    // 0x27cc34: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cc38:
    // 0x27cc38: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cc3c:
    // 0x27cc3c: 0xc09f7cc  jal         func_27DF30
label_27cc40:
    if (ctx->pc == 0x27CC40u) {
        ctx->pc = 0x27CC40u;
            // 0x27cc40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x27CC44u;
        goto label_27cc44;
    }
    ctx->pc = 0x27CC3Cu;
    SET_GPR_U32(ctx, 31, 0x27CC44u);
    ctx->pc = 0x27CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC3Cu;
            // 0x27cc40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DF30u;
    if (runtime->hasFunction(0x27DF30u)) {
        auto targetFn = runtime->lookupFunction(0x27DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC44u; }
        if (ctx->pc != 0x27CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DF30_0x27df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC44u; }
        if (ctx->pc != 0x27CC44u) { return; }
    }
    ctx->pc = 0x27CC44u;
label_27cc44:
    // 0x27cc44: 0x10000084  b           . + 4 + (0x84 << 2)
label_27cc48:
    if (ctx->pc == 0x27CC48u) {
        ctx->pc = 0x27CC48u;
            // 0x27cc48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CC4Cu;
        goto label_27cc4c;
    }
    ctx->pc = 0x27CC44u;
    {
        const bool branch_taken_0x27cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC44u;
            // 0x27cc48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc44) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CC4Cu;
label_27cc4c:
    // 0x27cc4c: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cc50:
    // 0x27cc50: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cc54:
    // 0x27cc54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cc58:
    // 0x27cc58: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x27cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_27cc5c:
    // 0x27cc5c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x27cc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cc60:
    // 0x27cc60: 0xc0a0074  jal         func_2801D0
label_27cc64:
    if (ctx->pc == 0x27CC64u) {
        ctx->pc = 0x27CC64u;
            // 0x27cc64: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x27CC68u;
        goto label_27cc68;
    }
    ctx->pc = 0x27CC60u;
    SET_GPR_U32(ctx, 31, 0x27CC68u);
    ctx->pc = 0x27CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC60u;
            // 0x27cc64: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2801D0u;
    if (runtime->hasFunction(0x2801D0u)) {
        auto targetFn = runtime->lookupFunction(0x2801D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC68u; }
        if (ctx->pc != 0x27CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002801D0_0x2801d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC68u; }
        if (ctx->pc != 0x27CC68u) { return; }
    }
    ctx->pc = 0x27CC68u;
label_27cc68:
    // 0x27cc68: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27cc6c:
    if (ctx->pc == 0x27CC6Cu) {
        ctx->pc = 0x27CC6Cu;
            // 0x27cc6c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CC70u;
        goto label_27cc70;
    }
    ctx->pc = 0x27CC68u;
    {
        const bool branch_taken_0x27cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC68u;
            // 0x27cc6c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc68) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CC70u;
label_27cc70:
    // 0x27cc70: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cc74:
    // 0x27cc74: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cc78:
    // 0x27cc78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cc7c:
    // 0x27cc7c: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x27cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_27cc80:
    // 0x27cc80: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x27cc80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cc84:
    // 0x27cc84: 0xc0a00f0  jal         func_2803C0
label_27cc88:
    if (ctx->pc == 0x27CC88u) {
        ctx->pc = 0x27CC88u;
            // 0x27cc88: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x27CC8Cu;
        goto label_27cc8c;
    }
    ctx->pc = 0x27CC84u;
    SET_GPR_U32(ctx, 31, 0x27CC8Cu);
    ctx->pc = 0x27CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC84u;
            // 0x27cc88: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2803C0u;
    if (runtime->hasFunction(0x2803C0u)) {
        auto targetFn = runtime->lookupFunction(0x2803C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC8Cu; }
        if (ctx->pc != 0x27CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002803C0_0x2803c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC8Cu; }
        if (ctx->pc != 0x27CC8Cu) { return; }
    }
    ctx->pc = 0x27CC8Cu;
label_27cc8c:
    // 0x27cc8c: 0x10000072  b           . + 4 + (0x72 << 2)
label_27cc90:
    if (ctx->pc == 0x27CC90u) {
        ctx->pc = 0x27CC90u;
            // 0x27cc90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CC94u;
        goto label_27cc94;
    }
    ctx->pc = 0x27CC8Cu;
    {
        const bool branch_taken_0x27cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC8Cu;
            // 0x27cc90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc8c) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CC94u;
label_27cc94:
    // 0x27cc94: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cc98:
    // 0x27cc98: 0xc09f8b2  jal         func_27E2C8
label_27cc9c:
    if (ctx->pc == 0x27CC9Cu) {
        ctx->pc = 0x27CC9Cu;
            // 0x27cc9c: 0x26300380  addiu       $s0, $s1, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
        ctx->pc = 0x27CCA0u;
        goto label_27cca0;
    }
    ctx->pc = 0x27CC98u;
    SET_GPR_U32(ctx, 31, 0x27CCA0u);
    ctx->pc = 0x27CC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC98u;
            // 0x27cc9c: 0x26300380  addiu       $s0, $s1, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E2C8u;
    if (runtime->hasFunction(0x27E2C8u)) {
        auto targetFn = runtime->lookupFunction(0x27E2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCA0u; }
        if (ctx->pc != 0x27CCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027E2C8_0x27e2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCA0u; }
        if (ctx->pc != 0x27CCA0u) { return; }
    }
    ctx->pc = 0x27CCA0u;
label_27cca0:
    // 0x27cca0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_27cca4:
    if (ctx->pc == 0x27CCA4u) {
        ctx->pc = 0x27CCA4u;
            // 0x27cca4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CCA8u;
        goto label_27cca8;
    }
    ctx->pc = 0x27CCA0u;
    {
        const bool branch_taken_0x27cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCA0u;
            // 0x27cca4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cca0) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CCA8u;
label_27cca8:
    // 0x27cca8: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ccac:
    // 0x27ccac: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27ccb0:
    // 0x27ccb0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27ccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27ccb4:
    // 0x27ccb4: 0xc09ff20  jal         func_27FC80
label_27ccb8:
    if (ctx->pc == 0x27CCB8u) {
        ctx->pc = 0x27CCB8u;
            // 0x27ccb8: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CCBCu;
        goto label_27ccbc;
    }
    ctx->pc = 0x27CCB4u;
    SET_GPR_U32(ctx, 31, 0x27CCBCu);
    ctx->pc = 0x27CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCB4u;
            // 0x27ccb8: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FC80u;
    if (runtime->hasFunction(0x27FC80u)) {
        auto targetFn = runtime->lookupFunction(0x27FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCBCu; }
        if (ctx->pc != 0x27CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FC80_0x27fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCBCu; }
        if (ctx->pc != 0x27CCBCu) { return; }
    }
    ctx->pc = 0x27CCBCu;
label_27ccbc:
    // 0x27ccbc: 0x10000066  b           . + 4 + (0x66 << 2)
label_27ccc0:
    if (ctx->pc == 0x27CCC0u) {
        ctx->pc = 0x27CCC0u;
            // 0x27ccc0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CCC4u;
        goto label_27ccc4;
    }
    ctx->pc = 0x27CCBCu;
    {
        const bool branch_taken_0x27ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCBCu;
            // 0x27ccc0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccbc) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CCC4u;
label_27ccc4:
    // 0x27ccc4: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ccc8:
    // 0x27ccc8: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cccc:
    // 0x27cccc: 0xc0a0260  jal         func_280980
label_27ccd0:
    if (ctx->pc == 0x27CCD0u) {
        ctx->pc = 0x27CCD0u;
            // 0x27ccd0: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CCD4u;
        goto label_27ccd4;
    }
    ctx->pc = 0x27CCCCu;
    SET_GPR_U32(ctx, 31, 0x27CCD4u);
    ctx->pc = 0x27CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCCCu;
            // 0x27ccd0: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280980u;
    if (runtime->hasFunction(0x280980u)) {
        auto targetFn = runtime->lookupFunction(0x280980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCD4u; }
        if (ctx->pc != 0x27CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280980_0x280980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCD4u; }
        if (ctx->pc != 0x27CCD4u) { return; }
    }
    ctx->pc = 0x27CCD4u;
label_27ccd4:
    // 0x27ccd4: 0x10000060  b           . + 4 + (0x60 << 2)
label_27ccd8:
    if (ctx->pc == 0x27CCD8u) {
        ctx->pc = 0x27CCD8u;
            // 0x27ccd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CCDCu;
        goto label_27ccdc;
    }
    ctx->pc = 0x27CCD4u;
    {
        const bool branch_taken_0x27ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCD4u;
            // 0x27ccd8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccd4) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CCDCu;
label_27ccdc:
    // 0x27ccdc: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ccdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cce0:
    // 0x27cce0: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cce4:
    // 0x27cce4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cce8:
    // 0x27cce8: 0xc09ff20  jal         func_27FC80
label_27ccec:
    if (ctx->pc == 0x27CCECu) {
        ctx->pc = 0x27CCECu;
            // 0x27ccec: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CCF0u;
        goto label_27ccf0;
    }
    ctx->pc = 0x27CCE8u;
    SET_GPR_U32(ctx, 31, 0x27CCF0u);
    ctx->pc = 0x27CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCE8u;
            // 0x27ccec: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FC80u;
    if (runtime->hasFunction(0x27FC80u)) {
        auto targetFn = runtime->lookupFunction(0x27FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCF0u; }
        if (ctx->pc != 0x27CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FC80_0x27fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCF0u; }
        if (ctx->pc != 0x27CCF0u) { return; }
    }
    ctx->pc = 0x27CCF0u;
label_27ccf0:
    // 0x27ccf0: 0x10000059  b           . + 4 + (0x59 << 2)
label_27ccf4:
    if (ctx->pc == 0x27CCF4u) {
        ctx->pc = 0x27CCF4u;
            // 0x27ccf4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CCF8u;
        goto label_27ccf8;
    }
    ctx->pc = 0x27CCF0u;
    {
        const bool branch_taken_0x27ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCF0u;
            // 0x27ccf4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccf0) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CCF8u;
label_27ccf8:
    // 0x27ccf8: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ccfc:
    // 0x27ccfc: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd00:
    // 0x27cd00: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27cd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cd04:
    // 0x27cd04: 0xc0a02e6  jal         func_280B98
label_27cd08:
    if (ctx->pc == 0x27CD08u) {
        ctx->pc = 0x27CD08u;
            // 0x27cd08: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CD0Cu;
        goto label_27cd0c;
    }
    ctx->pc = 0x27CD04u;
    SET_GPR_U32(ctx, 31, 0x27CD0Cu);
    ctx->pc = 0x27CD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD04u;
            // 0x27cd08: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280B98u;
    if (runtime->hasFunction(0x280B98u)) {
        auto targetFn = runtime->lookupFunction(0x280B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD0Cu; }
        if (ctx->pc != 0x27CD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280B98_0x280b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD0Cu; }
        if (ctx->pc != 0x27CD0Cu) { return; }
    }
    ctx->pc = 0x27CD0Cu;
label_27cd0c:
    // 0x27cd0c: 0x10000052  b           . + 4 + (0x52 << 2)
label_27cd10:
    if (ctx->pc == 0x27CD10u) {
        ctx->pc = 0x27CD10u;
            // 0x27cd10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CD14u;
        goto label_27cd14;
    }
    ctx->pc = 0x27CD0Cu;
    {
        const bool branch_taken_0x27cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD0Cu;
            // 0x27cd10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd0c) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CD14u;
label_27cd14:
    // 0x27cd14: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cd18:
    // 0x27cd18: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd1c:
    // 0x27cd1c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x27cd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cd20:
    // 0x27cd20: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_27cd24:
    // 0x27cd24: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x27cd24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27cd28:
    // 0x27cd28: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27cd2c:
    // 0x27cd2c: 0xc0a032c  jal         func_280CB0
label_27cd30:
    if (ctx->pc == 0x27CD30u) {
        ctx->pc = 0x27CD30u;
            // 0x27cd30: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x27CD34u;
        goto label_27cd34;
    }
    ctx->pc = 0x27CD2Cu;
    SET_GPR_U32(ctx, 31, 0x27CD34u);
    ctx->pc = 0x27CD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD2Cu;
            // 0x27cd30: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280CB0u;
    if (runtime->hasFunction(0x280CB0u)) {
        auto targetFn = runtime->lookupFunction(0x280CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD34u; }
        if (ctx->pc != 0x27CD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280CB0_0x280cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD34u; }
        if (ctx->pc != 0x27CD34u) { return; }
    }
    ctx->pc = 0x27CD34u;
label_27cd34:
    // 0x27cd34: 0x10000048  b           . + 4 + (0x48 << 2)
label_27cd38:
    if (ctx->pc == 0x27CD38u) {
        ctx->pc = 0x27CD38u;
            // 0x27cd38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CD3Cu;
        goto label_27cd3c;
    }
    ctx->pc = 0x27CD34u;
    {
        const bool branch_taken_0x27cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD34u;
            // 0x27cd38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd34) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CD3Cu;
label_27cd3c:
    // 0x27cd3c: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cd40:
    // 0x27cd40: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd44:
    // 0x27cd44: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x27cd44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_27cd48:
    // 0x27cd48: 0xc0a0474  jal         func_2811D0
label_27cd4c:
    if (ctx->pc == 0x27CD4Cu) {
        ctx->pc = 0x27CD4Cu;
            // 0x27cd4c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CD50u;
        goto label_27cd50;
    }
    ctx->pc = 0x27CD48u;
    SET_GPR_U32(ctx, 31, 0x27CD50u);
    ctx->pc = 0x27CD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD48u;
            // 0x27cd4c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2811D0u;
    if (runtime->hasFunction(0x2811D0u)) {
        auto targetFn = runtime->lookupFunction(0x2811D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD50u; }
        if (ctx->pc != 0x27CD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002811D0_0x2811d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD50u; }
        if (ctx->pc != 0x27CD50u) { return; }
    }
    ctx->pc = 0x27CD50u;
label_27cd50:
    // 0x27cd50: 0x10000041  b           . + 4 + (0x41 << 2)
label_27cd54:
    if (ctx->pc == 0x27CD54u) {
        ctx->pc = 0x27CD54u;
            // 0x27cd54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CD58u;
        goto label_27cd58;
    }
    ctx->pc = 0x27CD50u;
    {
        const bool branch_taken_0x27cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD50u;
            // 0x27cd54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd50) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CD58u;
label_27cd58:
    // 0x27cd58: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cd5c:
    // 0x27cd5c: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd60:
    // 0x27cd60: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x27cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_27cd64:
    // 0x27cd64: 0xc0a04a8  jal         func_2812A0
label_27cd68:
    if (ctx->pc == 0x27CD68u) {
        ctx->pc = 0x27CD68u;
            // 0x27cd68: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
        ctx->pc = 0x27CD6Cu;
        goto label_27cd6c;
    }
    ctx->pc = 0x27CD64u;
    SET_GPR_U32(ctx, 31, 0x27CD6Cu);
    ctx->pc = 0x27CD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD64u;
            // 0x27cd68: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2812A0u;
    if (runtime->hasFunction(0x2812A0u)) {
        auto targetFn = runtime->lookupFunction(0x2812A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD6Cu; }
        if (ctx->pc != 0x27CD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002812A0_0x2812a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD6Cu; }
        if (ctx->pc != 0x27CD6Cu) { return; }
    }
    ctx->pc = 0x27CD6Cu;
label_27cd6c:
    // 0x27cd6c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_27cd70:
    if (ctx->pc == 0x27CD70u) {
        ctx->pc = 0x27CD70u;
            // 0x27cd70: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CD74u;
        goto label_27cd74;
    }
    ctx->pc = 0x27CD6Cu;
    {
        const bool branch_taken_0x27cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD6Cu;
            // 0x27cd70: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd6c) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CD74u;
label_27cd74:
    // 0x27cd74: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd78:
    // 0x27cd78: 0xc09fafe  jal         func_27EBF8
label_27cd7c:
    if (ctx->pc == 0x27CD7Cu) {
        ctx->pc = 0x27CD7Cu;
            // 0x27cd7c: 0x26300380  addiu       $s0, $s1, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
        ctx->pc = 0x27CD80u;
        goto label_27cd80;
    }
    ctx->pc = 0x27CD78u;
    SET_GPR_U32(ctx, 31, 0x27CD80u);
    ctx->pc = 0x27CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD78u;
            // 0x27cd7c: 0x26300380  addiu       $s0, $s1, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF8u;
    if (runtime->hasFunction(0x27EBF8u)) {
        auto targetFn = runtime->lookupFunction(0x27EBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD80u; }
        if (ctx->pc != 0x27CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027EBF8_0x27ebf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD80u; }
        if (ctx->pc != 0x27CD80u) { return; }
    }
    ctx->pc = 0x27CD80u;
label_27cd80:
    // 0x27cd80: 0x10000035  b           . + 4 + (0x35 << 2)
label_27cd84:
    if (ctx->pc == 0x27CD84u) {
        ctx->pc = 0x27CD84u;
            // 0x27cd84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CD88u;
        goto label_27cd88;
    }
    ctx->pc = 0x27CD80u;
    {
        const bool branch_taken_0x27cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD80u;
            // 0x27cd84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd80) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CD88u;
label_27cd88:
    // 0x27cd88: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27cd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27cd8c:
    // 0x27cd8c: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27cd90:
    // 0x27cd90: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_27cd94:
    // 0x27cd94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27cd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27cd98:
    // 0x27cd98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd9c:
    // 0x27cd9c: 0xc09fc16  jal         func_27F058
label_27cda0:
    if (ctx->pc == 0x27CDA0u) {
        ctx->pc = 0x27CDA0u;
            // 0x27cda0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CDA4u;
        goto label_27cda4;
    }
    ctx->pc = 0x27CD9Cu;
    SET_GPR_U32(ctx, 31, 0x27CDA4u);
    ctx->pc = 0x27CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD9Cu;
            // 0x27cda0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDA4u; }
        if (ctx->pc != 0x27CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDA4u; }
        if (ctx->pc != 0x27CDA4u) { return; }
    }
    ctx->pc = 0x27CDA4u;
label_27cda4:
    // 0x27cda4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
label_27cda8:
    // 0x27cda8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27cda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_27cdac:
    // 0x27cdac: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_27cdb0:
    if (ctx->pc == 0x27CDB0u) {
        ctx->pc = 0x27CDB0u;
            // 0x27cdb0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CDB4u;
        goto label_27cdb4;
    }
    ctx->pc = 0x27CDACu;
    {
        const bool branch_taken_0x27cdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDACu;
            // 0x27cdb0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdac) {
            ctx->pc = 0x27CDB8u;
            goto label_27cdb8;
        }
    }
    ctx->pc = 0x27CDB4u;
label_27cdb4:
    // 0x27cdb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x27cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_27cdb8:
    // 0x27cdb8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x27cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27cdbc:
    // 0x27cdbc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_27cdc0:
    if (ctx->pc == 0x27CDC0u) {
        ctx->pc = 0x27CDC0u;
            // 0x27cdc0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x27CDC4u;
        goto label_27cdc4;
    }
    ctx->pc = 0x27CDBCu;
    {
        const bool branch_taken_0x27cdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDBCu;
            // 0x27cdc0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdbc) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CDC4u;
label_27cdc4:
    // 0x27cdc4: 0xc0a2644  jal         func_289910
label_27cdc8:
    if (ctx->pc == 0x27CDC8u) {
        ctx->pc = 0x27CDC8u;
            // 0x27cdc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CDCCu;
        goto label_27cdcc;
    }
    ctx->pc = 0x27CDC4u;
    SET_GPR_U32(ctx, 31, 0x27CDCCu);
    ctx->pc = 0x27CDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDC4u;
            // 0x27cdc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDCCu; }
        if (ctx->pc != 0x27CDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CDCCu; }
        if (ctx->pc != 0x27CDCCu) { return; }
    }
    ctx->pc = 0x27CDCCu;
label_27cdcc:
    // 0x27cdcc: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x27cdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27cdd0:
    // 0x27cdd0: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x27cdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27cdd4:
    // 0x27cdd4: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x27cdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27cdd8:
    // 0x27cdd8: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x27cdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27cddc:
    // 0x27cddc: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x27cddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27cde0:
    // 0x27cde0: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x27cde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27cde4:
    // 0x27cde4: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x27cde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27cde8:
    // 0x27cde8: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x27cde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27cdec:
    // 0x27cdec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27cdf0:
    // 0x27cdf0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x27cdf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_27cdf4:
    // 0x27cdf4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x27cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_27cdf8:
    // 0x27cdf8: 0x10000017  b           . + 4 + (0x17 << 2)
label_27cdfc:
    if (ctx->pc == 0x27CDFCu) {
        ctx->pc = 0x27CDFCu;
            // 0x27cdfc: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x27CE00u;
        goto label_27ce00;
    }
    ctx->pc = 0x27CDF8u;
    {
        const bool branch_taken_0x27cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDF8u;
            // 0x27cdfc: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cdf8) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE00u;
label_27ce00:
    // 0x27ce00: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ce00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ce04:
    // 0x27ce04: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27ce08:
    // 0x27ce08: 0xc0a051c  jal         func_281470
label_27ce0c:
    if (ctx->pc == 0x27CE0Cu) {
        ctx->pc = 0x27CE0Cu;
            // 0x27ce0c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x27CE10u;
        goto label_27ce10;
    }
    ctx->pc = 0x27CE08u;
    SET_GPR_U32(ctx, 31, 0x27CE10u);
    ctx->pc = 0x27CE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE08u;
            // 0x27ce0c: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281470u;
    if (runtime->hasFunction(0x281470u)) {
        auto targetFn = runtime->lookupFunction(0x281470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE10u; }
        if (ctx->pc != 0x27CE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281470_0x281470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE10u; }
        if (ctx->pc != 0x27CE10u) { return; }
    }
    ctx->pc = 0x27CE10u;
label_27ce10:
    // 0x27ce10: 0x10000011  b           . + 4 + (0x11 << 2)
label_27ce14:
    if (ctx->pc == 0x27CE14u) {
        ctx->pc = 0x27CE14u;
            // 0x27ce14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CE18u;
        goto label_27ce18;
    }
    ctx->pc = 0x27CE10u;
    {
        const bool branch_taken_0x27ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE10u;
            // 0x27ce14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce10) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE18u;
label_27ce18:
    // 0x27ce18: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ce18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ce1c:
    // 0x27ce1c: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27ce20:
    // 0x27ce20: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27ce24:
    // 0x27ce24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27ce24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ce28:
    // 0x27ce28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x27ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27ce2c:
    // 0x27ce2c: 0xc0a0a54  jal         func_282950
label_27ce30:
    if (ctx->pc == 0x27CE30u) {
        ctx->pc = 0x27CE30u;
            // 0x27ce30: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x27CE34u;
        goto label_27ce34;
    }
    ctx->pc = 0x27CE2Cu;
    SET_GPR_U32(ctx, 31, 0x27CE34u);
    ctx->pc = 0x27CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE2Cu;
            // 0x27ce30: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282950u;
    if (runtime->hasFunction(0x282950u)) {
        auto targetFn = runtime->lookupFunction(0x282950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE34u; }
        if (ctx->pc != 0x27CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282950_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE34u; }
        if (ctx->pc != 0x27CE34u) { return; }
    }
    ctx->pc = 0x27CE34u;
label_27ce34:
    // 0x27ce34: 0x10000008  b           . + 4 + (0x8 << 2)
label_27ce38:
    if (ctx->pc == 0x27CE38u) {
        ctx->pc = 0x27CE38u;
            // 0x27ce38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x27CE3Cu;
        goto label_27ce3c;
    }
    ctx->pc = 0x27CE34u;
    {
        const bool branch_taken_0x27ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE34u;
            // 0x27ce38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce34) {
            ctx->pc = 0x27CE58u;
            goto label_27ce58;
        }
    }
    ctx->pc = 0x27CE3Cu;
label_27ce3c:
    // 0x27ce3c: 0x26300380  addiu       $s0, $s1, 0x380
    ctx->pc = 0x27ce3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ce40:
    // 0x27ce40: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x27ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_27ce44:
    // 0x27ce44: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x27ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27ce48:
    // 0x27ce48: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x27ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27ce4c:
    // 0x27ce4c: 0xc0a0ac2  jal         func_282B08
label_27ce50:
    if (ctx->pc == 0x27CE50u) {
        ctx->pc = 0x27CE50u;
            // 0x27ce50: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x27CE54u;
        goto label_27ce54;
    }
    ctx->pc = 0x27CE4Cu;
    SET_GPR_U32(ctx, 31, 0x27CE54u);
    ctx->pc = 0x27CE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE4Cu;
            // 0x27ce50: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B08u;
    if (runtime->hasFunction(0x282B08u)) {
        auto targetFn = runtime->lookupFunction(0x282B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE54u; }
        if (ctx->pc != 0x27CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282B08_0x282b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE54u; }
        if (ctx->pc != 0x27CE54u) { return; }
    }
    ctx->pc = 0x27CE54u;
label_27ce54:
    // 0x27ce54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_27ce58:
    // 0x27ce58: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x27ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_27ce5c:
    // 0x27ce5c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27ce60:
    // 0x27ce60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x27ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27ce64:
    // 0x27ce64: 0x34429fff  ori         $v0, $v0, 0x9FFF
    ctx->pc = 0x27ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40959);
label_27ce68:
    // 0x27ce68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_27ce6c:
    if (ctx->pc == 0x27CE6Cu) {
        ctx->pc = 0x27CE6Cu;
            // 0x27ce6c: 0x266208a0  addiu       $v0, $s3, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
        ctx->pc = 0x27CE70u;
        goto label_27ce70;
    }
    ctx->pc = 0x27CE68u;
    {
        const bool branch_taken_0x27ce68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27CE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE68u;
            // 0x27ce6c: 0x266208a0  addiu       $v0, $s3, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce68) {
            ctx->pc = 0x27CE80u;
            goto label_27ce80;
        }
    }
    ctx->pc = 0x27CE70u;
label_27ce70:
    // 0x27ce70: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_27ce74:
    // 0x27ce74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_27ce78:
    // 0x27ce78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x27ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_27ce7c:
    // 0x27ce7c: 0x266208a0  addiu       $v0, $s3, 0x8A0
    ctx->pc = 0x27ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
label_27ce80:
    // 0x27ce80: 0xc0a4f10  jal         func_293C40
label_27ce84:
    if (ctx->pc == 0x27CE84u) {
        ctx->pc = 0x27CE84u;
            // 0x27ce84: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x27CE88u;
        goto label_27ce88;
    }
    ctx->pc = 0x27CE80u;
    SET_GPR_U32(ctx, 31, 0x27CE88u);
    ctx->pc = 0x27CE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE80u;
            // 0x27ce84: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE88u; }
        if (ctx->pc != 0x27CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE88u; }
        if (ctx->pc != 0x27CE88u) { return; }
    }
    ctx->pc = 0x27CE88u;
label_27ce88:
    // 0x27ce88: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
label_27ce8c:
    if (ctx->pc == 0x27CE8Cu) {
        ctx->pc = 0x27CE8Cu;
            // 0x27ce8c: 0x266208a0  addiu       $v0, $s3, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
        ctx->pc = 0x27CE90u;
        goto label_fallthrough_0x27ce88;
    }
    ctx->pc = 0x27CE88u;
    {
        const bool branch_taken_0x27ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE88u;
            // 0x27ce8c: 0x266208a0  addiu       $v0, $s3, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce88) {
            ctx->pc = 0x27CC00u;
            runtime->cooperativeGuestYield();
            goto label_27cc00;
        }
    }
label_fallthrough_0x27ce88:
    ctx->pc = 0x27CE90u;
}

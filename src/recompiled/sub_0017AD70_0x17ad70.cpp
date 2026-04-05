#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AD70
// Address: 0x17ad70 - 0x17aeb8
void sub_0017AD70_0x17ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AD70_0x17ad70");
#endif

    ctx->pc = 0x17ad70u;

    // 0x17ad70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17ad74: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17ad78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x17ad7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ad7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17ad84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17ad84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17ad8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17ad8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad90: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x17ad94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ad98: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x17ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x17ad9c: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x17ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    // 0x17ada0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17ADA0u;
    {
        const bool branch_taken_0x17ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADA0u;
            // 0x17ada4: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ada0) {
            ctx->pc = 0x17AE30u;
            goto label_17ae30;
        }
    }
    ctx->pc = 0x17ADA8u;
    // 0x17ada8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adac: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17adacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17adb0: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x17ADB0u;
    SET_GPR_U32(ctx, 31, 0x17ADB8u);
    ctx->pc = 0x17ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADB0u;
            // 0x17adb4: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADB8u; }
        if (ctx->pc != 0x17ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADB8u; }
        if (ctx->pc != 0x17ADB8u) { return; }
    }
    ctx->pc = 0x17ADB8u;
    // 0x17adb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17adb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adbc: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17ADBCu;
    SET_GPR_U32(ctx, 31, 0x17ADC4u);
    ctx->pc = 0x17ADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADBCu;
            // 0x17adc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADC4u; }
        if (ctx->pc != 0x17ADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADC4u; }
        if (ctx->pc != 0x17ADC4u) { return; }
    }
    ctx->pc = 0x17ADC4u;
    // 0x17adc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17adc8: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17adcc: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17adccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17add0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x17add0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x17add4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x17add4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17add8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17addc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17addcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17ade0: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17ade4: 0xc09b286  jal         func_26CA18
    ctx->pc = 0x17ADE4u;
    SET_GPR_U32(ctx, 31, 0x17ADECu);
    ctx->pc = 0x17ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADE4u;
            // 0x17ade8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA18u;
    if (runtime->hasFunction(0x26CA18u)) {
        auto targetFn = runtime->lookupFunction(0x26CA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADECu; }
        if (ctx->pc != 0x17ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA18_0x26ca18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADECu; }
        if (ctx->pc != 0x17ADECu) { return; }
    }
    ctx->pc = 0x17ADECu;
    // 0x17adec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adf0: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17ADF0u;
    {
        const bool branch_taken_0x17adf0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x17ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ADF0u;
            // 0x17adf4: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adf0) {
            ctx->pc = 0x17AE18u;
            goto label_17ae18;
        }
    }
    ctx->pc = 0x17ADF8u;
    // 0x17adf8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x17adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17adfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ae00: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x17ae00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17ae04: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x17ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x17ae08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ae0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17AE0Cu;
    {
        const bool branch_taken_0x17ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE0Cu;
            // 0x17ae10: 0x8c43012c  lw          $v1, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae0c) {
            ctx->pc = 0x17AE1Cu;
            goto label_17ae1c;
        }
    }
    ctx->pc = 0x17AE14u;
    // 0x17ae14: 0x0  nop
    ctx->pc = 0x17ae14u;
    // NOP
label_17ae18:
    // 0x17ae18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17ae1c:
    // 0x17ae1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ae20: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x17ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x17ae24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x17ae24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x17ae28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17AE28u;
    {
        const bool branch_taken_0x17ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE28u;
            // 0x17ae2c: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae28) {
            ctx->pc = 0x17AE98u;
            goto label_17ae98;
        }
    }
    ctx->pc = 0x17AE30u;
label_17ae30:
    // 0x17ae30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x17ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17ae34: 0x12803c  dsll32      $s0, $s2, 0
    ctx->pc = 0x17ae34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    // 0x17ae38: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x17ae3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ae40: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17ae44: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x17ae44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x17ae48: 0x2631ad30  addiu       $s1, $s1, -0x52D0
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946096));
    // 0x17ae4c: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x17ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x17ae50: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x17ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x17ae54: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x17AE54u;
    SET_GPR_U32(ctx, 31, 0x17AE5Cu);
    ctx->pc = 0x17AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE54u;
            // 0x17ae58: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE5Cu; }
        if (ctx->pc != 0x17AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE5Cu; }
        if (ctx->pc != 0x17AE5Cu) { return; }
    }
    ctx->pc = 0x17AE5Cu;
    // 0x17ae5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ae60: 0xc0a2644  jal         func_289910
    ctx->pc = 0x17AE60u;
    SET_GPR_U32(ctx, 31, 0x17AE68u);
    ctx->pc = 0x17AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE60u;
            // 0x17ae64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE68u; }
        if (ctx->pc != 0x17AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE68u; }
        if (ctx->pc != 0x17AE68u) { return; }
    }
    ctx->pc = 0x17AE68u;
    // 0x17ae68: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x17ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17ae6c: 0xafb30030  sw          $s3, 0x30($sp)
    ctx->pc = 0x17ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 19));
    // 0x17ae70: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17ae70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae74: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae78: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17ae7c: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x17ae7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17ae80: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17ae84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17ae88: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x17ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17ae8c: 0xc09b2a4  jal         func_26CA90
    ctx->pc = 0x17AE8Cu;
    SET_GPR_U32(ctx, 31, 0x17AE94u);
    ctx->pc = 0x17AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE8Cu;
            // 0x17ae90: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE94u; }
        if (ctx->pc != 0x17AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE94u; }
        if (ctx->pc != 0x17AE94u) { return; }
    }
    ctx->pc = 0x17AE94u;
    // 0x17ae94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ae98:
    // 0x17ae98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ae9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17ae9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17aea0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x17aea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17aea4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17aea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17aea8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17aea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17aeac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17aeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEB0u;
            // 0x17aeb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AE18u: goto label_17ae18;
            case 0x17AE1Cu: goto label_17ae1c;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE98u: goto label_17ae98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AEB8u;
}

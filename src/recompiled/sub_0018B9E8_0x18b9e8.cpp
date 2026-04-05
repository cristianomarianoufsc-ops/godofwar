#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B9E8
// Address: 0x18b9e8 - 0x18ba90
void sub_0018B9E8_0x18b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B9E8_0x18b9e8");
#endif

    ctx->pc = 0x18b9e8u;

    // 0x18b9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b9f0: 0xc06720c  jal         func_19C830
    ctx->pc = 0x18B9F0u;
    SET_GPR_U32(ctx, 31, 0x18B9F8u);
    ctx->pc = 0x19C830u;
    if (runtime->hasFunction(0x19C830u)) {
        auto targetFn = runtime->lookupFunction(0x19C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9F8u; }
        if (ctx->pc != 0x18B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C830_0x19c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9F8u; }
        if (ctx->pc != 0x18B9F8u) { return; }
    }
    ctx->pc = 0x18B9F8u;
    // 0x18b9f8: 0xc063522  jal         func_18D488
    ctx->pc = 0x18B9F8u;
    SET_GPR_U32(ctx, 31, 0x18BA00u);
    ctx->pc = 0x18D488u;
    if (runtime->hasFunction(0x18D488u)) {
        auto targetFn = runtime->lookupFunction(0x18D488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA00u; }
        if (ctx->pc != 0x18BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D488_0x18d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA00u; }
        if (ctx->pc != 0x18BA00u) { return; }
    }
    ctx->pc = 0x18BA00u;
    // 0x18ba00: 0xc0638a4  jal         func_18E290
    ctx->pc = 0x18BA00u;
    SET_GPR_U32(ctx, 31, 0x18BA08u);
    ctx->pc = 0x18E290u;
    if (runtime->hasFunction(0x18E290u)) {
        auto targetFn = runtime->lookupFunction(0x18E290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA08u; }
        if (ctx->pc != 0x18BA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E290_0x18e290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA08u; }
        if (ctx->pc != 0x18BA08u) { return; }
    }
    ctx->pc = 0x18BA08u;
    // 0x18ba08: 0xc063a6e  jal         func_18E9B8
    ctx->pc = 0x18BA08u;
    SET_GPR_U32(ctx, 31, 0x18BA10u);
    ctx->pc = 0x18E9B8u;
    if (runtime->hasFunction(0x18E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x18E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA10u; }
        if (ctx->pc != 0x18BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E9B8_0x18e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA10u; }
        if (ctx->pc != 0x18BA10u) { return; }
    }
    ctx->pc = 0x18BA10u;
    // 0x18ba10: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x18BA10u;
    SET_GPR_U32(ctx, 31, 0x18BA18u);
    ctx->pc = 0x18FB10u;
    if (runtime->hasFunction(0x18FB10u)) {
        auto targetFn = runtime->lookupFunction(0x18FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA18u; }
        if (ctx->pc != 0x18BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FB10_0x18fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA18u; }
        if (ctx->pc != 0x18BA18u) { return; }
    }
    ctx->pc = 0x18BA18u;
    // 0x18ba18: 0xc0645aa  jal         func_1916A8
    ctx->pc = 0x18BA18u;
    SET_GPR_U32(ctx, 31, 0x18BA20u);
    ctx->pc = 0x1916A8u;
    if (runtime->hasFunction(0x1916A8u)) {
        auto targetFn = runtime->lookupFunction(0x1916A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA20u; }
        if (ctx->pc != 0x18BA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001916A8_0x1916a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA20u; }
        if (ctx->pc != 0x18BA20u) { return; }
    }
    ctx->pc = 0x18BA20u;
    // 0x18ba20: 0xc064ac2  jal         func_192B08
    ctx->pc = 0x18BA20u;
    SET_GPR_U32(ctx, 31, 0x18BA28u);
    ctx->pc = 0x192B08u;
    if (runtime->hasFunction(0x192B08u)) {
        auto targetFn = runtime->lookupFunction(0x192B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA28u; }
        if (ctx->pc != 0x18BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B08_0x192b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA28u; }
        if (ctx->pc != 0x18BA28u) { return; }
    }
    ctx->pc = 0x18BA28u;
    // 0x18ba28: 0xc064df2  jal         func_1937C8
    ctx->pc = 0x18BA28u;
    SET_GPR_U32(ctx, 31, 0x18BA30u);
    ctx->pc = 0x1937C8u;
    if (runtime->hasFunction(0x1937C8u)) {
        auto targetFn = runtime->lookupFunction(0x1937C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA30u; }
        if (ctx->pc != 0x18BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001937C8_0x1937c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA30u; }
        if (ctx->pc != 0x18BA30u) { return; }
    }
    ctx->pc = 0x18BA30u;
    // 0x18ba30: 0xc0655ae  jal         func_1956B8
    ctx->pc = 0x18BA30u;
    SET_GPR_U32(ctx, 31, 0x18BA38u);
    ctx->pc = 0x1956B8u;
    if (runtime->hasFunction(0x1956B8u)) {
        auto targetFn = runtime->lookupFunction(0x1956B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA38u; }
        if (ctx->pc != 0x18BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001956B8_0x1956b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA38u; }
        if (ctx->pc != 0x18BA38u) { return; }
    }
    ctx->pc = 0x18BA38u;
    // 0x18ba38: 0xc0664da  jal         func_199368
    ctx->pc = 0x18BA38u;
    SET_GPR_U32(ctx, 31, 0x18BA40u);
    ctx->pc = 0x199368u;
    if (runtime->hasFunction(0x199368u)) {
        auto targetFn = runtime->lookupFunction(0x199368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA40u; }
        if (ctx->pc != 0x18BA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199368_0x199368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA40u; }
        if (ctx->pc != 0x18BA40u) { return; }
    }
    ctx->pc = 0x18BA40u;
    // 0x18ba40: 0xc06653e  jal         func_1994F8
    ctx->pc = 0x18BA40u;
    SET_GPR_U32(ctx, 31, 0x18BA48u);
    ctx->pc = 0x1994F8u;
    if (runtime->hasFunction(0x1994F8u)) {
        auto targetFn = runtime->lookupFunction(0x1994F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA48u; }
        if (ctx->pc != 0x18BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001994F8_0x1994f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA48u; }
        if (ctx->pc != 0x18BA48u) { return; }
    }
    ctx->pc = 0x18BA48u;
    // 0x18ba48: 0xc067bee  jal         func_19EFB8
    ctx->pc = 0x18BA48u;
    SET_GPR_U32(ctx, 31, 0x18BA50u);
    ctx->pc = 0x19EFB8u;
    if (runtime->hasFunction(0x19EFB8u)) {
        auto targetFn = runtime->lookupFunction(0x19EFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA50u; }
        if (ctx->pc != 0x18BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EFB8_0x19efb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA50u; }
        if (ctx->pc != 0x18BA50u) { return; }
    }
    ctx->pc = 0x18BA50u;
    // 0x18ba50: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x18BA50u;
    SET_GPR_U32(ctx, 31, 0x18BA58u);
    ctx->pc = 0x19B470u;
    if (runtime->hasFunction(0x19B470u)) {
        auto targetFn = runtime->lookupFunction(0x19B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA58u; }
        if (ctx->pc != 0x18BA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B470_0x19b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA58u; }
        if (ctx->pc != 0x18BA58u) { return; }
    }
    ctx->pc = 0x18BA58u;
    // 0x18ba58: 0xc067658  jal         func_19D960
    ctx->pc = 0x18BA58u;
    SET_GPR_U32(ctx, 31, 0x18BA60u);
    ctx->pc = 0x19D960u;
    if (runtime->hasFunction(0x19D960u)) {
        auto targetFn = runtime->lookupFunction(0x19D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA60u; }
        if (ctx->pc != 0x18BA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D960_0x19d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA60u; }
        if (ctx->pc != 0x18BA60u) { return; }
    }
    ctx->pc = 0x18BA60u;
    // 0x18ba60: 0xc06826c  jal         func_1A09B0
    ctx->pc = 0x18BA60u;
    SET_GPR_U32(ctx, 31, 0x18BA68u);
    ctx->pc = 0x1A09B0u;
    if (runtime->hasFunction(0x1A09B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A09B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA68u; }
        if (ctx->pc != 0x18BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A09B0_0x1a09b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA68u; }
        if (ctx->pc != 0x18BA68u) { return; }
    }
    ctx->pc = 0x18BA68u;
    // 0x18ba68: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x18BA68u;
    SET_GPR_U32(ctx, 31, 0x18BA70u);
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA70u; }
        if (ctx->pc != 0x18BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F380_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA70u; }
        if (ctx->pc != 0x18BA70u) { return; }
    }
    ctx->pc = 0x18BA70u;
    // 0x18ba70: 0xc0707f2  jal         func_1C1FC8
    ctx->pc = 0x18BA70u;
    SET_GPR_U32(ctx, 31, 0x18BA78u);
    ctx->pc = 0x1C1FC8u;
    if (runtime->hasFunction(0x1C1FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1C1FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA78u; }
        if (ctx->pc != 0x18BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1FC8_0x1c1fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA78u; }
        if (ctx->pc != 0x18BA78u) { return; }
    }
    ctx->pc = 0x18BA78u;
    // 0x18ba78: 0xc070a2c  jal         func_1C28B0
    ctx->pc = 0x18BA78u;
    SET_GPR_U32(ctx, 31, 0x18BA80u);
    ctx->pc = 0x1C28B0u;
    if (runtime->hasFunction(0x1C28B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C28B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA80u; }
        if (ctx->pc != 0x18BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C28B0_0x1c28b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BA80u; }
        if (ctx->pc != 0x18BA80u) { return; }
    }
    ctx->pc = 0x18BA80u;
    // 0x18ba80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x18BA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA84u;
            // 0x18ba88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BA8Cu;
    // 0x18ba8c: 0x0  nop
    ctx->pc = 0x18ba8cu;
    // NOP
}

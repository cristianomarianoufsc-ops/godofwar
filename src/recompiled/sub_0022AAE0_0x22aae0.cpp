#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AAE0
// Address: 0x22aae0 - 0x22abd8
void sub_0022AAE0_0x22aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AAE0_0x22aae0");
#endif

    ctx->pc = 0x22aae0u;

    // 0x22aae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22aae4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22aae8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22aaec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22aaecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aaf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22aaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22aaf8: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x22aafc: 0x2642e848  addiu       $v0, $s2, -0x17B8
    ctx->pc = 0x22aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x22ab00: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x22ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x22ab04: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x22ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x22ab08: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x22ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x22ab0c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ab10: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x22ab10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22ab14: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22ab18: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22ab1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22ab20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ab24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ab28: 0xc061e82  jal         func_187A08
    ctx->pc = 0x22AB28u;
    SET_GPR_U32(ctx, 31, 0x22AB30u);
    ctx->pc = 0x22AB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB28u;
            // 0x22ab2c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A08u;
    if (runtime->hasFunction(0x187A08u)) {
        auto targetFn = runtime->lookupFunction(0x187A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB30u; }
        if (ctx->pc != 0x22AB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a08_0x187a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB30u; }
        if (ctx->pc != 0x22AB30u) { return; }
    }
    ctx->pc = 0x22AB30u;
    // 0x22ab30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ab30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab34: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x22AB34u;
    {
        const bool branch_taken_0x22ab34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab34) {
            ctx->pc = 0x22AB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB34u;
            // 0x22ab38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22ABC0u;
            goto label_22abc0;
        }
    }
    ctx->pc = 0x22AB3Cu;
    // 0x22ab3c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x22ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_22ab40:
    // 0x22ab40: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x22AB40u;
    SET_GPR_U32(ctx, 31, 0x22AB48u);
    ctx->pc = 0x22AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB40u;
            // 0x22ab44: 0x2625003c  addiu       $a1, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB48u; }
        if (ctx->pc != 0x22AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB48u; }
        if (ctx->pc != 0x22AB48u) { return; }
    }
    ctx->pc = 0x22AB48u;
    // 0x22ab48: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22AB48u;
    {
        const bool branch_taken_0x22ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab48) {
            ctx->pc = 0x22AB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB48u;
            // 0x22ab4c: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB50u;
    // 0x22ab50: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x22ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x22ab54: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x22ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
    // 0x22ab58: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22ab5c: 0xc05c294  jal         func_170A50
    ctx->pc = 0x22AB5Cu;
    SET_GPR_U32(ctx, 31, 0x22AB64u);
    ctx->pc = 0x22AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB5Cu;
            // 0x22ab60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB64u; }
        if (ctx->pc != 0x22AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB64u; }
        if (ctx->pc != 0x22AB64u) { return; }
    }
    ctx->pc = 0x22AB64u;
    // 0x22ab64: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22ab64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22ab68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ab68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ab6c: 0xc08aaf6  jal         func_22ABD8
    ctx->pc = 0x22AB6Cu;
    SET_GPR_U32(ctx, 31, 0x22AB74u);
    ctx->pc = 0x22AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB6Cu;
            // 0x22ab70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABD8u;
    if (runtime->hasFunction(0x22ABD8u)) {
        auto targetFn = runtime->lookupFunction(0x22ABD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB74u; }
        if (ctx->pc != 0x22AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22abd8_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB74u; }
        if (ctx->pc != 0x22AB74u) { return; }
    }
    ctx->pc = 0x22AB74u;
    // 0x22ab74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22AB74u;
    {
        const bool branch_taken_0x22ab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB74u;
            // 0x22ab78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab74) {
            ctx->pc = 0x22ABC0u;
            goto label_22abc0;
        }
    }
    ctx->pc = 0x22AB7Cu;
    // 0x22ab7c: 0x0  nop
    ctx->pc = 0x22ab7cu;
    // NOP
label_22ab80:
    // 0x22ab80: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x22ab84: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x22ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x22ab88: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x22ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x22ab8c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ab90: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x22ab90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22ab94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22ab98: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22ab9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22aba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22aba4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22aba8: 0xc061e8a  jal         func_187A28
    ctx->pc = 0x22ABA8u;
    SET_GPR_U32(ctx, 31, 0x22ABB0u);
    ctx->pc = 0x22ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABA8u;
            // 0x22abac: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A28u;
    if (runtime->hasFunction(0x187A28u)) {
        auto targetFn = runtime->lookupFunction(0x187A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ABB0u; }
        if (ctx->pc != 0x22ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a28_0x187a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ABB0u; }
        if (ctx->pc != 0x22ABB0u) { return; }
    }
    ctx->pc = 0x22ABB0u;
    // 0x22abb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22abb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abb4: 0x5600ffe2  bnel        $s0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22ABB4u;
    {
        const bool branch_taken_0x22abb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22abb4) {
            ctx->pc = 0x22ABB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABB4u;
            // 0x22abb8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AB40u;
            runtime->cooperativeGuestYield();
            goto label_22ab40;
        }
    }
    ctx->pc = 0x22ABBCu;
    // 0x22abbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22abbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22abc0:
    // 0x22abc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22abc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22abc4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22abc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22abc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABCCu;
            // 0x22abd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AB40u: goto label_22ab40;
            case 0x22AB80u: goto label_22ab80;
            case 0x22ABC0u: goto label_22abc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22ABD4u;
    // 0x22abd4: 0x0  nop
    ctx->pc = 0x22abd4u;
    // NOP
}

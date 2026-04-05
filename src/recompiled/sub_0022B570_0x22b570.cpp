#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B570
// Address: 0x22b570 - 0x22b690
void sub_0022B570_0x22b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B570_0x22b570");
#endif

    ctx->pc = 0x22b570u;

    // 0x22b570: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22b574: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x22b574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x22b578: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x22b578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x22b57c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x22b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x22b580: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x22b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x22b584: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x22b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x22b588: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x22b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x22b58c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b590: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x22b590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x22b594: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x22b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x22b598: 0xc04f856  jal         func_13E158
    ctx->pc = 0x22B598u;
    SET_GPR_U32(ctx, 31, 0x22B5A0u);
    ctx->pc = 0x22B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B598u;
            // 0x22b59c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5A0u; }
        if (ctx->pc != 0x22B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5A0u; }
        if (ctx->pc != 0x22B5A0u) { return; }
    }
    ctx->pc = 0x22B5A0u;
    // 0x22b5a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b5a4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x22b5a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5a8: 0x24428c48  addiu       $v0, $v0, -0x73B8
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937672));
    // 0x22b5ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22b5b0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x22b5b4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x22b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22b5b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22b5bc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x22b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x22b5c0: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x22b5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x22b5c4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22B5C4u;
    SET_GPR_U32(ctx, 31, 0x22B5CCu);
    ctx->pc = 0x22B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5C4u;
            // 0x22b5c8: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5CCu; }
        if (ctx->pc != 0x22B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5CCu; }
        if (ctx->pc != 0x22B5CCu) { return; }
    }
    ctx->pc = 0x22B5CCu;
    // 0x22b5cc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22B5CCu;
    SET_GPR_U32(ctx, 31, 0x22B5D4u);
    ctx->pc = 0x22B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5CCu;
            // 0x22b5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5D4u; }
        if (ctx->pc != 0x22B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5D4u; }
        if (ctx->pc != 0x22B5D4u) { return; }
    }
    ctx->pc = 0x22B5D4u;
    // 0x22b5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5d8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22b5dc: 0x24a58230  addiu       $a1, $a1, -0x7DD0
    ctx->pc = 0x22b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935088));
    // 0x22b5e0: 0xc060978  jal         func_1825E0
    ctx->pc = 0x22B5E0u;
    SET_GPR_U32(ctx, 31, 0x22B5E8u);
    ctx->pc = 0x22B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5E0u;
            // 0x22b5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5E8u; }
        if (ctx->pc != 0x22B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5E8u; }
        if (ctx->pc != 0x22B5E8u) { return; }
    }
    ctx->pc = 0x22B5E8u;
    // 0x22b5e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5f0: 0x24428c08  addiu       $v0, $v0, -0x73F8
    ctx->pc = 0x22b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937608));
    // 0x22b5f4: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x22B5F4u;
    SET_GPR_U32(ctx, 31, 0x22B5FCu);
    ctx->pc = 0x22B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5F4u;
            // 0x22b5f8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5FCu; }
        if (ctx->pc != 0x22B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5FCu; }
        if (ctx->pc != 0x22B5FCu) { return; }
    }
    ctx->pc = 0x22B5FCu;
    // 0x22b5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b600: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22B600u;
    SET_GPR_U32(ctx, 31, 0x22B608u);
    ctx->pc = 0x22B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B600u;
            // 0x22b604: 0xae901208  sw          $s0, 0x1208($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4616), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B608u; }
        if (ctx->pc != 0x22B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B608u; }
        if (ctx->pc != 0x22B608u) { return; }
    }
    ctx->pc = 0x22B608u;
    // 0x22b608: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x22b608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x22b60c: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22b610:
    // 0x22b610: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22b610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22b614: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22b614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b618: 0x24a58240  addiu       $a1, $a1, -0x7DC0
    ctx->pc = 0x22b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935104));
    // 0x22b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b620: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22B620u;
    SET_GPR_U32(ctx, 31, 0x22B628u);
    ctx->pc = 0x22B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B620u;
            // 0x22b624: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B628u; }
        if (ctx->pc != 0x22B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B628u; }
        if (ctx->pc != 0x22B628u) { return; }
    }
    ctx->pc = 0x22B628u;
    // 0x22b628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b62c: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x22B62Cu;
    SET_GPR_U32(ctx, 31, 0x22B634u);
    ctx->pc = 0x22B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B62Cu;
            // 0x22b630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B634u; }
        if (ctx->pc != 0x22B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B634u; }
        if (ctx->pc != 0x22B634u) { return; }
    }
    ctx->pc = 0x22B634u;
    // 0x22b634: 0x8e841208  lw          $a0, 0x1208($s4)
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4616)));
    // 0x22b638: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22b63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b640: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22b640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b644: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x22b644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22b648: 0xc06085e  jal         func_182178
    ctx->pc = 0x22B648u;
    SET_GPR_U32(ctx, 31, 0x22B650u);
    ctx->pc = 0x22B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B648u;
            // 0x22b64c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B650u; }
        if (ctx->pc != 0x22B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B650u; }
        if (ctx->pc != 0x22B650u) { return; }
    }
    ctx->pc = 0x22B650u;
    // 0x22b650: 0x2a42004a  slti        $v0, $s2, 0x4A
    ctx->pc = 0x22b650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22b654: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22B654u;
    {
        const bool branch_taken_0x22b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B654u;
            // 0x22b658: 0x27b00150  addiu       $s0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b654) {
            ctx->pc = 0x22B610u;
            runtime->cooperativeGuestYield();
            goto label_22b610;
        }
    }
    ctx->pc = 0x22B65Cu;
    // 0x22b65c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x22B65Cu;
    SET_GPR_U32(ctx, 31, 0x22B664u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B664u; }
        if (ctx->pc != 0x22B664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B664u; }
        if (ctx->pc != 0x22B664u) { return; }
    }
    ctx->pc = 0x22B664u;
    // 0x22b664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b668: 0xc08ad1e  jal         func_22B478
    ctx->pc = 0x22B668u;
    SET_GPR_U32(ctx, 31, 0x22B670u);
    ctx->pc = 0x22B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B668u;
            // 0x22b66c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B478u;
    if (runtime->hasFunction(0x22B478u)) {
        auto targetFn = runtime->lookupFunction(0x22B478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B670u; }
        if (ctx->pc != 0x22B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B478_0x22b478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B670u; }
        if (ctx->pc != 0x22B670u) { return; }
    }
    ctx->pc = 0x22B670u;
    // 0x22b670: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x22b670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x22b674: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x22b674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x22b678: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x22b678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x22b67c: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x22b67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x22b680: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x22b680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x22b684: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x22b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x22b688: 0x3e00008  jr          $ra
    ctx->pc = 0x22B688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B688u;
            // 0x22b68c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B610u: goto label_22b610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B690u;
}

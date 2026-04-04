#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F41F8
// Address: 0x1f41f8 - 0x1f4308
void sub_001F41F8_0x1f41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F41F8_0x1f41f8");
#endif

    ctx->pc = 0x1f41f8u;

    // 0x1f41f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f41fc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f4200: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1f4200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1f4204: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f4204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f4208: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f420c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f4210: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1F4210u;
    SET_GPR_U32(ctx, 31, 0x1F4218u);
    ctx->pc = 0x1F4214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4210u;
            // 0x1f4214: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4218u; }
        if (ctx->pc != 0x1F4218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4218u; }
        if (ctx->pc != 0x1F4218u) { return; }
    }
    ctx->pc = 0x1F4218u;
    // 0x1f4218: 0xc07d068  jal         func_1F41A0
    ctx->pc = 0x1F4218u;
    SET_GPR_U32(ctx, 31, 0x1F4220u);
    ctx->pc = 0x1F421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4218u;
            // 0x1f421c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F41A0u;
    if (runtime->hasFunction(0x1F41A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F41A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4220u; }
        if (ctx->pc != 0x1F4220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f41a0_0x1f41f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4220u; }
        if (ctx->pc != 0x1F4220u) { return; }
    }
    ctx->pc = 0x1F4220u;
    // 0x1f4220: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F4220u;
    SET_GPR_U32(ctx, 31, 0x1F4228u);
    ctx->pc = 0x1F4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4220u;
            // 0x1f4224: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4228u; }
        if (ctx->pc != 0x1F4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4228u; }
        if (ctx->pc != 0x1F4228u) { return; }
    }
    ctx->pc = 0x1F4228u;
    // 0x1f4228: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F4228u;
    SET_GPR_U32(ctx, 31, 0x1F4230u);
    ctx->pc = 0x1F422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4228u;
            // 0x1f422c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4230u; }
        if (ctx->pc != 0x1F4230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4230u; }
        if (ctx->pc != 0x1F4230u) { return; }
    }
    ctx->pc = 0x1F4230u;
    // 0x1f4230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4234: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4238: 0x24a57350  addiu       $a1, $a1, 0x7350
    ctx->pc = 0x1f4238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29520));
    // 0x1f423c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1F423Cu;
    SET_GPR_U32(ctx, 31, 0x1F4244u);
    ctx->pc = 0x1F4240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F423Cu;
            // 0x1f4240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4244u; }
        if (ctx->pc != 0x1F4244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4244u; }
        if (ctx->pc != 0x1F4244u) { return; }
    }
    ctx->pc = 0x1F4244u;
    // 0x1f4244: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f4248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f424c: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x1f424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
    // 0x1f4250: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1F4250u;
    SET_GPR_U32(ctx, 31, 0x1F4258u);
    ctx->pc = 0x1F4254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4250u;
            // 0x1f4254: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4258u; }
        if (ctx->pc != 0x1F4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4258u; }
        if (ctx->pc != 0x1F4258u) { return; }
    }
    ctx->pc = 0x1F4258u;
    // 0x1f4258: 0x3c050df5  lui         $a1, 0xDF5
    ctx->pc = 0x1f4258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3573 << 16));
    // 0x1f425c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f425cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4260: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1f4260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f4264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4268: 0xae30627c  sw          $s0, 0x627C($s1)
    ctx->pc = 0x1f4268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25212), GPR_U32(ctx, 16));
    // 0x1f426c: 0xc060812  jal         func_182048
    ctx->pc = 0x1F426Cu;
    SET_GPR_U32(ctx, 31, 0x1F4274u);
    ctx->pc = 0x1F4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F426Cu;
            // 0x1f4270: 0x34a59c86  ori         $a1, $a1, 0x9C86 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40070);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182048u;
    if (runtime->hasFunction(0x182048u)) {
        auto targetFn = runtime->lookupFunction(0x182048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4274u; }
        if (ctx->pc != 0x1F4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182048_0x182048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4274u; }
        if (ctx->pc != 0x1F4274u) { return; }
    }
    ctx->pc = 0x1F4274u;
    // 0x1f4274: 0x8e24627c  lw          $a0, 0x627C($s1)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25212)));
    // 0x1f4278: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1f4278u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1f427c: 0x3c057ccb  lui         $a1, 0x7CCB
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31947 << 16));
    // 0x1f4280: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4284: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1f4284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1f4288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f428c: 0x25086280  addiu       $t0, $t0, 0x6280
    ctx->pc = 0x1f428cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25216));
    // 0x1f4290: 0xc06074a  jal         func_181D28
    ctx->pc = 0x1F4290u;
    SET_GPR_U32(ctx, 31, 0x1F4298u);
    ctx->pc = 0x1F4294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4290u;
            // 0x1f4294: 0x34a568f4  ori         $a1, $a1, 0x68F4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26868);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4298u; }
        if (ctx->pc != 0x1F4298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4298u; }
        if (ctx->pc != 0x1F4298u) { return; }
    }
    ctx->pc = 0x1F4298u;
    // 0x1f4298: 0x8e24627c  lw          $a0, 0x627C($s1)
    ctx->pc = 0x1f4298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25212)));
    // 0x1f429c: 0x3c054036  lui         $a1, 0x4036
    ctx->pc = 0x1f429cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16438 << 16));
    // 0x1f42a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f42a8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F42A8u;
    SET_GPR_U32(ctx, 31, 0x1F42B0u);
    ctx->pc = 0x1F42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42A8u;
            // 0x1f42ac: 0x34a5c7ee  ori         $a1, $a1, 0xC7EE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51182);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42B0u; }
        if (ctx->pc != 0x1F42B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42B0u; }
        if (ctx->pc != 0x1F42B0u) { return; }
    }
    ctx->pc = 0x1F42B0u;
    // 0x1f42b0: 0x8e24627c  lw          $a0, 0x627C($s1)
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25212)));
    // 0x1f42b4: 0x3c054036  lui         $a1, 0x4036
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16438 << 16));
    // 0x1f42b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f42b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42bc: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1f42c0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F42C0u;
    SET_GPR_U32(ctx, 31, 0x1F42C8u);
    ctx->pc = 0x1F42C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42C0u;
            // 0x1f42c4: 0x34a5c7ef  ori         $a1, $a1, 0xC7EF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51183);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42C8u; }
        if (ctx->pc != 0x1F42C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42C8u; }
        if (ctx->pc != 0x1F42C8u) { return; }
    }
    ctx->pc = 0x1F42C8u;
    // 0x1f42c8: 0x8e24627c  lw          $a0, 0x627C($s1)
    ctx->pc = 0x1f42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 25212)));
    // 0x1f42cc: 0x3c05fd2c  lui         $a1, 0xFD2C
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64812 << 16));
    // 0x1f42d0: 0x34a5643e  ori         $a1, $a1, 0x643E
    ctx->pc = 0x1f42d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25662);
    // 0x1f42d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42d8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1F42D8u;
    SET_GPR_U32(ctx, 31, 0x1F42E0u);
    ctx->pc = 0x1F42DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42D8u;
            // 0x1f42dc: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E0u; }
        if (ctx->pc != 0x1F42E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E0u; }
        if (ctx->pc != 0x1F42E0u) { return; }
    }
    ctx->pc = 0x1F42E0u;
    // 0x1f42e0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1F42E0u;
    SET_GPR_U32(ctx, 31, 0x1F42E8u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E8u; }
        if (ctx->pc != 0x1F42E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42E8u; }
        if (ctx->pc != 0x1F42E8u) { return; }
    }
    ctx->pc = 0x1F42E8u;
    // 0x1f42e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f42e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42ec: 0xc0912fa  jal         func_244BE8
    ctx->pc = 0x1F42ECu;
    SET_GPR_U32(ctx, 31, 0x1F42F4u);
    ctx->pc = 0x1F42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42ECu;
            // 0x1f42f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244BE8u;
    if (runtime->hasFunction(0x244BE8u)) {
        auto targetFn = runtime->lookupFunction(0x244BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42F4u; }
        if (ctx->pc != 0x1F42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244BE8_0x244be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42F4u; }
        if (ctx->pc != 0x1F42F4u) { return; }
    }
    ctx->pc = 0x1F42F4u;
    // 0x1f42f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f42f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f42f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f42f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f42fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f42fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4300: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4300u;
            // 0x1f4304: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4308u;
}

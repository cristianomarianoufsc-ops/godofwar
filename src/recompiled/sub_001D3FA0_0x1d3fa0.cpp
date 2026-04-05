#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3FA0
// Address: 0x1d3fa0 - 0x1d40a8
void sub_001D3FA0_0x1d3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3FA0_0x1d3fa0");
#endif

    ctx->pc = 0x1d3fa0u;

    // 0x1d3fa0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d3fa4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d3fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d3fa8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d3fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d3fac: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1d3facu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d3fb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d3fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d3fb4: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x1d3fb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d3fb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d3fbc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d3fc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fc4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d3fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d3fc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d3fc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fcc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1d3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1d3fd0: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1d3fd4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1d3fd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d3fd8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d3fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3fe0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d3fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3fe4: 0xaea02880  sw          $zero, 0x2880($s5)
    ctx->pc = 0x1d3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10368), GPR_U32(ctx, 0));
    // 0x1d3fe8: 0x26b22880  addiu       $s2, $s5, 0x2880
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 10368));
    // 0x1d3fec: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d3ff0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d3ff4: 0xc074f8a  jal         func_1D3E28
    ctx->pc = 0x1D3FF4u;
    SET_GPR_U32(ctx, 31, 0x1D3FFCu);
    ctx->pc = 0x1D3FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FF4u;
            // 0x1d3ff8: 0x9444002c  lhu         $a0, 0x2C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E28u;
    if (runtime->hasFunction(0x1D3E28u)) {
        auto targetFn = runtime->lookupFunction(0x1D3E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FFCu; }
        if (ctx->pc != 0x1D3FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3E28_0x1d3e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FFCu; }
        if (ctx->pc != 0x1D3FFCu) { return; }
    }
    ctx->pc = 0x1D3FFCu;
    // 0x1d3ffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4004: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d4004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4008: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d4008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d400c: 0xc074d74  jal         func_1D35D0
    ctx->pc = 0x1D400Cu;
    SET_GPR_U32(ctx, 31, 0x1D4014u);
    ctx->pc = 0x1D4010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D400Cu;
            // 0x1d4010: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D35D0u;
    if (runtime->hasFunction(0x1D35D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D35D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4014u; }
        if (ctx->pc != 0x1D4014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D35D0_0x1d35d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4014u; }
        if (ctx->pc != 0x1D4014u) { return; }
    }
    ctx->pc = 0x1D4014u;
    // 0x1d4014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4014u;
    {
        const bool branch_taken_0x1d4014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4014u;
            // 0x1d4018: 0x8ea22880  lw          $v0, 0x2880($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4014) {
            ctx->pc = 0x1D405Cu;
            goto label_1d405c;
        }
    }
    ctx->pc = 0x1D401Cu;
    // 0x1d401c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D401Cu;
    {
        const bool branch_taken_0x1d401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D401Cu;
            // 0x1d4020: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d401c) {
            ctx->pc = 0x1D405Cu;
            goto label_1d405c;
        }
    }
    ctx->pc = 0x1D4024u;
    // 0x1d4024: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1d4028:
    // 0x1d4028: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1d402c: 0x8c422884  lw          $v0, 0x2884($v0)
    ctx->pc = 0x1d402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10372)));
    // 0x1d4030: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d4034: 0x8ea32880  lw          $v1, 0x2880($s5)
    ctx->pc = 0x1d4034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10368)));
    // 0x1d4038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d403c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1d403cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4040: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1d4040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d4044: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1d4044u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4048: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4048u;
            // 0x1d404c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D405Cu;
            goto label_1d405c;
        }
    }
    ctx->pc = 0x1D4050u;
    // 0x1d4050: 0x2e82000a  sltiu       $v0, $s4, 0xA
    ctx->pc = 0x1d4050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d4054: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D4054u;
    {
        const bool branch_taken_0x1d4054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4054u;
            // 0x1d4058: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4054) {
            ctx->pc = 0x1D4028u;
            runtime->cooperativeGuestYield();
            goto label_1d4028;
        }
    }
    ctx->pc = 0x1D405Cu;
label_1d405c:
    // 0x1d405c: 0x2e82000a  sltiu       $v0, $s4, 0xA
    ctx->pc = 0x1d405cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d4060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4060u;
    {
        const bool branch_taken_0x1d4060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4060u;
            // 0x1d4064: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4060) {
            ctx->pc = 0x1D4074u;
            goto label_1d4074;
        }
    }
    ctx->pc = 0x1D4068u;
    // 0x1d4068: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d4068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d406c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d4070: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1d4070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d4074:
    // 0x1d4074: 0xc074fb6  jal         func_1D3ED8
    ctx->pc = 0x1D4074u;
    SET_GPR_U32(ctx, 31, 0x1D407Cu);
    ctx->pc = 0x1D3ED8u;
    if (runtime->hasFunction(0x1D3ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1D3ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D407Cu; }
        if (ctx->pc != 0x1D407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d3ed8_0x1d3ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D407Cu; }
        if (ctx->pc != 0x1D407Cu) { return; }
    }
    ctx->pc = 0x1D407Cu;
    // 0x1d407c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d407cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4080: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d4080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4084: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d4084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4088: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d4088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d408c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d408cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4090: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d4090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4094: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1d4094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d409c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1d409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d40a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D40A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40A0u;
            // 0x1d40a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4028u: goto label_1d4028;
            case 0x1D405Cu: goto label_1d405c;
            case 0x1D4074u: goto label_1d4074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D40A8u;
}

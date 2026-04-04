#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C28D0
// Address: 0x1c28d0 - 0x1c2ad8
void sub_001C28D0_0x1c28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28D0_0x1c28d0");
#endif

    ctx->pc = 0x1c28d0u;

    // 0x1c28d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c28d4: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1c28d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c28d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c28dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c28dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c28e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c28e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c28e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c28ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f0: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x1c28f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x1c28f4: 0x700794a9  por         $s2, $zero, $a3
    ctx->pc = 0x1c28f4u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1c28f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c28fc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c2900: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2904: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c2908: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1c290c: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c290cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c2910: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x1c2910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x1c2914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2914u;
    {
        const bool branch_taken_0x1c2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2914u;
            // 0x1c2918: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2914) {
            ctx->pc = 0x1C2930u;
            goto label_1c2930;
        }
    }
    ctx->pc = 0x1C291Cu;
    // 0x1c291c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2920: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C2920u;
    SET_GPR_U32(ctx, 31, 0x1C2928u);
    ctx->pc = 0x1C2924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2920u;
            // 0x1c2924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2928u; }
        if (ctx->pc != 0x1C2928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2928u; }
        if (ctx->pc != 0x1C2928u) { return; }
    }
    ctx->pc = 0x1C2928u;
    // 0x1c2928: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1C2928u;
    {
        const bool branch_taken_0x1c2928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2928) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C2930u;
label_1c2930:
    // 0x1c2930: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x1c2930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1c2934: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2934u;
    {
        const bool branch_taken_0x1c2934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2934u;
            // 0x1c2938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2934) {
            ctx->pc = 0x1C295Cu;
            goto label_1c295c;
        }
    }
    ctx->pc = 0x1C293Cu;
    // 0x1c293c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2940: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x1c2940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x1c2944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2948: 0x49380a  movz        $a3, $v0, $t1
    ctx->pc = 0x1c2948u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1c294c: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C294Cu;
    SET_GPR_U32(ctx, 31, 0x1C2954u);
    ctx->pc = 0x1C2950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C294Cu;
            // 0x1c2950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2954u; }
        if (ctx->pc != 0x1C2954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2954u; }
        if (ctx->pc != 0x1C2954u) { return; }
    }
    ctx->pc = 0x1C2954u;
    // 0x1c2954: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C2954u;
    {
        const bool branch_taken_0x1c2954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2954) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C295Cu;
label_1c295c:
    // 0x1c295c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c2960: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c2960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c2964: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2964u;
    {
        const bool branch_taken_0x1c2964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2964u;
            // 0x1c2968: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2964) {
            ctx->pc = 0x1C29CCu;
            goto label_1c29cc;
        }
    }
    ctx->pc = 0x1C296Cu;
    // 0x1c296c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2970: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C2970u;
    SET_GPR_U32(ctx, 31, 0x1C2978u);
    ctx->pc = 0x1C2974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2970u;
            // 0x1c2974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2978u; }
        if (ctx->pc != 0x1C2978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2978u; }
        if (ctx->pc != 0x1C2978u) { return; }
    }
    ctx->pc = 0x1C2978u;
    // 0x1c2978: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c297c: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1c2980: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x1c2980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1c2984: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c2988: 0xc0631ea  jal         func_18C7A8
    ctx->pc = 0x1C2988u;
    SET_GPR_U32(ctx, 31, 0x1C2990u);
    ctx->pc = 0x1C298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2988u;
            // 0x1c298c: 0x24c6008c  addiu       $a2, $a2, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C7A8u;
    if (runtime->hasFunction(0x18C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x18C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2990u; }
        if (ctx->pc != 0x1C2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7A8_0x18c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2990u; }
        if (ctx->pc != 0x1C2990u) { return; }
    }
    ctx->pc = 0x1C2990u;
    // 0x1c2990: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c2994: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c2998: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1c299c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c29a0: 0xc0631ea  jal         func_18C7A8
    ctx->pc = 0x1C29A0u;
    SET_GPR_U32(ctx, 31, 0x1C29A8u);
    ctx->pc = 0x1C29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29A0u;
            // 0x1c29a4: 0x24c600a4  addiu       $a2, $a2, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C7A8u;
    if (runtime->hasFunction(0x18C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x18C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A8u; }
        if (ctx->pc != 0x1C29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7A8_0x18c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A8u; }
        if (ctx->pc != 0x1C29A8u) { return; }
    }
    ctx->pc = 0x1C29A8u;
    // 0x1c29a8: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c29ac: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1c29b0: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1c29b4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c29b8: 0xc0631ea  jal         func_18C7A8
    ctx->pc = 0x1C29B8u;
    SET_GPR_U32(ctx, 31, 0x1C29C0u);
    ctx->pc = 0x1C29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29B8u;
            // 0x1c29bc: 0x24c600bc  addiu       $a2, $a2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C7A8u;
    if (runtime->hasFunction(0x18C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x18C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29C0u; }
        if (ctx->pc != 0x1C29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7A8_0x18c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29C0u; }
        if (ctx->pc != 0x1C29C0u) { return; }
    }
    ctx->pc = 0x1C29C0u;
    // 0x1c29c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c29c4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C29C4u;
    {
        const bool branch_taken_0x1c29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29C4u;
            // 0x1c29c8: 0xac40cd2c  sw          $zero, -0x32D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29c4) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C29CCu;
label_1c29cc:
    // 0x1c29cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c29d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c29d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C29D4u;
    {
        const bool branch_taken_0x1c29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29D4u;
            // 0x1c29d8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d4) {
            ctx->pc = 0x1C2A30u;
            goto label_1c2a30;
        }
    }
    ctx->pc = 0x1C29DCu;
    // 0x1c29dc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c29e0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c29e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c29e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c29e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c29ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c29ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29f0: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C29F0u;
    SET_GPR_U32(ctx, 31, 0x1C29F8u);
    ctx->pc = 0x1C29F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29F0u;
            // 0x1c29f4: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29F8u; }
        if (ctx->pc != 0x1C29F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29F8u; }
        if (ctx->pc != 0x1C29F8u) { return; }
    }
    ctx->pc = 0x1C29F8u;
    // 0x1c29f8: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c29fc: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1c2a00: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x1c2a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1c2a04: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1c2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c2a08: 0xc0631ea  jal         func_18C7A8
    ctx->pc = 0x1C2A08u;
    SET_GPR_U32(ctx, 31, 0x1C2A10u);
    ctx->pc = 0x1C2A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A08u;
            // 0x1c2a0c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C7A8u;
    if (runtime->hasFunction(0x18C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x18C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A10u; }
        if (ctx->pc != 0x1C2A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7A8_0x18c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A10u; }
        if (ctx->pc != 0x1C2A10u) { return; }
    }
    ctx->pc = 0x1C2A10u;
    // 0x1c2a10: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1c2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1c2a14: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x1c2a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c2a18: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1c2a1c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c2a20: 0xc0631ea  jal         func_18C7A8
    ctx->pc = 0x1C2A20u;
    SET_GPR_U32(ctx, 31, 0x1C2A28u);
    ctx->pc = 0x1C2A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A20u;
            // 0x1c2a24: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C7A8u;
    if (runtime->hasFunction(0x18C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x18C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A28u; }
        if (ctx->pc != 0x1C2A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C7A8_0x18c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A28u; }
        if (ctx->pc != 0x1C2A28u) { return; }
    }
    ctx->pc = 0x1C2A28u;
    // 0x1c2a28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2A28u;
    {
        const bool branch_taken_0x1c2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a28) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C2A30u;
label_1c2a30:
    // 0x1c2a30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c2a34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c2a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c2a38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2A38u;
    {
        const bool branch_taken_0x1c2a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A38u;
            // 0x1c2a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a38) {
            ctx->pc = 0x1C2A54u;
            goto label_1c2a54;
        }
    }
    ctx->pc = 0x1C2A40u;
    // 0x1c2a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a44: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C2A44u;
    SET_GPR_U32(ctx, 31, 0x1C2A4Cu);
    ctx->pc = 0x1C2A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A44u;
            // 0x1c2a48: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A4Cu; }
        if (ctx->pc != 0x1C2A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A4Cu; }
        if (ctx->pc != 0x1C2A4Cu) { return; }
    }
    ctx->pc = 0x1C2A4Cu;
    // 0x1c2a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2A4Cu;
    {
        const bool branch_taken_0x1c2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a4c) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C2A54u;
label_1c2a54:
    // 0x1c2a54: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c2a58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c2a5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2A5Cu;
    {
        const bool branch_taken_0x1c2a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A5Cu;
            // 0x1c2a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a5c) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C2A64u;
    // 0x1c2a64: 0xc07830e  jal         func_1E0C38
    ctx->pc = 0x1C2A64u;
    SET_GPR_U32(ctx, 31, 0x1C2A6Cu);
    ctx->pc = 0x1C2A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A64u;
            // 0x1c2a68: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C38u;
    if (runtime->hasFunction(0x1E0C38u)) {
        auto targetFn = runtime->lookupFunction(0x1E0C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A6Cu; }
        if (ctx->pc != 0x1C2A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0C38_0x1e0c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A6Cu; }
        if (ctx->pc != 0x1C2A6Cu) { return; }
    }
    ctx->pc = 0x1C2A6Cu;
    // 0x1c2a6c: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1c2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
label_1c2a70:
    // 0x1c2a70: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c2a74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c2a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c2a78: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c2a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2a7c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1c2a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2a80: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c2a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c2a84: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2a88: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c2a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2a8c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c2a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2a90: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c2a90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c2a94: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c2a94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c2a98: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c2a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2a9c: 0x4a0002ff  vnop
    ctx->pc = 0x1c2a9cu;
    // NOP operation, no action needed for VU0
    // 0x1c2aa0: 0x4a0002ff  vnop
    ctx->pc = 0x1c2aa0u;
    // NOP operation, no action needed for VU0
    // 0x1c2aa4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c2aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2aa8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1c2aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2aac: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x1c2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x1c2ab0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c2ab4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c2ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2abc: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x1c2ac0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c2ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2ac4: 0x7c520010  sq          $s2, 0x10($v0)
    ctx->pc = 0x1c2ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 18));
    // 0x1c2ac8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c2ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ACCu;
            // 0x1c2ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2930u: goto label_1c2930;
            case 0x1C295Cu: goto label_1c295c;
            case 0x1C29CCu: goto label_1c29cc;
            case 0x1C2A30u: goto label_1c2a30;
            case 0x1C2A54u: goto label_1c2a54;
            case 0x1C2A70u: goto label_1c2a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2AD4u;
    // 0x1c2ad4: 0x0  nop
    ctx->pc = 0x1c2ad4u;
    // NOP
}

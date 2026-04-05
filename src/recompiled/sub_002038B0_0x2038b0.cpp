#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002038B0
// Address: 0x2038b0 - 0x2039a8
void sub_002038B0_0x2038b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002038B0_0x2038b0");
#endif

    ctx->pc = 0x2038b0u;

    // 0x2038b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2038b4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2038b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2038b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2038bc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2038bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2038c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2038c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2038c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2038c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2038cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2038ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2038d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2038d4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2038d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038d8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2038d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2038dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2038DCu;
    {
        const bool branch_taken_0x2038dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038DCu;
            // 0x2038e0: 0x700a94a9  por         $s2, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038dc) {
            ctx->pc = 0x2038F4u;
            goto label_2038f4;
        }
    }
    ctx->pc = 0x2038E4u;
    // 0x2038e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2038e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038e8: 0x8226001d  lb          $a2, 0x1D($s1)
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x2038ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2038ECu;
    {
        const bool branch_taken_0x2038ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038ECu;
            // 0x2038f0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038ec) {
            ctx->pc = 0x203914u;
            goto label_203914;
        }
    }
    ctx->pc = 0x2038F4u;
label_2038f4:
    // 0x2038f4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2038f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2038f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2038F8u;
    {
        const bool branch_taken_0x2038f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038F8u;
            // 0x2038fc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038f8) {
            ctx->pc = 0x20390Cu;
            goto label_20390c;
        }
    }
    ctx->pc = 0x203900u;
    // 0x203900: 0x8226001c  lb          $a2, 0x1C($s1)
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x203904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203904u;
    {
        const bool branch_taken_0x203904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203904u;
            // 0x203908: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203904) {
            ctx->pc = 0x203914u;
            goto label_203914;
        }
    }
    ctx->pc = 0x20390Cu;
label_20390c:
    // 0x20390c: 0x8226001c  lb          $a2, 0x1C($s1)
    ctx->pc = 0x20390cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x203910: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x203910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_203914:
    // 0x203914: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x203914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203918: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x203918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203920: 0xc082146  jal         func_208518
    ctx->pc = 0x203920u;
    SET_GPR_U32(ctx, 31, 0x203928u);
    ctx->pc = 0x203924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203920u;
            // 0x203924: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203928u; }
        if (ctx->pc != 0x203928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203928u; }
        if (ctx->pc != 0x203928u) { return; }
    }
    ctx->pc = 0x203928u;
    // 0x203928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20392c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20392Cu;
    {
        const bool branch_taken_0x20392c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x203930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20392Cu;
            // 0x203930: 0x260301c0  addiu       $v1, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20392c) {
            ctx->pc = 0x203954u;
            goto label_203954;
        }
    }
    ctx->pc = 0x203934u;
    // 0x203934: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x203934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x203938: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20393c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203940: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x203940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x203944: 0xc082218  jal         func_208860
    ctx->pc = 0x203944u;
    SET_GPR_U32(ctx, 31, 0x20394Cu);
    ctx->pc = 0x203948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203944u;
            // 0x203948: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20394Cu; }
        if (ctx->pc != 0x20394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20394Cu; }
        if (ctx->pc != 0x20394Cu) { return; }
    }
    ctx->pc = 0x20394Cu;
    // 0x20394c: 0xc08117a  jal         func_2045E8
    ctx->pc = 0x20394Cu;
    SET_GPR_U32(ctx, 31, 0x203954u);
    ctx->pc = 0x203950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20394Cu;
            // 0x203950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2045E8u;
    if (runtime->hasFunction(0x2045E8u)) {
        auto targetFn = runtime->lookupFunction(0x2045E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203954u; }
        if (ctx->pc != 0x203954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002045E8_0x2045e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203954u; }
        if (ctx->pc != 0x203954u) { return; }
    }
    ctx->pc = 0x203954u;
label_203954:
    // 0x203954: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x203958: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x20395c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x20395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x203960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203960u;
    {
        const bool branch_taken_0x203960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203960u;
            // 0x203964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203960) {
            ctx->pc = 0x20397Cu;
            goto label_20397c;
        }
    }
    ctx->pc = 0x203968u;
    // 0x203968: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x203968u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x20396c: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x20396Cu;
    SET_GPR_U32(ctx, 31, 0x203974u);
    ctx->pc = 0x203970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20396Cu;
            // 0x203970: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203974u; }
        if (ctx->pc != 0x203974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203974u; }
        if (ctx->pc != 0x203974u) { return; }
    }
    ctx->pc = 0x203974u;
    // 0x203974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x203974u;
    {
        const bool branch_taken_0x203974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203974u;
            // 0x203978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203974) {
            ctx->pc = 0x203994u;
            goto label_203994;
        }
    }
    ctx->pc = 0x20397Cu;
label_20397c:
    // 0x20397c: 0x3062004c  andi        $v0, $v1, 0x4C
    ctx->pc = 0x20397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)76);
    // 0x203980: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203980u;
    {
        const bool branch_taken_0x203980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203980u;
            // 0x203984: 0x70122ca9  por         $a1, $zero, $s2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203980) {
            ctx->pc = 0x203990u;
            goto label_203990;
        }
    }
    ctx->pc = 0x203988u;
    // 0x203988: 0xc080b8e  jal         func_202E38
    ctx->pc = 0x203988u;
    SET_GPR_U32(ctx, 31, 0x203990u);
    ctx->pc = 0x20398Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203988u;
            // 0x20398c: 0x26260006  addiu       $a2, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202E38u;
    if (runtime->hasFunction(0x202E38u)) {
        auto targetFn = runtime->lookupFunction(0x202E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203990u; }
        if (ctx->pc != 0x203990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202E38_0x202e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203990u; }
        if (ctx->pc != 0x203990u) { return; }
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x203990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203994:
    // 0x203994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x203994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203998: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x203998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20399c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2039a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2039A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039A0u;
            // 0x2039a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2038F4u: goto label_2038f4;
            case 0x20390Cu: goto label_20390c;
            case 0x203914u: goto label_203914;
            case 0x203954u: goto label_203954;
            case 0x20397Cu: goto label_20397c;
            case 0x203990u: goto label_203990;
            case 0x203994u: goto label_203994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2039A8u;
}

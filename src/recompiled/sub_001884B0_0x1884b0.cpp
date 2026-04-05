#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001884B0
// Address: 0x1884b0 - 0x188610
void sub_001884B0_0x1884b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001884B0_0x1884b0");
#endif

    ctx->pc = 0x1884b0u;

    // 0x1884b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1884b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1884b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1884b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1884b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1884b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1884bc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1884bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1884c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1884c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1884c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884c8: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1884ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1884d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1884d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1884d4: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1884d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1884d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1884dc: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x1884dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1884e0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1884e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1884e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1884e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1884ec: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1884ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1884f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1884f4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1884f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1884fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1884FCu;
    {
        const bool branch_taken_0x1884fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884FCu;
            // 0x188500: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884fc) {
            ctx->pc = 0x188520u;
            goto label_188520;
        }
    }
    ctx->pc = 0x188504u;
    // 0x188504: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188508: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x188508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x18850c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18850Cu;
    {
        const bool branch_taken_0x18850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18850c) {
            ctx->pc = 0x188510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18850Cu;
            // 0x188510: 0x2439023  subu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188520u;
            goto label_188520;
        }
    }
    ctx->pc = 0x188514u;
    // 0x188514: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x188518: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x188518u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18851c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18851cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188520:
    // 0x188520: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x188520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x188524: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x188524u;
    {
        const bool branch_taken_0x188524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188524u;
            // 0x188528: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188524) {
            ctx->pc = 0x188568u;
            goto label_188568;
        }
    }
    ctx->pc = 0x18852Cu;
    // 0x18852c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188530: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x188530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x188534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188538: 0xc062184  jal         func_188610
    ctx->pc = 0x188538u;
    SET_GPR_U32(ctx, 31, 0x188540u);
    ctx->pc = 0x18853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188538u;
            // 0x18853c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188540u; }
        if (ctx->pc != 0x188540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188540u; }
        if (ctx->pc != 0x188540u) { return; }
    }
    ctx->pc = 0x188540u;
    // 0x188540: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x188540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188544: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x188548: 0x2113023  subu        $a2, $s0, $s1
    ctx->pc = 0x188548u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x18854c: 0xc062184  jal         func_188610
    ctx->pc = 0x18854Cu;
    SET_GPR_U32(ctx, 31, 0x188554u);
    ctx->pc = 0x188550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18854Cu;
            // 0x188550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188554u; }
        if (ctx->pc != 0x188554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188554u; }
        if (ctx->pc != 0x188554u) { return; }
    }
    ctx->pc = 0x188554u;
    // 0x188554: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x188558: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x188558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18855c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x18855cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x188560: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188560u;
    {
        const bool branch_taken_0x188560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188560u;
            // 0x188564: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188560) {
            ctx->pc = 0x1885A8u;
            goto label_1885a8;
        }
    }
    ctx->pc = 0x188568u;
label_188568:
    // 0x188568: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x188568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x18856c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18856Cu;
    {
        const bool branch_taken_0x18856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18856Cu;
            // 0x188570: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18856c) {
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x188574u;
    // 0x188574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18857c: 0xc062184  jal         func_188610
    ctx->pc = 0x18857Cu;
    SET_GPR_U32(ctx, 31, 0x188584u);
    ctx->pc = 0x188580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18857Cu;
            // 0x188580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    }
    ctx->pc = 0x188584u;
    // 0x188584: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x188584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188588: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x188588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x18858c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18858cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188590: 0xc062184  jal         func_188610
    ctx->pc = 0x188590u;
    SET_GPR_U32(ctx, 31, 0x188598u);
    ctx->pc = 0x188594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188590u;
            // 0x188594: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188598u; }
        if (ctx->pc != 0x188598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188598u; }
        if (ctx->pc != 0x188598u) { return; }
    }
    ctx->pc = 0x188598u;
    // 0x188598: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x18859c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885a0: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x1885a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1885a4: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x1885a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1885a8:
    // 0x1885a8: 0xc062184  jal         func_188610
    ctx->pc = 0x1885A8u;
    SET_GPR_U32(ctx, 31, 0x1885B0u);
    ctx->pc = 0x1885ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A8u;
            // 0x1885ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885B0u; }
        if (ctx->pc != 0x1885B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885B0u; }
        if (ctx->pc != 0x1885B0u) { return; }
    }
    ctx->pc = 0x1885B0u;
    // 0x1885b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1885B0u;
    {
        const bool branch_taken_0x1885b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885B0u;
            // 0x1885b4: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885b0) {
            ctx->pc = 0x1885E0u;
            goto label_1885e0;
        }
    }
    ctx->pc = 0x1885B8u;
label_1885b8:
    // 0x1885b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1885b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1885bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885c0: 0xc062184  jal         func_188610
    ctx->pc = 0x1885C0u;
    SET_GPR_U32(ctx, 31, 0x1885C8u);
    ctx->pc = 0x1885C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885C0u;
            // 0x1885c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    }
    ctx->pc = 0x1885C8u;
    // 0x1885c8: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x1885c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1885cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1885ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1885d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885d4: 0xc062184  jal         func_188610
    ctx->pc = 0x1885D4u;
    SET_GPR_U32(ctx, 31, 0x1885DCu);
    ctx->pc = 0x1885D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885D4u;
            // 0x1885d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188610u;
    if (runtime->hasFunction(0x188610u)) {
        auto targetFn = runtime->lookupFunction(0x188610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885DCu; }
        if (ctx->pc != 0x1885DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188610_0x188610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885DCu; }
        if (ctx->pc != 0x1885DCu) { return; }
    }
    ctx->pc = 0x1885DCu;
    // 0x1885dc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1885dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1885e0:
    // 0x1885e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1885e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1885e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1885e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1885e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1885e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1885ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1885ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1885f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1885f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1885f4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1885f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1885f8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1885f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1885fc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1885fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188604: 0x3e00008  jr          $ra
    ctx->pc = 0x188604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188604u;
            // 0x188608: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188520u: goto label_188520;
            case 0x188568u: goto label_188568;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885E0u: goto label_1885e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18860Cu;
    // 0x18860c: 0x0  nop
    ctx->pc = 0x18860cu;
    // NOP
}

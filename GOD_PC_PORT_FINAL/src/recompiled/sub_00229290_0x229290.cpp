#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229290
// Address: 0x229290 - 0x229408
void sub_00229290_0x229290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229290_0x229290");
#endif

    ctx->pc = 0x229290u;

    // 0x229290: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x229294: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x229294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x229298: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x229298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x22929c: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x22929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x2292a0: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x2292a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x2292a4: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x2292a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x2292a8: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x2292a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x2292ac: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x2292b0: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x2292b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x2292b4: 0xc04f856  jal         func_13E158
    ctx->pc = 0x2292B4u;
    SET_GPR_U32(ctx, 31, 0x2292BCu);
    ctx->pc = 0x2292B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292B4u;
            // 0x2292b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292BCu; }
        if (ctx->pc != 0x2292BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292BCu; }
        if (ctx->pc != 0x2292BCu) { return; }
    }
    ctx->pc = 0x2292BCu;
    // 0x2292bc: 0xc08a452  jal         func_229148
    ctx->pc = 0x2292BCu;
    SET_GPR_U32(ctx, 31, 0x2292C4u);
    ctx->pc = 0x2292C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292BCu;
            // 0x2292c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229148u;
    if (runtime->hasFunction(0x229148u)) {
        auto targetFn = runtime->lookupFunction(0x229148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292C4u; }
        if (ctx->pc != 0x2292C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229148_0x229148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292C4u; }
        if (ctx->pc != 0x2292C4u) { return; }
    }
    ctx->pc = 0x2292C4u;
    // 0x2292c4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2292c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292c8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2292C8u;
    SET_GPR_U32(ctx, 31, 0x2292D0u);
    ctx->pc = 0x2292CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292C8u;
            // 0x2292cc: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292D0u; }
        if (ctx->pc != 0x2292D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292D0u; }
        if (ctx->pc != 0x2292D0u) { return; }
    }
    ctx->pc = 0x2292D0u;
    // 0x2292d0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2292D0u;
    SET_GPR_U32(ctx, 31, 0x2292D8u);
    ctx->pc = 0x2292D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292D0u;
            // 0x2292d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292D8u; }
        if (ctx->pc != 0x2292D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292D8u; }
        if (ctx->pc != 0x2292D8u) { return; }
    }
    ctx->pc = 0x2292D8u;
    // 0x2292d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2292d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292dc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2292e0: 0x24a58190  addiu       $a1, $a1, -0x7E70
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
    // 0x2292e4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x2292E4u;
    SET_GPR_U32(ctx, 31, 0x2292ECu);
    ctx->pc = 0x2292E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292E4u;
            // 0x2292e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292ECu; }
        if (ctx->pc != 0x2292ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292ECu; }
        if (ctx->pc != 0x2292ECu) { return; }
    }
    ctx->pc = 0x2292ECu;
    // 0x2292ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2292f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2292f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292f4: 0x24429150  addiu       $v0, $v0, -0x6EB0
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
    // 0x2292f8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x2292F8u;
    SET_GPR_U32(ctx, 31, 0x229300u);
    ctx->pc = 0x2292FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2292F8u;
            // 0x2292fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229300u; }
        if (ctx->pc != 0x229300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229300u; }
        if (ctx->pc != 0x229300u) { return; }
    }
    ctx->pc = 0x229300u;
    // 0x229300: 0xae506eb0  sw          $s0, 0x6EB0($s2)
    ctx->pc = 0x229300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28336), GPR_U32(ctx, 16));
    // 0x229304: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_229308:
    // 0x229308: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x229308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22930c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22930cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229310: 0x24a581a0  addiu       $a1, $a1, -0x7E60
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934944));
    // 0x229314: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x229314u;
    SET_GPR_U32(ctx, 31, 0x22931Cu);
    ctx->pc = 0x229318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229314u;
            // 0x229318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22931Cu; }
        if (ctx->pc != 0x22931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22931Cu; }
        if (ctx->pc != 0x22931Cu) { return; }
    }
    ctx->pc = 0x22931Cu;
    // 0x22931c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229320: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x229320u;
    SET_GPR_U32(ctx, 31, 0x229328u);
    ctx->pc = 0x229324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229320u;
            // 0x229324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229328u; }
        if (ctx->pc != 0x229328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229328u; }
        if (ctx->pc != 0x229328u) { return; }
    }
    ctx->pc = 0x229328u;
    // 0x229328: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22932c: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x229330: 0x2671818  mult        $v1, $s3, $a3
    ctx->pc = 0x229330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x229334: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229338: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22933c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x22933cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x229340: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x229340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x229344: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x229344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x229348: 0xc06081c  jal         func_182070
    ctx->pc = 0x229348u;
    SET_GPR_U32(ctx, 31, 0x229350u);
    ctx->pc = 0x22934Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229348u;
            // 0x22934c: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229350u; }
        if (ctx->pc != 0x229350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229350u; }
        if (ctx->pc != 0x229350u) { return; }
    }
    ctx->pc = 0x229350u;
    // 0x229350: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x229350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x229354: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229354u;
            // 0x229358: 0x27b00220  addiu       $s0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x229308u;
            runtime->cooperativeGuestYield();
            goto label_229308;
        }
    }
    ctx->pc = 0x22935Cu;
    // 0x22935c: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x229360: 0x3c05eed1  lui         $a1, 0xEED1
    ctx->pc = 0x229360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61137 << 16));
    // 0x229364: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x229368: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22936c: 0x262701f8  addiu       $a3, $s1, 0x1F8
    ctx->pc = 0x22936cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 504));
    // 0x229370: 0xc06081c  jal         func_182070
    ctx->pc = 0x229370u;
    SET_GPR_U32(ctx, 31, 0x229378u);
    ctx->pc = 0x229374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229370u;
            // 0x229374: 0x34a5c7e6  ori         $a1, $a1, 0xC7E6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51174);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229378u; }
        if (ctx->pc != 0x229378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229378u; }
        if (ctx->pc != 0x229378u) { return; }
    }
    ctx->pc = 0x229378u;
    // 0x229378: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x229378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x22937c: 0x3c056daa  lui         $a1, 0x6DAA
    ctx->pc = 0x22937cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28074 << 16));
    // 0x229380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229384: 0x26270210  addiu       $a3, $s1, 0x210
    ctx->pc = 0x229384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x229388: 0xc060570  jal         func_1815C0
    ctx->pc = 0x229388u;
    SET_GPR_U32(ctx, 31, 0x229390u);
    ctx->pc = 0x22938Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229388u;
            // 0x22938c: 0x34a57b63  ori         $a1, $a1, 0x7B63 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31587);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229390u; }
        if (ctx->pc != 0x229390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229390u; }
        if (ctx->pc != 0x229390u) { return; }
    }
    ctx->pc = 0x229390u;
    // 0x229390: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x229390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x229394: 0x3c05edf3  lui         $a1, 0xEDF3
    ctx->pc = 0x229394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60915 << 16));
    // 0x229398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22939c: 0x26270214  addiu       $a3, $s1, 0x214
    ctx->pc = 0x22939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
    // 0x2293a0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2293A0u;
    SET_GPR_U32(ctx, 31, 0x2293A8u);
    ctx->pc = 0x2293A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293A0u;
            // 0x2293a4: 0x34a5ac51  ori         $a1, $a1, 0xAC51 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44113);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293A8u; }
        if (ctx->pc != 0x2293A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293A8u; }
        if (ctx->pc != 0x2293A8u) { return; }
    }
    ctx->pc = 0x2293A8u;
    // 0x2293a8: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x2293a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x2293ac: 0x3c058a3d  lui         $a1, 0x8A3D
    ctx->pc = 0x2293acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35389 << 16));
    // 0x2293b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293b4: 0x26270218  addiu       $a3, $s1, 0x218
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 536));
    // 0x2293b8: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x2293B8u;
    SET_GPR_U32(ctx, 31, 0x2293C0u);
    ctx->pc = 0x2293BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293B8u;
            // 0x2293bc: 0x34a573e8  ori         $a1, $a1, 0x73E8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29672);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (runtime->hasFunction(0x1816C8u)) {
        auto targetFn = runtime->lookupFunction(0x1816C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293C0u; }
        if (ctx->pc != 0x2293C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001816C8_0x1816c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293C0u; }
        if (ctx->pc != 0x2293C0u) { return; }
    }
    ctx->pc = 0x2293C0u;
    // 0x2293c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2293c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293c4: 0x8e446eb0  lw          $a0, 0x6EB0($s2)
    ctx->pc = 0x2293c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28336)));
    // 0x2293c8: 0x3c050d91  lui         $a1, 0xD91
    ctx->pc = 0x2293c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3473 << 16));
    // 0x2293cc: 0x24c7021c  addiu       $a3, $a2, 0x21C
    ctx->pc = 0x2293ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 540));
    // 0x2293d0: 0xc0605b2  jal         func_1816C8
    ctx->pc = 0x2293D0u;
    SET_GPR_U32(ctx, 31, 0x2293D8u);
    ctx->pc = 0x2293D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293D0u;
            // 0x2293d4: 0x34a536d6  ori         $a1, $a1, 0x36D6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14038);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816C8u;
    if (runtime->hasFunction(0x1816C8u)) {
        auto targetFn = runtime->lookupFunction(0x1816C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293D8u; }
        if (ctx->pc != 0x2293D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001816C8_0x1816c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293D8u; }
        if (ctx->pc != 0x2293D8u) { return; }
    }
    ctx->pc = 0x2293D8u;
    // 0x2293d8: 0xc04f860  jal         func_13E180
    ctx->pc = 0x2293D8u;
    SET_GPR_U32(ctx, 31, 0x2293E0u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293E0u; }
        if (ctx->pc != 0x2293E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293E0u; }
        if (ctx->pc != 0x2293E0u) { return; }
    }
    ctx->pc = 0x2293E0u;
    // 0x2293e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2293e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293e4: 0xc09114c  jal         func_244530
    ctx->pc = 0x2293E4u;
    SET_GPR_U32(ctx, 31, 0x2293ECu);
    ctx->pc = 0x2293E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2293E4u;
            // 0x2293e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244530u;
    if (runtime->hasFunction(0x244530u)) {
        auto targetFn = runtime->lookupFunction(0x244530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293ECu; }
        if (ctx->pc != 0x2293ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244530_0x244530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2293ECu; }
        if (ctx->pc != 0x2293ECu) { return; }
    }
    ctx->pc = 0x2293ECu;
    // 0x2293ec: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x2293ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2293f0: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x2293f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2293f4: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x2293f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2293f8: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x2293f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2293fc: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x2293fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x229400: 0x3e00008  jr          $ra
    ctx->pc = 0x229400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229400u;
            // 0x229404: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229308u: goto label_229308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229408u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002282D0
// Address: 0x2282d0 - 0x228388
void sub_002282D0_0x2282d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002282D0_0x2282d0");
#endif

    ctx->pc = 0x2282d0u;

    // 0x2282d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2282d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2282d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2282d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2282dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2282e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2282e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282e4: 0x8c4411c8  lw          $a0, 0x11C8($v0)
    ctx->pc = 0x2282e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4552)));
    // 0x2282e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2282e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2282ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2282ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2282f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2282f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2282f4: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x2282F4u;
    SET_GPR_U32(ctx, 31, 0x2282FCu);
    ctx->pc = 0x2282F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2282F4u;
            // 0x2282f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282FCu; }
        if (ctx->pc != 0x2282FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282FCu; }
        if (ctx->pc != 0x2282FCu) { return; }
    }
    ctx->pc = 0x2282FCu;
    // 0x2282fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2282fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228300: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228304: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x228304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x228308: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x228308u;
    {
        const bool branch_taken_0x228308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228308u;
            // 0x22830c: 0x2442024c  addiu       $v0, $v0, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228308) {
            ctx->pc = 0x228338u;
            goto label_228338;
        }
    }
    ctx->pc = 0x228310u;
    // 0x228310: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x228310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x228314: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x228314u;
    {
        const bool branch_taken_0x228314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x228318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228314u;
            // 0x228318: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228314) {
            ctx->pc = 0x228338u;
            goto label_228338;
        }
    }
    ctx->pc = 0x22831Cu;
    // 0x22831c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x22831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x228320: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x228320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x228324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x228328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22832c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22832cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228330: 0xc09b260  jal         func_26C980
    ctx->pc = 0x228330u;
    SET_GPR_U32(ctx, 31, 0x228338u);
    ctx->pc = 0x228334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228330u;
            // 0x228334: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228338u; }
        if (ctx->pc != 0x228338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228338u; }
        if (ctx->pc != 0x228338u) { return; }
    }
    ctx->pc = 0x228338u;
label_228338:
    // 0x228338: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22833c: 0x8c4211c0  lw          $v0, 0x11C0($v0)
    ctx->pc = 0x22833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4544)));
    // 0x228340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228340u;
    {
        const bool branch_taken_0x228340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228340u;
            // 0x228344: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228340) {
            ctx->pc = 0x228374u;
            goto label_228374;
        }
    }
    ctx->pc = 0x228348u;
    // 0x228348: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x228348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22834c: 0x8e0411b8  lw          $a0, 0x11B8($s0)
    ctx->pc = 0x22834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
    // 0x228350: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x228354: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x228358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22835c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228360: 0xc05ec9c  jal         func_17B270
    ctx->pc = 0x228360u;
    SET_GPR_U32(ctx, 31, 0x228368u);
    ctx->pc = 0x228364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228360u;
            // 0x228364: 0xe44011bc  swc1        $f0, 0x11BC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4540), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B270u;
    if (runtime->hasFunction(0x17B270u)) {
        auto targetFn = runtime->lookupFunction(0x17B270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228368u; }
        if (ctx->pc != 0x228368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b270_0x17b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228368u; }
        if (ctx->pc != 0x228368u) { return; }
    }
    ctx->pc = 0x228368u;
    // 0x228368: 0x8e0411b8  lw          $a0, 0x11B8($s0)
    ctx->pc = 0x228368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4536)));
    // 0x22836c: 0xc05ec92  jal         func_17B248
    ctx->pc = 0x22836Cu;
    SET_GPR_U32(ctx, 31, 0x228374u);
    ctx->pc = 0x228370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22836Cu;
            // 0x228370: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B248u;
    if (runtime->hasFunction(0x17B248u)) {
        auto targetFn = runtime->lookupFunction(0x17B248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228374u; }
        if (ctx->pc != 0x228374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17b248_0x17b270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228374u; }
        if (ctx->pc != 0x228374u) { return; }
    }
    ctx->pc = 0x228374u;
label_228374:
    // 0x228374: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22837c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228380: 0x3e00008  jr          $ra
    ctx->pc = 0x228380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228380u;
            // 0x228384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228338u: goto label_228338;
            case 0x228374u: goto label_228374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228388u;
}

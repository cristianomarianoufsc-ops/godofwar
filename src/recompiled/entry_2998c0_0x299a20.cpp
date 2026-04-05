#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2998c0
// Address: 0x2998c0 - 0x299a20
void entry_2998c0_0x299a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2998c0_0x299a20");
#endif

    ctx->pc = 0x2998c0u;

    // 0x2998c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2998c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2998c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2998c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2998c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2998c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2998cc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x2998ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x2998d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2998d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2998d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2998d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2998d8: 0x26515af8  addiu       $s1, $s2, 0x5AF8
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 23288));
    // 0x2998dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2998dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2998e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2998e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2998e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2998e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2998e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2998E8u;
    {
        const bool branch_taken_0x2998e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2998ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998E8u;
            // 0x2998ec: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998e8) {
            ctx->pc = 0x2998FCu;
            goto label_2998fc;
        }
    }
    ctx->pc = 0x2998F0u;
    // 0x2998f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2998f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2998f4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2998F4u;
    {
        const bool branch_taken_0x2998f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998F4u;
            // 0x2998f8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998f4) {
            ctx->pc = 0x2999F4u;
            goto label_2999f4;
        }
    }
    ctx->pc = 0x2998FCu;
label_2998fc:
    // 0x2998fc: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x2998fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x299900: 0xfe405af8  sd          $zero, 0x5AF8($s2)
    ctx->pc = 0x299900u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 23288), GPR_U64(ctx, 0));
    // 0x299904: 0x2670afc0  addiu       $s0, $s3, -0x5040
    ctx->pc = 0x299904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946752));
    // 0x299908: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x299908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x29990c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299914: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x299914u;
    SET_GPR_U32(ctx, 31, 0x29991Cu);
    ctx->pc = 0x299918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299914u;
            // 0x299918: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29991Cu; }
        if (ctx->pc != 0x29991Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29991Cu; }
        if (ctx->pc != 0x29991Cu) { return; }
    }
    ctx->pc = 0x29991Cu;
    // 0x29991c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x29991cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x299920: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x299924: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x299928: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x29992c: 0x0  nop
    ctx->pc = 0x29992cu;
    // NOP
label_299930:
    // 0x299930: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x299930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x299934: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x299938: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x299938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x29993c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x29993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x299940: 0x0  nop
    ctx->pc = 0x299940u;
    // NOP
    // 0x299944: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299944u;
    {
        const bool branch_taken_0x299944 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x299944) {
            ctx->pc = 0x299930u;
            runtime->cooperativeGuestYield();
            goto label_299930;
        }
    }
    ctx->pc = 0x29994Cu;
    // 0x29994c: 0x2662afc0  addiu       $v0, $s3, -0x5040
    ctx->pc = 0x29994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946752));
    // 0x299950: 0xc0a68fe  jal         func_29A3F8
    ctx->pc = 0x299950u;
    SET_GPR_U32(ctx, 31, 0x299958u);
    ctx->pc = 0x299954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299950u;
            // 0x299954: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A3F8u;
    if (runtime->hasFunction(0x29A3F8u)) {
        auto targetFn = runtime->lookupFunction(0x29A3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299958u; }
        if (ctx->pc != 0x299958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a3f8_0x29a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299958u; }
        if (ctx->pc != 0x299958u) { return; }
    }
    ctx->pc = 0x299958u;
    // 0x299958: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29995c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x299960: 0x24a59d08  addiu       $a1, $a1, -0x62F8
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941960));
    // 0x299964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299968: 0xc0a4e44  jal         func_293910
    ctx->pc = 0x299968u;
    SET_GPR_U32(ctx, 31, 0x299970u);
    ctx->pc = 0x29996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299968u;
            // 0x29996c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293910u;
    if (runtime->hasFunction(0x293910u)) {
        auto targetFn = runtime->lookupFunction(0x293910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299970u; }
        if (ctx->pc != 0x299970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293910_0x293920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299970u; }
        if (ctx->pc != 0x299970u) { return; }
    }
    ctx->pc = 0x299970u;
    // 0x299970: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299974: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299974u;
    {
        const bool branch_taken_0x299974 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x299974) {
            ctx->pc = 0x299978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299974u;
            // 0x299978: 0x26425af8  addiu       $v0, $s2, 0x5AF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 23288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299988u;
            goto label_299988;
        }
    }
    ctx->pc = 0x29997Cu;
    // 0x29997c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x299980: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x299980u;
    {
        const bool branch_taken_0x299980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299980u;
            // 0x299984: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299980) {
            ctx->pc = 0x2999F4u;
            goto label_2999f4;
        }
    }
    ctx->pc = 0x299988u;
label_299988:
    // 0x299988: 0xc0a648c  jal         func_299230
    ctx->pc = 0x299988u;
    SET_GPR_U32(ctx, 31, 0x299990u);
    ctx->pc = 0x29998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299988u;
            // 0x29998c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299990u; }
        if (ctx->pc != 0x299990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299990u; }
        if (ctx->pc != 0x299990u) { return; }
    }
    ctx->pc = 0x299990u;
    // 0x299990: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x299990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x299994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x299994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299998: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x299998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x29999c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2999a0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2999a4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2999a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2999a8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x2999a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2999ac: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x2999acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x2999b0: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x2999b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x2999b4: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x2999b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x2999b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2999B8u;
    {
        const bool branch_taken_0x2999b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2999B8u;
            // 0x2999bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999b8) {
            ctx->pc = 0x2999D0u;
            goto label_2999d0;
        }
    }
    ctx->pc = 0x2999C0u;
    // 0x2999c0: 0xc0a6624  jal         func_299890
    ctx->pc = 0x2999C0u;
    SET_GPR_U32(ctx, 31, 0x2999C8u);
    ctx->pc = 0x2999C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2999C0u;
            // 0x2999c4: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299890u;
    if (runtime->hasFunction(0x299890u)) {
        auto targetFn = runtime->lookupFunction(0x299890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999C8u; }
        if (ctx->pc != 0x2999C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299890_0x2998a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999C8u; }
        if (ctx->pc != 0x2999C8u) { return; }
    }
    ctx->pc = 0x2999C8u;
    // 0x2999c8: 0xc0a662c  jal         func_2998B0
    ctx->pc = 0x2999C8u;
    SET_GPR_U32(ctx, 31, 0x2999D0u);
    ctx->pc = 0x2999CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2999C8u;
            // 0x2999cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998B0u;
    if (runtime->hasFunction(0x2998B0u)) {
        auto targetFn = runtime->lookupFunction(0x2998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999D0u; }
        if (ctx->pc != 0x2999D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998b0_0x2998c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999D0u; }
        if (ctx->pc != 0x2999D0u) { return; }
    }
    ctx->pc = 0x2999D0u;
label_2999d0:
    // 0x2999d0: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x2999D0u;
    SET_GPR_U32(ctx, 31, 0x2999D8u);
    ctx->pc = 0x2999D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2999D0u;
            // 0x2999d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (runtime->hasFunction(0x2998A0u)) {
        auto targetFn = runtime->lookupFunction(0x2998A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999D8u; }
        if (ctx->pc != 0x2999D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998a0_0x2998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999D8u; }
        if (ctx->pc != 0x2999D8u) { return; }
    }
    ctx->pc = 0x2999D8u;
    // 0x2999d8: 0xc0a51a4  jal         func_294690
    ctx->pc = 0x2999D8u;
    SET_GPR_U32(ctx, 31, 0x2999E0u);
    ctx->pc = 0x2999DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2999D8u;
            // 0x2999dc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294690u;
    if (runtime->hasFunction(0x294690u)) {
        auto targetFn = runtime->lookupFunction(0x294690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999E0u; }
        if (ctx->pc != 0x2999E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294690_0x294690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999E0u; }
        if (ctx->pc != 0x2999E0u) { return; }
    }
    ctx->pc = 0x2999E0u;
    // 0x2999e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2999E0u;
    {
        const bool branch_taken_0x2999e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2999E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2999E0u;
            // 0x2999e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999e0) {
            ctx->pc = 0x2999F4u;
            goto label_2999f4;
        }
    }
    ctx->pc = 0x2999E8u;
    // 0x2999e8: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x2999E8u;
    SET_GPR_U32(ctx, 31, 0x2999F0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999F0u; }
        if (ctx->pc != 0x2999F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2999F0u; }
        if (ctx->pc != 0x2999F0u) { return; }
    }
    ctx->pc = 0x2999F0u;
    // 0x2999f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2999f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2999f4:
    // 0x2999f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2999f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2999f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2999f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2999fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2999fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299a00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299a04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x299A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A0Cu;
            // 0x299a10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2998FCu: goto label_2998fc;
            case 0x299930u: goto label_299930;
            case 0x299988u: goto label_299988;
            case 0x2999D0u: goto label_2999d0;
            case 0x2999F4u: goto label_2999f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299A14u;
    // 0x299a14: 0x0  nop
    ctx->pc = 0x299a14u;
    // NOP
    // 0x299a18: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x299a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x299a1c: 0x0  nop
    ctx->pc = 0x299a1cu;
    // NOP
}

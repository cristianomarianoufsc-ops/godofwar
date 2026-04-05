#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175148
// Address: 0x175148 - 0x175258
void sub_00175148_0x175148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175148_0x175148");
#endif

    ctx->pc = 0x175148u;

    // 0x175148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17514c: 0x53827  nor         $a3, $zero, $a1
    ctx->pc = 0x17514cu;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x175150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175154: 0xa4380b  movn        $a3, $a1, $a0
    ctx->pc = 0x175154u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x175158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17515c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17515cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175164: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_175168:
    // 0x175168: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x175168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17516c: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x17516cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x175170: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x175170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x175174: 0x244249b0  addiu       $v0, $v0, 0x49B0
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18864));
    // 0x175178: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x175178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
    // 0x17517c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x17517cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x175180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x175180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175184: 0x1064804  sllv        $t1, $a2, $t0
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x175188: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x175188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17518c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175190: 0xe91024  and         $v0, $a3, $t1
    ctx->pc = 0x175190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x175194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x175194u;
    {
        const bool branch_taken_0x175194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175194u;
            // 0x175198: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175194) {
            ctx->pc = 0x1751BCu;
            goto label_1751bc;
        }
    }
    ctx->pc = 0x17519Cu;
    // 0x17519c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1751a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1751A0u;
    {
        const bool branch_taken_0x1751a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751A0u;
            // 0x1751a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751a0) {
            ctx->pc = 0x1751B0u;
            goto label_1751b0;
        }
    }
    ctx->pc = 0x1751A8u;
    // 0x1751a8: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1751A8u;
    {
        const bool branch_taken_0x1751a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1751a8) {
            ctx->pc = 0x1751ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1751A8u;
            // 0x1751ac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x1751B0u;
label_1751b0:
    // 0x1751b0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1751b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1751b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1751B4u;
    {
        const bool branch_taken_0x1751b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751B4u;
            // 0x1751b8: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751b4) {
            ctx->pc = 0x1751FCu;
            goto label_1751fc;
        }
    }
    ctx->pc = 0x1751BCu;
label_1751bc:
    // 0x1751bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1751bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1751c0: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1751C0u;
    {
        const bool branch_taken_0x1751c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1751C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751C0u;
            // 0x1751c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751c0) {
            ctx->pc = 0x1751F4u;
            goto label_1751f4;
        }
    }
    ctx->pc = 0x1751C8u;
    // 0x1751c8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1751C8u;
    {
        const bool branch_taken_0x1751c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1751c8) {
            ctx->pc = 0x1751CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1751C8u;
            // 0x1751cc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x1751D0u;
    // 0x1751d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1751d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1751d4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1751D4u;
    {
        const bool branch_taken_0x1751d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1751d4) {
            ctx->pc = 0x1751D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1751D4u;
            // 0x1751d8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x1751DCu;
    // 0x1751dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1751dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1751e0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1751e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1751e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1751e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1751e8: 0x2098025  or          $s0, $s0, $t1
    ctx->pc = 0x1751e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 9));
    // 0x1751ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1751ECu;
    {
        const bool branch_taken_0x1751ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751ECu;
            // 0x1751f0: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751ec) {
            ctx->pc = 0x1751FCu;
            goto label_1751fc;
        }
    }
    ctx->pc = 0x1751F4u;
label_1751f4:
    // 0x1751f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1751f8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1751f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1751fc:
    // 0x1751fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1751fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_175200:
    // 0x175200: 0x2902000f  slti        $v0, $t0, 0xF
    ctx->pc = 0x175200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x175204: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x175204u;
    {
        const bool branch_taken_0x175204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175204u;
            // 0x175208: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175204) {
            ctx->pc = 0x175168u;
            runtime->cooperativeGuestYield();
            goto label_175168;
        }
    }
    ctx->pc = 0x17520Cu;
    // 0x17520c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x17520Cu;
    {
        const bool branch_taken_0x17520c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17520Cu;
            // 0x175210: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17520c) {
            ctx->pc = 0x175248u;
            goto label_175248;
        }
    }
    ctx->pc = 0x175214u;
    // 0x175214: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x175218: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x175218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17521c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x175220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175228: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17522c: 0xc09b260  jal         func_26C980
    ctx->pc = 0x17522Cu;
    SET_GPR_U32(ctx, 31, 0x175234u);
    ctx->pc = 0x175230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17522Cu;
            // 0x175230: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175234u; }
        if (ctx->pc != 0x175234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175234u; }
        if (ctx->pc != 0x175234u) { return; }
    }
    ctx->pc = 0x175234u;
    // 0x175234: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x175238: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x175238u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x17523c: 0x8c82c4b0  lw          $v0, -0x3B50($a0)
    ctx->pc = 0x17523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952112)));
    // 0x175240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x175240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x175244: 0xac82c4b0  sw          $v0, -0x3B50($a0)
    ctx->pc = 0x175244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952112), GPR_U32(ctx, 2));
label_175248:
    // 0x175248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17524c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17524cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175250: 0x3e00008  jr          $ra
    ctx->pc = 0x175250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175250u;
            // 0x175254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175168u: goto label_175168;
            case 0x1751B0u: goto label_1751b0;
            case 0x1751BCu: goto label_1751bc;
            case 0x1751F4u: goto label_1751f4;
            case 0x1751FCu: goto label_1751fc;
            case 0x175200u: goto label_175200;
            case 0x175248u: goto label_175248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175258u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144138
// Address: 0x144138 - 0x144278
void sub_00144138_0x144138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144138_0x144138");
#endif

    ctx->pc = 0x144138u;

    // 0x144138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14413c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x144140: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x144140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x144144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144148: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x144148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14414c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14414cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144150: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x144150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x144154: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x144154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144158: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x144158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14415c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x144164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144168: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144168u;
    {
        const bool branch_taken_0x144168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144168u;
            // 0x14416c: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144168) {
            ctx->pc = 0x1441ACu;
            goto label_1441ac;
        }
    }
    ctx->pc = 0x144170u;
    // 0x144170: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x144170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x144174: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x144174u;
    SET_GPR_U32(ctx, 31, 0x14417Cu);
    ctx->pc = 0x144178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144174u;
            // 0x144178: 0x8c44c06c  lw          $a0, -0x3F94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951020)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14417Cu; }
        if (ctx->pc != 0x14417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14417Cu; }
        if (ctx->pc != 0x14417Cu) { return; }
    }
    ctx->pc = 0x14417Cu;
    // 0x14417c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14417cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x144180: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x144180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144188: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x144188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14418c: 0x0  nop
    ctx->pc = 0x14418cu;
    // NOP
label_144190:
    // 0x144190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x144190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x144194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144198: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14419c: 0x28620165  slti        $v0, $v1, 0x165
    ctx->pc = 0x14419cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)357) ? 1 : 0);
    // 0x1441a0: 0x0  nop
    ctx->pc = 0x1441a0u;
    // NOP
    // 0x1441a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1441A4u;
    {
        const bool branch_taken_0x1441a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441A4u;
            // 0x1441a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a4) {
            ctx->pc = 0x144190u;
            runtime->cooperativeGuestYield();
            goto label_144190;
        }
    }
    ctx->pc = 0x1441ACu;
label_1441ac:
    // 0x1441ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1441acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441b0: 0xc051010  jal         func_144040
    ctx->pc = 0x1441B0u;
    SET_GPR_U32(ctx, 31, 0x1441B8u);
    ctx->pc = 0x1441B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1441B0u;
            // 0x1441b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144040u;
    if (runtime->hasFunction(0x144040u)) {
        auto targetFn = runtime->lookupFunction(0x144040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441B8u; }
        if (ctx->pc != 0x1441B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144040_0x144088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441B8u; }
        if (ctx->pc != 0x1441B8u) { return; }
    }
    ctx->pc = 0x1441B8u;
    // 0x1441b8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x1441b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1441bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1441c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1441c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1441c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1441c8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1441C8u;
    {
        const bool branch_taken_0x1441c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1441c8) {
            ctx->pc = 0x144210u;
            goto label_144210;
        }
    }
    ctx->pc = 0x1441D0u;
    // 0x1441d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1441d4: 0x0  nop
    ctx->pc = 0x1441d4u;
    // NOP
label_1441d8:
    // 0x1441d8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1441D8u;
    SET_GPR_U32(ctx, 31, 0x1441E0u);
    ctx->pc = 0x1441DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1441D8u;
            // 0x1441dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441E0u; }
        if (ctx->pc != 0x1441E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441E0u; }
        if (ctx->pc != 0x1441E0u) { return; }
    }
    ctx->pc = 0x1441E0u;
    // 0x1441e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1441E0u;
    {
        const bool branch_taken_0x1441e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1441e0) {
            ctx->pc = 0x1441E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1441E0u;
            // 0x1441e4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144208u;
            goto label_144208;
        }
    }
    ctx->pc = 0x1441E8u;
    // 0x1441e8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1441E8u;
    SET_GPR_U32(ctx, 31, 0x1441F0u);
    ctx->pc = 0x1441ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1441E8u;
            // 0x1441ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441F0u; }
        if (ctx->pc != 0x1441F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441F0u; }
        if (ctx->pc != 0x1441F0u) { return; }
    }
    ctx->pc = 0x1441F0u;
    // 0x1441f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1441f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441f4: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x1441F4u;
    SET_GPR_U32(ctx, 31, 0x1441FCu);
    ctx->pc = 0x1441F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1441F4u;
            // 0x1441f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441FCu; }
        if (ctx->pc != 0x1441FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1441FCu; }
        if (ctx->pc != 0x1441FCu) { return; }
    }
    ctx->pc = 0x1441FCu;
    // 0x1441fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1441fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x144200: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x144200u;
    {
        const bool branch_taken_0x144200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144200u;
            // 0x144204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144200) {
            ctx->pc = 0x144254u;
            goto label_144254;
        }
    }
    ctx->pc = 0x144208u;
label_144208:
    // 0x144208: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x144208u;
    {
        const bool branch_taken_0x144208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x144208) {
            ctx->pc = 0x14420Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144208u;
            // 0x14420c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1441D8u;
            runtime->cooperativeGuestYield();
            goto label_1441d8;
        }
    }
    ctx->pc = 0x144210u;
label_144210:
    // 0x144210: 0xc05309e  jal         func_14C278
    ctx->pc = 0x144210u;
    SET_GPR_U32(ctx, 31, 0x144218u);
    ctx->pc = 0x144214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144210u;
            // 0x144214: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144218u; }
        if (ctx->pc != 0x144218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144218u; }
        if (ctx->pc != 0x144218u) { return; }
    }
    ctx->pc = 0x144218u;
    // 0x144218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14421c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144220: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x144220u;
    SET_GPR_U32(ctx, 31, 0x144228u);
    ctx->pc = 0x144224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144220u;
            // 0x144224: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144228u; }
        if (ctx->pc != 0x144228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144228u; }
        if (ctx->pc != 0x144228u) { return; }
    }
    ctx->pc = 0x144228u;
    // 0x144228: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14422c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14422cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144230: 0xc050fa6  jal         func_143E98
    ctx->pc = 0x144230u;
    SET_GPR_U32(ctx, 31, 0x144238u);
    ctx->pc = 0x144234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144230u;
            // 0x144234: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143E98u;
    if (runtime->hasFunction(0x143E98u)) {
        auto targetFn = runtime->lookupFunction(0x143E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144238u; }
        if (ctx->pc != 0x144238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143E98_0x143e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144238u; }
        if (ctx->pc != 0x144238u) { return; }
    }
    ctx->pc = 0x144238u;
    // 0x144238: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14423c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x144240: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x144244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144248: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14424c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x144250: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x144250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_144254:
    // 0x144254: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x144254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144258: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x144258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14425c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14425cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144264: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x144264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144268: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x144268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14426c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144270: 0x3e00008  jr          $ra
    ctx->pc = 0x144270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144270u;
            // 0x144274: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144190u: goto label_144190;
            case 0x1441ACu: goto label_1441ac;
            case 0x1441D8u: goto label_1441d8;
            case 0x144208u: goto label_144208;
            case 0x144210u: goto label_144210;
            case 0x144254u: goto label_144254;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144278u;
}

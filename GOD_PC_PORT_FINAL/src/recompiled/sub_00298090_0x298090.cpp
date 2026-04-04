#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298090
// Address: 0x298090 - 0x298320
void sub_00298090_0x298090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298090_0x298090");
#endif

    ctx->pc = 0x298090u;

    // 0x298090: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x298090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x298094: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x298094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x298098: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x298098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x29809c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29809cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980a0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2980a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2980a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2980a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980a8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2980a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2980ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2980acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980b0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2980b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2980b4: 0x3c1e0033  lui         $fp, 0x33
    ctx->pc = 0x2980b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
    // 0x2980b8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2980b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2980bc: 0x27d19340  addiu       $s1, $fp, -0x6CC0
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939456));
    // 0x2980c0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2980c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2980c4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2980c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2980c8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2980c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2980cc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2980ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2980d0: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x2980d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x2980d4: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x2980d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x2980d8: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x2980d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x2980dc: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x2980dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x2980e0: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x2980e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x2980e4: 0xc0a5f4e  jal         func_297D38
    ctx->pc = 0x2980E4u;
    SET_GPR_U32(ctx, 31, 0x2980ECu);
    ctx->pc = 0x2980E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2980E4u;
            // 0x2980e8: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D38u;
    if (runtime->hasFunction(0x297D38u)) {
        auto targetFn = runtime->lookupFunction(0x297D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2980ECu; }
        if (ctx->pc != 0x2980ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297D38_0x297d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2980ECu; }
        if (ctx->pc != 0x2980ECu) { return; }
    }
    ctx->pc = 0x2980ECu;
    // 0x2980ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2980ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2980f0: 0x8c624b44  lw          $v0, 0x4B44($v1)
    ctx->pc = 0x2980f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19268)));
    // 0x2980f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2980F4u;
    {
        const bool branch_taken_0x2980f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2980f4) {
            ctx->pc = 0x298104u;
            goto label_298104;
        }
    }
    ctx->pc = 0x2980FCu;
    // 0x2980fc: 0xc0a5f70  jal         func_297DC0
    ctx->pc = 0x2980FCu;
    SET_GPR_U32(ctx, 31, 0x298104u);
    ctx->pc = 0x297DC0u;
    if (runtime->hasFunction(0x297DC0u)) {
        auto targetFn = runtime->lookupFunction(0x297DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298104u; }
        if (ctx->pc != 0x298104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297DC0_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298104u; }
        if (ctx->pc != 0x298104u) { return; }
    }
    ctx->pc = 0x298104u;
label_298104:
    // 0x298104: 0xc0a5ff2  jal         func_297FC8
    ctx->pc = 0x298104u;
    SET_GPR_U32(ctx, 31, 0x29810Cu);
    ctx->pc = 0x297FC8u;
    if (runtime->hasFunction(0x297FC8u)) {
        auto targetFn = runtime->lookupFunction(0x297FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29810Cu; }
        if (ctx->pc != 0x29810Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297FC8_0x297fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29810Cu; }
        if (ctx->pc != 0x29810Cu) { return; }
    }
    ctx->pc = 0x29810Cu;
    // 0x29810c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29810Cu;
    {
        const bool branch_taken_0x29810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29810c) {
            ctx->pc = 0x298128u;
            goto label_298128;
        }
    }
    ctx->pc = 0x298114u;
    // 0x298114: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298114u;
    SET_GPR_U32(ctx, 31, 0x29811Cu);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29811Cu; }
        if (ctx->pc != 0x29811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29811Cu; }
        if (ctx->pc != 0x29811Cu) { return; }
    }
    ctx->pc = 0x29811Cu;
    // 0x29811c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x29811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x298120: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x298120u;
    {
        const bool branch_taken_0x298120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298120u;
            // 0x298124: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298120) {
            ctx->pc = 0x2982F0u;
            goto label_2982f0;
        }
    }
    ctx->pc = 0x298128u;
label_298128:
    // 0x298128: 0xc0a5dd0  jal         func_297740
    ctx->pc = 0x298128u;
    SET_GPR_U32(ctx, 31, 0x298130u);
    ctx->pc = 0x297740u;
    if (runtime->hasFunction(0x297740u)) {
        auto targetFn = runtime->lookupFunction(0x297740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298130u; }
        if (ctx->pc != 0x298130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297740_0x2977c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298130u; }
        if (ctx->pc != 0x298130u) { return; }
    }
    ctx->pc = 0x298130u;
    // 0x298130: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x298130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298134: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298134u;
    {
        const bool branch_taken_0x298134 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x298134) {
            ctx->pc = 0x298138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298134u;
            // 0x298138: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29814Cu;
            goto label_29814c;
        }
    }
    ctx->pc = 0x29813Cu;
    // 0x29813c: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x29813Cu;
    SET_GPR_U32(ctx, 31, 0x298144u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298144u; }
        if (ctx->pc != 0x298144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298144u; }
        if (ctx->pc != 0x298144u) { return; }
    }
    ctx->pc = 0x298144u;
    // 0x298144: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x298144u;
    {
        const bool branch_taken_0x298144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298144u;
            // 0x298148: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298144) {
            ctx->pc = 0x2982F0u;
            goto label_2982f0;
        }
    }
    ctx->pc = 0x29814Cu;
label_29814c:
    // 0x29814c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29814cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298150: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x298150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x298154: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x298154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x298158: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x298158u;
    {
        const bool branch_taken_0x298158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298158u;
            // 0x29815c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298158) {
            ctx->pc = 0x2981A4u;
            goto label_2981a4;
        }
    }
    ctx->pc = 0x298160u;
    // 0x298160: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x298160u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x298164: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x298164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x298168: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29816c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x29816cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x298170: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x298170u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x298174: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x298174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_298178:
    // 0x298178: 0x28c20400  slti        $v0, $a2, 0x400
    ctx->pc = 0x298178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x29817c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29817Cu;
    {
        const bool branch_taken_0x29817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29817Cu;
            // 0x298180: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29817c) {
            ctx->pc = 0x2981B8u;
            goto label_2981b8;
        }
    }
    ctx->pc = 0x298184u;
    // 0x298184: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x298184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x298188: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x298188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29818c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x29818cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x298190: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x298190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x298194: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x298194u;
    {
        const bool branch_taken_0x298194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298194) {
            ctx->pc = 0x298198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298194u;
            // 0x298198: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298178u;
            runtime->cooperativeGuestYield();
            goto label_298178;
        }
    }
    ctx->pc = 0x29819Cu;
    // 0x29819c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29819Cu;
    {
        const bool branch_taken_0x29819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29819Cu;
            // 0x2981a0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29819c) {
            ctx->pc = 0x2981BCu;
            goto label_2981bc;
        }
    }
    ctx->pc = 0x2981A4u;
label_2981a4:
    // 0x2981a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x2981a8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2981ac: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2981acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2981b0: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x2981b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x2981b4: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x2981b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_2981b8:
    // 0x2981b8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2981b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2981bc:
    // 0x2981bc: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2981BCu;
    {
        const bool branch_taken_0x2981bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2981bc) {
            ctx->pc = 0x2981C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2981BCu;
            // 0x2981c0: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2981C4u;
            goto label_2981c4;
        }
    }
    ctx->pc = 0x2981C4u;
label_2981c4:
    // 0x2981c4: 0x24e2a840  addiu       $v0, $a3, -0x57C0
    ctx->pc = 0x2981c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944832));
    // 0x2981c8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2981cc: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2981ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2981d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2981d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2981d4: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x2981d4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2981d8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x2981d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x2981dc: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2981dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2981e0: 0x24a56b20  addiu       $a1, $a1, 0x6B20
    ctx->pc = 0x2981e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27424));
    // 0x2981e4: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x2981e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x2981e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2981e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2981ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2981ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2981f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2981f4: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2981f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2981f8: 0x26949f80  addiu       $s4, $s4, -0x6080
    ctx->pc = 0x2981f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942592));
    // 0x2981fc: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x2981fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x298200: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x298200u;
    SET_GPR_U32(ctx, 31, 0x298208u);
    ctx->pc = 0x298204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298200u;
            // 0x298204: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298208u; }
        if (ctx->pc != 0x298208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298208u; }
        if (ctx->pc != 0x298208u) { return; }
    }
    ctx->pc = 0x298208u;
    // 0x298208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29820c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x29820cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x298210: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x298210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298214: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x298214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x298218: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x298218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29821c: 0x26c4aa40  addiu       $a0, $s6, -0x55C0
    ctx->pc = 0x29821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945344));
    // 0x298220: 0x27c79340  addiu       $a3, $fp, -0x6CC0
    ctx->pc = 0x298220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939456));
    // 0x298224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298228: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x298228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29822c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29822cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298230: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x298230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x298234: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x298238: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x298238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29823c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x29823cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298240: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x298240u;
    SET_GPR_U32(ctx, 31, 0x298248u);
    ctx->pc = 0x298244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298240u;
            // 0x298244: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (runtime->hasFunction(0x2977C8u)) {
        auto targetFn = runtime->lookupFunction(0x2977C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298248u; }
        if (ctx->pc != 0x298248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002977C8_0x2977c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298248u; }
        if (ctx->pc != 0x298248u) { return; }
    }
    ctx->pc = 0x298248u;
    // 0x298248: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298248u;
    {
        const bool branch_taken_0x298248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298248u;
            // 0x29824c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298248) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x298250u;
    // 0x298250: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298250u;
    SET_GPR_U32(ctx, 31, 0x298258u);
    ctx->pc = 0x298254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298250u;
            // 0x298254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298258u; }
        if (ctx->pc != 0x298258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298258u; }
        if (ctx->pc != 0x298258u) { return; }
    }
    ctx->pc = 0x298258u;
    // 0x298258: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298258u;
    SET_GPR_U32(ctx, 31, 0x298260u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298260u; }
        if (ctx->pc != 0x298260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298260u; }
        if (ctx->pc != 0x298260u) { return; }
    }
    ctx->pc = 0x298260u;
    // 0x298260: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x298260u;
    {
        const bool branch_taken_0x298260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298260u;
            // 0x298264: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298260) {
            ctx->pc = 0x2982F0u;
            goto label_2982f0;
        }
    }
    ctx->pc = 0x298268u;
label_298268:
    // 0x298268: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x298268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x29826c: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x29826Cu;
    SET_GPR_U32(ctx, 31, 0x298274u);
    ctx->pc = 0x298270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29826Cu;
            // 0x298270: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298274u; }
        if (ctx->pc != 0x298274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298274u; }
        if (ctx->pc != 0x298274u) { return; }
    }
    ctx->pc = 0x298274u;
    // 0x298274: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298274u;
    {
        const bool branch_taken_0x298274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x298274) {
            ctx->pc = 0x29828Cu;
            goto label_29828c;
        }
    }
    ctx->pc = 0x29827Cu;
    // 0x29827c: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x29827Cu;
    SET_GPR_U32(ctx, 31, 0x298284u);
    ctx->pc = 0x298280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29827Cu;
            // 0x298280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298284u; }
        if (ctx->pc != 0x298284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298284u; }
        if (ctx->pc != 0x298284u) { return; }
    }
    ctx->pc = 0x298284u;
    // 0x298284: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x298284u;
    {
        const bool branch_taken_0x298284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298284u;
            // 0x298288: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298284) {
            ctx->pc = 0x2982F0u;
            goto label_2982f0;
        }
    }
    ctx->pc = 0x29828Cu;
label_29828c:
    // 0x29828c: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x29828Cu;
    SET_GPR_U32(ctx, 31, 0x298294u);
    ctx->pc = 0x298290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29828Cu;
            // 0x298290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298294u; }
        if (ctx->pc != 0x298294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298294u; }
        if (ctx->pc != 0x298294u) { return; }
    }
    ctx->pc = 0x298294u;
    // 0x298294: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298294u;
    SET_GPR_U32(ctx, 31, 0x29829Cu);
    ctx->pc = 0x298298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298294u;
            // 0x298298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29829Cu; }
        if (ctx->pc != 0x29829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29829Cu; }
        if (ctx->pc != 0x29829Cu) { return; }
    }
    ctx->pc = 0x29829Cu;
    // 0x29829c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2982a0: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2982A0u;
    {
        const bool branch_taken_0x2982a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2982A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982A0u;
            // 0x2982a4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982a0) {
            ctx->pc = 0x2982C4u;
            goto label_2982c4;
        }
    }
    ctx->pc = 0x2982A8u;
    // 0x2982a8: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x2982A8u;
    SET_GPR_U32(ctx, 31, 0x2982B0u);
    ctx->pc = 0x2982ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982A8u;
            // 0x2982ac: 0x8e044b50  lw          $a0, 0x4B50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982B0u; }
        if (ctx->pc != 0x2982B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982B0u; }
        if (ctx->pc != 0x2982B0u) { return; }
    }
    ctx->pc = 0x2982B0u;
    // 0x2982b0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2982b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2982b4: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x2982B4u;
    SET_GPR_U32(ctx, 31, 0x2982BCu);
    ctx->pc = 0x2982B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982B4u;
            // 0x2982b8: 0x8e044b50  lw          $a0, 0x4B50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982BCu; }
        if (ctx->pc != 0x2982BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982BCu; }
        if (ctx->pc != 0x2982BCu) { return; }
    }
    ctx->pc = 0x2982BCu;
    // 0x2982bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2982BCu;
    {
        const bool branch_taken_0x2982bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982BCu;
            // 0x2982c0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982bc) {
            ctx->pc = 0x2982F0u;
            goto label_2982f0;
        }
    }
    ctx->pc = 0x2982C4u;
label_2982c4:
    // 0x2982c4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2982c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982c8: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x2982C8u;
    SET_GPR_U32(ctx, 31, 0x2982D0u);
    ctx->pc = 0x2982CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982C8u;
            // 0x2982cc: 0x8e044b50  lw          $a0, 0x4B50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982D0u; }
        if (ctx->pc != 0x2982D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982D0u; }
        if (ctx->pc != 0x2982D0u) { return; }
    }
    ctx->pc = 0x2982D0u;
    // 0x2982d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2982d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2982d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2982d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2982d8: 0x8e044b50  lw          $a0, 0x4B50($s0)
    ctx->pc = 0x2982d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19280)));
    // 0x2982dc: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x2982dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x2982e0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2982e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2982e4: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x2982E4u;
    SET_GPR_U32(ctx, 31, 0x2982ECu);
    ctx->pc = 0x2982E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982E4u;
            // 0x2982e8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982ECu; }
        if (ctx->pc != 0x2982ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982ECu; }
        if (ctx->pc != 0x2982ECu) { return; }
    }
    ctx->pc = 0x2982ECu;
    // 0x2982ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2982ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2982f0:
    // 0x2982f0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2982f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2982f4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2982f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2982f8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2982f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2982fc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2982fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298300: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x298300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298304: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x298304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298308: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x298308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29830c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x29830cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298310: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298314: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x298314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298318: 0x3e00008  jr          $ra
    ctx->pc = 0x298318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298318u;
            // 0x29831c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298104u: goto label_298104;
            case 0x298128u: goto label_298128;
            case 0x29814Cu: goto label_29814c;
            case 0x298178u: goto label_298178;
            case 0x2981A4u: goto label_2981a4;
            case 0x2981B8u: goto label_2981b8;
            case 0x2981BCu: goto label_2981bc;
            case 0x2981C4u: goto label_2981c4;
            case 0x298268u: goto label_298268;
            case 0x29828Cu: goto label_29828c;
            case 0x2982C4u: goto label_2982c4;
            case 0x2982F0u: goto label_2982f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298320u;
}

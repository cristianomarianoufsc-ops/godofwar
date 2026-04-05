#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278018
// Address: 0x278018 - 0x278330
void sub_00278018_0x278018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278018_0x278018");
#endif

    ctx->pc = 0x278018u;

    // 0x278018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27801c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x278020: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x278020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x278024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x278024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278028: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x278028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27802c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x278030: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x278030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x278034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x278034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x278038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27803c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x278040: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x278044: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x278044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x278048: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x278048u;
    {
        const bool branch_taken_0x278048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x278048) {
            ctx->pc = 0x27804Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278048u;
            // 0x27804c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x278078u;
            goto label_278078;
        }
    }
    ctx->pc = 0x278050u;
    // 0x278050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x278054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x278058: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x278058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27805c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x27805cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x278060: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x278060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x278064: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x278064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x278068: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x278068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x27806c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x27806cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x278070: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x278070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x278074: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x278074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_278078:
    // 0x278078: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x278078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x27807c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x27807cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x278080: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x278080u;
    {
        const bool branch_taken_0x278080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x278084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278080u;
            // 0x278084: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278080) {
            ctx->pc = 0x2780A4u;
            goto label_2780a4;
        }
    }
    ctx->pc = 0x278088u;
    // 0x278088: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x278088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x27808c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27808Cu;
    {
        const bool branch_taken_0x27808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27808Cu;
            // 0x278090: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27808c) {
            ctx->pc = 0x2780A8u;
            goto label_2780a8;
        }
    }
    ctx->pc = 0x278094u;
    // 0x278094: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x278094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x278098: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x278098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x27809c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27809Cu;
    {
        const bool branch_taken_0x27809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27809Cu;
            // 0x2780a0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27809c) {
            ctx->pc = 0x2780B0u;
            goto label_2780b0;
        }
    }
    ctx->pc = 0x2780A4u;
label_2780a4:
    // 0x2780a4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_2780a8:
    // 0x2780a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2780a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2780ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2780acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2780b0:
    // 0x2780b0: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x2780b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x2780b4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x2780b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2780b8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2780bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2780bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2780c0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x2780c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2780c4: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2780C4u;
    {
        const bool branch_taken_0x2780c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2780C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2780C4u;
            // 0x2780c8: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780c4) {
            ctx->pc = 0x2780D8u;
            goto label_2780d8;
        }
    }
    ctx->pc = 0x2780CCu;
    // 0x2780cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2780ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2780d0: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2780D0u;
    {
        const bool branch_taken_0x2780d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2780D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2780D0u;
            // 0x2780d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780d0) {
            ctx->pc = 0x278308u;
            goto label_278308;
        }
    }
    ctx->pc = 0x2780D8u;
label_2780d8:
    // 0x2780d8: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x2780d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x2780dc: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x2780dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2780e0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x2780e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2780e4: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x2780e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x2780e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2780e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780ec: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x2780ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2780f0: 0xc09c0a0  jal         func_270280
    ctx->pc = 0x2780F0u;
    SET_GPR_U32(ctx, 31, 0x2780F8u);
    ctx->pc = 0x2780F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780F0u;
            // 0x2780f4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270280u;
    if (runtime->hasFunction(0x270280u)) {
        auto targetFn = runtime->lookupFunction(0x270280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780F8u; }
        if (ctx->pc != 0x2780F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270280_0x270290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780F8u; }
        if (ctx->pc != 0x2780F8u) { return; }
    }
    ctx->pc = 0x2780F8u;
    // 0x2780f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2780f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2780fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278100: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x278100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278104: 0xc09c0a4  jal         func_270290
    ctx->pc = 0x278104u;
    SET_GPR_U32(ctx, 31, 0x27810Cu);
    ctx->pc = 0x278108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278104u;
            // 0x278108: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270290u;
    if (runtime->hasFunction(0x270290u)) {
        auto targetFn = runtime->lookupFunction(0x270290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27810Cu; }
        if (ctx->pc != 0x27810Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270290_0x270290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27810Cu; }
        if (ctx->pc != 0x27810Cu) { return; }
    }
    ctx->pc = 0x27810Cu;
    // 0x27810c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x27810cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x278110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x278118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27811c: 0xc09c0a4  jal         func_270290
    ctx->pc = 0x27811Cu;
    SET_GPR_U32(ctx, 31, 0x278124u);
    ctx->pc = 0x278120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27811Cu;
            // 0x278120: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270290u;
    if (runtime->hasFunction(0x270290u)) {
        auto targetFn = runtime->lookupFunction(0x270290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278124u; }
        if (ctx->pc != 0x278124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270290_0x270290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278124u; }
        if (ctx->pc != 0x278124u) { return; }
    }
    ctx->pc = 0x278124u;
    // 0x278124: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x278124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x278128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27812c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27812cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278134: 0xc09c0a4  jal         func_270290
    ctx->pc = 0x278134u;
    SET_GPR_U32(ctx, 31, 0x27813Cu);
    ctx->pc = 0x278138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278134u;
            // 0x278138: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270290u;
    if (runtime->hasFunction(0x270290u)) {
        auto targetFn = runtime->lookupFunction(0x270290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27813Cu; }
        if (ctx->pc != 0x27813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270290_0x270290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27813Cu; }
        if (ctx->pc != 0x27813Cu) { return; }
    }
    ctx->pc = 0x27813Cu;
    // 0x27813c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27813cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278140: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x278140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x278144: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x278144u;
    {
        const bool branch_taken_0x278144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278144u;
            // 0x278148: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278144) {
            ctx->pc = 0x2781D0u;
            goto label_2781d0;
        }
    }
    ctx->pc = 0x27814Cu;
    // 0x27814c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x278150: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x278150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x278154: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x278154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x278158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27815c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x27815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x278160: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x278160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x278164: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x278164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x278168: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x27816c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x27816cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x278170: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x278170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x278174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278178: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x278178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x27817c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x27817cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x278180: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x278180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x278184: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x278184u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x278188: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x278188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x27818c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x27818cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x278190: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x278190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x278194: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x278194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x278198: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x278198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x27819c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x27819cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2781a0: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x2781a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x2781a4: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x2781a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x2781a8: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x2781a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x2781ac: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x2781acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x2781b0: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2781b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2781b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2781b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2781b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2781b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2781bc: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x2781bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x2781c0: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x2781c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x2781c4: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x2781c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x2781c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2781C8u;
    {
        const bool branch_taken_0x2781c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781C8u;
            // 0x2781cc: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781c8) {
            ctx->pc = 0x278238u;
            goto label_278238;
        }
    }
    ctx->pc = 0x2781D0u;
label_2781d0:
    // 0x2781d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2781d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2781d4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2781D4u;
    {
        const bool branch_taken_0x2781d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2781D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781D4u;
            // 0x2781d8: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781d4) {
            ctx->pc = 0x27823Cu;
            goto label_27823c;
        }
    }
    ctx->pc = 0x2781DCu;
    // 0x2781dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2781e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2781e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2781e8: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x2781e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x2781ec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2781ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2781f0: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x2781f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2781f4: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x2781f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x2781f8: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x2781f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x2781fc: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x2781fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x278200: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x278204: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x278204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x278208: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x278208u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x27820c: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x27820cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x278210: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x278210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x278214: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x278214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x278218: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x278218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27821c: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x27821cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x278220: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x278224: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x278228: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x278228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27822c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x27822cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x278230: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x278230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x278234: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x278234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_278238:
    // 0x278238: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x278238u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_27823c:
    // 0x27823c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x27823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x278240: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x278240u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x278244: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x278244u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x278248: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x278248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x27824c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x27824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x278250: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x278250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x278254: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x278254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x278258: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x278258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x27825c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x27825cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x278260: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x278260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x278264: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x278268: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x278268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x27826c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x278270: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x278270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x278274: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x278274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x278278: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x278278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x27827c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x27827cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x278280: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x278280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x278284: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x278288: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x278288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x27828c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x27828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x278290: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x278290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x278294: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x278294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x278298: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x278298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x27829c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x27829cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x2782a0: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x2782a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x2782a4: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x2782a8: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x2782a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x2782ac: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2782acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2782b0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x2782b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x2782b4: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x2782b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x2782b8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x2782b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x2782bc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2782bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2782c0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2782c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2782c4: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x2782c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x2782c8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x2782c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x2782cc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2782ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x2782d0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x2782d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x2782d4: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x2782d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x2782d8: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x2782d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x2782dc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x2782dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x2782e0: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x2782e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x2782e4: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x2782e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x2782e8: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x2782e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x2782ec: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x2782ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x2782f0: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x2782f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x2782f4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2782f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x2782f8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2782f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2782fc: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x2782fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x278300: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x278300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x278304: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x278304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_278308:
    // 0x278308: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x278308u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27830c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27830cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278310: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x278310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278314: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x278314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x278318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27831c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27831cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278324: 0x3e00008  jr          $ra
    ctx->pc = 0x278324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278324u;
            // 0x278328: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278078u: goto label_278078;
            case 0x2780A4u: goto label_2780a4;
            case 0x2780A8u: goto label_2780a8;
            case 0x2780B0u: goto label_2780b0;
            case 0x2780D8u: goto label_2780d8;
            case 0x2781D0u: goto label_2781d0;
            case 0x278238u: goto label_278238;
            case 0x27823Cu: goto label_27823c;
            case 0x278308u: goto label_278308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27832Cu;
    // 0x27832c: 0x0  nop
    ctx->pc = 0x27832cu;
    // NOP
}

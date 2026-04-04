#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001620A0
// Address: 0x1620a0 - 0x162238
void sub_001620A0_0x1620a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001620A0_0x1620a0");
#endif

    ctx->pc = 0x1620a0u;

    // 0x1620a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1620a4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1620a8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1620a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1620ac: 0x248423c0  addiu       $a0, $a0, 0x23C0
    ctx->pc = 0x1620acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9152));
    // 0x1620b0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1620b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1620b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1620b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1620b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1620bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1620bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1620c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1620c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1620c4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1620c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1620c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1620c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1620cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1620ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1620d0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1620D0u;
    SET_GPR_U32(ctx, 31, 0x1620D8u);
    ctx->pc = 0x1620D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620D0u;
            // 0x1620d4: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D8u; }
        if (ctx->pc != 0x1620D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D8u; }
        if (ctx->pc != 0x1620D8u) { return; }
    }
    ctx->pc = 0x1620D8u;
    // 0x1620d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1620d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620dc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1620DCu;
    SET_GPR_U32(ctx, 31, 0x1620E4u);
    ctx->pc = 0x1620E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620DCu;
            // 0x1620e0: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620E4u; }
        if (ctx->pc != 0x1620E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620E4u; }
        if (ctx->pc != 0x1620E4u) { return; }
    }
    ctx->pc = 0x1620E4u;
    // 0x1620e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1620e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620e8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1620ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1620ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1620f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1620f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1620f4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1620F4u;
    SET_GPR_U32(ctx, 31, 0x1620FCu);
    ctx->pc = 0x1620F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620F4u;
            // 0x1620f8: 0x26110014  addiu       $s1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620FCu; }
        if (ctx->pc != 0x1620FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620FCu; }
        if (ctx->pc != 0x1620FCu) { return; }
    }
    ctx->pc = 0x1620FCu;
    // 0x1620fc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1620fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x162100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162104: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x162108: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x162108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x16210c: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
    // 0x162110: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x162110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x162114: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x162114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x162118: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x162118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x16211c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16211Cu;
    SET_GPR_U32(ctx, 31, 0x162124u);
    ctx->pc = 0x162120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16211Cu;
            // 0x162120: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162124u; }
        if (ctx->pc != 0x162124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162124u; }
        if (ctx->pc != 0x162124u) { return; }
    }
    ctx->pc = 0x162124u;
    // 0x162124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162128: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x162128u;
    {
        const bool branch_taken_0x162128 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x162128) {
            ctx->pc = 0x162148u;
            goto label_162148;
        }
    }
    ctx->pc = 0x162130u;
    // 0x162130: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x162130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162134: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162134u;
    {
        const bool branch_taken_0x162134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162134u;
            // 0x162138: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162134) {
            ctx->pc = 0x162140u;
            goto label_162140;
        }
    }
    ctx->pc = 0x16213Cu;
    // 0x16213c: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_162140:
    // 0x162140: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x162140u;
    SET_GPR_U32(ctx, 31, 0x162148u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162148u; }
        if (ctx->pc != 0x162148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162148u; }
        if (ctx->pc != 0x162148u) { return; }
    }
    ctx->pc = 0x162148u;
label_162148:
    // 0x162148: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x162148u;
    SET_GPR_U32(ctx, 31, 0x162150u);
    ctx->pc = 0x16214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162148u;
            // 0x16214c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162150u; }
        if (ctx->pc != 0x162150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162150u; }
        if (ctx->pc != 0x162150u) { return; }
    }
    ctx->pc = 0x162150u;
    // 0x162150: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162150u;
    {
        const bool branch_taken_0x162150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x162154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162150u;
            // 0x162154: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162150) {
            ctx->pc = 0x162160u;
            goto label_162160;
        }
    }
    ctx->pc = 0x162158u;
    // 0x162158: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x162158u;
    SET_GPR_U32(ctx, 31, 0x162160u);
    ctx->pc = 0x16215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162158u;
            // 0x16215c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162160u; }
        if (ctx->pc != 0x162160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162160u; }
        if (ctx->pc != 0x162160u) { return; }
    }
    ctx->pc = 0x162160u;
label_162160:
    // 0x162160: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x162160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x162164: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x162168: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x162168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16216c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16216cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162170: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162174: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x162174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x162178: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x162178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16217c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162180: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x162184: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x162184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x162188: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x162188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16218c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x162190: 0xae160034  sw          $s6, 0x34($s0)
    ctx->pc = 0x162190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 22));
    // 0x162194: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x162194u;
    SET_GPR_U32(ctx, 31, 0x16219Cu);
    ctx->pc = 0x162198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162194u;
            // 0x162198: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16219Cu; }
        if (ctx->pc != 0x16219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16219Cu; }
        if (ctx->pc != 0x16219Cu) { return; }
    }
    ctx->pc = 0x16219Cu;
    // 0x16219c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x16219cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1621a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1621a4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1621a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1621a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1621a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1621ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1621b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1621b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1621b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1621bc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1621c0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1621c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1621C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1621CCu);
        ctx->pc = 0x1621C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1621C4u;
            // 0x1621c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1621CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162140u: goto label_162140;
            case 0x162148u: goto label_162148;
            case 0x162160u: goto label_162160;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1621CCu; }
            if (ctx->pc != 0x1621CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1621CCu;
    // 0x1621cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1621ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621d0: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1621d4: 0xdc8300c0  ld          $v1, 0xC0($a0)
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1621d8: 0x248500c0  addiu       $a1, $a0, 0xC0
    ctx->pc = 0x1621d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1621dc: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1621e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1621e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1621e4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1621e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1621e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1621e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1621ec: 0xfc8300c0  sd          $v1, 0xC0($a0)
    ctx->pc = 0x1621ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 3));
    // 0x1621f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1621f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1621f4: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1621f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1621f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1621f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1621fc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1621fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x162200: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x162200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162204: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x162204u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x162208: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x162208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16220c: 0xdc8300c0  ld          $v1, 0xC0($a0)
    ctx->pc = 0x16220cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x162210: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x162210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162214: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x162218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16221c: 0xfc8300c0  sd          $v1, 0xC0($a0)
    ctx->pc = 0x16221cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 3));
    // 0x162220: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x162220u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x162224: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x162224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x162228: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x162228u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x16222c: 0x3e00008  jr          $ra
    ctx->pc = 0x16222Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16222Cu;
            // 0x162230: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162140u: goto label_162140;
            case 0x162148u: goto label_162148;
            case 0x162160u: goto label_162160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162234u;
    // 0x162234: 0x0  nop
    ctx->pc = 0x162234u;
    // NOP
}

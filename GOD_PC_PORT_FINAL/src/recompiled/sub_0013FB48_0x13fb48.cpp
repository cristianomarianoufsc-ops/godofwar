#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FB48
// Address: 0x13fb48 - 0x13fca8
void sub_0013FB48_0x13fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB48_0x13fb48");
#endif

    ctx->pc = 0x13fb48u;

    // 0x13fb48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13fb4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13fb50: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x13fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x13fb54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13fb54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb58: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x13fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x13fb5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13fb5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb60: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x13fb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x13fb64: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x13fb68: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13fb6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13fb6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13fb74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13fb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fb7c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x13FB7Cu;
    SET_GPR_U32(ctx, 31, 0x13FB84u);
    ctx->pc = 0x13FB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB7Cu;
            // 0x13fb80: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB84u; }
        if (ctx->pc != 0x13FB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB84u; }
        if (ctx->pc != 0x13FB84u) { return; }
    }
    ctx->pc = 0x13FB84u;
    // 0x13fb84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x13fb8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13fb90: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x13fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x13fb94: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x13fb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x13fb98: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x13fb9c: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x13fba0: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13fba4: 0xae220658  sw          $v0, 0x658($s1)
    ctx->pc = 0x13fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
    // 0x13fba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbac: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x13fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x13fbb0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x13fbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbb4: 0x0  nop
    ctx->pc = 0x13fbb4u;
    // NOP
label_13fbb8:
    // 0x13fbb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13fbbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13fbc0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x13fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x13fbc4: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x13fbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x13fbc8: 0x0  nop
    ctx->pc = 0x13fbc8u;
    // NOP
    // 0x13fbcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13FBCCu;
    {
        const bool branch_taken_0x13fbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBCCu;
            // 0x13fbd0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbcc) {
            ctx->pc = 0x13FBB8u;
            runtime->cooperativeGuestYield();
            goto label_13fbb8;
        }
    }
    ctx->pc = 0x13FBD4u;
    // 0x13fbd4: 0xfca00630  sd          $zero, 0x630($a1)
    ctx->pc = 0x13fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1584), GPR_U64(ctx, 0));
    // 0x13fbd8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x13fbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x13fbdc: 0xfca00638  sd          $zero, 0x638($a1)
    ctx->pc = 0x13fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1592), GPR_U64(ctx, 0));
    // 0x13fbe0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13FBE0u;
    SET_GPR_U32(ctx, 31, 0x13FBE8u);
    ctx->pc = 0x13FBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBE0u;
            // 0x13fbe4: 0x3610ffc0  ori         $s0, $s0, 0xFFC0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65472);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBE8u; }
        if (ctx->pc != 0x13FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBE8u; }
        if (ctx->pc != 0x13FBE8u) { return; }
    }
    ctx->pc = 0x13FBE8u;
    // 0x13fbe8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13fbec: 0x2502824  and         $a1, $s2, $s0
    ctx->pc = 0x13fbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x13fbf0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13FBF0u;
    SET_GPR_U32(ctx, 31, 0x13FBF8u);
    ctx->pc = 0x13FBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBF0u;
            // 0x13fbf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBF8u; }
        if (ctx->pc != 0x13FBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBF8u; }
        if (ctx->pc != 0x13FBF8u) { return; }
    }
    ctx->pc = 0x13FBF8u;
    // 0x13fbf8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13fbfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc04: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x13fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x13fc08: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x13fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x13fc0c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13fc10: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x13FC10u;
    SET_GPR_U32(ctx, 31, 0x13FC18u);
    ctx->pc = 0x13FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC10u;
            // 0x13fc14: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC18u; }
        if (ctx->pc != 0x13FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC18u; }
        if (ctx->pc != 0x13FC18u) { return; }
    }
    ctx->pc = 0x13FC18u;
    // 0x13fc18: 0x2708024  and         $s0, $s3, $s0
    ctx->pc = 0x13fc18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x13fc1c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13fc20: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x13fc24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13fc28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13fc2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fc30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13fc34: 0x2442fd10  addiu       $v0, $v0, -0x2F0
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x13fc38: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x13fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x13fc3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13fc40: 0xae260664  sw          $a2, 0x664($s1)
    ctx->pc = 0x13fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 6));
    // 0x13fc44: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x13fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x13fc48: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x13fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x13fc4c: 0xae300660  sw          $s0, 0x660($s1)
    ctx->pc = 0x13fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 16));
    // 0x13fc50: 0xae220658  sw          $v0, 0x658($s1)
    ctx->pc = 0x13fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
    // 0x13fc54: 0xae20066c  sw          $zero, 0x66C($s1)
    ctx->pc = 0x13fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 0));
    // 0x13fc58: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x13FC58u;
    SET_GPR_U32(ctx, 31, 0x13FC60u);
    ctx->pc = 0x13FC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC58u;
            // 0x13fc5c: 0xae200668  sw          $zero, 0x668($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC60u; }
        if (ctx->pc != 0x13FC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC60u; }
        if (ctx->pc != 0x13FC60u) { return; }
    }
    ctx->pc = 0x13FC60u;
    // 0x13fc60: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x13fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x13fc64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc68: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x13fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x13fc6c: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x13fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x13fc70: 0xc04feae  jal         func_13FAB8
    ctx->pc = 0x13FC70u;
    SET_GPR_U32(ctx, 31, 0x13FC78u);
    ctx->pc = 0x13FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC70u;
            // 0x13fc74: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FAB8u;
    if (runtime->hasFunction(0x13FAB8u)) {
        auto targetFn = runtime->lookupFunction(0x13FAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC78u; }
        if (ctx->pc != 0x13FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FAB8_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC78u; }
        if (ctx->pc != 0x13FC78u) { return; }
    }
    ctx->pc = 0x13FC78u;
    // 0x13fc78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13fc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13fc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fc80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13fc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13fc84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13fc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fc88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13fc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fc8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x13fc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fc90: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x13fc90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fc94: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x13fc94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x13FC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC9Cu;
            // 0x13fca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FBB8u: goto label_13fbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FCA4u;
    // 0x13fca4: 0x0  nop
    ctx->pc = 0x13fca4u;
    // NOP
}

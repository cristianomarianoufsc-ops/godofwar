#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FCA8
// Address: 0x13fca8 - 0x13fe10
void sub_0013FCA8_0x13fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FCA8_0x13fca8");
#endif

    ctx->pc = 0x13fca8u;

    fprintf(stderr, "[13FCA8] ENTRADA a0=0x%x a1=0x%x a2=0x%x a3=0x%x\n",
        GPR_U32(ctx,4), GPR_U32(ctx,5), GPR_U32(ctx,6), GPR_U32(ctx,7)); fflush(stderr);
    // 0x13fca8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13fcac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13fcb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x13fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x13fcb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13fcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcb8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x13fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x13fcbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13fcbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x13fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x13fcc4: 0x24040678  addiu       $a0, $zero, 0x678
    ctx->pc = 0x13fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1656));
    // 0x13fcc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13fccc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x13fcccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcd0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13fcd4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fcdc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x13FCDCu;
    SET_GPR_U32(ctx, 31, 0x13FCE4u);
    ctx->pc = 0x13FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCDCu;
            // 0x13fce0: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[13FCA8] JAL 13D630 a0=0x%x\n", GPR_U32(ctx,4)); fflush(stderr);
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCE4u; }
        if (ctx->pc != 0x13FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCE4u; }
        if (ctx->pc != 0x13FCE4u) { return; }
    }
    fprintf(stderr, "[13FCA8] 13D630 RETORNOU v0=0x%x (s1=v0)\n", GPR_U32(ctx,2)); fflush(stderr);
    ctx->pc = 0x13FCE4u;
    // 0x13fce4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fce8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x13fcec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13fcf0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x13fcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x13fcf4: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x13fcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x13fcf8: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x13fcfc: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x13fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x13fd00: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13fd04: 0xae220658  sw          $v0, 0x658($s1)
    ctx->pc = 0x13fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 2));
    // 0x13fd08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd0c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x13fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x13fd10: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x13fd10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd14: 0x0  nop
    ctx->pc = 0x13fd14u;
    // NOP
label_13fd18:
    // 0x13fd18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13fd1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13fd20: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x13fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x13fd24: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x13fd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x13fd28: 0x0  nop
    ctx->pc = 0x13fd28u;
    // NOP
    // 0x13fd2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13FD2Cu;
    {
        const bool branch_taken_0x13fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD2Cu;
            // 0x13fd30: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd2c) {
            ctx->pc = 0x13FD18u;
            runtime->cooperativeGuestYield();
            goto label_13fd18;
        }
    }
    ctx->pc = 0x13FD34u;
    // 0x13fd34: 0xfca00630  sd          $zero, 0x630($a1)
    ctx->pc = 0x13fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1584), GPR_U64(ctx, 0));
    // 0x13fd38: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x13fd3c: 0xfca00638  sd          $zero, 0x638($a1)
    ctx->pc = 0x13fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1592), GPR_U64(ctx, 0));
    // 0x13fd40: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13FD40u;
    SET_GPR_U32(ctx, 31, 0x13FD48u);
    ctx->pc = 0x13FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD40u;
            // 0x13fd44: 0x3610ffc0  ori         $s0, $s0, 0xFFC0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65472);
        ctx->in_delay_slot = false;
    fprintf(stderr, "[13FCA8] loop99 completo, JAL 13E090\n"); fflush(stderr);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD48u; }
        if (ctx->pc != 0x13FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD48u; }
        if (ctx->pc != 0x13FD48u) { return; }
    }
    fprintf(stderr, "[13FCA8] 13E090 RETORNOU v0=0x%x\n", GPR_U32(ctx,2)); fflush(stderr);
    ctx->pc = 0x13FD48u;
    // 0x13fd48: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13fd4c: 0x2502824  and         $a1, $s2, $s0
    ctx->pc = 0x13fd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x13fd50: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13FD50u;
    SET_GPR_U32(ctx, 31, 0x13FD58u);
    ctx->pc = 0x13FD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD50u;
            // 0x13fd54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[13FCA8] JAL 13DC78 a0=v0=0x%x a1=0x%x a2=0x%x\n",
        GPR_U32(ctx,4), GPR_U32(ctx,5), GPR_U32(ctx,6)); fflush(stderr);
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD58u; }
        if (ctx->pc != 0x13FD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD58u; }
        if (ctx->pc != 0x13FD58u) { return; }
    }
    ctx->pc = 0x13FD58u;
    // 0x13fd58: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13fd5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x13fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x13fd68: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x13fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x13fd6c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13fd70: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x13FD70u;
    SET_GPR_U32(ctx, 31, 0x13FD78u);
    ctx->pc = 0x13FD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD70u;
            // 0x13fd74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[13FCA8] 13DC78 OK, JAL 23AAB0 a0=0x%x a1=0x%x\n",
        GPR_U32(ctx,4), GPR_U32(ctx,5)); fflush(stderr);
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD78u; }
        if (ctx->pc != 0x13FD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD78u; }
        if (ctx->pc != 0x13FD78u) { return; }
    }
    ctx->pc = 0x13FD78u;
    // 0x13fd78: 0x2708024  and         $s0, $s3, $s0
    ctx->pc = 0x13fd78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x13fd7c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x13fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13fd80: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x13fd80u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x13fd84: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x13fd88: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13fd8c: 0x2463fcf0  addiu       $v1, $v1, -0x310
    ctx->pc = 0x13fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966512));
    // 0x13fd90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13fd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd98: 0xae250664  sw          $a1, 0x664($s1)
    ctx->pc = 0x13fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 5));
    // 0x13fd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fda0: 0xae230658  sw          $v1, 0x658($s1)
    ctx->pc = 0x13fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 3));
    // 0x13fda4: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x13fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x13fda8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x13fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x13fdac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x13fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x13fdb0: 0xae300660  sw          $s0, 0x660($s1)
    ctx->pc = 0x13fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 16));
    // 0x13fdb4: 0xae20066c  sw          $zero, 0x66C($s1)
    ctx->pc = 0x13fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 0));
    // 0x13fdb8: 0xc08eaca  jal         func_23AB28
    ctx->pc = 0x13FDB8u;
    SET_GPR_U32(ctx, 31, 0x13FDC0u);
    ctx->pc = 0x13FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDB8u;
            // 0x13fdbc: 0xae200668  sw          $zero, 0x668($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[13FCA8] 23AAB0 OK, JAL 23AB28 a0=0x%x\n", GPR_U32(ctx,4)); fflush(stderr);
    ctx->pc = 0x23AB28u;
    if (runtime->hasFunction(0x23AB28u)) {
        auto targetFn = runtime->lookupFunction(0x23AB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDC0u; }
        if (ctx->pc != 0x13FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ab28_0x23ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDC0u; }
        if (ctx->pc != 0x13FDC0u) { return; }
    }
    fprintf(stderr, "[13FCA8] 23AB28 OK, JAL 13D630#2 a0=0x10\n"); fflush(stderr);
    ctx->pc = 0x13FDC0u;
    // 0x13fdc0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x13FDC0u;
    SET_GPR_U32(ctx, 31, 0x13FDC8u);
    ctx->pc = 0x13FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDC0u;
            // 0x13fdc4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDC8u; }
        if (ctx->pc != 0x13FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDC8u; }
        if (ctx->pc != 0x13FDC8u) { return; }
    }
    ctx->pc = 0x13FDC8u;
    // 0x13fdc8: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x13fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x13fdcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdd0: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x13fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x13fdd4: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x13fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    fprintf(stderr, "[13FCA8] 13D630#2 OK, JAL 13FAB8 a0=v0=0x%x\n", GPR_U32(ctx,4)); fflush(stderr);
    // 0x13fdd8: 0xc04feae  jal         func_13FAB8
    ctx->pc = 0x13FDD8u;
    SET_GPR_U32(ctx, 31, 0x13FDE0u);
    ctx->pc = 0x13FDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDD8u;
            // 0x13fddc: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FAB8u;
    if (runtime->hasFunction(0x13FAB8u)) {
        auto targetFn = runtime->lookupFunction(0x13FAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDE0u; }
        if (ctx->pc != 0x13FDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FAB8_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FDE0u; }
        if (ctx->pc != 0x13FDE0u) { return; }
    }
    fprintf(stderr, "[13FCA8] 13FAB8 OK → SAINDO de sub_0013FCA8 v0=s1=0x%x\n", GPR_U32(ctx,17)); fflush(stderr);
    ctx->pc = 0x13FDE0u;
    // 0x13fde0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13fde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fde4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13fde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fde8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13fde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13fdec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13fdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fdf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13fdf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fdf4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x13fdf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fdf8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x13fdf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fdfc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x13fdfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fe04: 0x3e00008  jr          $ra
    ctx->pc = 0x13FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE04u;
            // 0x13fe08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FD18u: goto label_13fd18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FE0Cu;
    // 0x13fe0c: 0x0  nop
    ctx->pc = 0x13fe0cu;
    // NOP
}

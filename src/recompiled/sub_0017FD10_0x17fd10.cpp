#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FD10
// Address: 0x17fd10 - 0x17ff00
void sub_0017FD10_0x17fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FD10_0x17fd10");
#endif

    ctx->pc = 0x17fd10u;

    // 0x17fd10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17fd14: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x17fd18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17fd1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17fd20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17fd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd24: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17fd28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17fd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17fd30: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x17fd34: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x17fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x17fd38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fd38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd3c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x17fd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x17fd40: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x17fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x17fd44: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD44u;
            // 0x17fd48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FD50u;
            goto label_17fd50;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x17fd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_17fd50:
    // 0x17fd50: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x17fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x17fd54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd58: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x17FD58u;
    SET_GPR_U32(ctx, 31, 0x17FD60u);
    ctx->pc = 0x17FD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD58u;
            // 0x17fd5c: 0x24841808  addiu       $a0, $a0, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD60u; }
        if (ctx->pc != 0x17FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD60u; }
        if (ctx->pc != 0x17FD60u) { return; }
    }
    ctx->pc = 0x17FD60u;
    // 0x17fd60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FD60u;
    {
        const bool branch_taken_0x17fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD60u;
            // 0x17fd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd60) {
            ctx->pc = 0x17FD70u;
            goto label_17fd70;
        }
    }
    ctx->pc = 0x17FD68u;
    // 0x17fd68: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17FD68u;
    {
        const bool branch_taken_0x17fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD68u;
            // 0x17fd6c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd68) {
            ctx->pc = 0x17FED4u;
            goto label_17fed4;
        }
    }
    ctx->pc = 0x17FD70u;
label_17fd70:
    // 0x17fd70: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x17FD70u;
    SET_GPR_U32(ctx, 31, 0x17FD78u);
    ctx->pc = 0x17FD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD70u;
            // 0x17fd74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD78u; }
        if (ctx->pc != 0x17FD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD78u; }
        if (ctx->pc != 0x17FD78u) { return; }
    }
    ctx->pc = 0x17FD78u;
    // 0x17fd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17fd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd80: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x17FD80u;
    SET_GPR_U32(ctx, 31, 0x17FD88u);
    ctx->pc = 0x17FD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD80u;
            // 0x17fd84: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD88u; }
        if (ctx->pc != 0x17FD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FD88u; }
        if (ctx->pc != 0x17FD88u) { return; }
    }
    ctx->pc = 0x17FD88u;
    // 0x17fd88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17fd88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd8c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x17fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17fd90: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17fd94: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17fd98: 0x40f809  jalr        $v0
    ctx->pc = 0x17FD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FDA0u);
        ctx->pc = 0x17FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD98u;
            // 0x17fd9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FDA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FD50u: goto label_17fd50;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDB0u: goto label_17fdb0;
            case 0x17FDC4u: goto label_17fdc4;
            case 0x17FDE0u: goto label_17fde0;
            case 0x17FE20u: goto label_17fe20;
            case 0x17FE34u: goto label_17fe34;
            case 0x17FE40u: goto label_17fe40;
            case 0x17FE4Cu: goto label_17fe4c;
            case 0x17FE58u: goto label_17fe58;
            case 0x17FE98u: goto label_17fe98;
            case 0x17FEACu: goto label_17feac;
            case 0x17FEB4u: goto label_17feb4;
            case 0x17FEBCu: goto label_17febc;
            case 0x17FEC4u: goto label_17fec4;
            case 0x17FED0u: goto label_17fed0;
            case 0x17FED4u: goto label_17fed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FDA0u; }
            if (ctx->pc != 0x17FDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x17FDA0u;
    // 0x17fda0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17fda0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fda4: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FDA4u;
    {
        const bool branch_taken_0x17fda4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDA4u;
            // 0x17fda8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fda4) {
            ctx->pc = 0x17FDB0u;
            goto label_17fdb0;
        }
    }
    ctx->pc = 0x17FDACu;
    // 0x17fdac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fdb0:
    // 0x17fdb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17fdb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x17fdb8: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x17fdb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17fdbc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDBCu;
            // 0x17fdc0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FDC4u;
            goto label_17fdc4;
        }
    }
    ctx->pc = 0x17FDC4u;
label_17fdc4:
    // 0x17fdc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17fdc8: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x17fdcc: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x17fdccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17fdd0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FDD0u;
    {
        const bool branch_taken_0x17fdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDD0u;
            // 0x17fdd4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdd0) {
            ctx->pc = 0x17FE4Cu;
            goto label_17fe4c;
        }
    }
    ctx->pc = 0x17FDD8u;
    // 0x17fdd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17fddc: 0x0  nop
    ctx->pc = 0x17fddcu;
    // NOP
label_17fde0:
    // 0x17fde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fde4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17fde8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17fdec: 0x40f809  jalr        $v0
    ctx->pc = 0x17FDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FDF4u);
        ctx->pc = 0x17FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDECu;
            // 0x17fdf0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FDF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FD50u: goto label_17fd50;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDB0u: goto label_17fdb0;
            case 0x17FDC4u: goto label_17fdc4;
            case 0x17FDE0u: goto label_17fde0;
            case 0x17FE20u: goto label_17fe20;
            case 0x17FE34u: goto label_17fe34;
            case 0x17FE40u: goto label_17fe40;
            case 0x17FE4Cu: goto label_17fe4c;
            case 0x17FE58u: goto label_17fe58;
            case 0x17FE98u: goto label_17fe98;
            case 0x17FEACu: goto label_17feac;
            case 0x17FEB4u: goto label_17feb4;
            case 0x17FEBCu: goto label_17febc;
            case 0x17FEC4u: goto label_17fec4;
            case 0x17FED0u: goto label_17fed0;
            case 0x17FED4u: goto label_17fed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FDF4u; }
            if (ctx->pc != 0x17FDF4u) { return; }
        }
        }
    }
    ctx->pc = 0x17FDF4u;
    // 0x17fdf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17fdfc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17fe00: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17fe04: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x17fe04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17fe08: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FE08u;
    {
        const bool branch_taken_0x17fe08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE08u;
            // 0x17fe0c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe08) {
            ctx->pc = 0x17FE20u;
            goto label_17fe20;
        }
    }
    ctx->pc = 0x17FE10u;
    // 0x17fe10: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE10u;
    {
        const bool branch_taken_0x17fe10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE10u;
            // 0x17fe14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe10) {
            ctx->pc = 0x17FE20u;
            goto label_17fe20;
        }
    }
    ctx->pc = 0x17FE18u;
    // 0x17fe18: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FE18u;
    {
        const bool branch_taken_0x17fe18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17fe18) {
            ctx->pc = 0x17FE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE18u;
            // 0x17fe1c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE34u;
            goto label_17fe34;
        }
    }
    ctx->pc = 0x17FE20u;
label_17fe20:
    // 0x17fe20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fe24: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FE24u;
    {
        const bool branch_taken_0x17fe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x17fe24) {
            ctx->pc = 0x17FE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE24u;
            // 0x17fe28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE40u;
            goto label_17fe40;
        }
    }
    ctx->pc = 0x17FE2Cu;
    // 0x17fe2c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17FE2Cu;
    {
        const bool branch_taken_0x17fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe2c) {
            ctx->pc = 0x17FEB4u;
            goto label_17feb4;
        }
    }
    ctx->pc = 0x17FE34u;
label_17fe34:
    // 0x17fe34: 0x1056001f  beq         $v0, $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x17FE34u;
    {
        const bool branch_taken_0x17fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x17fe34) {
            ctx->pc = 0x17FEB4u;
            goto label_17feb4;
        }
    }
    ctx->pc = 0x17FE3Cu;
    // 0x17fe3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17fe40:
    // 0x17fe40: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17fe44: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17FE44u;
    {
        const bool branch_taken_0x17fe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fe44) {
            ctx->pc = 0x17FE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE44u;
            // 0x17fe48: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FDE0u;
            runtime->cooperativeGuestYield();
            goto label_17fde0;
        }
    }
    ctx->pc = 0x17FE4Cu;
label_17fe4c:
    // 0x17fe4c: 0x1a400020  blez        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x17FE4Cu;
    {
        const bool branch_taken_0x17fe4c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE4Cu;
            // 0x17fe50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe4c) {
            ctx->pc = 0x17FED0u;
            goto label_17fed0;
        }
    }
    ctx->pc = 0x17FE54u;
    // 0x17fe54: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_17fe58:
    // 0x17fe58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe5c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x17fe60: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17fe64: 0x40f809  jalr        $v0
    ctx->pc = 0x17FE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FE6Cu);
        ctx->pc = 0x17FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE64u;
            // 0x17fe68: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FE6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FD50u: goto label_17fd50;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDB0u: goto label_17fdb0;
            case 0x17FDC4u: goto label_17fdc4;
            case 0x17FDE0u: goto label_17fde0;
            case 0x17FE20u: goto label_17fe20;
            case 0x17FE34u: goto label_17fe34;
            case 0x17FE40u: goto label_17fe40;
            case 0x17FE4Cu: goto label_17fe4c;
            case 0x17FE58u: goto label_17fe58;
            case 0x17FE98u: goto label_17fe98;
            case 0x17FEACu: goto label_17feac;
            case 0x17FEB4u: goto label_17feb4;
            case 0x17FEBCu: goto label_17febc;
            case 0x17FEC4u: goto label_17fec4;
            case 0x17FED0u: goto label_17fed0;
            case 0x17FED4u: goto label_17fed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FE6Cu; }
            if (ctx->pc != 0x17FE6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17FE6Cu;
    // 0x17fe6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17fe6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17fe74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17fe78: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17fe7c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x17fe7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17fe80: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FE80u;
    {
        const bool branch_taken_0x17fe80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE80u;
            // 0x17fe84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe80) {
            ctx->pc = 0x17FE98u;
            goto label_17fe98;
        }
    }
    ctx->pc = 0x17FE88u;
    // 0x17fe88: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE88u;
    {
        const bool branch_taken_0x17fe88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE88u;
            // 0x17fe8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe88) {
            ctx->pc = 0x17FE98u;
            goto label_17fe98;
        }
    }
    ctx->pc = 0x17FE90u;
    // 0x17fe90: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FE90u;
    {
        const bool branch_taken_0x17fe90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17fe90) {
            ctx->pc = 0x17FE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE90u;
            // 0x17fe94: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FEACu;
            goto label_17feac;
        }
    }
    ctx->pc = 0x17FE98u;
label_17fe98:
    // 0x17fe98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fe9c: 0x54550009  bnel        $v0, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FE9Cu;
    {
        const bool branch_taken_0x17fe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x17fe9c) {
            ctx->pc = 0x17FEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE9Cu;
            // 0x17fea0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FEC4u;
            goto label_17fec4;
        }
    }
    ctx->pc = 0x17FEA4u;
    // 0x17fea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17FEA4u;
    {
        const bool branch_taken_0x17fea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fea4) {
            ctx->pc = 0x17FEB4u;
            goto label_17feb4;
        }
    }
    ctx->pc = 0x17FEACu;
label_17feac:
    // 0x17feac: 0x54560005  bnel        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FEACu;
    {
        const bool branch_taken_0x17feac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x17feac) {
            ctx->pc = 0x17FEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEACu;
            // 0x17feb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FEC4u;
            goto label_17fec4;
        }
    }
    ctx->pc = 0x17FEB4u;
label_17feb4:
    // 0x17feb4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17FEB4u;
    {
        const bool branch_taken_0x17feb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17feb4) {
            ctx->pc = 0x17FEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEB4u;
            // 0x17feb8: 0xa6300000  sh          $s0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FEBCu;
            goto label_17febc;
        }
    }
    ctx->pc = 0x17FEBCu;
label_17febc:
    // 0x17febc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FEBCu;
    {
        const bool branch_taken_0x17febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEBCu;
            // 0x17fec0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17febc) {
            ctx->pc = 0x17FED4u;
            goto label_17fed4;
        }
    }
    ctx->pc = 0x17FEC4u;
label_17fec4:
    // 0x17fec4: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x17fec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17fec8: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x17FEC8u;
    {
        const bool branch_taken_0x17fec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fec8) {
            ctx->pc = 0x17FECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEC8u;
            // 0x17fecc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE58u;
            runtime->cooperativeGuestYield();
            goto label_17fe58;
        }
    }
    ctx->pc = 0x17FED0u;
label_17fed0:
    // 0x17fed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fed4:
    // 0x17fed4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17fed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fed8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17fed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fedc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17fedcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fee0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17fee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fee4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17fee4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fee8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x17fee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17feec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x17feecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fef4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEF4u;
            // 0x17fef8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FD50u: goto label_17fd50;
            case 0x17FD70u: goto label_17fd70;
            case 0x17FDB0u: goto label_17fdb0;
            case 0x17FDC4u: goto label_17fdc4;
            case 0x17FDE0u: goto label_17fde0;
            case 0x17FE20u: goto label_17fe20;
            case 0x17FE34u: goto label_17fe34;
            case 0x17FE40u: goto label_17fe40;
            case 0x17FE4Cu: goto label_17fe4c;
            case 0x17FE58u: goto label_17fe58;
            case 0x17FE98u: goto label_17fe98;
            case 0x17FEACu: goto label_17feac;
            case 0x17FEB4u: goto label_17feb4;
            case 0x17FEBCu: goto label_17febc;
            case 0x17FEC4u: goto label_17fec4;
            case 0x17FED0u: goto label_17fed0;
            case 0x17FED4u: goto label_17fed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FEFCu;
    // 0x17fefc: 0x0  nop
    ctx->pc = 0x17fefcu;
    // NOP
}

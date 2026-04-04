#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014FCD8
// Address: 0x14fcd8 - 0x14fec8
void sub_0014FCD8_0x14fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FCD8_0x14fcd8");
#endif

    ctx->pc = 0x14fcd8u;

    // 0x14fcd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14fcdc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14fce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14fce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14fce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14fce8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x14fce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14fcf0: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x14fcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14fcf4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14fcf8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14fcfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14fcfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd00: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x14fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x14fd04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14fd04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd08: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x14fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x14fd0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x14fd0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14fd14: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x14fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x14fd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fd1c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x14FD1Cu;
    SET_GPR_U32(ctx, 31, 0x14FD24u);
    ctx->pc = 0x14FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD1Cu;
            // 0x14fd20: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD24u; }
        if (ctx->pc != 0x14FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD24u; }
        if (ctx->pc != 0x14FD24u) { return; }
    }
    ctx->pc = 0x14FD24u;
    // 0x14fd24: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x14fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x14fd28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd2c: 0xae300084  sw          $s0, 0x84($s1)
    ctx->pc = 0x14fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
    // 0x14fd30: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14fd30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd34: 0xae330080  sw          $s3, 0x80($s1)
    ctx->pc = 0x14fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
label_14fd38:
    // 0x14fd38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14fd3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14fd40: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14fd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fd44: 0x0  nop
    ctx->pc = 0x14fd44u;
    // NOP
    // 0x14fd48: 0x0  nop
    ctx->pc = 0x14fd48u;
    // NOP
    // 0x14fd4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FD4Cu;
    {
        const bool branch_taken_0x14fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD4Cu;
            // 0x14fd50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd4c) {
            ctx->pc = 0x14FD38u;
            runtime->cooperativeGuestYield();
            goto label_14fd38;
        }
    }
    ctx->pc = 0x14FD54u;
    // 0x14fd54: 0x26370060  addiu       $s7, $s1, 0x60
    ctx->pc = 0x14fd54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14fd58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd5c: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x14fd5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_14fd60:
    // 0x14fd60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14fd64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14fd68: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14fd68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fd6c: 0x0  nop
    ctx->pc = 0x14fd6cu;
    // NOP
    // 0x14fd70: 0x0  nop
    ctx->pc = 0x14fd70u;
    // NOP
    // 0x14fd74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FD74u;
    {
        const bool branch_taken_0x14fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD74u;
            // 0x14fd78: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd74) {
            ctx->pc = 0x14FD60u;
            runtime->cooperativeGuestYield();
            goto label_14fd60;
        }
    }
    ctx->pc = 0x14FD7Cu;
    // 0x14fd7c: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14fd80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd84: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x14fd84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14fd88:
    // 0x14fd88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14fd8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14fd90: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x14fd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fd94: 0x0  nop
    ctx->pc = 0x14fd94u;
    // NOP
    // 0x14fd98: 0x0  nop
    ctx->pc = 0x14fd98u;
    // NOP
    // 0x14fd9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FD9Cu;
    {
        const bool branch_taken_0x14fd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD9Cu;
            // 0x14fda0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd9c) {
            ctx->pc = 0x14FD88u;
            runtime->cooperativeGuestYield();
            goto label_14fd88;
        }
    }
    ctx->pc = 0x14FDA4u;
    // 0x14fda4: 0xa632008c  sh          $s2, 0x8C($s1)
    ctx->pc = 0x14fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 140), (uint16_t)GPR_U32(ctx, 18));
    // 0x14fda8: 0xa635008e  sh          $s5, 0x8E($s1)
    ctx->pc = 0x14fda8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 142), (uint16_t)GPR_U32(ctx, 21));
    // 0x14fdac: 0xa6360090  sh          $s6, 0x90($s1)
    ctx->pc = 0x14fdacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 22));
    // 0x14fdb0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x14FDB0u;
    {
        const bool branch_taken_0x14fdb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDB0u;
            // 0x14fdb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdb0) {
            ctx->pc = 0x14FE24u;
            goto label_14fe24;
        }
    }
    ctx->pc = 0x14FDB8u;
label_14fdb8:
    // 0x14fdb8: 0x122942  srl         $a1, $s2, 5
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x14fdbc: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x14fdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14fdc0: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x14fdc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14fdc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14fdc8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x14fdcc: 0x3246001f  andi        $a2, $s2, 0x1F
    ctx->pc = 0x14fdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x14fdd0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fdd8: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x14fddc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x14fde0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14fde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14fde4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14fde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fde8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fdec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x14fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x14fdf0: 0xa4720002  sh          $s2, 0x2($v1)
    ctx->pc = 0x14fdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x14fdf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14fdf8: 0x8624008c  lh          $a0, 0x8C($s1)
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x14fdfc: 0x8625008e  lh          $a1, 0x8E($s1)
    ctx->pc = 0x14fdfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
    // 0x14fe00: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x14FE00u;
    SET_GPR_U32(ctx, 31, 0x14FE08u);
    ctx->pc = 0x14FE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE00u;
            // 0x14fe04: 0x96260090  lhu         $a2, 0x90($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE08u; }
        if (ctx->pc != 0x14FE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3B0_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE08u; }
        if (ctx->pc != 0x14FE08u) { return; }
    }
    ctx->pc = 0x14FE08u;
    // 0x14fe08: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x14fe0c: 0x253202b  sltu        $a0, $s2, $s3
    ctx->pc = 0x14fe0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14fe10: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fe14: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x14fe14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x14fe1c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14FE1Cu;
    {
        const bool branch_taken_0x14fe1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE1Cu;
            // 0x14fe20: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe1c) {
            ctx->pc = 0x14FDB8u;
            runtime->cooperativeGuestYield();
            goto label_14fdb8;
        }
    }
    ctx->pc = 0x14FE24u;
label_14fe24:
    // 0x14fe24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14fe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fe28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fe30:
    // 0x14fe30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fe34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14fe38: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14fe3c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x14fe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fe40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14fe44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FE44u;
    {
        const bool branch_taken_0x14fe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE44u;
            // 0x14fe48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe44) {
            ctx->pc = 0x14FE30u;
            runtime->cooperativeGuestYield();
            goto label_14fe30;
        }
    }
    ctx->pc = 0x14FE4Cu;
    // 0x14fe4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fe58:
    // 0x14fe58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fe5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14fe60: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14fe64: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x14fe64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fe68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14fe6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FE6Cu;
    {
        const bool branch_taken_0x14fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE6Cu;
            // 0x14fe70: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe6c) {
            ctx->pc = 0x14FE58u;
            runtime->cooperativeGuestYield();
            goto label_14fe58;
        }
    }
    ctx->pc = 0x14FE74u;
    // 0x14fe74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14fe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe7c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x14fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_14fe80:
    // 0x14fe80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fe84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14fe88: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14fe8c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x14fe8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14fe90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14fe94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FE94u;
    {
        const bool branch_taken_0x14fe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE94u;
            // 0x14fe98: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe94) {
            ctx->pc = 0x14FE80u;
            runtime->cooperativeGuestYield();
            goto label_14fe80;
        }
    }
    ctx->pc = 0x14FE9Cu;
    // 0x14fe9c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14fe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fea0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14fea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fea4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14fea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fea8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14fea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14feac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14feacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14feb0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x14feb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14feb4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x14feb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14feb8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x14feb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14febc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14febcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fec0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEC0u;
            // 0x14fec4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD60u: goto label_14fd60;
            case 0x14FD88u: goto label_14fd88;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FE24u: goto label_14fe24;
            case 0x14FE30u: goto label_14fe30;
            case 0x14FE58u: goto label_14fe58;
            case 0x14FE80u: goto label_14fe80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FEC8u;
}

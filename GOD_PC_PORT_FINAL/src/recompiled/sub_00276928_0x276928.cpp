#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276928
// Address: 0x276928 - 0x276aa8
void sub_00276928_0x276928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276928_0x276928");
#endif

    ctx->pc = 0x276928u;

    // 0x276928: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x276928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27692c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276934: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276938: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x276938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27693c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27693cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276940: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x276940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x276944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276948: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x276948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27694c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x276950: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x276950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x276954: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x276954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x276958: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x276958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27695c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276964: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x276964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276968: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x276968u;
    {
        const bool branch_taken_0x276968 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x276968) {
            ctx->pc = 0x27696Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276968u;
            // 0x27696c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276A74u;
            goto label_276a74;
        }
    }
    ctx->pc = 0x276970u;
    // 0x276970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276974: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x276974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x276978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x276978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27697c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x276980: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x276980u;
    {
        const bool branch_taken_0x276980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276980) {
            ctx->pc = 0x276984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276980u;
            // 0x276984: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276A74u;
            goto label_276a74;
        }
    }
    ctx->pc = 0x276988u;
    // 0x276988: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x276988u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x27698c: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x27698cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x276990: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x276990u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x276994: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x276994u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x276998: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x276998u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x27699c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x27699cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x2769a0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x2769a4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x2769a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x2769a8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x2769a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x2769ac: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x2769acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x2769b0: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x2769b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x2769b4: 0x0  nop
    ctx->pc = 0x2769b4u;
    // NOP
label_2769b8:
    // 0x2769b8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2769b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2769bc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2769bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x2769c0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x2769c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x2769c4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2769c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2769c8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x2769c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2769cc: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x2769ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x2769d0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2769d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2769d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2769d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2769d8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x2769d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x2769dc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2769DCu;
    {
        const bool branch_taken_0x2769dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x2769E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2769DCu;
            // 0x2769e0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769dc) {
            ctx->pc = 0x2769F4u;
            goto label_2769f4;
        }
    }
    ctx->pc = 0x2769E4u;
    // 0x2769e4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2769E4u;
    {
        const bool branch_taken_0x2769e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x2769e4) {
            ctx->pc = 0x2769E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2769E4u;
            // 0x2769e8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2769F8u;
            goto label_2769f8;
        }
    }
    ctx->pc = 0x2769ECu;
    // 0x2769ec: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2769ECu;
    {
        const bool branch_taken_0x2769ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x2769ec) {
            ctx->pc = 0x2769F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2769ECu;
            // 0x2769f0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276A24u;
            goto label_276a24;
        }
    }
    ctx->pc = 0x2769F4u;
label_2769f4:
    // 0x2769f4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2769f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2769f8:
    // 0x2769f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2769F8u;
    {
        const bool branch_taken_0x2769f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2769F8u;
            // 0x2769fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769f8) {
            ctx->pc = 0x276A24u;
            goto label_276a24;
        }
    }
    ctx->pc = 0x276A00u;
    // 0x276a00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x276a04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276A04u;
    {
        const bool branch_taken_0x276a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A04u;
            // 0x276a08: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a04) {
            ctx->pc = 0x276A24u;
            goto label_276a24;
        }
    }
    ctx->pc = 0x276A0Cu;
    // 0x276a0c: 0xc09c012  jal         func_270048
    ctx->pc = 0x276A0Cu;
    SET_GPR_U32(ctx, 31, 0x276A14u);
    ctx->pc = 0x276A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A0Cu;
            // 0x276a10: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A14u; }
        if (ctx->pc != 0x276A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A14u; }
        if (ctx->pc != 0x276A14u) { return; }
    }
    ctx->pc = 0x276A14u;
    // 0x276a14: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x276a18: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x276A18u;
    {
        const bool branch_taken_0x276a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A18u;
            // 0x276a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a18) {
            ctx->pc = 0x276A44u;
            goto label_276a44;
        }
    }
    ctx->pc = 0x276A20u;
    // 0x276a20: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x276a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276a24:
    // 0x276a24: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x276a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x276a28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x276A28u;
    {
        const bool branch_taken_0x276a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A28u;
            // 0x276a2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a28) {
            ctx->pc = 0x276A54u;
            goto label_276a54;
        }
    }
    ctx->pc = 0x276A30u;
    // 0x276a30: 0xc09c012  jal         func_270048
    ctx->pc = 0x276A30u;
    SET_GPR_U32(ctx, 31, 0x276A38u);
    ctx->pc = 0x276A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276A30u;
            // 0x276a34: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A38u; }
        if (ctx->pc != 0x276A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A38u; }
        if (ctx->pc != 0x276A38u) { return; }
    }
    ctx->pc = 0x276A38u;
    // 0x276a38: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x276a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x276a3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x276A3Cu;
    {
        const bool branch_taken_0x276a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A3Cu;
            // 0x276a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a3c) {
            ctx->pc = 0x276A54u;
            goto label_276a54;
        }
    }
    ctx->pc = 0x276A44u;
label_276a44:
    // 0x276a44: 0xc09d08c  jal         func_274230
    ctx->pc = 0x276A44u;
    SET_GPR_U32(ctx, 31, 0x276A4Cu);
    ctx->pc = 0x274230u;
    if (runtime->hasFunction(0x274230u)) {
        auto targetFn = runtime->lookupFunction(0x274230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A4Cu; }
        if (ctx->pc != 0x276A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274230_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276A4Cu; }
        if (ctx->pc != 0x276A4Cu) { return; }
    }
    ctx->pc = 0x276A4Cu;
    // 0x276a4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x276A4Cu;
    {
        const bool branch_taken_0x276a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276A4Cu;
            // 0x276a50: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a4c) {
            ctx->pc = 0x276A74u;
            goto label_276a74;
        }
    }
    ctx->pc = 0x276A54u;
label_276a54:
    // 0x276a54: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x276a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276a58: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x276A58u;
    {
        const bool branch_taken_0x276a58 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x276a58) {
            ctx->pc = 0x276A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276A58u;
            // 0x276a5c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276A74u;
            goto label_276a74;
        }
    }
    ctx->pc = 0x276A60u;
    // 0x276a60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x276a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x276a64: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x276a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x276a68: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x276A68u;
    {
        const bool branch_taken_0x276a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a68) {
            ctx->pc = 0x2769B8u;
            runtime->cooperativeGuestYield();
            goto label_2769b8;
        }
    }
    ctx->pc = 0x276A70u;
    // 0x276a70: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x276a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_276a74:
    // 0x276a74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x276a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x276a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276a7c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x276a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276a80: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276a84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x276a84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276a88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x276a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276a8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x276a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276a90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x276a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x276a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x276a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x276AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276AA0u;
            // 0x276aa4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2769B8u: goto label_2769b8;
            case 0x2769F4u: goto label_2769f4;
            case 0x2769F8u: goto label_2769f8;
            case 0x276A24u: goto label_276a24;
            case 0x276A44u: goto label_276a44;
            case 0x276A54u: goto label_276a54;
            case 0x276A74u: goto label_276a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276AA8u;
}

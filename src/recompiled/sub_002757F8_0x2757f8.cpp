#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002757F8
// Address: 0x2757f8 - 0x275b28
void sub_002757F8_0x2757f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002757F8_0x2757f8");
#endif

    ctx->pc = 0x2757f8u;

    // 0x2757f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2757f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2757fc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2757fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x275800: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x275800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275804: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x275804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x275808: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x275808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27580c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27580cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275810: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x275810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x275814: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x275814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x275818: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x275818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x27581c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x27581cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275820: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x275820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x275824: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x275824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x275828: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x275828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x27582c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x27582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x275830: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x275830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x275834: 0xc09df9e  jal         func_277E78
    ctx->pc = 0x275834u;
    SET_GPR_U32(ctx, 31, 0x27583Cu);
    ctx->pc = 0x275838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275834u;
            // 0x275838: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277E78u;
    if (runtime->hasFunction(0x277E78u)) {
        auto targetFn = runtime->lookupFunction(0x277E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27583Cu; }
        if (ctx->pc != 0x27583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277E78_0x277e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27583Cu; }
        if (ctx->pc != 0x27583Cu) { return; }
    }
    ctx->pc = 0x27583Cu;
    // 0x27583c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x27583Cu;
    {
        const bool branch_taken_0x27583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27583Cu;
            // 0x275840: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27583c) {
            ctx->pc = 0x275B00u;
            goto label_275b00;
        }
    }
    ctx->pc = 0x275844u;
    // 0x275844: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x275844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_275848:
    // 0x275848: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x275848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27584c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x27584cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x275850: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x275850u;
    {
        const bool branch_taken_0x275850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275850) {
            ctx->pc = 0x275854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275850u;
            // 0x275854: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x275860u;
            goto label_275860;
        }
    }
    ctx->pc = 0x275858u;
    // 0x275858: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x275858u;
    {
        const bool branch_taken_0x275858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275858u;
            // 0x27585c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275858) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x275860u;
label_275860:
    // 0x275860: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x275860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x275864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275868: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x275868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27586c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x27586cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x275870: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x275874: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275874u;
    SET_GPR_U32(ctx, 31, 0x27587Cu);
    ctx->pc = 0x275878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275874u;
            // 0x275878: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27587Cu; }
        if (ctx->pc != 0x27587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27587Cu; }
        if (ctx->pc != 0x27587Cu) { return; }
    }
    ctx->pc = 0x27587Cu;
    // 0x27587c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275880: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x275880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x275884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275888: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x275888u;
    {
        const bool branch_taken_0x275888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275888u;
            // 0x27588c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275888) {
            ctx->pc = 0x275914u;
            goto label_275914;
        }
    }
    ctx->pc = 0x275890u;
    // 0x275890: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x275890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x275894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275898: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x275898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x27589c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27589Cu;
    {
        const bool branch_taken_0x27589c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2758A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27589Cu;
            // 0x2758a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27589c) {
            ctx->pc = 0x275918u;
            goto label_275918;
        }
    }
    ctx->pc = 0x2758A4u;
    // 0x2758a4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2758a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2758a8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x2758a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x2758ac: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x2758acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x2758b0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x2758b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x2758b4: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x2758b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x2758b8: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x2758b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x2758bc: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x2758bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x2758c0: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x2758c4: 0x0  nop
    ctx->pc = 0x2758c4u;
    // NOP
label_2758c8:
    // 0x2758c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2758c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2758cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2758CCu;
    {
        const bool branch_taken_0x2758cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2758cc) {
            ctx->pc = 0x2758D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2758CCu;
            // 0x2758d0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2758F0u;
            goto label_2758f0;
        }
    }
    ctx->pc = 0x2758D4u;
    // 0x2758d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2758d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2758d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2758d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2758dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2758DCu;
    {
        const bool branch_taken_0x2758dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2758dc) {
            ctx->pc = 0x2758E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2758DCu;
            // 0x2758e0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2758F0u;
            goto label_2758f0;
        }
    }
    ctx->pc = 0x2758E4u;
    // 0x2758e4: 0xc09c012  jal         func_270048
    ctx->pc = 0x2758E4u;
    SET_GPR_U32(ctx, 31, 0x2758ECu);
    ctx->pc = 0x2758E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2758E4u;
            // 0x2758e8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758ECu; }
        if (ctx->pc != 0x2758ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758ECu; }
        if (ctx->pc != 0x2758ECu) { return; }
    }
    ctx->pc = 0x2758ECu;
    // 0x2758ec: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2758ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_2758f0:
    // 0x2758f0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2758F0u;
    {
        const bool branch_taken_0x2758f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2758f0) {
            ctx->pc = 0x275958u;
            goto label_275958;
        }
    }
    ctx->pc = 0x2758F8u;
    // 0x2758f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2758f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2758fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2758FCu;
    {
        const bool branch_taken_0x2758fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758FCu;
            // 0x275900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758fc) {
            ctx->pc = 0x275918u;
            goto label_275918;
        }
    }
    ctx->pc = 0x275904u;
    // 0x275904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275908: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x275908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x27590c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27590Cu;
    {
        const bool branch_taken_0x27590c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27590c) {
            ctx->pc = 0x2758C8u;
            runtime->cooperativeGuestYield();
            goto label_2758c8;
        }
    }
    ctx->pc = 0x275914u;
label_275914:
    // 0x275914: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_275918:
    // 0x275918: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x275918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27591c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x27591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x275920: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x275920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x275924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275928: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x275928u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27592c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x27592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275930: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275934: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x275934u;
    {
        const bool branch_taken_0x275934 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x275938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275934u;
            // 0x275938: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275934) {
            ctx->pc = 0x275968u;
            goto label_275968;
        }
    }
    ctx->pc = 0x27593Cu;
    // 0x27593c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x27593cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275940: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275940u;
    {
        const bool branch_taken_0x275940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275940u;
            // 0x275944: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275940) {
            ctx->pc = 0x275950u;
            goto label_275950;
        }
    }
    ctx->pc = 0x275948u;
    // 0x275948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275948u;
    {
        const bool branch_taken_0x275948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275948u;
            // 0x27594c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275948) {
            ctx->pc = 0x27596Cu;
            goto label_27596c;
        }
    }
    ctx->pc = 0x275950u;
label_275950:
    // 0x275950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275950u;
    {
        const bool branch_taken_0x275950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275950u;
            // 0x275954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275950) {
            ctx->pc = 0x27596Cu;
            goto label_27596c;
        }
    }
    ctx->pc = 0x275958u;
label_275958:
    // 0x275958: 0xc09d08c  jal         func_274230
    ctx->pc = 0x275958u;
    SET_GPR_U32(ctx, 31, 0x275960u);
    ctx->pc = 0x274230u;
    if (runtime->hasFunction(0x274230u)) {
        auto targetFn = runtime->lookupFunction(0x274230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275960u; }
        if (ctx->pc != 0x275960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274230_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275960u; }
        if (ctx->pc != 0x275960u) { return; }
    }
    ctx->pc = 0x275960u;
    // 0x275960: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275960u;
    {
        const bool branch_taken_0x275960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275960u;
            // 0x275964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275960) {
            ctx->pc = 0x275994u;
            goto label_275994;
        }
    }
    ctx->pc = 0x275968u;
label_275968:
    // 0x275968: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27596c:
    // 0x27596c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x27596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x275970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275974: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x275974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x275978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27597c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x275980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275980u;
    {
        const bool branch_taken_0x275980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275980u;
            // 0x275984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275980) {
            ctx->pc = 0x275990u;
            goto label_275990;
        }
    }
    ctx->pc = 0x275988u;
    // 0x275988: 0xc09d0b4  jal         func_2742D0
    ctx->pc = 0x275988u;
    SET_GPR_U32(ctx, 31, 0x275990u);
    ctx->pc = 0x27598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275988u;
            // 0x27598c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2742D0u;
    if (runtime->hasFunction(0x2742D0u)) {
        auto targetFn = runtime->lookupFunction(0x2742D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275990u; }
        if (ctx->pc != 0x275990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002742D0_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275990u; }
        if (ctx->pc != 0x275990u) { return; }
    }
    ctx->pc = 0x275990u;
label_275990:
    // 0x275990: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x275990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_275994:
    // 0x275994: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x275994u;
    {
        const bool branch_taken_0x275994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275994) {
            ctx->pc = 0x275998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275994u;
            // 0x275998: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2759B0u;
            goto label_2759b0;
        }
    }
    ctx->pc = 0x27599Cu;
    // 0x27599c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x27599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2759a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2759a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2759a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2759a8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2759A8u;
    {
        const bool branch_taken_0x2759a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759A8u;
            // 0x2759ac: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759a8) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x2759B0u;
label_2759b0:
    // 0x2759b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2759B0u;
    {
        const bool branch_taken_0x2759b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2759B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759B0u;
            // 0x2759b4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759b0) {
            ctx->pc = 0x2759FCu;
            goto label_2759fc;
        }
    }
    ctx->pc = 0x2759B8u;
    // 0x2759b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2759b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759bc: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x2759BCu;
    SET_GPR_U32(ctx, 31, 0x2759C4u);
    ctx->pc = 0x2759C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759BCu;
            // 0x2759c0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759C4u; }
        if (ctx->pc != 0x2759C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759C4u; }
        if (ctx->pc != 0x2759C4u) { return; }
    }
    ctx->pc = 0x2759C4u;
    // 0x2759c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2759C4u;
    {
        const bool branch_taken_0x2759c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759c4) {
            ctx->pc = 0x2759C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2759C4u;
            // 0x2759c8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2759DCu;
            goto label_2759dc;
        }
    }
    ctx->pc = 0x2759CCu;
    // 0x2759cc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2759d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2759D0u;
    {
        const bool branch_taken_0x2759d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759d0) {
            ctx->pc = 0x2759E4u;
            goto label_2759e4;
        }
    }
    ctx->pc = 0x2759D8u;
    // 0x2759d8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2759d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_2759dc:
    // 0x2759dc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2759DCu;
    {
        const bool branch_taken_0x2759dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759DCu;
            // 0x2759e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759dc) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x2759E4u;
label_2759e4:
    // 0x2759e4: 0xc09d992  jal         func_276648
    ctx->pc = 0x2759E4u;
    SET_GPR_U32(ctx, 31, 0x2759ECu);
    ctx->pc = 0x2759E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759E4u;
            // 0x2759e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276648u;
    if (runtime->hasFunction(0x276648u)) {
        auto targetFn = runtime->lookupFunction(0x276648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759ECu; }
        if (ctx->pc != 0x2759ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276648_0x276648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759ECu; }
        if (ctx->pc != 0x2759ECu) { return; }
    }
    ctx->pc = 0x2759ECu;
    // 0x2759ec: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2759ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2759f0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2759F0u;
    {
        const bool branch_taken_0x2759f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2759F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2759F0u;
            // 0x2759f4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759f0) {
            ctx->pc = 0x275A58u;
            goto label_275a58;
        }
    }
    ctx->pc = 0x2759F8u;
    // 0x2759f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2759f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2759fc:
    // 0x2759fc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2759fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x275a00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275A00u;
    {
        const bool branch_taken_0x275a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A00u;
            // 0x275a04: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a00) {
            ctx->pc = 0x275A20u;
            goto label_275a20;
        }
    }
    ctx->pc = 0x275A08u;
    // 0x275a08: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x275a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a10: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x275A10u;
    SET_GPR_U32(ctx, 31, 0x275A18u);
    ctx->pc = 0x275A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A10u;
            // 0x275a14: 0x24a545f0  addiu       $a1, $a1, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A18u; }
        if (ctx->pc != 0x275A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A18u; }
        if (ctx->pc != 0x275A18u) { return; }
    }
    ctx->pc = 0x275A18u;
    // 0x275a18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x275A18u;
    {
        const bool branch_taken_0x275a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A18u;
            // 0x275a1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a18) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x275A20u;
label_275a20:
    // 0x275a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275a24: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x275A24u;
    {
        const bool branch_taken_0x275a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x275A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A24u;
            // 0x275a28: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a24) {
            ctx->pc = 0x275A64u;
            goto label_275a64;
        }
    }
    ctx->pc = 0x275A2Cu;
    // 0x275a2c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x275a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a34: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x275a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x275a38: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x275a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x275a3c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x275a40: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x275a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a44: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x275a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a48: 0xc09d83c  jal         func_2760F0
    ctx->pc = 0x275A48u;
    SET_GPR_U32(ctx, 31, 0x275A50u);
    ctx->pc = 0x275A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A48u;
            // 0x275a4c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2760F0u;
    if (runtime->hasFunction(0x2760F0u)) {
        auto targetFn = runtime->lookupFunction(0x2760F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A50u; }
        if (ctx->pc != 0x275A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002760F0_0x2760f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A50u; }
        if (ctx->pc != 0x275A50u) { return; }
    }
    ctx->pc = 0x275A50u;
    // 0x275a50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x275A50u;
    {
        const bool branch_taken_0x275a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A50u;
            // 0x275a54: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a50) {
            ctx->pc = 0x275A88u;
            goto label_275a88;
        }
    }
    ctx->pc = 0x275A58u;
label_275a58:
    // 0x275a58: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x275a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x275a5c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x275A5Cu;
    {
        const bool branch_taken_0x275a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A5Cu;
            // 0x275a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a5c) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x275A64u;
label_275a64:
    // 0x275a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x275a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a6c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x275a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x275a70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x275a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a74: 0xc09db3e  jal         func_276CF8
    ctx->pc = 0x275A74u;
    SET_GPR_U32(ctx, 31, 0x275A7Cu);
    ctx->pc = 0x275A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275A74u;
            // 0x275a78: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CF8u;
    if (runtime->hasFunction(0x276CF8u)) {
        auto targetFn = runtime->lookupFunction(0x276CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A7Cu; }
        if (ctx->pc != 0x275A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cf8_0x276db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A7Cu; }
        if (ctx->pc != 0x275A7Cu) { return; }
    }
    ctx->pc = 0x275A7Cu;
    // 0x275a7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275A7Cu;
    {
        const bool branch_taken_0x275a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A7Cu;
            // 0x275a80: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a7c) {
            ctx->pc = 0x275AB0u;
            goto label_275ab0;
        }
    }
    ctx->pc = 0x275A84u;
    // 0x275a84: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x275a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_275a88:
    // 0x275a88: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x275a88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a8c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x275a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x275a90: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x275a90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a94: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x275a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x275a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a9c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x275aa0: 0xc09d330  jal         func_274CC0
    ctx->pc = 0x275AA0u;
    SET_GPR_U32(ctx, 31, 0x275AA8u);
    ctx->pc = 0x275AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275AA0u;
            // 0x275aa4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274CC0u;
    if (runtime->hasFunction(0x274CC0u)) {
        auto targetFn = runtime->lookupFunction(0x274CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AA8u; }
        if (ctx->pc != 0x275AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274CC0_0x274cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AA8u; }
        if (ctx->pc != 0x275AA8u) { return; }
    }
    ctx->pc = 0x275AA8u;
    // 0x275aa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275AA8u;
    {
        const bool branch_taken_0x275aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275AA8u;
            // 0x275aac: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275aa8) {
            ctx->pc = 0x275ABCu;
            goto label_275abc;
        }
    }
    ctx->pc = 0x275AB0u;
label_275ab0:
    // 0x275ab0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x275ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x275ab4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x275AB4u;
    {
        const bool branch_taken_0x275ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275AB4u;
            // 0x275ab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ab4) {
            ctx->pc = 0x275AFCu;
            goto label_275afc;
        }
    }
    ctx->pc = 0x275ABCu;
label_275abc:
    // 0x275abc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x275ABCu;
    {
        const bool branch_taken_0x275abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275abc) {
            ctx->pc = 0x275AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275ABCu;
            // 0x275ac0: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x275ADCu;
            goto label_275adc;
        }
    }
    ctx->pc = 0x275AC4u;
    // 0x275ac4: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x275ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x275ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275acc: 0xc09d4e6  jal         func_275398
    ctx->pc = 0x275ACCu;
    SET_GPR_U32(ctx, 31, 0x275AD4u);
    ctx->pc = 0x275AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275ACCu;
            // 0x275ad0: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x275398u;
    if (runtime->hasFunction(0x275398u)) {
        auto targetFn = runtime->lookupFunction(0x275398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AD4u; }
        if (ctx->pc != 0x275AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275398_0x275398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AD4u; }
        if (ctx->pc != 0x275AD4u) { return; }
    }
    ctx->pc = 0x275AD4u;
    // 0x275ad4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275ad8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x275ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_275adc:
    // 0x275adc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x275adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275ae0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x275ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x275ae4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x275ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x275ae8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x275ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x275aec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x275aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x275af0: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x275af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x275af4: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x275AF4u;
    {
        const bool branch_taken_0x275af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275AF4u;
            // 0x275af8: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275af4) {
            ctx->pc = 0x275848u;
            runtime->cooperativeGuestYield();
            goto label_275848;
        }
    }
    ctx->pc = 0x275AFCu;
label_275afc:
    // 0x275afc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x275afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_275b00:
    // 0x275b00: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x275b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275b04: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x275b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275b08: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x275b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275b0c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x275b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275b10: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x275b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275b14: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x275b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275b18: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x275b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x275B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275B1Cu;
            // 0x275b20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275848u: goto label_275848;
            case 0x275860u: goto label_275860;
            case 0x2758C8u: goto label_2758c8;
            case 0x2758F0u: goto label_2758f0;
            case 0x275914u: goto label_275914;
            case 0x275918u: goto label_275918;
            case 0x275950u: goto label_275950;
            case 0x275958u: goto label_275958;
            case 0x275968u: goto label_275968;
            case 0x27596Cu: goto label_27596c;
            case 0x275990u: goto label_275990;
            case 0x275994u: goto label_275994;
            case 0x2759B0u: goto label_2759b0;
            case 0x2759DCu: goto label_2759dc;
            case 0x2759E4u: goto label_2759e4;
            case 0x2759FCu: goto label_2759fc;
            case 0x275A20u: goto label_275a20;
            case 0x275A58u: goto label_275a58;
            case 0x275A64u: goto label_275a64;
            case 0x275A88u: goto label_275a88;
            case 0x275AB0u: goto label_275ab0;
            case 0x275ABCu: goto label_275abc;
            case 0x275ADCu: goto label_275adc;
            case 0x275AFCu: goto label_275afc;
            case 0x275B00u: goto label_275b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275B24u;
    // 0x275b24: 0x0  nop
    ctx->pc = 0x275b24u;
    // NOP
}

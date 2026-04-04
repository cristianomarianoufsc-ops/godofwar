#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAF58
// Address: 0x1baf58 - 0x1bb0e8
void sub_001BAF58_0x1baf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF58_0x1baf58");
#endif

    ctx->pc = 0x1baf58u;

    // 0x1baf58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baf5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1baf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1baf60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baf64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1baf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baf6c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1baf6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baf70: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1baf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1baf74: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1baf78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baf7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1baf80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1baf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1baf88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1baf8c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1baf90: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1baf94: 0x40f809  jalr        $v0
    ctx->pc = 0x1BAF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAF9Cu);
        ctx->pc = 0x1BAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF94u;
            // 0x1baf98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BAF9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAFD8u: goto label_1bafd8;
            case 0x1BB02Cu: goto label_1bb02c;
            case 0x1BB060u: goto label_1bb060;
            case 0x1BB0ACu: goto label_1bb0ac;
            case 0x1BB0C0u: goto label_1bb0c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF9Cu; }
            if (ctx->pc != 0x1BAF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BAF9Cu;
    // 0x1baf9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1baf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bafa0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bafa4: 0x8c441204  lw          $a0, 0x1204($v0)
    ctx->pc = 0x1bafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4612)));
    // 0x1bafa8: 0xc060aec  jal         func_182BB0
    ctx->pc = 0x1BAFA8u;
    SET_GPR_U32(ctx, 31, 0x1BAFB0u);
    ctx->pc = 0x1BAFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFA8u;
            // 0x1bafac: 0x24a559b0  addiu       $a1, $a1, 0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BB0u;
    if (runtime->hasFunction(0x182BB0u)) {
        auto targetFn = runtime->lookupFunction(0x182BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB0u; }
        if (ctx->pc != 0x1BAFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BB0_0x182bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB0u; }
        if (ctx->pc != 0x1BAFB0u) { return; }
    }
    ctx->pc = 0x1BAFB0u;
    // 0x1bafb0: 0xc08aeb8  jal         func_22BAE0
    ctx->pc = 0x1BAFB0u;
    SET_GPR_U32(ctx, 31, 0x1BAFB8u);
    ctx->pc = 0x1BAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFB0u;
            // 0x1bafb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BAE0u;
    if (runtime->hasFunction(0x22BAE0u)) {
        auto targetFn = runtime->lookupFunction(0x22BAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB8u; }
        if (ctx->pc != 0x1BAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BAE0_0x22bae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB8u; }
        if (ctx->pc != 0x1BAFB8u) { return; }
    }
    ctx->pc = 0x1BAFB8u;
    // 0x1bafb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bafbc: 0x8c45cc58  lw          $a1, -0x33A8($v0)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954072)));
    // 0x1bafc0: 0x52050005  beql        $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAFC0u;
    {
        const bool branch_taken_0x1bafc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bafc0) {
            ctx->pc = 0x1BAFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFC0u;
            // 0x1bafc4: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAFD8u;
            goto label_1bafd8;
        }
    }
    ctx->pc = 0x1BAFC8u;
    // 0x1bafc8: 0xc061d42  jal         func_187508
    ctx->pc = 0x1BAFC8u;
    SET_GPR_U32(ctx, 31, 0x1BAFD0u);
    ctx->pc = 0x1BAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFC8u;
            // 0x1bafcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187508u;
    if (runtime->hasFunction(0x187508u)) {
        auto targetFn = runtime->lookupFunction(0x187508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFD0u; }
        if (ctx->pc != 0x1BAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187508_0x187540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFD0u; }
        if (ctx->pc != 0x1BAFD0u) { return; }
    }
    ctx->pc = 0x1BAFD0u;
    // 0x1bafd0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1bafd4: 0x0  nop
    ctx->pc = 0x1bafd4u;
    // NOP
label_1bafd8:
    // 0x1bafd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bafdc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bafe0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1bafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1bafe4: 0x40f809  jalr        $v0
    ctx->pc = 0x1BAFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAFECu);
        ctx->pc = 0x1BAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFE4u;
            // 0x1bafe8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BAFECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAFD8u: goto label_1bafd8;
            case 0x1BB02Cu: goto label_1bb02c;
            case 0x1BB060u: goto label_1bb060;
            case 0x1BB0ACu: goto label_1bb0ac;
            case 0x1BB0C0u: goto label_1bb0c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFECu; }
            if (ctx->pc != 0x1BAFECu) { return; }
        }
        }
    }
    ctx->pc = 0x1BAFECu;
    // 0x1bafec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bafecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFF8u;
            // 0x1baffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAFD8u: goto label_1bafd8;
            case 0x1BB02Cu: goto label_1bb02c;
            case 0x1BB060u: goto label_1bb060;
            case 0x1BB0ACu: goto label_1bb0ac;
            case 0x1BB0C0u: goto label_1bb0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB000u;
    // 0x1bb000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb004: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bb008: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb00c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bb010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb014: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bb01c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bb020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb024: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BB024u;
    {
        const bool branch_taken_0x1bb024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb024) {
            ctx->pc = 0x1BB028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB024u;
            // 0x1bb028: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB02Cu;
            goto label_1bb02c;
        }
    }
    ctx->pc = 0x1BB02Cu;
label_1bb02c:
    // 0x1bb02c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb030: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1bb030u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1bb034: 0xa012  mflo        $s4
    ctx->pc = 0x1bb034u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x1bb038: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bb03c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bb040: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x1bb040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x1bb044: 0x8c425a58  lw          $v0, 0x5A58($v0)
    ctx->pc = 0x1bb044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23128)));
    // 0x1bb048: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb04c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bb050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb054: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb058: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb05c: 0x0  nop
    ctx->pc = 0x1bb05cu;
    // NOP
label_1bb060:
    // 0x1bb060: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bb064: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x1bb064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1bb068: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1bb068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bb06c: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x1bb06cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1bb070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb074: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB074u;
    {
        const bool branch_taken_0x1bb074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB074u;
            // 0x1bb078: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb074) {
            ctx->pc = 0x1BB0ACu;
            goto label_1bb0ac;
        }
    }
    ctx->pc = 0x1BB07Cu;
    // 0x1bb07c: 0x26440032  addiu       $a0, $s2, 0x32
    ctx->pc = 0x1bb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
    // 0x1bb080: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1BB080u;
    SET_GPR_U32(ctx, 31, 0x1BB088u);
    ctx->pc = 0x1BB084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB080u;
            // 0x1bb084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB088u; }
        if (ctx->pc != 0x1BB088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB088u; }
        if (ctx->pc != 0x1BB088u) { return; }
    }
    ctx->pc = 0x1BB088u;
    // 0x1bb088: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1bb08c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb090: 0x2644000a  addiu       $a0, $s2, 0xA
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1bb094: 0x24a55a10  addiu       $a1, $a1, 0x5A10
    ctx->pc = 0x1bb094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    // 0x1bb098: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1bb098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1bb09c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1BB09Cu;
    SET_GPR_U32(ctx, 31, 0x1BB0A4u);
    ctx->pc = 0x1BB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB09Cu;
            // 0x1bb0a0: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A4u; }
        if (ctx->pc != 0x1BB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A4u; }
        if (ctx->pc != 0x1BB0A4u) { return; }
    }
    ctx->pc = 0x1BB0A4u;
    // 0x1bb0a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0A4u;
            // 0x1bb0a8: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB0C0u;
            goto label_1bb0c0;
        }
    }
    ctx->pc = 0x1BB0ACu;
label_1bb0ac:
    // 0x1bb0ac: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bb0b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0b4: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bb0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb0b8: 0xa0600032  sb          $zero, 0x32($v1)
    ctx->pc = 0x1bb0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb0bc: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1bb0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_1bb0c0:
    // 0x1bb0c0: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0C0u;
            // 0x1bb0c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB060u;
            runtime->cooperativeGuestYield();
            goto label_1bb060;
        }
    }
    ctx->pc = 0x1BB0C8u;
    // 0x1bb0c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bb0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb0cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bb0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb0d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bb0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb0d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bb0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb0d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bb0d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0E0u;
            // 0x1bb0e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAFD8u: goto label_1bafd8;
            case 0x1BB02Cu: goto label_1bb02c;
            case 0x1BB060u: goto label_1bb060;
            case 0x1BB0ACu: goto label_1bb0ac;
            case 0x1BB0C0u: goto label_1bb0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB0E8u;
}

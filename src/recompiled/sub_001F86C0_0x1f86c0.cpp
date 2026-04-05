#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F86C0
// Address: 0x1f86c0 - 0x1f8998
void sub_001F86C0_0x1f86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F86C0_0x1f86c0");
#endif

    ctx->pc = 0x1f86c0u;

    // 0x1f86c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f86c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1f86c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1f86c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f86c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f86cc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f86ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f86d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f86d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f86d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f86d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f86d8: 0x70068ca9  por         $s1, $zero, $a2
    ctx->pc = 0x1f86d8u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1f86dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f86dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f86e0: 0x700794a9  por         $s2, $zero, $a3
    ctx->pc = 0x1f86e0u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1f86e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f86e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f86e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f86e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86ec: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f86f0: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1f86f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F86F4u;
    {
        const bool branch_taken_0x1f86f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86F4u;
            // 0x1f86f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86f4) {
            ctx->pc = 0x1F8720u;
            goto label_1f8720;
        }
    }
    ctx->pc = 0x1F86FCu;
    // 0x1f86fc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F86FCu;
    SET_GPR_U32(ctx, 31, 0x1F8704u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8704u; }
        if (ctx->pc != 0x1F8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8704u; }
        if (ctx->pc != 0x1F8704u) { return; }
    }
    ctx->pc = 0x1F8704u;
    // 0x1f8704: 0x24050740  addiu       $a1, $zero, 0x740
    ctx->pc = 0x1f8704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    // 0x1f8708: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f8708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f870c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1F870Cu;
    SET_GPR_U32(ctx, 31, 0x1F8714u);
    ctx->pc = 0x1F8710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F870Cu;
            // 0x1f8710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8714u; }
        if (ctx->pc != 0x1F8714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8714u; }
        if (ctx->pc != 0x1F8714u) { return; }
    }
    ctx->pc = 0x1F8714u;
    // 0x1f8714: 0xc07de7c  jal         func_1F79F0
    ctx->pc = 0x1F8714u;
    SET_GPR_U32(ctx, 31, 0x1F871Cu);
    ctx->pc = 0x1F8718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8714u;
            // 0x1f8718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F79F0u;
    if (runtime->hasFunction(0x1F79F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F871Cu; }
        if (ctx->pc != 0x1F871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F79F0_0x1f79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F871Cu; }
        if (ctx->pc != 0x1F871Cu) { return; }
    }
    ctx->pc = 0x1F871Cu;
    // 0x1f871c: 0xae02e3c8  sw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f871cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960072), GPR_U32(ctx, 2));
label_1f8720:
    // 0x1f8720: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f8724: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x1f8724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f8728: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8728u;
    {
        const bool branch_taken_0x1f8728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8728u;
            // 0x1f872c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8728) {
            ctx->pc = 0x1F875Cu;
            goto label_1f875c;
        }
    }
    ctx->pc = 0x1F8730u;
    // 0x1f8730: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8734: 0x0  nop
    ctx->pc = 0x1f8734u;
    // NOP
label_1f8738:
    // 0x1f8738: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1f8738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f873c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F873Cu;
    {
        const bool branch_taken_0x1f873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F873Cu;
            // 0x1f8740: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f873c) {
            ctx->pc = 0x1F87B8u;
            goto label_1f87b8;
        }
    }
    ctx->pc = 0x1F8744u;
    // 0x1f8744: 0x8e03e3c8  lw          $v1, -0x1C38($s0)
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f8748: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1f8748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f874c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8750: 0x90620028  lbu         $v0, 0x28($v1)
    ctx->pc = 0x1f8750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f8754: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F8754u;
    {
        const bool branch_taken_0x1f8754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8754) {
            ctx->pc = 0x1F8758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8754u;
            // 0x1f8758: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8738u;
            runtime->cooperativeGuestYield();
            goto label_1f8738;
        }
    }
    ctx->pc = 0x1F875Cu;
label_1f875c:
    // 0x1f875c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1f875cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f8760: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F8760u;
    {
        const bool branch_taken_0x1f8760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8760u;
            // 0x1f8764: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8760) {
            ctx->pc = 0x1F87B8u;
            goto label_1f87b8;
        }
    }
    ctx->pc = 0x1F8768u;
    // 0x1f8768: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1f876c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1f876cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f8770: 0x8ca3e3c8  lw          $v1, -0x1C38($a1)
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960072)));
    // 0x1f8774: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8778: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x1f8778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1f877c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F877Cu;
    {
        const bool branch_taken_0x1f877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f877c) {
            ctx->pc = 0x1F8780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F877Cu;
            // 0x1f8780: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F87A0u;
            goto label_1f87a0;
        }
    }
    ctx->pc = 0x1F8784u;
    // 0x1f8784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8788: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x1f8788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f878c: 0x8ca3e3c8  lw          $v1, -0x1C38($a1)
    ctx->pc = 0x1f878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960072)));
    // 0x1f8790: 0x90620730  lbu         $v0, 0x730($v1)
    ctx->pc = 0x1f8790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x1f8794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8798: 0xa0620730  sb          $v0, 0x730($v1)
    ctx->pc = 0x1f8798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1840), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f879c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f87a0:
    // 0x1f87a0: 0x7c910000  sq          $s1, 0x0($a0)
    ctx->pc = 0x1f87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 17));
    // 0x1f87a4: 0x9442e3ba  lhu         $v0, -0x1C46($v0)
    ctx->pc = 0x1f87a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960058)));
    // 0x1f87a8: 0x7c920010  sq          $s2, 0x10($a0)
    ctx->pc = 0x1f87a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 18));
    // 0x1f87ac: 0xa4820026  sh          $v0, 0x26($a0)
    ctx->pc = 0x1f87acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f87b0: 0xac930020  sw          $s3, 0x20($a0)
    ctx->pc = 0x1f87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 19));
    // 0x1f87b4: 0xa4940024  sh          $s4, 0x24($a0)
    ctx->pc = 0x1f87b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 20));
label_1f87b8:
    // 0x1f87b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f87b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f87bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f87bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f87c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f87c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f87c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f87c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f87c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f87c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f87cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f87ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F87D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F87D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F87D0u;
            // 0x1f87d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8720u: goto label_1f8720;
            case 0x1F8738u: goto label_1f8738;
            case 0x1F875Cu: goto label_1f875c;
            case 0x1F87A0u: goto label_1f87a0;
            case 0x1F87B8u: goto label_1f87b8;
            case 0x1F882Cu: goto label_1f882c;
            case 0x1F8838u: goto label_1f8838;
            case 0x1F8840u: goto label_1f8840;
            case 0x1F88F8u: goto label_1f88f8;
            case 0x1F8900u: goto label_1f8900;
            case 0x1F8938u: goto label_1f8938;
            case 0x1F893Cu: goto label_1f893c;
            case 0x1F894Cu: goto label_1f894c;
            case 0x1F8950u: goto label_1f8950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F87D8u;
    // 0x1f87d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f87dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f87e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f87e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f87e4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f87e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f87e8: 0x8e02e3c8  lw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960072)));
    // 0x1f87ec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f87f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f87f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f87f4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f87f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f87fc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1f87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1f8800: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8800u;
    {
        const bool branch_taken_0x1f8800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8800u;
            // 0x1f8804: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8800) {
            ctx->pc = 0x1F882Cu;
            goto label_1f882c;
        }
    }
    ctx->pc = 0x1F8808u;
    // 0x1f8808: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F8808u;
    SET_GPR_U32(ctx, 31, 0x1F8810u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8810u; }
        if (ctx->pc != 0x1F8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8810u; }
        if (ctx->pc != 0x1F8810u) { return; }
    }
    ctx->pc = 0x1F8810u;
    // 0x1f8810: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f8810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f8814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8818: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1F8818u;
    SET_GPR_U32(ctx, 31, 0x1F8820u);
    ctx->pc = 0x1F881Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8818u;
            // 0x1f881c: 0x24050740  addiu       $a1, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8820u; }
        if (ctx->pc != 0x1F8820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8820u; }
        if (ctx->pc != 0x1F8820u) { return; }
    }
    ctx->pc = 0x1F8820u;
    // 0x1f8820: 0xc07de7c  jal         func_1F79F0
    ctx->pc = 0x1F8820u;
    SET_GPR_U32(ctx, 31, 0x1F8828u);
    ctx->pc = 0x1F8824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8820u;
            // 0x1f8824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F79F0u;
    if (runtime->hasFunction(0x1F79F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8828u; }
        if (ctx->pc != 0x1F8828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F79F0_0x1f79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8828u; }
        if (ctx->pc != 0x1F8828u) { return; }
    }
    ctx->pc = 0x1F8828u;
    // 0x1f8828: 0xae02e3c8  sw          $v0, -0x1C38($s0)
    ctx->pc = 0x1f8828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960072), GPR_U32(ctx, 2));
label_1f882c:
    // 0x1f882c: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1F882Cu;
    SET_GPR_U32(ctx, 31, 0x1F8834u);
    ctx->pc = 0x1F8830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F882Cu;
            // 0x1f8830: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8FC8u;
    if (runtime->hasFunction(0x1F8FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1F8FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8834u; }
        if (ctx->pc != 0x1F8834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8FC8_0x1f8fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8834u; }
        if (ctx->pc != 0x1F8834u) { return; }
    }
    ctx->pc = 0x1F8834u;
    // 0x1f8834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f8834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8838:
    // 0x1f8838: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f8838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f883c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f883cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8840:
    // 0x1f8840: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8844: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8848: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x1f8848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f884c: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x1f884cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f8850: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f8854: 0x24426288  addiu       $v0, $v0, 0x6288
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25224));
    // 0x1f8858: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f885c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8860: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f8864: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F8864u;
    {
        const bool branch_taken_0x1f8864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8864u;
            // 0x1f8868: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8864) {
            ctx->pc = 0x1F894Cu;
            goto label_1f894c;
        }
    }
    ctx->pc = 0x1F886Cu;
    // 0x1f886c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1f8870: 0x8e83e3c8  lw          $v1, -0x1C38($s4)
    ctx->pc = 0x1f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960072)));
    // 0x1f8874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8878: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x1f8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
    // 0x1f887c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F887Cu;
    {
        const bool branch_taken_0x1f887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f887c) {
            ctx->pc = 0x1F8880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F887Cu;
            // 0x1f8880: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8950u;
            goto label_1f8950;
        }
    }
    ctx->pc = 0x1F8884u;
    // 0x1f8884: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F8884u;
    SET_GPR_U32(ctx, 31, 0x1F888Cu);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    }
    ctx->pc = 0x1F888Cu;
    // 0x1f888c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8890: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F8890u;
    {
        const bool branch_taken_0x1f8890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8890u;
            // 0x1f8894: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8890) {
            ctx->pc = 0x1F88F8u;
            goto label_1f88f8;
        }
    }
    ctx->pc = 0x1F8898u;
    // 0x1f8898: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f8898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f889c: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1f889cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1f88a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f88a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f88a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f88ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f88b0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f88b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f88b4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f88b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1F88B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F88C0u);
        ctx->pc = 0x1F88BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88B8u;
            // 0x1f88bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F88C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8720u: goto label_1f8720;
            case 0x1F8738u: goto label_1f8738;
            case 0x1F875Cu: goto label_1f875c;
            case 0x1F87A0u: goto label_1f87a0;
            case 0x1F87B8u: goto label_1f87b8;
            case 0x1F882Cu: goto label_1f882c;
            case 0x1F8838u: goto label_1f8838;
            case 0x1F8840u: goto label_1f8840;
            case 0x1F88F8u: goto label_1f88f8;
            case 0x1F8900u: goto label_1f8900;
            case 0x1F8938u: goto label_1f8938;
            case 0x1F893Cu: goto label_1f893c;
            case 0x1F894Cu: goto label_1f894c;
            case 0x1F8950u: goto label_1f8950;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F88C0u; }
            if (ctx->pc != 0x1F88C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F88C0u;
    // 0x1f88c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f88c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1f88c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f88c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f88cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f88d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f88d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f88d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f88dc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f88e0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f88e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1F88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F88ECu);
        ctx->pc = 0x1F88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88E4u;
            // 0x1f88e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F88ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8720u: goto label_1f8720;
            case 0x1F8738u: goto label_1f8738;
            case 0x1F875Cu: goto label_1f875c;
            case 0x1F87A0u: goto label_1f87a0;
            case 0x1F87B8u: goto label_1f87b8;
            case 0x1F882Cu: goto label_1f882c;
            case 0x1F8838u: goto label_1f8838;
            case 0x1F8840u: goto label_1f8840;
            case 0x1F88F8u: goto label_1f88f8;
            case 0x1F8900u: goto label_1f8900;
            case 0x1F8938u: goto label_1f8938;
            case 0x1F893Cu: goto label_1f893c;
            case 0x1F894Cu: goto label_1f894c;
            case 0x1F8950u: goto label_1f8950;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F88ECu; }
            if (ctx->pc != 0x1F88ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1F88ECu;
    // 0x1f88ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88ECu;
    {
        const bool branch_taken_0x1f88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88ECu;
            // 0x1f88f0: 0x8e82e3c8  lw          $v0, -0x1C38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88ec) {
            ctx->pc = 0x1F8900u;
            goto label_1f8900;
        }
    }
    ctx->pc = 0x1F88F4u;
    // 0x1f88f4: 0x0  nop
    ctx->pc = 0x1f88f4u;
    // NOP
label_1f88f8:
    // 0x1f88f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f88f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88fc: 0x8e82e3c8  lw          $v0, -0x1C38($s4)
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960072)));
label_1f8900:
    // 0x1f8900: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1f8904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8908: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8908u;
    {
        const bool branch_taken_0x1f8908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8908u;
            // 0x1f890c: 0xac500700  sw          $s0, 0x700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8908) {
            ctx->pc = 0x1F894Cu;
            goto label_1f894c;
        }
    }
    ctx->pc = 0x1F8910u;
    // 0x1f8910: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1f8914: 0x8c42eca4  lw          $v0, -0x135C($v0)
    ctx->pc = 0x1f8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962340)));
    // 0x1f8918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f8918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f891c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f8920: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1f8920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f8924: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8924u;
    {
        const bool branch_taken_0x1f8924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8924u;
            // 0x1f8928: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8924) {
            ctx->pc = 0x1F8938u;
            goto label_1f8938;
        }
    }
    ctx->pc = 0x1F892Cu;
    // 0x1f892c: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x1f892cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1f8930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8930u;
    {
        const bool branch_taken_0x1f8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8930u;
            // 0x1f8934: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8930) {
            ctx->pc = 0x1F893Cu;
            goto label_1f893c;
        }
    }
    ctx->pc = 0x1F8938u;
label_1f8938:
    // 0x1f8938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f893c:
    // 0x1f893c: 0x8e82e3c8  lw          $v0, -0x1C38($s4)
    ctx->pc = 0x1f893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960072)));
    // 0x1f8940: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1f8940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1f8944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8948: 0xac500718  sw          $s0, 0x718($v0)
    ctx->pc = 0x1f8948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1816), GPR_U32(ctx, 16));
label_1f894c:
    // 0x1f894c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f894cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f8950:
    // 0x1f8950: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1f8950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f8954: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1F8954u;
    {
        const bool branch_taken_0x1f8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8954u;
            // 0x1f8958: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8954) {
            ctx->pc = 0x1F8840u;
            runtime->cooperativeGuestYield();
            goto label_1f8840;
        }
    }
    ctx->pc = 0x1F895Cu;
    // 0x1f895c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f895cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1f8960: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x1f8960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f8964: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1F8964u;
    {
        const bool branch_taken_0x1f8964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8964u;
            // 0x1f8968: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8964) {
            ctx->pc = 0x1F8838u;
            runtime->cooperativeGuestYield();
            goto label_1f8838;
        }
    }
    ctx->pc = 0x1F896Cu;
    // 0x1f896c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f896cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f8970: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f8970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8974: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f8974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8978: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f8978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f897c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f897cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8980: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f8980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8984: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1f8984u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f898c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F898Cu;
            // 0x1f8990: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F8720u: goto label_1f8720;
            case 0x1F8738u: goto label_1f8738;
            case 0x1F875Cu: goto label_1f875c;
            case 0x1F87A0u: goto label_1f87a0;
            case 0x1F87B8u: goto label_1f87b8;
            case 0x1F882Cu: goto label_1f882c;
            case 0x1F8838u: goto label_1f8838;
            case 0x1F8840u: goto label_1f8840;
            case 0x1F88F8u: goto label_1f88f8;
            case 0x1F8900u: goto label_1f8900;
            case 0x1F8938u: goto label_1f8938;
            case 0x1F893Cu: goto label_1f893c;
            case 0x1F894Cu: goto label_1f894c;
            case 0x1F8950u: goto label_1f8950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F8994u;
    // 0x1f8994: 0x0  nop
    ctx->pc = 0x1f8994u;
    // NOP
}

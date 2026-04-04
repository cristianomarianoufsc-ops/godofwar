#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275B28
// Address: 0x275b28 - 0x275f50
void sub_00275B28_0x275b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275B28_0x275b28");
#endif

    ctx->pc = 0x275b28u;

    // 0x275b28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x275b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x275b2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x275b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x275b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b34: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x275b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x275b38: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x275b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x275b3c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x275b3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b40: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x275b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x275b44: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x275b44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b48: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x275b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x275b4c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x275b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x275b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x275b54: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x275b54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x275b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x275b5c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x275b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x275b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x275b64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x275b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x275b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x275b6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x275b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b70: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275B70u;
    SET_GPR_U32(ctx, 31, 0x275B78u);
    ctx->pc = 0x275B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275B70u;
            // 0x275b74: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B78u; }
        if (ctx->pc != 0x275B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B78u; }
        if (ctx->pc != 0x275B78u) { return; }
    }
    ctx->pc = 0x275B78u;
    // 0x275b78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275b7c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x275b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x275b80: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x275b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x275b84: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x275b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x275b88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b90: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x275b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x275b94: 0xc09da4a  jal         func_276928
    ctx->pc = 0x275B94u;
    SET_GPR_U32(ctx, 31, 0x275B9Cu);
    ctx->pc = 0x275B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275B94u;
            // 0x275b98: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B9Cu; }
        if (ctx->pc != 0x275B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B9Cu; }
        if (ctx->pc != 0x275B9Cu) { return; }
    }
    ctx->pc = 0x275B9Cu;
    // 0x275b9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ba0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x275ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x275ba4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275ba8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x275ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x275bac: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x275bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x275bb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275bb4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x275bb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275bb8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x275bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275bbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275bbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275bc0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275BC0u;
    {
        const bool branch_taken_0x275bc0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x275BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BC0u;
            // 0x275bc4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bc0) {
            ctx->pc = 0x275BD8u;
            goto label_275bd8;
        }
    }
    ctx->pc = 0x275BC8u;
    // 0x275bc8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x275bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275bcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x275bd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275BD0u;
    {
        const bool branch_taken_0x275bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BD0u;
            // 0x275bd4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bd0) {
            ctx->pc = 0x275BDCu;
            goto label_275bdc;
        }
    }
    ctx->pc = 0x275BD8u;
label_275bd8:
    // 0x275bd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_275bdc:
    // 0x275bdc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x275bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x275be0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x275be4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x275be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x275be8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275be8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275bec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x275becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x275bf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x275bf4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x275bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x275bf8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x275BF8u;
    {
        const bool branch_taken_0x275bf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BF8u;
            // 0x275bfc: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bf8) {
            ctx->pc = 0x275C1Cu;
            goto label_275c1c;
        }
    }
    ctx->pc = 0x275C00u;
    // 0x275c00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275C00u;
    {
        const bool branch_taken_0x275c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C00u;
            // 0x275c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c00) {
            ctx->pc = 0x275C20u;
            goto label_275c20;
        }
    }
    ctx->pc = 0x275C08u;
    // 0x275c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c0c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x275C0Cu;
    SET_GPR_U32(ctx, 31, 0x275C14u);
    ctx->pc = 0x275C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275C0Cu;
            // 0x275c10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C14u; }
        if (ctx->pc != 0x275C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C14u; }
        if (ctx->pc != 0x275C14u) { return; }
    }
    ctx->pc = 0x275C14u;
    // 0x275c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275C14u;
    {
        const bool branch_taken_0x275c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C14u;
            // 0x275c18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c14) {
            ctx->pc = 0x275C20u;
            goto label_275c20;
        }
    }
    ctx->pc = 0x275C1Cu;
label_275c1c:
    // 0x275c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275c20:
    // 0x275c20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275c24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x275c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x275c28: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x275c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x275c2c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x275c2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x275c30: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x275C30u;
    {
        const bool branch_taken_0x275c30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x275C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C30u;
            // 0x275c34: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c30) {
            ctx->pc = 0x275C64u;
            goto label_275c64;
        }
    }
    ctx->pc = 0x275C38u;
    // 0x275c38: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x275c3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x275c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275c40: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x275c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x275c44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x275c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275c48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x275c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275c4c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x275c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x275c50: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x275C50u;
    {
        const bool branch_taken_0x275c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C50u;
            // 0x275c54: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c50) {
            ctx->pc = 0x275C98u;
            goto label_275c98;
        }
    }
    ctx->pc = 0x275C58u;
    // 0x275c58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x275c5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x275C5Cu;
    {
        const bool branch_taken_0x275c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C5Cu;
            // 0x275c60: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c5c) {
            ctx->pc = 0x275C94u;
            goto label_275c94;
        }
    }
    ctx->pc = 0x275C64u;
label_275c64:
    // 0x275c64: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x275C64u;
    {
        const bool branch_taken_0x275c64 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x275C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C64u;
            // 0x275c68: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c64) {
            ctx->pc = 0x275C98u;
            goto label_275c98;
        }
    }
    ctx->pc = 0x275C6Cu;
    // 0x275c6c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x275c6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x275c70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x275c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x275c74: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x275c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x275c78: 0x61823  negu        $v1, $a2
    ctx->pc = 0x275c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x275c7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x275c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275c80: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x275c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275c84: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x275c84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275c88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275C88u;
    {
        const bool branch_taken_0x275c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C88u;
            // 0x275c8c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c88) {
            ctx->pc = 0x275C94u;
            goto label_275c94;
        }
    }
    ctx->pc = 0x275C90u;
    // 0x275c90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x275c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_275c94:
    // 0x275c94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x275c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275c98:
    // 0x275c98: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x275c98u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x275c9c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x275C9Cu;
    {
        const bool branch_taken_0x275c9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C9Cu;
            // 0x275ca0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c9c) {
            ctx->pc = 0x275D34u;
            goto label_275d34;
        }
    }
    ctx->pc = 0x275CA4u;
    // 0x275ca4: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275CA4u;
    SET_GPR_U32(ctx, 31, 0x275CACu);
    ctx->pc = 0x275CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CA4u;
            // 0x275ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CACu; }
        if (ctx->pc != 0x275CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CACu; }
        if (ctx->pc != 0x275CACu) { return; }
    }
    ctx->pc = 0x275CACu;
    // 0x275cac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275cb0: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x275cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x275cb4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x275cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x275cb8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x275cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x275cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cc4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x275cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x275cc8: 0xc09da4a  jal         func_276928
    ctx->pc = 0x275CC8u;
    SET_GPR_U32(ctx, 31, 0x275CD0u);
    ctx->pc = 0x275CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CC8u;
            // 0x275ccc: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CD0u; }
        if (ctx->pc != 0x275CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CD0u; }
        if (ctx->pc != 0x275CD0u) { return; }
    }
    ctx->pc = 0x275CD0u;
    // 0x275cd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x275cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x275cd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275cdc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x275cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x275ce0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x275ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x275ce4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x275ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275ce8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x275ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275cec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x275cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275cf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275cf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275cf4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275CF4u;
    {
        const bool branch_taken_0x275cf4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x275CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275CF4u;
            // 0x275cf8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275cf4) {
            ctx->pc = 0x275D0Cu;
            goto label_275d0c;
        }
    }
    ctx->pc = 0x275CFCu;
    // 0x275cfc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x275cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275d00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x275d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x275d04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275D04u;
    {
        const bool branch_taken_0x275d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D04u;
            // 0x275d08: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d04) {
            ctx->pc = 0x275D10u;
            goto label_275d10;
        }
    }
    ctx->pc = 0x275D0Cu;
label_275d0c:
    // 0x275d0c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_275d10:
    // 0x275d10: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x275d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x275d14: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x275d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x275d18: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x275d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x275d1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275d20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x275d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x275d24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x275d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x275d28: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x275d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x275d2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x275d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x275d30: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x275d30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_275d34:
    // 0x275d34: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275D34u;
    SET_GPR_U32(ctx, 31, 0x275D3Cu);
    ctx->pc = 0x275D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D34u;
            // 0x275d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D3Cu; }
        if (ctx->pc != 0x275D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D3Cu; }
        if (ctx->pc != 0x275D3Cu) { return; }
    }
    ctx->pc = 0x275D3Cu;
    // 0x275d3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275d40: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x275d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x275d44: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x275d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x275d48: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x275d4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d54: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x275d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x275d58: 0xc09da4a  jal         func_276928
    ctx->pc = 0x275D58u;
    SET_GPR_U32(ctx, 31, 0x275D60u);
    ctx->pc = 0x275D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D58u;
            // 0x275d5c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D60u; }
        if (ctx->pc != 0x275D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D60u; }
        if (ctx->pc != 0x275D60u) { return; }
    }
    ctx->pc = 0x275D60u;
    // 0x275d60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x275d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x275d68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275d6c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x275d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x275d70: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x275d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x275d74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x275d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275d78: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x275d78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275d7c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x275d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275d80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275d80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275d84: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275D84u;
    {
        const bool branch_taken_0x275d84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x275D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D84u;
            // 0x275d88: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d84) {
            ctx->pc = 0x275D9Cu;
            goto label_275d9c;
        }
    }
    ctx->pc = 0x275D8Cu;
    // 0x275d8c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x275d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275d90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x275d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275D94u;
    {
        const bool branch_taken_0x275d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D94u;
            // 0x275d98: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d94) {
            ctx->pc = 0x275DA0u;
            goto label_275da0;
        }
    }
    ctx->pc = 0x275D9Cu;
label_275d9c:
    // 0x275d9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_275da0:
    // 0x275da0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x275da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x275da4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x275da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x275da8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x275da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x275dac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275db0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x275db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x275db4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x275db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x275db8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x275db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x275dbc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x275DBCu;
    {
        const bool branch_taken_0x275dbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DBCu;
            // 0x275dc0: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dbc) {
            ctx->pc = 0x275DDCu;
            goto label_275ddc;
        }
    }
    ctx->pc = 0x275DC4u;
    // 0x275dc4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275DC4u;
    {
        const bool branch_taken_0x275dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DC4u;
            // 0x275dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dc4) {
            ctx->pc = 0x275DDCu;
            goto label_275ddc;
        }
    }
    ctx->pc = 0x275DCCu;
    // 0x275dcc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x275DCCu;
    SET_GPR_U32(ctx, 31, 0x275DD4u);
    ctx->pc = 0x275DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DCCu;
            // 0x275dd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DD4u; }
        if (ctx->pc != 0x275DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DD4u; }
        if (ctx->pc != 0x275DD4u) { return; }
    }
    ctx->pc = 0x275DD4u;
    // 0x275dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275DD4u;
    {
        const bool branch_taken_0x275dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DD4u;
            // 0x275dd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275dd4) {
            ctx->pc = 0x275DE0u;
            goto label_275de0;
        }
    }
    ctx->pc = 0x275DDCu;
label_275ddc:
    // 0x275ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275de0:
    // 0x275de0: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x275DE0u;
    {
        const bool branch_taken_0x275de0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x275de0) {
            ctx->pc = 0x275DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275DE0u;
            // 0x275de4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x275DF8u;
            goto label_275df8;
        }
    }
    ctx->pc = 0x275DE8u;
    // 0x275de8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275dec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x275decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x275df0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x275df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x275df4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x275df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_275df8:
    // 0x275df8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x275df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x275dfc: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x275dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x275e00: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x275e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x275e04: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x275e08: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x275E08u;
    {
        const bool branch_taken_0x275e08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x275E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E08u;
            // 0x275e0c: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e08) {
            ctx->pc = 0x275E3Cu;
            goto label_275e3c;
        }
    }
    ctx->pc = 0x275E10u;
    // 0x275e10: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x275e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x275e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x275e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275e18: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x275e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x275e1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x275e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275e20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x275e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275e24: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x275e24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x275e28: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x275E28u;
    {
        const bool branch_taken_0x275e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E28u;
            // 0x275e2c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e28) {
            ctx->pc = 0x275E70u;
            goto label_275e70;
        }
    }
    ctx->pc = 0x275E30u;
    // 0x275e30: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x275e34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x275E34u;
    {
        const bool branch_taken_0x275e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E34u;
            // 0x275e38: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e34) {
            ctx->pc = 0x275E6Cu;
            goto label_275e6c;
        }
    }
    ctx->pc = 0x275E3Cu;
label_275e3c:
    // 0x275e3c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x275E3Cu;
    {
        const bool branch_taken_0x275e3c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x275E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E3Cu;
            // 0x275e40: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e3c) {
            ctx->pc = 0x275E70u;
            goto label_275e70;
        }
    }
    ctx->pc = 0x275E44u;
    // 0x275e44: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x275e44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x275e48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x275e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x275e4c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x275e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x275e50: 0x61823  negu        $v1, $a2
    ctx->pc = 0x275e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x275e54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x275e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275e58: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x275e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275e5c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x275e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x275e60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275E60u;
    {
        const bool branch_taken_0x275e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E60u;
            // 0x275e64: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e60) {
            ctx->pc = 0x275E6Cu;
            goto label_275e6c;
        }
    }
    ctx->pc = 0x275E68u;
    // 0x275e68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x275e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_275e6c:
    // 0x275e6c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x275e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_275e70:
    // 0x275e70: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x275e70u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x275e74: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x275E74u;
    {
        const bool branch_taken_0x275e74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E74u;
            // 0x275e78: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e74) {
            ctx->pc = 0x275E88u;
            goto label_275e88;
        }
    }
    ctx->pc = 0x275E7Cu;
    // 0x275e7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x275e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x275e80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x275e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x275e84: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x275e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_275e88:
    // 0x275e88: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x275E88u;
    {
        const bool branch_taken_0x275e88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x275E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275E88u;
            // 0x275e8c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275e88) {
            ctx->pc = 0x275F24u;
            goto label_275f24;
        }
    }
    ctx->pc = 0x275E90u;
    // 0x275e90: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275E90u;
    SET_GPR_U32(ctx, 31, 0x275E98u);
    ctx->pc = 0x275E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275E90u;
            // 0x275e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E98u; }
        if (ctx->pc != 0x275E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275E98u; }
        if (ctx->pc != 0x275E98u) { return; }
    }
    ctx->pc = 0x275E98u;
    // 0x275e98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275e9c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x275e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x275ea0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x275ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x275ea4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x275ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x275ea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275eb0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x275eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x275eb4: 0xc09da4a  jal         func_276928
    ctx->pc = 0x275EB4u;
    SET_GPR_U32(ctx, 31, 0x275EBCu);
    ctx->pc = 0x275EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275EB4u;
            // 0x275eb8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EBCu; }
        if (ctx->pc != 0x275EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EBCu; }
        if (ctx->pc != 0x275EBCu) { return; }
    }
    ctx->pc = 0x275EBCu;
    // 0x275ebc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x275ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x275ec4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275ec8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x275ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x275ecc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x275eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x275ed0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x275ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275ed4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x275ed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275ed8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x275ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275edc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275ee0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275EE0u;
    {
        const bool branch_taken_0x275ee0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x275EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275EE0u;
            // 0x275ee4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ee0) {
            ctx->pc = 0x275EF8u;
            goto label_275ef8;
        }
    }
    ctx->pc = 0x275EE8u;
    // 0x275ee8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x275ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275eec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x275eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x275ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275EF0u;
    {
        const bool branch_taken_0x275ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275EF0u;
            // 0x275ef4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef0) {
            ctx->pc = 0x275EFCu;
            goto label_275efc;
        }
    }
    ctx->pc = 0x275EF8u;
label_275ef8:
    // 0x275ef8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_275efc:
    // 0x275efc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x275efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x275f00: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x275f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x275f04: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x275f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x275f08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x275f08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x275f0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x275f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x275f10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x275f14: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x275f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x275f18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x275f18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x275f1c: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x275f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x275f20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_275f24:
    // 0x275f24: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x275f24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275f28: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x275f28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275f2c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x275f2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275f30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x275f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275f34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x275f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275f38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x275f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275f3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x275f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275f40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x275f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275f48: 0x3e00008  jr          $ra
    ctx->pc = 0x275F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275F48u;
            // 0x275f4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275BD8u: goto label_275bd8;
            case 0x275BDCu: goto label_275bdc;
            case 0x275C1Cu: goto label_275c1c;
            case 0x275C20u: goto label_275c20;
            case 0x275C64u: goto label_275c64;
            case 0x275C94u: goto label_275c94;
            case 0x275C98u: goto label_275c98;
            case 0x275D0Cu: goto label_275d0c;
            case 0x275D10u: goto label_275d10;
            case 0x275D34u: goto label_275d34;
            case 0x275D9Cu: goto label_275d9c;
            case 0x275DA0u: goto label_275da0;
            case 0x275DDCu: goto label_275ddc;
            case 0x275DE0u: goto label_275de0;
            case 0x275DF8u: goto label_275df8;
            case 0x275E3Cu: goto label_275e3c;
            case 0x275E6Cu: goto label_275e6c;
            case 0x275E70u: goto label_275e70;
            case 0x275E88u: goto label_275e88;
            case 0x275EF8u: goto label_275ef8;
            case 0x275EFCu: goto label_275efc;
            case 0x275F24u: goto label_275f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275F50u;
}

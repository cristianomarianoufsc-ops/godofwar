#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDB68
// Address: 0x1cdb68 - 0x1cdfe0
void sub_001CDB68_0x1cdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDB68_0x1cdb68");
#endif

    ctx->pc = 0x1cdb68u;

    // 0x1cdb68: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cdb6c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1cdb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1cdb70: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1cdb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1cdb74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cdb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cdb78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb7c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1cdb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1cdb80: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1cdb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1cdb84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cdb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb88: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1cdb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1cdb8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cdb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb90: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1cdb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1cdb94: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cdb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1cdb98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1cdb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1cdb9c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1CDB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDBA4u);
    ctx->pc = 0x1CDBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB9Cu;
            // 0x1cdba0: 0x24a53218  addiu       $a1, $a1, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBA4u; }
        if (ctx->pc != 0x1CDBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBA4u; }
        if (ctx->pc != 0x1CDBA4u) { return; }
    }
    ctx->pc = 0x1CDBA4u;
    // 0x1cdba4: 0xc061f3a  jal         func_187CE8
    ctx->pc = 0x1CDBA4u;
    SET_GPR_U32(ctx, 31, 0x1CDBACu);
    ctx->pc = 0x1CDBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBA4u;
            // 0x1cdba8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE8u;
    if (runtime->hasFunction(0x187CE8u)) {
        auto targetFn = runtime->lookupFunction(0x187CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBACu; }
        if (ctx->pc != 0x1CDBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187CE8_0x187ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBACu; }
        if (ctx->pc != 0x1CDBACu) { return; }
    }
    ctx->pc = 0x1CDBACu;
    // 0x1cdbac: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1cdbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1cdbb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDBB0u;
    {
        const bool branch_taken_0x1cdbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBB0u;
            // 0x1cdbb4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbb0) {
            ctx->pc = 0x1CDBC0u;
            goto label_1cdbc0;
        }
    }
    ctx->pc = 0x1CDBB8u;
    // 0x1cdbb8: 0xc074afa  jal         func_1D2BE8
    ctx->pc = 0x1CDBB8u;
    SET_GPR_U32(ctx, 31, 0x1CDBC0u);
    ctx->pc = 0x1D2BE8u;
    if (runtime->hasFunction(0x1D2BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1D2BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBC0u; }
        if (ctx->pc != 0x1CDBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2BE8_0x1d2be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBC0u; }
        if (ctx->pc != 0x1CDBC0u) { return; }
    }
    ctx->pc = 0x1CDBC0u;
label_1cdbc0:
    // 0x1cdbc0: 0xa6900080  sh          $s0, 0x80($s4)
    ctx->pc = 0x1cdbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 16));
    // 0x1cdbc4: 0xc074b2c  jal         func_1D2CB0
    ctx->pc = 0x1CDBC4u;
    SET_GPR_U32(ctx, 31, 0x1CDBCCu);
    ctx->pc = 0x1CDBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBC4u;
            // 0x1cdbc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2CB0u;
    if (runtime->hasFunction(0x1D2CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D2CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBCCu; }
        if (ctx->pc != 0x1CDBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2CB0_0x1d2cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBCCu; }
        if (ctx->pc != 0x1CDBCCu) { return; }
    }
    ctx->pc = 0x1CDBCCu;
    // 0x1cdbcc: 0x144000da  bnez        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1CDBCCu;
    {
        const bool branch_taken_0x1cdbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBCCu;
            // 0x1cdbd0: 0xae820030  sw          $v0, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbcc) {
            ctx->pc = 0x1CDF38u;
            goto label_1cdf38;
        }
    }
    ctx->pc = 0x1CDBD4u;
    // 0x1cdbd4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1CDBD4u;
    SET_GPR_U32(ctx, 31, 0x1CDBDCu);
    ctx->pc = 0x1CDBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBD4u;
            // 0x1cdbd8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBDCu; }
        if (ctx->pc != 0x1CDBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBDCu; }
        if (ctx->pc != 0x1CDBDCu) { return; }
    }
    ctx->pc = 0x1CDBDCu;
    // 0x1cdbdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe0: 0x122000d5  beqz        $s1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1CDBE0u;
    {
        const bool branch_taken_0x1cdbe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBE0u;
            // 0x1cdbe4: 0xae910030  sw          $s1, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe0) {
            ctx->pc = 0x1CDF38u;
            goto label_1cdf38;
        }
    }
    ctx->pc = 0x1CDBE8u;
    // 0x1cdbe8: 0x3c047149  lui         $a0, 0x7149
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29001 << 16));
    // 0x1cdbec: 0x3484f2ca  ori         $a0, $a0, 0xF2CA
    ctx->pc = 0x1cdbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62154);
    // 0x1cdbf0: 0x3c057149  lui         $a1, 0x7149
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29001 << 16));
    // 0x1cdbf4: 0x34a5f2ca  ori         $a1, $a1, 0xF2CA
    ctx->pc = 0x1cdbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62154);
    // 0x1cdbf8: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1cdbf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cdbfc: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cdc00: 0x3c057149  lui         $a1, 0x7149
    ctx->pc = 0x1cdc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29001 << 16));
    // 0x1cdc04: 0x34a5f2ca  ori         $a1, $a1, 0xF2CA
    ctx->pc = 0x1cdc04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62154);
    // 0x1cdc08: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1cdc08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1cdc0c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cdc0cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cdc10: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1cdc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1cdc14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1cdc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1cdc18: 0x3c05f149  lui         $a1, 0xF149
    ctx->pc = 0x1cdc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61769 << 16));
    // 0x1cdc1c: 0x34a5f2ca  ori         $a1, $a1, 0xF2CA
    ctx->pc = 0x1cdc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62154);
    // 0x1cdc20: 0x3c06f149  lui         $a2, 0xF149
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61769 << 16));
    // 0x1cdc24: 0x34c6f2ca  ori         $a2, $a2, 0xF2CA
    ctx->pc = 0x1cdc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62154);
    // 0x1cdc28: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x1cdc28u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1cdc2c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1cdc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cdc30: 0x3c06f149  lui         $a2, 0xF149
    ctx->pc = 0x1cdc30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61769 << 16));
    // 0x1cdc34: 0x34c6f2ca  ori         $a2, $a2, 0xF2CA
    ctx->pc = 0x1cdc34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62154);
    // 0x1cdc38: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x1cdc38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1cdc3c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1cdc40: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cdc40u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cdc44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc48: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cdc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cdc4c: 0x24753d28  addiu       $s5, $v1, 0x3D28
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15656));
    // 0x1cdc50: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1cdc54: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cdc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1cdc58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1cdc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1cdc5c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1cdc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1cdc60: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDC60u;
    {
        const bool branch_taken_0x1cdc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC60u;
            // 0x1cdc64: 0xae330010  sw          $s3, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc60) {
            ctx->pc = 0x1CDCA0u;
            goto label_1cdca0;
        }
    }
    ctx->pc = 0x1CDC68u;
    // 0x1cdc68: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1cdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1cdc6c: 0x0  nop
    ctx->pc = 0x1cdc6cu;
    // NOP
label_1cdc70:
    // 0x1cdc70: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1cdc74: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x1cdc74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1cdc78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cdc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc7c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1CDC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC84u);
    ctx->pc = 0x1CDC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC7Cu;
            // 0x1cdc80: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC84u; }
        if (ctx->pc != 0x1CDC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC84u; }
        if (ctx->pc != 0x1CDC84u) { return; }
    }
    ctx->pc = 0x1CDC84u;
    // 0x1cdc84: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1CDC84u;
    {
        const bool branch_taken_0x1cdc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC84u;
            // 0x1cdc88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc84) {
            ctx->pc = 0x1CDF60u;
            goto label_1cdf60;
        }
    }
    ctx->pc = 0x1CDC8Cu;
    // 0x1cdc8c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1cdc90: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cdc94: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cdc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdc98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CDC98u;
    {
        const bool branch_taken_0x1cdc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC98u;
            // 0x1cdc9c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc98) {
            ctx->pc = 0x1CDC70u;
            runtime->cooperativeGuestYield();
            goto label_1cdc70;
        }
    }
    ctx->pc = 0x1CDCA0u;
label_1cdca0:
    // 0x1cdca0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdca4:
    // 0x1cdca4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cdca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cdca8: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1cdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1cdcac: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cdcb0: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cdcb4: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CDCB4u;
    {
        const bool branch_taken_0x1cdcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCB4u;
            // 0x1cdcb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcb4) {
            ctx->pc = 0x1CDE34u;
            goto label_1cde34;
        }
    }
    ctx->pc = 0x1CDCBCu;
    // 0x1cdcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cdcc0:
    // 0x1cdcc0: 0xc091064  jal         func_244190
    ctx->pc = 0x1CDCC0u;
    SET_GPR_U32(ctx, 31, 0x1CDCC8u);
    ctx->pc = 0x1CDCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCC0u;
            // 0x1cdcc4: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x244190u;
    if (runtime->hasFunction(0x244190u)) {
        auto targetFn = runtime->lookupFunction(0x244190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCC8u; }
        if (ctx->pc != 0x1CDCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244190_0x244190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCC8u; }
        if (ctx->pc != 0x1CDCC8u) { return; }
    }
    ctx->pc = 0x1CDCC8u;
    // 0x1cdcc8: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1cdcc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdccc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1cdcccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cdcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdcd4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cdcd4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdcd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdcdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdcdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdce0: 0x0  nop
    ctx->pc = 0x1cdce0u;
    // NOP
    // 0x1cdce4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDCE4u;
    {
        const bool branch_taken_0x1cdce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCE4u;
            // 0x1cdce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce4) {
            ctx->pc = 0x1CDCF0u;
            goto label_1cdcf0;
        }
    }
    ctx->pc = 0x1CDCECu;
    // 0x1cdcec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdcf0:
    // 0x1cdcf0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDCF0u;
    {
        const bool branch_taken_0x1cdcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcf0) {
            ctx->pc = 0x1CDCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCF0u;
            // 0x1cdcf4: 0xdba10040  lqc2        $vf1, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD04u;
            goto label_1cdd04;
        }
    }
    ctx->pc = 0x1CDCF8u;
    // 0x1cdcf8: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x1cdcf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdcfc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1cdcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdd00: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cdd00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cdd04:
    // 0x1cdd04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd08: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cdd08u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdd0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cdd0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdd10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdd14: 0x0  nop
    ctx->pc = 0x1cdd14u;
    // NOP
    // 0x1cdd18: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDD18u;
    {
        const bool branch_taken_0x1cdd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdd18) {
            ctx->pc = 0x1CDD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD18u;
            // 0x1cdd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD20u;
            goto label_1cdd20;
        }
    }
    ctx->pc = 0x1CDD20u;
label_1cdd20:
    // 0x1cdd20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDD20u;
    {
        const bool branch_taken_0x1cdd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD20u;
            // 0x1cdd24: 0xdba20030  lqc2        $vf2, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd20) {
            ctx->pc = 0x1CDD34u;
            goto label_1cdd34;
        }
    }
    ctx->pc = 0x1CDD28u;
    // 0x1cdd28: 0x4b030040  vaddx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x1cdd28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd2c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cdd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdd30: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1cdd30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdd34:
    // 0x1cdd34: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1cdd34u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cdd38: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x1cdd38u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cdd3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdd40: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cdd40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cdd44: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1cdd44u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cdd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdd50: 0x0  nop
    ctx->pc = 0x1cdd50u;
    // NOP
    // 0x1cdd54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDD54u;
    {
        const bool branch_taken_0x1cdd54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD54u;
            // 0x1cdd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd54) {
            ctx->pc = 0x1CDD60u;
            goto label_1cdd60;
        }
    }
    ctx->pc = 0x1CDD5Cu;
    // 0x1cdd5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd60:
    // 0x1cdd60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDD60u;
    {
        const bool branch_taken_0x1cdd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd60) {
            ctx->pc = 0x1CDD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD60u;
            // 0x1cdd64: 0xdba20040  lqc2        $vf2, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD74u;
            goto label_1cdd74;
        }
    }
    ctx->pc = 0x1CDD68u;
    // 0x1cdd68: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1cdd68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd6c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1cdd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cdd70: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cdd70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cdd74:
    // 0x1cdd74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd78: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1cdd78u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cdd7c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1cdd7cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cdd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdd84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdd88: 0x0  nop
    ctx->pc = 0x1cdd88u;
    // NOP
    // 0x1cdd8c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDD8Cu;
    {
        const bool branch_taken_0x1cdd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdd8c) {
            ctx->pc = 0x1CDD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD8Cu;
            // 0x1cdd90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD94u;
            goto label_1cdd94;
        }
    }
    ctx->pc = 0x1CDD94u;
label_1cdd94:
    // 0x1cdd94: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDD94u;
    {
        const bool branch_taken_0x1cdd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd94) {
            ctx->pc = 0x1CDD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD94u;
            // 0x1cdd98: 0xdba20030  lqc2        $vf2, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDDA8u;
            goto label_1cdda8;
        }
    }
    ctx->pc = 0x1CDD9Cu;
    // 0x1cdd9c: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1cdd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cdda0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cdda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cdda4: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1cdda4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdda8:
    // 0x1cdda8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1cdda8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cddac: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x1cddacu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1cddb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cddb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cddb4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cddb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cddb8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1cddb8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1cddbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cddc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cddc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cddc4: 0x0  nop
    ctx->pc = 0x1cddc4u;
    // NOP
    // 0x1cddc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDDC8u;
    {
        const bool branch_taken_0x1cddc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDC8u;
            // 0x1cddcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddc8) {
            ctx->pc = 0x1CDDD4u;
            goto label_1cddd4;
        }
    }
    ctx->pc = 0x1CDDD0u;
    // 0x1cddd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cddd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cddd4:
    // 0x1cddd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDDD4u;
    {
        const bool branch_taken_0x1cddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd4) {
            ctx->pc = 0x1CDDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDD4u;
            // 0x1cddd8: 0xdba20040  lqc2        $vf2, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDDE8u;
            goto label_1cdde8;
        }
    }
    ctx->pc = 0x1CDDDCu;
    // 0x1cdddc: 0x4a430082  vaddz.z     $vf2, $vf0, $vf3z
    ctx->pc = 0x1cdddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cdde0: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1cdde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cdde4: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cdde4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cdde8:
    // 0x1cdde8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cddec: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1cddecu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cddf0: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1cddf0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1cddf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cddf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cddf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cddfc: 0x0  nop
    ctx->pc = 0x1cddfcu;
    // NOP
    // 0x1cde00: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CDE00u;
    {
        const bool branch_taken_0x1cde00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cde00) {
            ctx->pc = 0x1CDE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE00u;
            // 0x1cde04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE08u;
            goto label_1cde08;
        }
    }
    ctx->pc = 0x1CDE08u;
label_1cde08:
    // 0x1cde08: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDE08u;
    {
        const bool branch_taken_0x1cde08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde08) {
            ctx->pc = 0x1CDE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE08u;
            // 0x1cde0c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE1Cu;
            goto label_1cde1c;
        }
    }
    ctx->pc = 0x1CDE10u;
    // 0x1cde10: 0x4a430082  vaddz.z     $vf2, $vf0, $vf3z
    ctx->pc = 0x1cde10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cde14: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1cde14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cde18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1cde1c:
    // 0x1cde1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cde1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cde20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cde24: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x1cde24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cde28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1cde28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cde2c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1CDE2Cu;
    {
        const bool branch_taken_0x1cde2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE2Cu;
            // 0x1cde30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde2c) {
            ctx->pc = 0x1CDCC0u;
            runtime->cooperativeGuestYield();
            goto label_1cdcc0;
        }
    }
    ctx->pc = 0x1CDE34u;
label_1cde34:
    // 0x1cde34: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cde34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cde38: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cde38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cde3c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1cde3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde40: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1cde40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cde44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cde44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1cde48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cde48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cde4c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cde4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde50: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1cde50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cde54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cde54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde58: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cde5c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cde60: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x1cde60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cde64: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CDE64u;
    {
        const bool branch_taken_0x1cde64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE64u;
            // 0x1cde68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde64) {
            ctx->pc = 0x1CDED8u;
            goto label_1cded8;
        }
    }
    ctx->pc = 0x1CDE6Cu;
    // 0x1cde6c: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1cde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
label_1cde70:
    // 0x1cde70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cde70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde74: 0xc091064  jal         func_244190
    ctx->pc = 0x1CDE74u;
    SET_GPR_U32(ctx, 31, 0x1CDE7Cu);
    ctx->pc = 0x1CDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE74u;
            // 0x1cde78: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x244190u;
    if (runtime->hasFunction(0x244190u)) {
        auto targetFn = runtime->lookupFunction(0x244190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE7Cu; }
        if (ctx->pc != 0x1CDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244190_0x244190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE7Cu; }
        if (ctx->pc != 0x1CDE7Cu) { return; }
    }
    ctx->pc = 0x1CDE7Cu;
    // 0x1cde7c: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1cde7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cde80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cde80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cde84: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1cde84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde88: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1cde88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde8c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cde8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cde90: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cde90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cde94: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde98: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cde98u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cde9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cde9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdea0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdea4: 0x0  nop
    ctx->pc = 0x1cdea4u;
    // NOP
    // 0x1cdea8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDEA8u;
    {
        const bool branch_taken_0x1cdea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdea8) {
            ctx->pc = 0x1CDEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEA8u;
            // 0x1cdeac: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDEC0u;
            goto label_1cdec0;
        }
    }
    ctx->pc = 0x1CDEB0u;
    // 0x1cdeb0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1cdeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1cdeb4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1cdeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cdebc: 0x0  nop
    ctx->pc = 0x1cdebcu;
    // NOP
label_1cdec0:
    // 0x1cdec0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cdec4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cdec8: 0x9442002c  lhu         $v0, 0x2C($v0)
    ctx->pc = 0x1cdec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cdecc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1cdeccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cded0: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CDED0u;
    {
        const bool branch_taken_0x1cded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cded0) {
            ctx->pc = 0x1CDED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDED0u;
            // 0x1cded4: 0xfba30060  sqc2        $vf3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE70u;
            runtime->cooperativeGuestYield();
            goto label_1cde70;
        }
    }
    ctx->pc = 0x1CDED8u;
label_1cded8:
    // 0x1cded8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1cded8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cdedc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cdee0: 0x70041f89  pexew       $v1, $a0
    ctx->pc = 0x1cdee0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1cdee4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1cdee8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1cdee8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cdeec: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1cdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1cdef0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x1cdef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdef4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cdef8: 0x46020084  c1          0x20084
    ctx->pc = 0x1cdef8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cdefc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1cdefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cdf00: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x1cdf00u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1cdf04: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1cdf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1cdf08: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1cdf0c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1cdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1cdf10: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1cdf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cdf14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cdf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cdf18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cdf1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cdf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf20: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cdf24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdf28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cdf2c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1cdf2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cdf30: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1cdf30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1cdf34: 0x0  nop
    ctx->pc = 0x1cdf34u;
    // NOP
label_1cdf38:
    // 0x1cdf38: 0xc074ad4  jal         func_1D2B50
    ctx->pc = 0x1CDF38u;
    SET_GPR_U32(ctx, 31, 0x1CDF40u);
    ctx->pc = 0x1CDF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF38u;
            // 0x1cdf3c: 0x8e840030  lw          $a0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B50u;
    if (runtime->hasFunction(0x1D2B50u)) {
        auto targetFn = runtime->lookupFunction(0x1D2B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF40u; }
        if (ctx->pc != 0x1CDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001d2b50_0x1d2b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF40u; }
        if (ctx->pc != 0x1CDF40u) { return; }
    }
    ctx->pc = 0x1CDF40u;
    // 0x1cdf40: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cdf44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdf48: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdf4c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cdf50: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDF50u;
    {
        const bool branch_taken_0x1cdf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CDF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF50u;
            // 0x1cdf54: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf50) {
            ctx->pc = 0x1CDF70u;
            goto label_1cdf70;
        }
    }
    ctx->pc = 0x1CDF58u;
    // 0x1cdf58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CDF58u;
    {
        const bool branch_taken_0x1cdf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF58u;
            // 0x1cdf5c: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf58) {
            ctx->pc = 0x1CDF8Cu;
            goto label_1cdf8c;
        }
    }
    ctx->pc = 0x1CDF60u;
label_1cdf60:
    // 0x1cdf60: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1cdf64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cdf68: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x1CDF68u;
    {
        const bool branch_taken_0x1cdf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF68u;
            // 0x1cdf6c: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf68) {
            ctx->pc = 0x1CDCA4u;
            runtime->cooperativeGuestYield();
            goto label_1cdca4;
        }
    }
    ctx->pc = 0x1CDF70u;
label_1cdf70:
    // 0x1cdf70: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cdf70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cdf74: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cdf78: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDF78u;
    {
        const bool branch_taken_0x1cdf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CDF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF78u;
            // 0x1cdf7c: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf78) {
            ctx->pc = 0x1CDF8Cu;
            goto label_1cdf8c;
        }
    }
    ctx->pc = 0x1CDF80u;
    // 0x1cdf80: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CDF80u;
    SET_GPR_U32(ctx, 31, 0x1CDF88u);
    ctx->pc = 0x1CDF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF80u;
            // 0x1cdf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF88u; }
        if (ctx->pc != 0x1CDF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF88u; }
        if (ctx->pc != 0x1CDF88u) { return; }
    }
    ctx->pc = 0x1CDF88u;
    // 0x1cdf88: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cdf8c:
    // 0x1cdf8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cdf90: 0x78500030  lq          $s0, 0x30($v0)
    ctx->pc = 0x1cdf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cdf94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cdf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cdf98: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1cdf98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1cdf9c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1cdfa0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CDFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDFA8u);
        ctx->pc = 0x1CDFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFA0u;
            // 0x1cdfa4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CDFA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDBC0u: goto label_1cdbc0;
            case 0x1CDC70u: goto label_1cdc70;
            case 0x1CDCA0u: goto label_1cdca0;
            case 0x1CDCA4u: goto label_1cdca4;
            case 0x1CDCC0u: goto label_1cdcc0;
            case 0x1CDCF0u: goto label_1cdcf0;
            case 0x1CDD04u: goto label_1cdd04;
            case 0x1CDD20u: goto label_1cdd20;
            case 0x1CDD34u: goto label_1cdd34;
            case 0x1CDD60u: goto label_1cdd60;
            case 0x1CDD74u: goto label_1cdd74;
            case 0x1CDD94u: goto label_1cdd94;
            case 0x1CDDA8u: goto label_1cdda8;
            case 0x1CDDD4u: goto label_1cddd4;
            case 0x1CDDE8u: goto label_1cdde8;
            case 0x1CDE08u: goto label_1cde08;
            case 0x1CDE1Cu: goto label_1cde1c;
            case 0x1CDE34u: goto label_1cde34;
            case 0x1CDE70u: goto label_1cde70;
            case 0x1CDEC0u: goto label_1cdec0;
            case 0x1CDED8u: goto label_1cded8;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF60u: goto label_1cdf60;
            case 0x1CDF70u: goto label_1cdf70;
            case 0x1CDF8Cu: goto label_1cdf8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFA8u; }
            if (ctx->pc != 0x1CDFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CDFA8u;
    // 0x1cdfa8: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1cdfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1cdfac: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1cdfacu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1cdfb0: 0xc074ce4  jal         func_1D3390
    ctx->pc = 0x1CDFB0u;
    SET_GPR_U32(ctx, 31, 0x1CDFB8u);
    ctx->pc = 0x1CDFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFB0u;
            // 0x1cdfb4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3390u;
    if (runtime->hasFunction(0x1D3390u)) {
        auto targetFn = runtime->lookupFunction(0x1D3390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFB8u; }
        if (ctx->pc != 0x1CDFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3390_0x1d3390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFB8u; }
        if (ctx->pc != 0x1CDFB8u) { return; }
    }
    ctx->pc = 0x1CDFB8u;
    // 0x1cdfb8: 0xa6820070  sh          $v0, 0x70($s4)
    ctx->pc = 0x1cdfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cdfbc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1cdfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cdfc0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1cdfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdfc4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1cdfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdfc8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1cdfc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cdfcc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1cdfccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cdfd0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1cdfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdfd4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cdfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFD8u;
            // 0x1cdfdc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDBC0u: goto label_1cdbc0;
            case 0x1CDC70u: goto label_1cdc70;
            case 0x1CDCA0u: goto label_1cdca0;
            case 0x1CDCA4u: goto label_1cdca4;
            case 0x1CDCC0u: goto label_1cdcc0;
            case 0x1CDCF0u: goto label_1cdcf0;
            case 0x1CDD04u: goto label_1cdd04;
            case 0x1CDD20u: goto label_1cdd20;
            case 0x1CDD34u: goto label_1cdd34;
            case 0x1CDD60u: goto label_1cdd60;
            case 0x1CDD74u: goto label_1cdd74;
            case 0x1CDD94u: goto label_1cdd94;
            case 0x1CDDA8u: goto label_1cdda8;
            case 0x1CDDD4u: goto label_1cddd4;
            case 0x1CDDE8u: goto label_1cdde8;
            case 0x1CDE08u: goto label_1cde08;
            case 0x1CDE1Cu: goto label_1cde1c;
            case 0x1CDE34u: goto label_1cde34;
            case 0x1CDE70u: goto label_1cde70;
            case 0x1CDEC0u: goto label_1cdec0;
            case 0x1CDED8u: goto label_1cded8;
            case 0x1CDF38u: goto label_1cdf38;
            case 0x1CDF60u: goto label_1cdf60;
            case 0x1CDF70u: goto label_1cdf70;
            case 0x1CDF8Cu: goto label_1cdf8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDFE0u;
}

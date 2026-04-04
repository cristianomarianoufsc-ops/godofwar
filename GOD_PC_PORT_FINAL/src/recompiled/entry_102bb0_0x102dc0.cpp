#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_102bb0
// Address: 0x102bb0 - 0x102dc0
void entry_102bb0_0x102dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_102bb0_0x102dc0");
#endif

    ctx->pc = 0x102bb0u;

    // 0x102bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x102bb4: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x102bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x102bb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x102bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x102bbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x102bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x102bc0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x102bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x102bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x102bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x102bcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x102bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x102bd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x102bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x102bd4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x102bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x102bd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x102bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x102bdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102be0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x102be4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102be8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x102be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x102bec: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x102becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 3));
    // 0x102bf0: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x102bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x102bf4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x102BF4u;
    SET_GPR_U32(ctx, 31, 0x102BFCu);
    ctx->pc = 0x102BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102BF4u;
            // 0x102bf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102BFCu; }
        if (ctx->pc != 0x102BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102BFCu; }
        if (ctx->pc != 0x102BFCu) { return; }
    }
    ctx->pc = 0x102BFCu;
    // 0x102bfc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x102c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c04: 0x8e051120  lw          $a1, 0x1120($s0)
    ctx->pc = 0x102c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4384)));
    // 0x102c08: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x102C08u;
    SET_GPR_U32(ctx, 31, 0x102C10u);
    ctx->pc = 0x102C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102C08u;
            // 0x102c0c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C10u; }
        if (ctx->pc != 0x102C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C10u; }
        if (ctx->pc != 0x102C10u) { return; }
    }
    ctx->pc = 0x102C10u;
    // 0x102c10: 0x8e0e000c  lw          $t6, 0xC($s0)
    ctx->pc = 0x102c10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x102c14: 0x26140014  addiu       $s4, $s0, 0x14
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x102c18: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102c1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c20: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x102c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x102c24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102c28: 0x2458ffff  addiu       $t8, $v0, -0x1
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102c2c: 0x3071818  mult        $v1, $t8, $a3
    ctx->pc = 0x102c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x102c30: 0x8e021128  lw          $v0, 0x1128($s0)
    ctx->pc = 0x102c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4392)));
    // 0x102c34: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x102c34u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c38: 0xae18000c  sw          $t8, 0xC($s0)
    ctx->pc = 0x102c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 24));
    // 0x102c3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x102c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x102c40: 0xae021128  sw          $v0, 0x1128($s0)
    ctx->pc = 0x102c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4392), GPR_U32(ctx, 2));
    // 0x102c44: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x102c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x102c48: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x102c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x102c4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102c50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x102c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x102c54: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x102c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x102c58: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x102c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x102c5c: 0x18e00049  blez        $a3, . + 4 + (0x49 << 2)
    ctx->pc = 0x102C5Cu;
    {
        const bool branch_taken_0x102c5c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x102C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C5Cu;
            // 0x102c60: 0xae021120  sw          $v0, 0x1120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c5c) {
            ctx->pc = 0x102D84u;
            goto label_102d84;
        }
    }
    ctx->pc = 0x102C64u;
    // 0x102c64: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x102c64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c6c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x102c6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c70: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x102c70u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x102c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c7c: 0x0  nop
    ctx->pc = 0x102c7cu;
    // NOP
label_102c80:
    // 0x102c80: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x102c84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c88: 0x19c0001c  blez        $t6, . + 4 + (0x1C << 2)
    ctx->pc = 0x102C88u;
    {
        const bool branch_taken_0x102c88 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x102C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102C88u;
            // 0x102c8c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c88) {
            ctx->pc = 0x102CFCu;
            goto label_102cfc;
        }
    }
    ctx->pc = 0x102C90u;
    // 0x102c90: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x102c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x102c94: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x102c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c98: 0x545821  addu        $t3, $v0, $s4
    ctx->pc = 0x102c98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x102c9c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x102c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ca0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ca4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ca8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x102ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cac: 0x0  nop
    ctx->pc = 0x102cacu;
    // NOP
label_102cb0:
    // 0x102cb0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x102cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102cb4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x102cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x102cb8: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x102cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x102cbc: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x102cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x102cc0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x102cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x102cc4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x102cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102cc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x102CC8u;
    {
        const bool branch_taken_0x102cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102CC8u;
            // 0x102ccc: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cc8) {
            ctx->pc = 0x102CDCu;
            goto label_102cdc;
        }
    }
    ctx->pc = 0x102CD0u;
    // 0x102cd0: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x102cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x102cd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x102cd8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_102cdc:
    // 0x102cdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102ce0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x102ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x102ce4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x102ce8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x102ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x102cec: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x102cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x102cf0: 0x8e102a  slt         $v0, $a0, $t6
    ctx->pc = 0x102cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x102cf4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x102CF4u;
    {
        const bool branch_taken_0x102cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102CF4u;
            // 0x102cf8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cf4) {
            ctx->pc = 0x102CB0u;
            runtime->cooperativeGuestYield();
            goto label_102cb0;
        }
    }
    ctx->pc = 0x102CFCu;
label_102cfc:
    // 0x102cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102d00: 0x2707ffff  addiu       $a3, $t8, -0x1
    ctx->pc = 0x102d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x102d04: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x102d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102d08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x102D08u;
    {
        const bool branch_taken_0x102d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D08u;
            // 0x102d0c: 0x25850004  addiu       $a1, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d08) {
            ctx->pc = 0x102D58u;
            goto label_102d58;
        }
    }
    ctx->pc = 0x102D10u;
    // 0x102d10: 0x25a30040  addiu       $v1, $t5, 0x40
    ctx->pc = 0x102d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x102d14: 0x0  nop
    ctx->pc = 0x102d14u;
    // NOP
label_102d18:
    // 0x102d18: 0xd861ffc0  lqc2        $vf1, -0x40($v1)
    ctx->pc = 0x102d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x102d1c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x102d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102d20: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x102d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102d24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x102d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x102d2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x102d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x102d30: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x102d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102d34: 0xf861ffe0  sqc2        $vf1, -0x20($v1)
    ctx->pc = 0x102d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967264), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d38: 0xf861fff0  sqc2        $vf1, -0x10($v1)
    ctx->pc = 0x102d38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967280), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102d3c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x102d40: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x102d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x102d44: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x102d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x102d48: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x102d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102d4c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x102D4Cu;
    {
        const bool branch_taken_0x102d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D4Cu;
            // 0x102d50: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d4c) {
            ctx->pc = 0x102D18u;
            runtime->cooperativeGuestYield();
            goto label_102d18;
        }
    }
    ctx->pc = 0x102D54u;
    // 0x102d54: 0x0  nop
    ctx->pc = 0x102d54u;
    // NOP
label_102d58:
    // 0x102d58: 0xe1140  sll         $v0, $t6, 5
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x102d5c: 0x191940  sll         $v1, $t9, 5
    ctx->pc = 0x102d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 5));
    // 0x102d60: 0xe2080  sll         $a0, $t6, 2
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x102d64: 0x192880  sll         $a1, $t9, 2
    ctx->pc = 0x102d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x102d68: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x102d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x102d6c: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x102d6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x102d70: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x102d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x102d74: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x102d78: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x102d78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x102d7c: 0x15e0ffc0  bnez        $t7, . + 4 + (-0x40 << 2)
    ctx->pc = 0x102D7Cu;
    {
        const bool branch_taken_0x102d7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x102D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102D7Cu;
            // 0x102d80: 0x2398821  addu        $s1, $s1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d7c) {
            ctx->pc = 0x102C80u;
            runtime->cooperativeGuestYield();
            goto label_102c80;
        }
    }
    ctx->pc = 0x102D84u;
label_102d84:
    // 0x102d84: 0xc600113c  lwc1        $f0, 0x113C($s0)
    ctx->pc = 0x102d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102d88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x102d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x102d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x102d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102d90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x102d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102d94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x102d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x102d98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x102d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x102d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102da0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x102da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102da4: 0xe600113c  swc1        $f0, 0x113C($s0)
    ctx->pc = 0x102da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
    // 0x102da8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x102da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102db0: 0x3e00008  jr          $ra
    ctx->pc = 0x102DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102DB0u;
            // 0x102db4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102C80u: goto label_102c80;
            case 0x102CB0u: goto label_102cb0;
            case 0x102CDCu: goto label_102cdc;
            case 0x102CFCu: goto label_102cfc;
            case 0x102D18u: goto label_102d18;
            case 0x102D58u: goto label_102d58;
            case 0x102D84u: goto label_102d84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102DB8u;
    // 0x102db8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x102db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x102dbc: 0x0  nop
    ctx->pc = 0x102dbcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156C68
// Address: 0x156c68 - 0x157100
void sub_00156C68_0x156c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156C68_0x156c68");
#endif

    ctx->pc = 0x156c68u;

    // 0x156c68: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x156c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x156c6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x156c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x156c70: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x156c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x156c74: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x156c78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c7c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x156c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x156c80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x156c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x156c84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x156c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c88: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x156c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x156c8c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x156c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x156c90: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x156c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x156c94: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x156c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x156c98: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x156c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x156c9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x156c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x156ca0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x156ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x156ca4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x156ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x156ca8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x156ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x156cac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x156CACu;
    SET_GPR_U32(ctx, 31, 0x156CB4u);
    ctx->pc = 0x156CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156CACu;
            // 0x156cb0: 0x8e300078  lw          $s0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156CB4u; }
        if (ctx->pc != 0x156CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156CB4u; }
        if (ctx->pc != 0x156CB4u) { return; }
    }
    ctx->pc = 0x156CB4u;
    // 0x156cb4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x156cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x156cb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cbc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x156CBCu;
    SET_GPR_U32(ctx, 31, 0x156CC4u);
    ctx->pc = 0x156CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156CBCu;
            // 0x156cc0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156CC4u; }
        if (ctx->pc != 0x156CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156CC4u; }
        if (ctx->pc != 0x156CC4u) { return; }
    }
    ctx->pc = 0x156CC4u;
    // 0x156cc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x156cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x156cc8: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x156cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x156ccc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x156cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156cd0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x156cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x156cd4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x156cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x156cd8: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x156cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
    // 0x156cdc: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x156cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x156ce0: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x156ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x156ce4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x156ce8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x156cec: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x156cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
    // 0x156cf0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x156cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x156cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cf8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x156CF8u;
    {
        const bool branch_taken_0x156cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CF8u;
            // 0x156cfc: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cf8) {
            ctx->pc = 0x156D24u;
            goto label_156d24;
        }
    }
    ctx->pc = 0x156D00u;
    // 0x156d00: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x156d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x156d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_156d08:
    // 0x156d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x156d10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x156d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x156d14: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x156d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x156d18: 0x0  nop
    ctx->pc = 0x156d18u;
    // NOP
    // 0x156d1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156D1Cu;
    {
        const bool branch_taken_0x156d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D1Cu;
            // 0x156d20: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d1c) {
            ctx->pc = 0x156D08u;
            runtime->cooperativeGuestYield();
            goto label_156d08;
        }
    }
    ctx->pc = 0x156D24u;
label_156d24:
    // 0x156d24: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x156d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x156d28: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x156d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x156d2c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x156d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x156d30: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x156d34: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x156d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x156d38: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x156d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x156d3c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x156d40: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x156D40u;
    {
        const bool branch_taken_0x156d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D40u;
            // 0x156d44: 0x8e260024  lw          $a2, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d40) {
            ctx->pc = 0x1570D0u;
            goto label_1570d0;
        }
    }
    ctx->pc = 0x156D48u;
    // 0x156d48: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x156d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x156d4c: 0x0  nop
    ctx->pc = 0x156d4cu;
    // NOP
label_156d50:
    // 0x156d50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x156d54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156d58: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x156d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x156d5c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x156d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x156d60: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x156d64: 0x108000d1  beqz        $a0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x156D64u;
    {
        const bool branch_taken_0x156d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D64u;
            // 0x156d68: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d64) {
            ctx->pc = 0x1570ACu;
            goto label_1570ac;
        }
    }
    ctx->pc = 0x156D6Cu;
    // 0x156d6c: 0x0  nop
    ctx->pc = 0x156d6cu;
    // NOP
label_156d70:
    // 0x156d70: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x156d74: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x156d78: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x156d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x156d7c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x156d80: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x156d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x156d84: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x156d88: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x156d8c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x156d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x156d90: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x156d90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x156d94: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x156D94u;
    {
        const bool branch_taken_0x156d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156D94u;
            // 0x156d98: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d94) {
            ctx->pc = 0x157094u;
            goto label_157094;
        }
    }
    ctx->pc = 0x156D9Cu;
    // 0x156d9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_156da0:
    // 0x156da0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x156da0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x156da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156da8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156dac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x156dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x156db0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x156db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x156db4: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x156db4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x156db8: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x156db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x156dbc: 0x10c000ae  beqz        $a2, . + 4 + (0xAE << 2)
    ctx->pc = 0x156DBCu;
    {
        const bool branch_taken_0x156dbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DBCu;
            // 0x156dc0: 0xafa6002c  sw          $a2, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156dbc) {
            ctx->pc = 0x157078u;
            goto label_157078;
        }
    }
    ctx->pc = 0x156DC4u;
    // 0x156dc4: 0x1e4880  sll         $t1, $fp, 2
    ctx->pc = 0x156dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_156dc8:
    // 0x156dc8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x156dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x156dcc: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x156dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x156dd0: 0x2c91021  addu        $v0, $s6, $t1
    ctx->pc = 0x156dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x156dd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dd8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x156ddc: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x156ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x156de0: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x156de0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x156de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156dec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x156decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156df0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x156df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x156df4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x156df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x156df8: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x156DF8u;
    {
        const bool branch_taken_0x156df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DF8u;
            // 0x156dfc: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156df8) {
            ctx->pc = 0x157064u;
            goto label_157064;
        }
    }
    ctx->pc = 0x156E00u;
    // 0x156e00: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x156e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x156e04: 0x0  nop
    ctx->pc = 0x156e04u;
    // NOP
label_156e08:
    // 0x156e08: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x156e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x156e0c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x156e10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x156e14: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x156e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x156e18: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x156e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x156e1c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x156e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x156e20: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x156E20u;
    {
        const bool branch_taken_0x156e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E20u;
            // 0x156e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e20) {
            ctx->pc = 0x157048u;
            goto label_157048;
        }
    }
    ctx->pc = 0x156E28u;
    // 0x156e28: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x156e28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156e2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156e30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156E30u;
    {
        const bool branch_taken_0x156e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E30u;
            // 0x156e34: 0xafa9003c  sw          $t1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e30) {
            ctx->pc = 0x156E50u;
            goto label_156e50;
        }
    }
    ctx->pc = 0x156E38u;
    // 0x156e38: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x156e3c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156e40: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x156e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x156e44: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x156e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x156e48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x156e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156e4c: 0x0  nop
    ctx->pc = 0x156e4cu;
    // NOP
label_156e50:
    // 0x156e50: 0x92490019  lbu         $t1, 0x19($s2)
    ctx->pc = 0x156e50u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x156e54: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x156e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156e58: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x156e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x156e5c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x156e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x156e60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x156e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156e68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x156e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x156e6c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x156e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x156e70: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x156e74: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x156e78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x156e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x156e7c: 0x8fa9003c  lw          $t1, 0x3C($sp)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x156e80: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x156e80u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156e84: 0x2662821  addu        $a1, $s3, $a2
    ctx->pc = 0x156e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x156e88: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156e8c: 0x289182b  sltu        $v1, $s4, $t1
    ctx->pc = 0x156e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x156e90: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x156E90u;
    {
        const bool branch_taken_0x156e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E90u;
            // 0x156e94: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e90) {
            ctx->pc = 0x157038u;
            goto label_157038;
        }
    }
    ctx->pc = 0x156E98u;
label_156e98:
    // 0x156e98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x156e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156e9c: 0x3c05cfff  lui         $a1, 0xCFFF
    ctx->pc = 0x156e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53247 << 16));
    // 0x156ea0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156ea4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x156ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x156ea8: 0x2e22018  mult        $a0, $s7, $v0
    ctx->pc = 0x156ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x156eac: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156eb0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x156eb4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x156eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x156eb8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x156eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x156ebc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x156ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x156ec0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x156ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x156ec4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156ec8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x156ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x156ecc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x156ed0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x156ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x156ed4: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x156ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x156ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x156edc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x156edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x156ee0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x156ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156ee4: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x156ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x156ee8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x156ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x156eec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x156eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x156ef0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156ef4: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x156ef8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x156EF8u;
    SET_GPR_U32(ctx, 31, 0x156F00u);
    ctx->pc = 0x156EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156EF8u;
            // 0x156efc: 0x2058024  and         $s0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F00u; }
        if (ctx->pc != 0x156F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F00u; }
        if (ctx->pc != 0x156F00u) { return; }
    }
    ctx->pc = 0x156F00u;
    // 0x156f00: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x156f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x156f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f08: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x156f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x156f0c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x156F0Cu;
    SET_GPR_U32(ctx, 31, 0x156F14u);
    ctx->pc = 0x156F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F0Cu;
            // 0x156f10: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F14u; }
        if (ctx->pc != 0x156F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F14u; }
        if (ctx->pc != 0x156F14u) { return; }
    }
    ctx->pc = 0x156F14u;
    // 0x156f14: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x156f18: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x156f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x156f1c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x156f20: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x156f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x156f24: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x156f28: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x156f2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x156f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x156f30: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x156f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x156f34: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x156f38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x156f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156f40: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x156F40u;
    SET_GPR_U32(ctx, 31, 0x156F48u);
    ctx->pc = 0x156F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F40u;
            // 0x156f44: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F48u; }
        if (ctx->pc != 0x156F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F48u; }
        if (ctx->pc != 0x156F48u) { return; }
    }
    ctx->pc = 0x156F48u;
    // 0x156f48: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x156f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x156f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f50: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x156f54: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x156f58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x156f5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156f60: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x156F60u;
    SET_GPR_U32(ctx, 31, 0x156F68u);
    ctx->pc = 0x156F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F60u;
            // 0x156f64: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F68u; }
        if (ctx->pc != 0x156F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F68u; }
        if (ctx->pc != 0x156F68u) { return; }
    }
    ctx->pc = 0x156F68u;
    // 0x156f68: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x156f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x156f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156f70: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x156f74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x156f78: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x156f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156f7c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x156f80: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x156f84: 0x2e41818  mult        $v1, $s7, $a0
    ctx->pc = 0x156f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x156f88: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x156f88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156f8c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x156f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x156f90: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x156f90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156f94: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x156F94u;
    {
        const bool branch_taken_0x156f94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156F94u;
            // 0x156f98: 0x745021  addu        $t2, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f94) {
            ctx->pc = 0x157018u;
            goto label_157018;
        }
    }
    ctx->pc = 0x156F9Cu;
    // 0x156f9c: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x156f9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_156fa0:
    // 0x156fa0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x156FA0u;
    {
        const bool branch_taken_0x156fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FA0u;
            // 0x156fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa0) {
            ctx->pc = 0x157008u;
            goto label_157008;
        }
    }
    ctx->pc = 0x156FA8u;
    // 0x156fa8: 0xe32018  mult        $a0, $a3, $v1
    ctx->pc = 0x156fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x156fac: 0x0  nop
    ctx->pc = 0x156facu;
    // NOP
label_156fb0:
    // 0x156fb0: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x156fb4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x156fb8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156fbc: 0x444818  mult        $t1, $v0, $a0
    ctx->pc = 0x156fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x156fc0: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x156fc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x156fc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x156fcc: 0xac480024  sw          $t0, 0x24($v0)
    ctx->pc = 0x156fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 8));
    // 0x156fd0: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x156fd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x156fd4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x156fd8: 0x624818  mult        $t1, $v1, $v0
    ctx->pc = 0x156fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x156fdc: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x156fe0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x156fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x156fe4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x156fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x156fe8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x156fec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x156fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x156ff0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x156ff4: 0xac710024  sw          $s1, 0x24($v1)
    ctx->pc = 0x156ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
    // 0x156ff8: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x156ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x156ffc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x156ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x157000: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x157000u;
    {
        const bool branch_taken_0x157000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157000u;
            // 0x157004: 0xe32018  mult        $a0, $a3, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157000) {
            ctx->pc = 0x156FB0u;
            runtime->cooperativeGuestYield();
            goto label_156fb0;
        }
    }
    ctx->pc = 0x157008u;
label_157008:
    // 0x157008: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15700c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x157010: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x157010u;
    {
        const bool branch_taken_0x157010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157010) {
            ctx->pc = 0x157014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157010u;
            // 0x157014: 0x92430018  lbu         $v1, 0x18($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156FA0u;
            runtime->cooperativeGuestYield();
            goto label_156fa0;
        }
    }
    ctx->pc = 0x157018u;
label_157018:
    // 0x157018: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15701c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157020: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x157020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x157024: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157028: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x15702c: 0x286102b  sltu        $v0, $s4, $a2
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x157030: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x157030u;
    {
        const bool branch_taken_0x157030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157030u;
            // 0x157034: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157030) {
            ctx->pc = 0x156E98u;
            runtime->cooperativeGuestYield();
            goto label_156e98;
        }
    }
    ctx->pc = 0x157038u;
label_157038:
    // 0x157038: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x157038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15703c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157040: 0x2691021  addu        $v0, $s3, $t1
    ctx->pc = 0x157040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x157044: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x157044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_157048:
    // 0x157048: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15704c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15704cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x157050: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x157050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x157054: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x157054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x157058: 0x2a6102b  sltu        $v0, $s5, $a2
    ctx->pc = 0x157058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15705c: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x15705Cu;
    {
        const bool branch_taken_0x15705c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15705Cu;
            // 0x157060: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15705c) {
            ctx->pc = 0x156E08u;
            runtime->cooperativeGuestYield();
            goto label_156e08;
        }
    }
    ctx->pc = 0x157064u;
label_157064:
    // 0x157064: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x157064u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x157068: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x157068u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x15706c: 0x3c9102b  sltu        $v0, $fp, $t1
    ctx->pc = 0x15706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x157070: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x157070u;
    {
        const bool branch_taken_0x157070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157070u;
            // 0x157074: 0x1e4880  sll         $t1, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157070) {
            ctx->pc = 0x156DC8u;
            runtime->cooperativeGuestYield();
            goto label_156dc8;
        }
    }
    ctx->pc = 0x157078u;
label_157078:
    // 0x157078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15707c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x15707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x157080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157084: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x157088: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x157088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15708c: 0x1440ff44  bnez        $v0, . + 4 + (-0xBC << 2)
    ctx->pc = 0x15708Cu;
    {
        const bool branch_taken_0x15708c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15708Cu;
            // 0x157090: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15708c) {
            ctx->pc = 0x156DA0u;
            runtime->cooperativeGuestYield();
            goto label_156da0;
        }
    }
    ctx->pc = 0x157094u;
label_157094:
    // 0x157094: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x157098: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15709c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1570a0: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1570a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1570a4: 0x1440ff32  bnez        $v0, . + 4 + (-0xCE << 2)
    ctx->pc = 0x1570A4u;
    {
        const bool branch_taken_0x1570a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570A4u;
            // 0x1570a8: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570a4) {
            ctx->pc = 0x156D70u;
            runtime->cooperativeGuestYield();
            goto label_156d70;
        }
    }
    ctx->pc = 0x1570ACu;
label_1570ac:
    // 0x1570ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1570b0: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x1570b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1570b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1570b8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1570bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1570bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1570c0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1570c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1570c4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x1570c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1570c8: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
    ctx->pc = 0x1570C8u;
    {
        const bool branch_taken_0x1570c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570C8u;
            // 0x1570cc: 0xafa90010  sw          $t1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570c8) {
            ctx->pc = 0x156D50u;
            runtime->cooperativeGuestYield();
            goto label_156d50;
        }
    }
    ctx->pc = 0x1570D0u;
label_1570d0:
    // 0x1570d0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1570d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1570d4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1570d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1570d8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1570d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1570dc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1570dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1570e0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1570e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1570e4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1570e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1570e8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1570e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1570ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1570ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1570f0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1570f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1570f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1570f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1570f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1570F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1570F8u;
            // 0x1570fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156D08u: goto label_156d08;
            case 0x156D24u: goto label_156d24;
            case 0x156D50u: goto label_156d50;
            case 0x156D70u: goto label_156d70;
            case 0x156DA0u: goto label_156da0;
            case 0x156DC8u: goto label_156dc8;
            case 0x156E08u: goto label_156e08;
            case 0x156E50u: goto label_156e50;
            case 0x156E98u: goto label_156e98;
            case 0x156FA0u: goto label_156fa0;
            case 0x156FB0u: goto label_156fb0;
            case 0x157008u: goto label_157008;
            case 0x157018u: goto label_157018;
            case 0x157038u: goto label_157038;
            case 0x157048u: goto label_157048;
            case 0x157064u: goto label_157064;
            case 0x157078u: goto label_157078;
            case 0x157094u: goto label_157094;
            case 0x1570ACu: goto label_1570ac;
            case 0x1570D0u: goto label_1570d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157100u;
}

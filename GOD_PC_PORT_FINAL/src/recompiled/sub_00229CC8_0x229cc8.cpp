#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229CC8
// Address: 0x229cc8 - 0x229e90
void sub_00229CC8_0x229cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229CC8_0x229cc8");
#endif

    ctx->pc = 0x229cc8u;

    // 0x229cc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x229ccc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x229cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x229cd0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x229cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x229cd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x229cd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x229cd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x229cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x229cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229ce4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x229ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ce8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x229ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x229cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x229cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x229cf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229cf4: 0xc08aaf6  jal         func_22ABD8
    ctx->pc = 0x229CF4u;
    SET_GPR_U32(ctx, 31, 0x229CFCu);
    ctx->pc = 0x229CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229CF4u;
            // 0x229cf8: 0xe7b50078  swc1        $f21, 0x78($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABD8u;
    if (runtime->hasFunction(0x22ABD8u)) {
        auto targetFn = runtime->lookupFunction(0x22ABD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CFCu; }
        if (ctx->pc != 0x229CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22abd8_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229CFCu; }
        if (ctx->pc != 0x229CFCu) { return; }
    }
    ctx->pc = 0x229CFCu;
    // 0x229cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d00: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x229D00u;
    SET_GPR_U32(ctx, 31, 0x229D08u);
    ctx->pc = 0x229D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D00u;
            // 0x229d04: 0x2625003c  addiu       $a1, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D08u; }
        if (ctx->pc != 0x229D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D08u; }
        if (ctx->pc != 0x229D08u) { return; }
    }
    ctx->pc = 0x229D08u;
    // 0x229d08: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x229D08u;
    {
        const bool branch_taken_0x229d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D08u;
            // 0x229d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d08) {
            ctx->pc = 0x229E28u;
            goto label_229e28;
        }
    }
    ctx->pc = 0x229D10u;
    // 0x229d10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x229d14: 0x804200ce  lb          $v0, 0xCE($v0)
    ctx->pc = 0x229d14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 206)));
    // 0x229d18: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229D18u;
    {
        const bool branch_taken_0x229d18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x229d18) {
            ctx->pc = 0x229D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229D18u;
            // 0x229d1c: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229D30u;
            goto label_229d30;
        }
    }
    ctx->pc = 0x229D20u;
    // 0x229d20: 0xc08a720  jal         func_229C80
    ctx->pc = 0x229D20u;
    SET_GPR_U32(ctx, 31, 0x229D28u);
    ctx->pc = 0x229D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D20u;
            // 0x229d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229C80u;
    if (runtime->hasFunction(0x229C80u)) {
        auto targetFn = runtime->lookupFunction(0x229C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D28u; }
        if (ctx->pc != 0x229D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229C80_0x229c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D28u; }
        if (ctx->pc != 0x229D28u) { return; }
    }
    ctx->pc = 0x229D28u;
    // 0x229d28: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x229d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x229d2c: 0x0  nop
    ctx->pc = 0x229d2cu;
    // NOP
label_229d30:
    // 0x229d30: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x229d30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x229d34: 0x2662e848  addiu       $v0, $s3, -0x17B8
    ctx->pc = 0x229d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x229d38: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x229d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x229d3c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x229d40: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x229d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x229d44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229d48: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x229d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x229d4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x229d50: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x229d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x229d54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229d58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x229d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229d5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x229d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229d60: 0xc061e82  jal         func_187A08
    ctx->pc = 0x229D60u;
    SET_GPR_U32(ctx, 31, 0x229D68u);
    ctx->pc = 0x229D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D60u;
            // 0x229d64: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A08u;
    if (runtime->hasFunction(0x187A08u)) {
        auto targetFn = runtime->lookupFunction(0x187A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D68u; }
        if (ctx->pc != 0x229D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a08_0x187a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D68u; }
        if (ctx->pc != 0x229D68u) { return; }
    }
    ctx->pc = 0x229D68u;
    // 0x229d68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x229D68u;
    {
        const bool branch_taken_0x229d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229D68u;
            // 0x229d6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d68) {
            ctx->pc = 0x229DA8u;
            goto label_229da8;
        }
    }
    ctx->pc = 0x229D70u;
label_229d70:
    // 0x229d70: 0x2662e848  addiu       $v0, $s3, -0x17B8
    ctx->pc = 0x229d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x229d74: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x229d78: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x229d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x229d7c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x229d80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x229d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x229d84: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x229d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x229d88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x229d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x229d8c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x229d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x229d90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x229d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x229d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229d98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x229d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229d9c: 0xc061e8a  jal         func_187A28
    ctx->pc = 0x229D9Cu;
    SET_GPR_U32(ctx, 31, 0x229DA4u);
    ctx->pc = 0x229DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229D9Cu;
            // 0x229da0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A28u;
    if (runtime->hasFunction(0x187A28u)) {
        auto targetFn = runtime->lookupFunction(0x187A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DA4u; }
        if (ctx->pc != 0x229DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a28_0x187a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DA4u; }
        if (ctx->pc != 0x229DA4u) { return; }
    }
    ctx->pc = 0x229DA4u;
    // 0x229da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229da8:
    // 0x229da8: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x229DA8u;
    {
        const bool branch_taken_0x229da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x229da8) {
            ctx->pc = 0x229DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x229DA8u;
            // 0x229dac: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x229DCCu;
            goto label_229dcc;
        }
    }
    ctx->pc = 0x229DB0u;
    // 0x229db0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x229db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x229db4: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x229DB4u;
    SET_GPR_U32(ctx, 31, 0x229DBCu);
    ctx->pc = 0x229DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DB4u;
            // 0x229db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DBCu; }
        if (ctx->pc != 0x229DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DBCu; }
        if (ctx->pc != 0x229DBCu) { return; }
    }
    ctx->pc = 0x229DBCu;
    // 0x229dbc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x229DBCu;
    {
        const bool branch_taken_0x229dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229DBCu;
            // 0x229dc0: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dbc) {
            ctx->pc = 0x229D70u;
            runtime->cooperativeGuestYield();
            goto label_229d70;
        }
    }
    ctx->pc = 0x229DC4u;
    // 0x229dc4: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x229dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
    // 0x229dc8: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_229dcc:
    // 0x229dcc: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x229DCCu;
    {
        const bool branch_taken_0x229dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229DCCu;
            // 0x229dd0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dcc) {
            ctx->pc = 0x229E6Cu;
            goto label_229e6c;
        }
    }
    ctx->pc = 0x229DD4u;
    // 0x229dd4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x229DD4u;
    SET_GPR_U32(ctx, 31, 0x229DDCu);
    ctx->pc = 0x229DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DD4u;
            // 0x229dd8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DDCu; }
        if (ctx->pc != 0x229DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DDCu; }
        if (ctx->pc != 0x229DDCu) { return; }
    }
    ctx->pc = 0x229DDCu;
    // 0x229ddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x229ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x229de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229de4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x229DE4u;
    SET_GPR_U32(ctx, 31, 0x229DECu);
    ctx->pc = 0x229DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229DE4u;
            // 0x229de8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DECu; }
        if (ctx->pc != 0x229DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229DECu; }
        if (ctx->pc != 0x229DECu) { return; }
    }
    ctx->pc = 0x229DECu;
    // 0x229dec: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x229decu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x229df0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x229df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x229df4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x229df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x229df8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x229df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x229dfc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x229dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x229e00: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x229e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x229e04: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x229e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x229e08: 0xb2220043  sdl         $v0, 0x43($s1)
    ctx->pc = 0x229e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e0c: 0xb622003c  sdr         $v0, 0x3C($s1)
    ctx->pc = 0x229e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e10: 0xb223004b  sdl         $v1, 0x4B($s1)
    ctx->pc = 0x229e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e14: 0xb6230044  sdr         $v1, 0x44($s1)
    ctx->pc = 0x229e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e18: 0xb2240053  sdl         $a0, 0x53($s1)
    ctx->pc = 0x229e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e1c: 0xb624004c  sdr         $a0, 0x4C($s1)
    ctx->pc = 0x229e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229e20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229e20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229e24: 0x0  nop
    ctx->pc = 0x229e24u;
    // NOP
label_229e28:
    // 0x229e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229e30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229e34: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x229e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x229e38: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x229E38u;
    SET_GPR_U32(ctx, 31, 0x229E40u);
    ctx->pc = 0x229E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229E38u;
            // 0x229e3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E40u; }
        if (ctx->pc != 0x229E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E40u; }
        if (ctx->pc != 0x229E40u) { return; }
    }
    ctx->pc = 0x229E40u;
    // 0x229e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229e48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229e4c: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x229E4Cu;
    SET_GPR_U32(ctx, 31, 0x229E54u);
    ctx->pc = 0x229E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229E4Cu;
            // 0x229e50: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E54u; }
        if (ctx->pc != 0x229E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E54u; }
        if (ctx->pc != 0x229E54u) { return; }
    }
    ctx->pc = 0x229E54u;
    // 0x229e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229e5c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x229e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x229e60: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x229E60u;
    SET_GPR_U32(ctx, 31, 0x229E68u);
    ctx->pc = 0x229E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229E60u;
            // 0x229e64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E68u; }
        if (ctx->pc != 0x229E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22a750_0x22a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229E68u; }
        if (ctx->pc != 0x229E68u) { return; }
    }
    ctx->pc = 0x229E68u;
    // 0x229e68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x229e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_229e6c:
    // 0x229e6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x229e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229e70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x229e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x229e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x229e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229e7c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x229e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x229e80: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x229e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229e84: 0x3e00008  jr          $ra
    ctx->pc = 0x229E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229E84u;
            // 0x229e88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229D30u: goto label_229d30;
            case 0x229D70u: goto label_229d70;
            case 0x229DA8u: goto label_229da8;
            case 0x229DCCu: goto label_229dcc;
            case 0x229E28u: goto label_229e28;
            case 0x229E6Cu: goto label_229e6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229E8Cu;
    // 0x229e8c: 0x0  nop
    ctx->pc = 0x229e8cu;
    // NOP
}

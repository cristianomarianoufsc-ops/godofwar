#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4C80
// Address: 0x1c4c80 - 0x1c5058
void sub_001C4C80_0x1c4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C80_0x1c4c80");
#endif

    ctx->pc = 0x1c4c80u;

    // 0x1c4c80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c4c84: 0x3c030802  lui         $v1, 0x802
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2050 << 16));
    // 0x1c4c88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c4c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c4c8c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4c90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c4c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c4c9c: 0x3c120800  lui         $s2, 0x800
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2048 << 16));
    // 0x1c4ca0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4ca4: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c4ca8: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1c4ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c4cac: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x1c4cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x1c4cb0: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1c4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1c4cb4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1c4cb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1c4cb8: 0x873824  and         $a3, $a0, $a3
    ctx->pc = 0x1c4cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1c4cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c4cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cc4: 0xc078552  jal         func_1E1548
    ctx->pc = 0x1C4CC4u;
    SET_GPR_U32(ctx, 31, 0x1C4CCCu);
    ctx->pc = 0x1C4CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CC4u;
            // 0x1c4cc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1548u;
    if (runtime->hasFunction(0x1E1548u)) {
        auto targetFn = runtime->lookupFunction(0x1E1548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CCCu; }
        if (ctx->pc != 0x1C4CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1548_0x1e1548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4CCCu; }
        if (ctx->pc != 0x1C4CCCu) { return; }
    }
    ctx->pc = 0x1C4CCCu;
    // 0x1c4ccc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cd0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c4cd4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1c4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1c4cd8: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1C4CD8u;
    {
        const bool branch_taken_0x1c4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cd8) {
            ctx->pc = 0x1C4CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CD8u;
            // 0x1c4cdc: 0x8e030258  lw          $v1, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4E74u;
            goto label_1c4e74;
        }
    }
    ctx->pc = 0x1C4CE0u;
    // 0x1c4ce0: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C4CE0u;
    {
        const bool branch_taken_0x1c4ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CE0u;
            // 0x1c4ce4: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ce0) {
            ctx->pc = 0x1C4D94u;
            goto label_1c4d94;
        }
    }
    ctx->pc = 0x1C4CE8u;
    // 0x1c4ce8: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1c4ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c4cec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4cf0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c4cf0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c4cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c4cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4cfc: 0x0  nop
    ctx->pc = 0x1c4cfcu;
    // NOP
    // 0x1c4d00: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4D00u;
    {
        const bool branch_taken_0x1c4d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D00u;
            // 0x1c4d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d00) {
            ctx->pc = 0x1C4D78u;
            goto label_1c4d78;
        }
    }
    ctx->pc = 0x1C4D08u;
    // 0x1c4d08: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c4d08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4d0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c4d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d10: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x1c4d14: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x1C4D14u;
    SET_GPR_U32(ctx, 31, 0x1C4D1Cu);
    ctx->pc = 0x1C4D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D14u;
            // 0x1c4d18: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D1Cu; }
        if (ctx->pc != 0x1C4D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D1Cu; }
        if (ctx->pc != 0x1C4D1Cu) { return; }
    }
    ctx->pc = 0x1C4D1Cu;
    // 0x1c4d1c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C4D1Cu;
    {
        const bool branch_taken_0x1c4d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D1Cu;
            // 0x1c4d20: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d1c) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4D24u;
    // 0x1c4d24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c4d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4d28: 0xc4405ed8  lwc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1c4d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4d2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4d30: 0x0  nop
    ctx->pc = 0x1c4d30u;
    // NOP
    // 0x1c4d34: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C4D34u;
    {
        const bool branch_taken_0x1c4d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D34u;
            // 0x1c4d38: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d34) {
            ctx->pc = 0x1C4D68u;
            goto label_1c4d68;
        }
    }
    ctx->pc = 0x1C4D3Cu;
    // 0x1c4d3c: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1c4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1c4d40: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1c4d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4d4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1c4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1c4d50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4D50u;
    {
        const bool branch_taken_0x1c4d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d50) {
            ctx->pc = 0x1C4D68u;
            goto label_1c4d68;
        }
    }
    ctx->pc = 0x1C4D58u;
    // 0x1c4d58: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1C4D58u;
    SET_GPR_U32(ctx, 31, 0x1C4D60u);
    ctx->pc = 0x1C4D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D58u;
            // 0x1c4d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D60u; }
        if (ctx->pc != 0x1C4D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D60u; }
        if (ctx->pc != 0x1C4D60u) { return; }
    }
    ctx->pc = 0x1C4D60u;
    // 0x1c4d60: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C4D60u;
    {
        const bool branch_taken_0x1c4d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D60u;
            // 0x1c4d64: 0x8e030258  lw          $v1, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d60) {
            ctx->pc = 0x1C4E74u;
            goto label_1c4e74;
        }
    }
    ctx->pc = 0x1C4D68u;
label_1c4d68:
    // 0x1c4d68: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1C4D68u;
    SET_GPR_U32(ctx, 31, 0x1C4D70u);
    ctx->pc = 0x1C4D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D68u;
            // 0x1c4d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D70u; }
        if (ctx->pc != 0x1C4D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D70u; }
        if (ctx->pc != 0x1C4D70u) { return; }
    }
    ctx->pc = 0x1C4D70u;
    // 0x1c4d70: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C4D70u;
    {
        const bool branch_taken_0x1c4d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D70u;
            // 0x1c4d74: 0x8e030258  lw          $v1, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d70) {
            ctx->pc = 0x1C4E74u;
            goto label_1c4e74;
        }
    }
    ctx->pc = 0x1C4D78u;
label_1c4d78:
    // 0x1c4d78: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1c4d78u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c4d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d80: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x1c4d80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x1c4d84: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x1C4D84u;
    SET_GPR_U32(ctx, 31, 0x1C4D8Cu);
    ctx->pc = 0x1C4D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D84u;
            // 0x1c4d88: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D8Cu; }
        if (ctx->pc != 0x1C4D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D8Cu; }
        if (ctx->pc != 0x1C4D8Cu) { return; }
    }
    ctx->pc = 0x1C4D8Cu;
    // 0x1c4d8c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C4D8Cu;
    {
        const bool branch_taken_0x1c4d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D8Cu;
            // 0x1c4d90: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d8c) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4D94u;
label_1c4d94:
    // 0x1c4d94: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c4d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c4d98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c4d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c4d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4da0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1c4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1c4da4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4db0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c4db0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4db4: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c4db8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c4db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c4dbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c4dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c4dc0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c4dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c4dc4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1c4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1c4dc8: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4dcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4dd0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c4dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c4dd4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c4dd8: 0x40f809  jalr        $v0
    ctx->pc = 0x1C4DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4DE0u);
        ctx->pc = 0x1C4DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DD8u;
            // 0x1c4ddc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C4DE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4D68u: goto label_1c4d68;
            case 0x1C4D78u: goto label_1c4d78;
            case 0x1C4D94u: goto label_1c4d94;
            case 0x1C4E68u: goto label_1c4e68;
            case 0x1C4E70u: goto label_1c4e70;
            case 0x1C4E74u: goto label_1c4e74;
            case 0x1C4F10u: goto label_1c4f10;
            case 0x1C4F68u: goto label_1c4f68;
            case 0x1C4FACu: goto label_1c4fac;
            case 0x1C4FC4u: goto label_1c4fc4;
            case 0x1C4FD4u: goto label_1c4fd4;
            case 0x1C5024u: goto label_1c5024;
            case 0x1C5040u: goto label_1c5040;
            case 0x1C5044u: goto label_1c5044;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DE0u; }
            if (ctx->pc != 0x1C4DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C4DE0u;
    // 0x1c4de0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4de4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C4DE4u;
    {
        const bool branch_taken_0x1c4de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4de4) {
            ctx->pc = 0x1C4DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DE4u;
            // 0x1c4de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4E68u;
            goto label_1c4e68;
        }
    }
    ctx->pc = 0x1C4DECu;
    // 0x1c4dec: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1c4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c4df0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c4df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c4df4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4DF4u;
    {
        const bool branch_taken_0x1c4df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DF4u;
            // 0x1c4df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4df4) {
            ctx->pc = 0x1C4E68u;
            goto label_1c4e68;
        }
    }
    ctx->pc = 0x1C4DFCu;
    // 0x1c4dfc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c4dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c4e00: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4E00u;
    {
        const bool branch_taken_0x1c4e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e00) {
            ctx->pc = 0x1C4E68u;
            goto label_1c4e68;
        }
    }
    ctx->pc = 0x1C4E08u;
    // 0x1c4e08: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c4e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c4e0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4E0Cu;
    {
        const bool branch_taken_0x1c4e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e0c) {
            ctx->pc = 0x1C4E68u;
            goto label_1c4e68;
        }
    }
    ctx->pc = 0x1C4E14u;
    // 0x1c4e14: 0xda010060  lqc2        $vf1, 0x60($s0)
    ctx->pc = 0x1c4e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c4e18: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x1c4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1c4e1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c4e1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c4e20: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4e24: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c4e24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4e28: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c4e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e30: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c4e30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c4e34: 0xc60c0294  lwc1        $f12, 0x294($s0)
    ctx->pc = 0x1c4e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4e38: 0xc085e3a  jal         func_2178E8
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x1C4E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E38u;
            // 0x1c4e3c: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2178E8u;
    if (runtime->hasFunction(0x2178E8u)) {
        auto targetFn = runtime->lookupFunction(0x2178E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E40u; }
        if (ctx->pc != 0x1C4E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_002178e8_0x2178e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E40u; }
        if (ctx->pc != 0x1C4E40u) { return; }
    }
    ctx->pc = 0x1C4E40u;
    // 0x1c4e40: 0xe6000294  swc1        $f0, 0x294($s0)
    ctx->pc = 0x1c4e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c4e44: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1C4E44u;
    SET_GPR_U32(ctx, 31, 0x1C4E4Cu);
    ctx->pc = 0x1C4E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E44u;
            // 0x1c4e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (runtime->hasFunction(0x216EA0u)) {
        auto targetFn = runtime->lookupFunction(0x216EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E4Cu; }
        if (ctx->pc != 0x1C4E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00216EA0_0x216ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E4Cu; }
        if (ctx->pc != 0x1C4E4Cu) { return; }
    }
    ctx->pc = 0x1C4E4Cu;
    // 0x1c4e4c: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1c4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c4e50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4e54: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1c4e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1c4e58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c4e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4E5Cu;
    {
        const bool branch_taken_0x1c4e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E5Cu;
            // 0x1c4e60: 0xae230374  sw          $v1, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e5c) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E64u;
    // 0x1c4e64: 0x0  nop
    ctx->pc = 0x1c4e64u;
    // NOP
label_1c4e68:
    // 0x1c4e68: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C4E68u;
    SET_GPR_U32(ctx, 31, 0x1C4E70u);
    ctx->pc = 0x1C4E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E68u;
            // 0x1c4e6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    }
    ctx->pc = 0x1C4E70u;
label_1c4e70:
    // 0x1c4e70: 0x8e030258  lw          $v1, 0x258($s0)
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1c4e74:
    // 0x1c4e74: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x1c4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x1c4e78: 0x3c020203  lui         $v0, 0x203
    ctx->pc = 0x1c4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)515 << 16));
    // 0x1c4e7c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1c4e80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c4e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c4e84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c4e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1c4e88: 0x3c04ff94  lui         $a0, 0xFF94
    ctx->pc = 0x1c4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65428 << 16));
    // 0x1c4e8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c4e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4e90: 0x3484e00c  ori         $a0, $a0, 0xE00C
    ctx->pc = 0x1c4e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57356);
    // 0x1c4e94: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1c4e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e98: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1c4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1c4e9c: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1c4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1c4ea0: 0xace4f170  sw          $a0, -0xE90($a3)
    ctx->pc = 0x1c4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 4));
    // 0x1c4ea4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1c4ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1c4ea8: 0x24a512c8  addiu       $a1, $a1, 0x12C8
    ctx->pc = 0x1c4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4808));
    // 0x1c4eac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c4eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4eb0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1c4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1c4eb4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1c4eb8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1c4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1c4ebc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1c4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1c4ec0: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1c4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1c4ec4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c4ec8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c4ecc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c4ed0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c4ed4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1c4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1c4ed8: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1c4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1c4edc: 0x7a050110  lq          $a1, 0x110($s0)
    ctx->pc = 0x1c4edcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4ee0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1C4EE0u;
    SET_GPR_U32(ctx, 31, 0x1C4EE8u);
    ctx->pc = 0x1C4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EE0u;
            // 0x1c4ee4: 0x7ba60000  lq          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EE8u; }
        if (ctx->pc != 0x1C4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EE8u; }
        if (ctx->pc != 0x1C4EE8u) { return; }
    }
    ctx->pc = 0x1C4EE8u;
    // 0x1c4ee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4EE8u;
    {
        const bool branch_taken_0x1c4ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EE8u;
            // 0x1c4eec: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ee8) {
            ctx->pc = 0x1C4F10u;
            goto label_1c4f10;
        }
    }
    ctx->pc = 0x1C4EF0u;
    // 0x1c4ef0: 0x7a020110  lq          $v0, 0x110($s0)
    ctx->pc = 0x1c4ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4ef4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c4ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ef8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c4efc: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4f04: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C4F04u;
    SET_GPR_U32(ctx, 31, 0x1C4F0Cu);
    ctx->pc = 0x1C4F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F04u;
            // 0x1c4f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F0Cu; }
        if (ctx->pc != 0x1C4F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F0Cu; }
        if (ctx->pc != 0x1C4F0Cu) { return; }
    }
    ctx->pc = 0x1C4F0Cu;
    // 0x1c4f0c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c4f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4f10:
    // 0x1c4f10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c4f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4f14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c4f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4f18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c4f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4f1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4f20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F20u;
            // 0x1c4f24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4D68u: goto label_1c4d68;
            case 0x1C4D78u: goto label_1c4d78;
            case 0x1C4D94u: goto label_1c4d94;
            case 0x1C4E68u: goto label_1c4e68;
            case 0x1C4E70u: goto label_1c4e70;
            case 0x1C4E74u: goto label_1c4e74;
            case 0x1C4F10u: goto label_1c4f10;
            case 0x1C4F68u: goto label_1c4f68;
            case 0x1C4FACu: goto label_1c4fac;
            case 0x1C4FC4u: goto label_1c4fc4;
            case 0x1C4FD4u: goto label_1c4fd4;
            case 0x1C5024u: goto label_1c5024;
            case 0x1C5040u: goto label_1c5040;
            case 0x1C5044u: goto label_1c5044;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4F28u;
    // 0x1c4f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4f2c: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x1c4f30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4f34: 0x25027790  addiu       $v0, $t0, 0x7790
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
    // 0x1c4f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4f3c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1c4f40: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1c4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1c4f44: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1c4f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1c4f48: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C4F48u;
    {
        const bool branch_taken_0x1c4f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F48u;
            // 0x1c4f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f48) {
            ctx->pc = 0x1C5040u;
            goto label_1c5040;
        }
    }
    ctx->pc = 0x1C4F50u;
    // 0x1c4f50: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1c4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1c4f54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f58: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c4f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4f60: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4F60u;
    {
        const bool branch_taken_0x1c4f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F60u;
            // 0x1c4f64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f60) {
            ctx->pc = 0x1C4FD4u;
            goto label_1c4fd4;
        }
    }
    ctx->pc = 0x1C4F68u;
label_1c4f68:
    // 0x1c4f68: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c4f6c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1c4f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c4f70: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1c4f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1c4f74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c4f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c4f78: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4F78u;
    {
        const bool branch_taken_0x1c4f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F78u;
            // 0x1c4f7c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f78) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4F80u;
    // 0x1c4f80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4f84: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1c4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1c4f88: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1c4f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c4f8c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c4f90: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1c4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1c4f94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c4f98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4f9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4fa0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4FA0u;
    {
        const bool branch_taken_0x1c4fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FA0u;
            // 0x1c4fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa0) {
            ctx->pc = 0x1C4FACu;
            goto label_1c4fac;
        }
    }
    ctx->pc = 0x1C4FA8u;
    // 0x1c4fa8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c4fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c4fac:
    // 0x1c4fac: 0x25027790  addiu       $v0, $t0, 0x7790
    ctx->pc = 0x1c4facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
    // 0x1c4fb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c4fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fb4: 0x94430034  lhu         $v1, 0x34($v0)
    ctx->pc = 0x1c4fb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c4fb8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1c4fbc: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4FBCu;
    {
        const bool branch_taken_0x1c4fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FBCu;
            // 0x1c4fc0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fbc) {
            ctx->pc = 0x1C5024u;
            goto label_1c5024;
        }
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4fcc: 0x1443ffe6  bne         $v0, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C4FCCu;
    {
        const bool branch_taken_0x1c4fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FCCu;
            // 0x1c4fd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fcc) {
            ctx->pc = 0x1C4F68u;
            runtime->cooperativeGuestYield();
            goto label_1c4f68;
        }
    }
    ctx->pc = 0x1C4FD4u;
label_1c4fd4:
    // 0x1c4fd4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c4fd8: 0x8c424f50  lw          $v0, 0x4F50($v0)
    ctx->pc = 0x1c4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20304)));
    // 0x1c4fdc: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4FDCu;
    {
        const bool branch_taken_0x1c4fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FDCu;
            // 0x1c4fe0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fdc) {
            ctx->pc = 0x1C5040u;
            goto label_1c5040;
        }
    }
    ctx->pc = 0x1C4FE4u;
    // 0x1c4fe4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c4fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c4fe8: 0x24422860  addiu       $v0, $v0, 0x2860
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10336));
    // 0x1c4fec: 0xc085e78  jal         func_2179E0
    ctx->pc = 0x1C4FECu;
    SET_GPR_U32(ctx, 31, 0x1C4FF4u);
    ctx->pc = 0x1C4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FECu;
            // 0x1c4ff0: 0x78450000  lq          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2179E0u;
    if (runtime->hasFunction(0x2179E0u)) {
        auto targetFn = runtime->lookupFunction(0x2179E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FF4u; }
        if (ctx->pc != 0x1C4FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002179E0_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FF4u; }
        if (ctx->pc != 0x1C4FF4u) { return; }
    }
    ctx->pc = 0x1C4FF4u;
    // 0x1c4ff4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1c4ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c4ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4ffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5000: 0x0  nop
    ctx->pc = 0x1c5000u;
    // NOP
    // 0x1c5004: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C5004u;
    {
        const bool branch_taken_0x1c5004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5004u;
            // 0x1c5008: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5004) {
            ctx->pc = 0x1C5040u;
            goto label_1c5040;
        }
    }
    ctx->pc = 0x1C500Cu;
    // 0x1c500c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5010: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c5014: 0xac502870  sw          $s0, 0x2870($v0)
    ctx->pc = 0x1c5014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10352), GPR_U32(ctx, 16));
    // 0x1c5018: 0xe4604f54  swc1        $f0, 0x4F54($v1)
    ctx->pc = 0x1c5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20308), bits); }
    // 0x1c501c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C501Cu;
    {
        const bool branch_taken_0x1c501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C501Cu;
            // 0x1c5020: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c501c) {
            ctx->pc = 0x1C5044u;
            goto label_1c5044;
        }
    }
    ctx->pc = 0x1C5024u;
label_1c5024:
    // 0x1c5024: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5028: 0x0  nop
    ctx->pc = 0x1c5028u;
    // NOP
    // 0x1c502c: 0x0  nop
    ctx->pc = 0x1c502cu;
    // NOP
    // 0x1c5030: 0x0  nop
    ctx->pc = 0x1c5030u;
    // NOP
    // 0x1c5034: 0x0  nop
    ctx->pc = 0x1c5034u;
    // NOP
    // 0x1c5038: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C5038u;
    {
        const bool branch_taken_0x1c5038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5038u;
            // 0x1c503c: 0x8cf00008  lw          $s0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5038) {
            ctx->pc = 0x1C4FD4u;
            runtime->cooperativeGuestYield();
            goto label_1c4fd4;
        }
    }
    ctx->pc = 0x1C5040u;
label_1c5040:
    // 0x1c5040: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c5044:
    // 0x1c5044: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c5044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c5048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c504c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C504Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C504Cu;
            // 0x1c5050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4D68u: goto label_1c4d68;
            case 0x1C4D78u: goto label_1c4d78;
            case 0x1C4D94u: goto label_1c4d94;
            case 0x1C4E68u: goto label_1c4e68;
            case 0x1C4E70u: goto label_1c4e70;
            case 0x1C4E74u: goto label_1c4e74;
            case 0x1C4F10u: goto label_1c4f10;
            case 0x1C4F68u: goto label_1c4f68;
            case 0x1C4FACu: goto label_1c4fac;
            case 0x1C4FC4u: goto label_1c4fc4;
            case 0x1C4FD4u: goto label_1c4fd4;
            case 0x1C5024u: goto label_1c5024;
            case 0x1C5040u: goto label_1c5040;
            case 0x1C5044u: goto label_1c5044;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5054u;
    // 0x1c5054: 0x0  nop
    ctx->pc = 0x1c5054u;
    // NOP
}

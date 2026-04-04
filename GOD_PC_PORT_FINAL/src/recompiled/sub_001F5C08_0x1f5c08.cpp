#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5C08
// Address: 0x1f5c08 - 0x1f62e8
void sub_001F5C08_0x1f5c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C08_0x1f5c08");
#endif

    ctx->pc = 0x1f5c08u;

    // 0x1f5c08: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1f5c0c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1f5c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1f5c10: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1f5c14: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1f5c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1f5c18: 0x8e42e394  lw          $v0, -0x1C6C($s2)
    ctx->pc = 0x1f5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960020)));
    // 0x1f5c1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c20: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1f5c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1f5c24: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1f5c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1f5c28: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1f5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1f5c2c: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x1f5c2cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1f5c30: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x1f5c30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f5c34: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1f5c34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f5c38: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1f5c38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1f5c3c: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1f5c3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1f5c40: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1f5c40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f5c44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5C44u;
    {
        const bool branch_taken_0x1f5c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C44u;
            // 0x1f5c48: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c44) {
            ctx->pc = 0x1F5C90u;
            goto label_1f5c90;
        }
    }
    ctx->pc = 0x1F5C4Cu;
    // 0x1f5c4c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f5c50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5c54: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f5c58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5C58u;
    {
        const bool branch_taken_0x1f5c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F5C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C58u;
            // 0x1f5c5c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c58) {
            ctx->pc = 0x1F5C68u;
            goto label_1f5c68;
        }
    }
    ctx->pc = 0x1F5C60u;
    // 0x1f5c60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5C60u;
    {
        const bool branch_taken_0x1f5c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C60u;
            // 0x1f5c64: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c60) {
            ctx->pc = 0x1F5C84u;
            goto label_1f5c84;
        }
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f5c68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f5c6c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f5c6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f5c70: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C70u;
    {
        const bool branch_taken_0x1f5c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C70u;
            // 0x1f5c74: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c70) {
            ctx->pc = 0x1F5C84u;
            goto label_1f5c84;
        }
    }
    ctx->pc = 0x1F5C78u;
    // 0x1f5c78: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F5C78u;
    SET_GPR_U32(ctx, 31, 0x1F5C80u);
    ctx->pc = 0x1F5C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C78u;
            // 0x1f5c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C80u; }
        if (ctx->pc != 0x1F5C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C80u; }
        if (ctx->pc != 0x1F5C80u) { return; }
    }
    ctx->pc = 0x1F5C80u;
    // 0x1f5c80: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f5c84:
    // 0x1f5c84: 0xc07c17a  jal         func_1F05E8
    ctx->pc = 0x1F5C84u;
    SET_GPR_U32(ctx, 31, 0x1F5C8Cu);
    ctx->pc = 0x1F5C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C84u;
            // 0x1f5c88: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F05E8u;
    if (runtime->hasFunction(0x1F05E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F05E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C8Cu; }
        if (ctx->pc != 0x1F5C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F05E8_0x1f05e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C8Cu; }
        if (ctx->pc != 0x1F5C8Cu) { return; }
    }
    ctx->pc = 0x1F5C8Cu;
    // 0x1f5c8c: 0xae40e394  sw          $zero, -0x1C6C($s2)
    ctx->pc = 0x1f5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960020), GPR_U32(ctx, 0));
label_1f5c90:
    // 0x1f5c90: 0xc07d326  jal         func_1F4C98
    ctx->pc = 0x1F5C90u;
    SET_GPR_U32(ctx, 31, 0x1F5C98u);
    ctx->pc = 0x1F5C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C90u;
            // 0x1f5c94: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C98u;
    if (runtime->hasFunction(0x1F4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1F4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C98u; }
        if (ctx->pc != 0x1F5C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f4c98_0x1f4de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C98u; }
        if (ctx->pc != 0x1F5C98u) { return; }
    }
    ctx->pc = 0x1F5C98u;
    // 0x1f5c98: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f5c9c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1f5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5ca0: 0x8c64e2a4  lw          $a0, -0x1D5C($v1)
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959780)));
    // 0x1f5ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ca8: 0x26433380  addiu       $v1, $s2, 0x3380
    ctx->pc = 0x1f5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13184));
    // 0x1f5cac: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x1f5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x1f5cb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5CB0u;
    {
        const bool branch_taken_0x1f5cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CB0u;
            // 0x1f5cb4: 0xac710068  sw          $s1, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cb0) {
            ctx->pc = 0x1F5CC0u;
            goto label_1f5cc0;
        }
    }
    ctx->pc = 0x1F5CB8u;
    // 0x1f5cb8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f5cbc: 0x0  nop
    ctx->pc = 0x1f5cbcu;
    // NOP
label_1f5cc0:
    // 0x1f5cc0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f5cc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5cc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5CC8u;
    {
        const bool branch_taken_0x1f5cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CC8u;
            // 0x1f5ccc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cc8) {
            ctx->pc = 0x1F5CD8u;
            goto label_1f5cd8;
        }
    }
    ctx->pc = 0x1F5CD0u;
    // 0x1f5cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5CD0u;
    {
        const bool branch_taken_0x1f5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CD0u;
            // 0x1f5cd4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cd0) {
            ctx->pc = 0x1F5CF4u;
            goto label_1f5cf4;
        }
    }
    ctx->pc = 0x1F5CD8u;
label_1f5cd8:
    // 0x1f5cd8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f5cd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f5cdc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f5cdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f5ce0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5CE0u;
    {
        const bool branch_taken_0x1f5ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f5ce0) {
            ctx->pc = 0x1F5CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CE0u;
            // 0x1f5ce4: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CF8u;
            goto label_1f5cf8;
        }
    }
    ctx->pc = 0x1F5CE8u;
    // 0x1f5ce8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F5CE8u;
    SET_GPR_U32(ctx, 31, 0x1F5CF0u);
    ctx->pc = 0x1F5CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CE8u;
            // 0x1f5cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5CF0u; }
        if (ctx->pc != 0x1F5CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5CF0u; }
        if (ctx->pc != 0x1F5CF0u) { return; }
    }
    ctx->pc = 0x1F5CF0u;
    // 0x1f5cf0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f5cf4:
    // 0x1f5cf4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f5cf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_1f5cf8:
    // 0x1f5cf8: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x1f5cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1f5cfc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f5cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f5d00: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F5D00u;
    {
        const bool branch_taken_0x1f5d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d00) {
            ctx->pc = 0x1F5D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D00u;
            // 0x1f5d04: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5D44u;
            goto label_1f5d44;
        }
    }
    ctx->pc = 0x1F5D08u;
    // 0x1f5d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d0c: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1F5D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D14u);
    ctx->pc = 0x1F5D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D0Cu;
            // 0x1f5d10: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D14u; }
        if (ctx->pc != 0x1F5D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D14u; }
        if (ctx->pc != 0x1F5D14u) { return; }
    }
    ctx->pc = 0x1F5D14u;
    // 0x1f5d14: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1f5d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d20: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x1f5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x1f5d24: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1f5d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5d28: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x1f5d28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x1f5d2c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1f5d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5d30: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x1f5d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x1f5d34: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1f5d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5d38: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1F5D38u;
    SET_GPR_U32(ctx, 31, 0x1F5D40u);
    ctx->pc = 0x1F5D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D38u;
            // 0x1f5d3c: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D40u; }
        if (ctx->pc != 0x1F5D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D40u; }
        if (ctx->pc != 0x1F5D40u) { return; }
    }
    ctx->pc = 0x1F5D40u;
    // 0x1f5d40: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1f5d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_1f5d44:
    // 0x1f5d44: 0x26433380  addiu       $v1, $s2, 0x3380
    ctx->pc = 0x1f5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13184));
    // 0x1f5d48: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1f5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1f5d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f5d54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f5d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d5c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1f5d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f5d60: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1f5d60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1f5d64: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f5d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f5d68: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1f5d68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1f5d6c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f5d6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f5d70: 0xac65006c  sw          $a1, 0x6C($v1)
    ctx->pc = 0x1f5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 5));
    // 0x1f5d74: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1f5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x1f5d78: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f5d7c: 0x0  nop
    ctx->pc = 0x1f5d7cu;
    // NOP
label_1f5d80:
    // 0x1f5d80: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f5d84: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1f5d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5d88: 0x24423010  addiu       $v0, $v0, 0x3010
    ctx->pc = 0x1f5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12304));
    // 0x1f5d8c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5d90: 0xc07cd3e  jal         func_1F34F8
    ctx->pc = 0x1F5D90u;
    SET_GPR_U32(ctx, 31, 0x1F5D98u);
    ctx->pc = 0x1F5D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D90u;
            // 0x1f5d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F8u;
    if (runtime->hasFunction(0x1F34F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F34F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D98u; }
        if (ctx->pc != 0x1F5D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34F8_0x1f34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D98u; }
        if (ctx->pc != 0x1F5D98u) { return; }
    }
    ctx->pc = 0x1F5D98u;
    // 0x1f5d98: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F5D98u;
    {
        const bool branch_taken_0x1f5d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d98) {
            ctx->pc = 0x1F5D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D98u;
            // 0x1f5d9c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5DF0u;
            goto label_1f5df0;
        }
    }
    ctx->pc = 0x1F5DA0u;
    // 0x1f5da0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1f5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f5da4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f5da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f5dac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F5DACu;
    {
        const bool branch_taken_0x1f5dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5dac) {
            ctx->pc = 0x1F5DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DACu;
            // 0x1f5db0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5DF0u;
            goto label_1f5df0;
        }
    }
    ctx->pc = 0x1F5DB4u;
    // 0x1f5db4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f5db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5db8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5DB8u;
    {
        const bool branch_taken_0x1f5db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5db8) {
            ctx->pc = 0x1F5DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DB8u;
            // 0x1f5dbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5DF0u;
            goto label_1f5df0;
        }
    }
    ctx->pc = 0x1F5DC0u;
    // 0x1f5dc0: 0xc07cd5e  jal         func_1F3578
    ctx->pc = 0x1F5DC0u;
    SET_GPR_U32(ctx, 31, 0x1F5DC8u);
    ctx->pc = 0x1F5DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DC0u;
            // 0x1f5dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3578u;
    if (runtime->hasFunction(0x1F3578u)) {
        auto targetFn = runtime->lookupFunction(0x1F3578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DC8u; }
        if (ctx->pc != 0x1F5DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3578_0x1f3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DC8u; }
        if (ctx->pc != 0x1F5DC8u) { return; }
    }
    ctx->pc = 0x1F5DC8u;
    // 0x1f5dc8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1f5dcc: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f5dd0: 0x246333c0  addiu       $v1, $v1, 0x33C0
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13248));
    // 0x1f5dd4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1f5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f5dd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5ddc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5de0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f5de4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f5de8: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x1f5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
    // 0x1f5dec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f5df0:
    // 0x1f5df0: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1f5df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f5df4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F5DF4u;
    {
        const bool branch_taken_0x1f5df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DF4u;
            // 0x1f5df8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5df4) {
            ctx->pc = 0x1F5D80u;
            runtime->cooperativeGuestYield();
            goto label_1f5d80;
        }
    }
    ctx->pc = 0x1F5DFCu;
    // 0x1f5dfc: 0xc62c0088  lwc1        $f12, 0x88($s1)
    ctx->pc = 0x1f5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5e00: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f5e04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f5e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f5e08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f5e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f5e0c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f5e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f5e10: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f5e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f5e14: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f5e14u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f5e18: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F5E18u;
    SET_GPR_U32(ctx, 31, 0x1F5E20u);
    ctx->pc = 0x1F5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E18u;
            // 0x1f5e1c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E20u; }
        if (ctx->pc != 0x1F5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E20u; }
        if (ctx->pc != 0x1F5E20u) { return; }
    }
    ctx->pc = 0x1F5E20u;
    // 0x1f5e20: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x1f5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5e24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f5e24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f5e28: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f5e28u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x1f5e2c: 0xc060e52  jal         func_183948
    ctx->pc = 0x1F5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E34u);
    ctx->pc = 0x1F5E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E2Cu;
            // 0x1f5e30: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E34u; }
        if (ctx->pc != 0x1F5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E34u; }
        if (ctx->pc != 0x1F5E34u) { return; }
    }
    ctx->pc = 0x1F5E34u;
    // 0x1f5e34: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f5e34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1f5e38: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x1f5e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f5e3c: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x1f5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5e40: 0xda230030  lqc2        $vf3, 0x30($s1)
    ctx->pc = 0x1f5e40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f5e44: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f5e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f5e48: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1f5e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5e4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f5e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f5e50: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1f5e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1f5e54: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1f5e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5e58: 0x4be1192c  vsub.xyzw   $vf4, $vf3, $vf1
    ctx->pc = 0x1f5e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f5e5c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1f5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f5e60: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1f5e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5e64: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f5e64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5e68: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1f5e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5e6c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1f5e6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5e70: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f5e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f5e74: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x1f5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5e78: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f5e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5e7c: 0x0  nop
    ctx->pc = 0x1f5e7cu;
    // NOP
    // 0x1f5e80: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F5E80u;
    {
        const bool branch_taken_0x1f5e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F5E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E80u;
            // 0x1f5e84: 0x7a300010  lq          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e80) {
            ctx->pc = 0x1F5EE8u;
            goto label_1f5ee8;
        }
    }
    ctx->pc = 0x1F5E88u;
    // 0x1f5e88: 0x3c0a001f  lui         $t2, 0x1F
    ctx->pc = 0x1f5e88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31 << 16));
    // 0x1f5e8c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f5e90: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5e94: 0x254a50a0  addiu       $t2, $t2, 0x50A0
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20640));
    // 0x1f5e98: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x1f5e98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f5e9c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x1f5e9cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f5ea0: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1f5ea0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f5ea4: 0xc07c54e  jal         func_1F1538
    ctx->pc = 0x1F5EA4u;
    SET_GPR_U32(ctx, 31, 0x1F5EACu);
    ctx->pc = 0x1F5EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EA4u;
            // 0x1f5ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1538u;
    if (runtime->hasFunction(0x1F1538u)) {
        auto targetFn = runtime->lookupFunction(0x1F1538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EACu; }
        if (ctx->pc != 0x1F5EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1538_0x1f1538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EACu; }
        if (ctx->pc != 0x1F5EACu) { return; }
    }
    ctx->pc = 0x1F5EACu;
    // 0x1f5eac: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1f5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x1f5eb0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f5eb4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1f5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5eb8: 0x24843400  addiu       $a0, $a0, 0x3400
    ctx->pc = 0x1f5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13312));
    // 0x1f5ebc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f5ebcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f5ec0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f5ec0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1f5ec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5ec8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f5ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f5ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5ed4: 0xc07d1f2  jal         func_1F47C8
    ctx->pc = 0x1F5ED4u;
    SET_GPR_U32(ctx, 31, 0x1F5EDCu);
    ctx->pc = 0x1F5ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5ED4u;
            // 0x1f5ed8: 0xc44efffc  lwc1        $f14, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F47C8u;
    if (runtime->hasFunction(0x1F47C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F47C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EDCu; }
        if (ctx->pc != 0x1F5EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f47c8_0x1f47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EDCu; }
        if (ctx->pc != 0x1F5EDCu) { return; }
    }
    ctx->pc = 0x1F5EDCu;
    // 0x1f5edc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F5EDCu;
    {
        const bool branch_taken_0x1f5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EDCu;
            // 0x1f5ee0: 0xc6220048  lwc1        $f2, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5edc) {
            ctx->pc = 0x1F5F54u;
            goto label_1f5f54;
        }
    }
    ctx->pc = 0x1F5EE4u;
    // 0x1f5ee4: 0x0  nop
    ctx->pc = 0x1f5ee4u;
    // NOP
label_1f5ee8:
    // 0x1f5ee8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5eec: 0x8c42e29c  lw          $v0, -0x1D64($v0)
    ctx->pc = 0x1f5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959772)));
    // 0x1f5ef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5EF0u;
    {
        const bool branch_taken_0x1f5ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EF0u;
            // 0x1f5ef4: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ef0) {
            ctx->pc = 0x1F5F10u;
            goto label_1f5f10;
        }
    }
    ctx->pc = 0x1F5EF8u;
    // 0x1f5ef8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f5efc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f5efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f5f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f5f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f08: 0xc04f8da  jal         func_13E368
    ctx->pc = 0x1F5F08u;
    SET_GPR_U32(ctx, 31, 0x1F5F10u);
    ctx->pc = 0x1F5F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F08u;
            // 0x1f5f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E368u;
    if (runtime->hasFunction(0x13E368u)) {
        auto targetFn = runtime->lookupFunction(0x13E368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F10u; }
        if (ctx->pc != 0x1F5F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e368_0x13e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F10u; }
        if (ctx->pc != 0x1F5F10u) { return; }
    }
    ctx->pc = 0x1F5F10u;
label_1f5f10:
    // 0x1f5f10: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1f5f14: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1f5f18: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5f1c: 0x24e750a0  addiu       $a3, $a3, 0x50A0
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20640));
    // 0x1f5f20: 0xc62c0048  lwc1        $f12, 0x48($s1)
    ctx->pc = 0x1f5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5f24: 0xc07c3ba  jal         func_1F0EE8
    ctx->pc = 0x1F5F24u;
    SET_GPR_U32(ctx, 31, 0x1F5F2Cu);
    ctx->pc = 0x1F5F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F24u;
            // 0x1f5f28: 0x7ba600c0  lq          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0EE8u;
    if (runtime->hasFunction(0x1F0EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F0EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F2Cu; }
        if (ctx->pc != 0x1F5F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0EE8_0x1f0ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F2Cu; }
        if (ctx->pc != 0x1F5F2Cu) { return; }
    }
    ctx->pc = 0x1F5F2Cu;
    // 0x1f5f2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5f30: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f5f34: 0xc44ec658  lwc1        $f14, -0x39A8($v0)
    ctx->pc = 0x1f5f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f5f38: 0x24843400  addiu       $a0, $a0, 0x3400
    ctx->pc = 0x1f5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13312));
    // 0x1f5f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f5f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5f40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f5f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f5f44: 0xc07d1f8  jal         func_1F47E0
    ctx->pc = 0x1F5F44u;
    SET_GPR_U32(ctx, 31, 0x1F5F4Cu);
    ctx->pc = 0x1F5F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F44u;
            // 0x1f5f48: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F47E0u;
    if (runtime->hasFunction(0x1F47E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F47E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F4Cu; }
        if (ctx->pc != 0x1F5F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47E0_0x1f47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F4Cu; }
        if (ctx->pc != 0x1F5F4Cu) { return; }
    }
    ctx->pc = 0x1F5F4Cu;
    // 0x1f5f4c: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1f5f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x1f5f50: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x1f5f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f5f54:
    // 0x1f5f54: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5f58: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x1f5f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1f5f5c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1f5f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f5f60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f5f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f5f64: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1f5f64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1f5f68: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1f5f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f5f6c: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x1f5f6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f5f70: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1f5f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f5f74: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1f5f74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1f5f78: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f5f7c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f5f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f5f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1f5f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f5f88: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f5f8c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1f5f90: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F5F90u;
    {
        const bool branch_taken_0x1f5f90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F90u;
            // 0x1f5f94: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f90) {
            ctx->pc = 0x1F5FE4u;
            goto label_1f5fe4;
        }
    }
    ctx->pc = 0x1F5F98u;
    // 0x1f5f98: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f5f9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f5f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fa0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f5fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5fa4: 0x0  nop
    ctx->pc = 0x1f5fa4u;
    // NOP
    // 0x1f5fa8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1F5FA8u;
    {
        const bool branch_taken_0x1f5fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5fa8) {
            ctx->pc = 0x1F5FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FA8u;
            // 0x1f5fac: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5FE8u;
            goto label_1f5fe8;
        }
    }
    ctx->pc = 0x1F5FB0u;
    // 0x1f5fb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f5fb4: 0x0  nop
    ctx->pc = 0x1f5fb4u;
    // NOP
label_1f5fb8:
    // 0x1f5fb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f5fbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5fc0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f5fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f5fc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5FC4u;
    {
        const bool branch_taken_0x1f5fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FC4u;
            // 0x1f5fc8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fc4) {
            ctx->pc = 0x1F5FE4u;
            goto label_1f5fe4;
        }
    }
    ctx->pc = 0x1F5FCCu;
    // 0x1f5fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5fd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f5fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fd4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f5fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5fd8: 0x0  nop
    ctx->pc = 0x1f5fd8u;
    // NOP
    // 0x1f5fdc: 0x4502fff6  bc1fl       . + 4 + (-0xA << 2)
    ctx->pc = 0x1F5FDCu;
    {
        const bool branch_taken_0x1f5fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5fdc) {
            ctx->pc = 0x1F5FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FDCu;
            // 0x1f5fe0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5FB8u;
            runtime->cooperativeGuestYield();
            goto label_1f5fb8;
        }
    }
    ctx->pc = 0x1F5FE4u;
label_1f5fe4:
    // 0x1f5fe4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f5fe8:
    // 0x1f5fe8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1f5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1f5fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5ff0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f5ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5ff4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1f5ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f5ff8: 0xd8430030  lqc2        $vf3, 0x30($v0)
    ctx->pc = 0x1f5ff8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5ffc: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f5ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6000: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1f6000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f6004: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f6004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f6008: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1f6008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f600c: 0x4be218cb  vmaddw.xyzw $vf3, $vf3, $vf2w
    ctx->pc = 0x1f600cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f6010: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1f6010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6014: 0x4b030043  vaddw.x     $vf1, $vf0, $vf3w
    ctx->pc = 0x1f6014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f6018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f601c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f601cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6020: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f6020u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6028: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6028u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f602c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f602cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f6030: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x1f6030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f6034: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1f6034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f6038: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1f6038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f603c: 0x4be308ec  vsub.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1f603cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f6040: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1f6040u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6044: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1f6044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f6048: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1f6048u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1f604c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f6050: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F6050u;
    SET_GPR_U32(ctx, 31, 0x1F6058u);
    ctx->pc = 0x1F6054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6050u;
            // 0x1f6054: 0x27a700a4  addiu       $a3, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6058u; }
        if (ctx->pc != 0x1F6058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6058u; }
        if (ctx->pc != 0x1F6058u) { return; }
    }
    ctx->pc = 0x1F6058u;
    // 0x1f6058: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f605c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1f6060: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1f6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6064: 0x24633450  addiu       $v1, $v1, 0x3450
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13392));
    // 0x1f6068: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x1f6068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x1f606c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f606cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f6070: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x1f6070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x1f6074: 0x24843440  addiu       $a0, $a0, 0x3440
    ctx->pc = 0x1f6074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13376));
    // 0x1f6078: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1f6078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1f607c: 0xdba30100  lqc2        $vf3, 0x100($sp)
    ctx->pc = 0x1f607cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f6080: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f6080u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f6084: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x1f6084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f6088: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x1f6088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1f608c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1f608cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1f6090: 0x7a220090  lq          $v0, 0x90($s1)
    ctx->pc = 0x1f6090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1f6094: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x1f6094u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x1f6098: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f6098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f609c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f609cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f60a0: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1f60a0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1f60a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f60a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f60a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f60a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f60ac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1f60acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f60b0: 0x4a0002ff  vnop
    ctx->pc = 0x1f60b0u;
    // NOP operation, no action needed for VU0
    // 0x1f60b4: 0x4a0002ff  vnop
    ctx->pc = 0x1f60b4u;
    // NOP operation, no action needed for VU0
    // 0x1f60b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1f60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f60bc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1f60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f60c0: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1f60c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f60c4: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1f60c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f60c8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1f60c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f60cc: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f60d0: 0x26103430  addiu       $s0, $s0, 0x3430
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13360));
    // 0x1f60d4: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1f60d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1f60d8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1f60d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f60dc: 0xc07d41e  jal         func_1F5078
    ctx->pc = 0x1F60DCu;
    SET_GPR_U32(ctx, 31, 0x1F60E4u);
    ctx->pc = 0x1F60E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60DCu;
            // 0x1f60e0: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5078u;
    if (runtime->hasFunction(0x1F5078u)) {
        auto targetFn = runtime->lookupFunction(0x1F5078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60E4u; }
        if (ctx->pc != 0x1F60E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f5078_0x1f50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60E4u; }
        if (ctx->pc != 0x1F60E4u) { return; }
    }
    ctx->pc = 0x1F60E4u;
    // 0x1f60e4: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x1f60e4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x1f60e8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1f60e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f60ec: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1f60ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f60f0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1f60f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f60f4: 0xc07d41e  jal         func_1F5078
    ctx->pc = 0x1F60F4u;
    SET_GPR_U32(ctx, 31, 0x1F60FCu);
    ctx->pc = 0x1F60F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60F4u;
            // 0x1f60f8: 0x48241800  qmfc2.ni    $a0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5078u;
    if (runtime->hasFunction(0x1F5078u)) {
        auto targetFn = runtime->lookupFunction(0x1F5078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60FCu; }
        if (ctx->pc != 0x1F60FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f5078_0x1f50a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F60FCu; }
        if (ctx->pc != 0x1F60FCu) { return; }
    }
    ctx->pc = 0x1F60FCu;
    // 0x1f60fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f60fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6100: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1f6100u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1f6104: 0x46190529  min.s       $f20, $f0, $f25
    ctx->pc = 0x1f6104u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[25]);
    // 0x1f6108: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f6108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f610c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f610cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f6110: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f6114: 0xc07d616  jal         func_1F5858
    ctx->pc = 0x1F6114u;
    SET_GPR_U32(ctx, 31, 0x1F611Cu);
    ctx->pc = 0x1F6118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6114u;
            // 0x1f6118: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5858u;
    if (runtime->hasFunction(0x1F5858u)) {
        auto targetFn = runtime->lookupFunction(0x1F5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F611Cu; }
        if (ctx->pc != 0x1F611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5858_0x1f5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F611Cu; }
        if (ctx->pc != 0x1F611Cu) { return; }
    }
    ctx->pc = 0x1F611Cu;
    // 0x1f611c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1f6120: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f6124: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1f6124u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f612c: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1f612cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1f6130: 0xc07d61e  jal         func_1F5878
    ctx->pc = 0x1F6130u;
    SET_GPR_U32(ctx, 31, 0x1F6138u);
    ctx->pc = 0x1F6134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6130u;
            // 0x1f6134: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5878u;
    if (runtime->hasFunction(0x1F5878u)) {
        auto targetFn = runtime->lookupFunction(0x1F5878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6138u; }
        if (ctx->pc != 0x1F6138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5878_0x1f5878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6138u; }
        if (ctx->pc != 0x1F6138u) { return; }
    }
    ctx->pc = 0x1F6138u;
    // 0x1f6138: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1f6138u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1f613c: 0x461ac000  add.s       $f0, $f24, $f26
    ctx->pc = 0x1f613cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[26]);
label_1f6140:
    // 0x1f6140: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f6140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f6144: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x1f6144u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
    // 0x1f6148: 0x461905a9  min.s       $f22, $f0, $f25
    ctx->pc = 0x1f6148u;
    ctx->f[22] = std::min(ctx->f[0], ctx->f[25]);
    // 0x1f614c: 0xc07d616  jal         func_1F5858
    ctx->pc = 0x1F614Cu;
    SET_GPR_U32(ctx, 31, 0x1F6154u);
    ctx->pc = 0x1F6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F614Cu;
            // 0x1f6150: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5858u;
    if (runtime->hasFunction(0x1F5858u)) {
        auto targetFn = runtime->lookupFunction(0x1F5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6154u; }
        if (ctx->pc != 0x1F6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5858_0x1f5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6154u; }
        if (ctx->pc != 0x1F6154u) { return; }
    }
    ctx->pc = 0x1F6154u;
    // 0x1f6154: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1f6154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1f6158: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f6158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f615c: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1f615cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6164: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1f6164u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1f6168: 0xc07d61e  jal         func_1F5878
    ctx->pc = 0x1F6168u;
    SET_GPR_U32(ctx, 31, 0x1F6170u);
    ctx->pc = 0x1F616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6168u;
            // 0x1f616c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5878u;
    if (runtime->hasFunction(0x1F5878u)) {
        auto targetFn = runtime->lookupFunction(0x1F5878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6170u; }
        if (ctx->pc != 0x1F6170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5878_0x1f5878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6170u; }
        if (ctx->pc != 0x1F6170u) { return; }
    }
    ctx->pc = 0x1F6170u;
    // 0x1f6170: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1f6170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f6174: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1f6174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f6178: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1f6178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f617c: 0x4614c041  sub.s       $f1, $f24, $f20
    ctx->pc = 0x1f617cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x1f6180: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1f6180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6184: 0x0  nop
    ctx->pc = 0x1f6184u;
    // NOP
    // 0x1f6188: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6188u;
    {
        const bool branch_taken_0x1f6188 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6188u;
            // 0x1f618c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6188) {
            ctx->pc = 0x1F61A8u;
            goto label_1f61a8;
        }
    }
    ctx->pc = 0x1F6190u;
    // 0x1f6190: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1f6190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6194: 0x0  nop
    ctx->pc = 0x1f6194u;
    // NOP
    // 0x1f6198: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6198u;
    {
        const bool branch_taken_0x1f6198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6198u;
            // 0x1f619c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6198) {
            ctx->pc = 0x1F61A8u;
            goto label_1f61a8;
        }
    }
    ctx->pc = 0x1F61A0u;
    // 0x1f61a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f61a4: 0x0  nop
    ctx->pc = 0x1f61a4u;
    // NOP
label_1f61a8:
    // 0x1f61a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f61a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f61ac: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x1f61acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61b0: 0x0  nop
    ctx->pc = 0x1f61b0u;
    // NOP
    // 0x1f61b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F61B4u;
    {
        const bool branch_taken_0x1f61b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F61B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61B4u;
            // 0x1f61b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61b4) {
            ctx->pc = 0x1F61D0u;
            goto label_1f61d0;
        }
    }
    ctx->pc = 0x1F61BCu;
    // 0x1f61bc: 0x461a0834  c.lt.s      $f1, $f26
    ctx->pc = 0x1f61bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61c0: 0x0  nop
    ctx->pc = 0x1f61c0u;
    // NOP
    // 0x1f61c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F61C4u;
    {
        const bool branch_taken_0x1f61c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F61C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61C4u;
            // 0x1f61c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61c4) {
            ctx->pc = 0x1F61D0u;
            goto label_1f61d0;
        }
    }
    ctx->pc = 0x1F61CCu;
    // 0x1f61cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f61d0:
    // 0x1f61d0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f61d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61d4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F61D4u;
    {
        const bool branch_taken_0x1f61d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61d4) {
            ctx->pc = 0x1F61FCu;
            goto label_1f61fc;
        }
    }
    ctx->pc = 0x1F61DCu;
    // 0x1f61dc: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x1f61dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f61e0: 0x0  nop
    ctx->pc = 0x1f61e0u;
    // NOP
    // 0x1f61e4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1F61E4u;
    {
        const bool branch_taken_0x1f61e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f61e4) {
            ctx->pc = 0x1F61E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61E4u;
            // 0x1f61e8: 0x7ba200f0  lq          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F620Cu;
            goto label_1f620c;
        }
    }
    ctx->pc = 0x1F61ECu;
    // 0x1f61ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F61ECu;
    {
        const bool branch_taken_0x1f61ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f61ec) {
            ctx->pc = 0x1F61FCu;
            goto label_1f61fc;
        }
    }
    ctx->pc = 0x1F61F4u;
    // 0x1f61f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F61F4u;
    {
        const bool branch_taken_0x1f61f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F61F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61F4u;
            // 0x1f61f8: 0x7ba200f0  lq          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61f4) {
            ctx->pc = 0x1F620Cu;
            goto label_1f620c;
        }
    }
    ctx->pc = 0x1F61FCu;
label_1f61fc:
    // 0x1f61fc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1f6200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6204u;
    {
        const bool branch_taken_0x1f6204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6204u;
            // 0x1f6208: 0x4600d682  mul.s       $f26, $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6204) {
            ctx->pc = 0x1F6218u;
            goto label_1f6218;
        }
    }
    ctx->pc = 0x1F620Cu;
label_1f620c:
    // 0x1f620c: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x1f620cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x1f6210: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1f6210u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1f6214: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1f6218:
    // 0x1f6218: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f6218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f621c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f621cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f6220: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f6220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f6224: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1f6228: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1f6228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1f622c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f622cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6230: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f6230u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f6234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f623c: 0x0  nop
    ctx->pc = 0x1f623cu;
    // NOP
    // 0x1f6240: 0x4503ffbf  bc1tl       . + 4 + (-0x41 << 2)
    ctx->pc = 0x1F6240u;
    {
        const bool branch_taken_0x1f6240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6240) {
            ctx->pc = 0x1F6244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6240u;
            // 0x1f6244: 0x461ac000  add.s       $f0, $f24, $f26 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[26]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6140u;
            runtime->cooperativeGuestYield();
            goto label_1f6140;
        }
    }
    ctx->pc = 0x1F6248u;
    // 0x1f6248: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f624c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f6250: 0xc46de374  lwc1        $f13, -0x1C8C($v1)
    ctx->pc = 0x1f6250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f6254: 0x4614c381  sub.s       $f14, $f24, $f20
    ctx->pc = 0x1f6254u;
    ctx->f[14] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x1f6258: 0xc44ce370  lwc1        $f12, -0x1C90($v0)
    ctx->pc = 0x1f6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f625c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f6260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6264: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f6268: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1f6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f626c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1f626cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1f6270: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1f6270u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1f6274: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x1f6274u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1f6278: 0xc07d1a8  jal         func_1F46A0
    ctx->pc = 0x1F6278u;
    SET_GPR_U32(ctx, 31, 0x1F6280u);
    ctx->pc = 0x1F627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6278u;
            // 0x1f627c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F46A0u;
    if (runtime->hasFunction(0x1F46A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F46A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6280u; }
        if (ctx->pc != 0x1F6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f46a0_0x1f4770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6280u; }
        if (ctx->pc != 0x1F6280u) { return; }
    }
    ctx->pc = 0x1F6280u;
    // 0x1f6280: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f6280u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1f6284: 0xc07d616  jal         func_1F5858
    ctx->pc = 0x1F6284u;
    SET_GPR_U32(ctx, 31, 0x1F628Cu);
    ctx->pc = 0x1F6288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6284u;
            // 0x1f6288: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5858u;
    if (runtime->hasFunction(0x1F5858u)) {
        auto targetFn = runtime->lookupFunction(0x1F5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F628Cu; }
        if (ctx->pc != 0x1F628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5858_0x1f5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F628Cu; }
        if (ctx->pc != 0x1F628Cu) { return; }
    }
    ctx->pc = 0x1F628Cu;
    // 0x1f628c: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1f628cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6290: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f6290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f6294: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1f6294u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1f6298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f629c: 0xc07d61e  jal         func_1F5878
    ctx->pc = 0x1F629Cu;
    SET_GPR_U32(ctx, 31, 0x1F62A4u);
    ctx->pc = 0x1F62A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F629Cu;
            // 0x1f62a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5878u;
    if (runtime->hasFunction(0x1F5878u)) {
        auto targetFn = runtime->lookupFunction(0x1F5878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62A4u; }
        if (ctx->pc != 0x1F62A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5878_0x1f5878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62A4u; }
        if (ctx->pc != 0x1F62A4u) { return; }
    }
    ctx->pc = 0x1F62A4u;
    // 0x1f62a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f62a8: 0xc07c17a  jal         func_1F05E8
    ctx->pc = 0x1F62A8u;
    SET_GPR_U32(ctx, 31, 0x1F62B0u);
    ctx->pc = 0x1F62ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F62A8u;
            // 0x1f62ac: 0x24850070  addiu       $a1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F05E8u;
    if (runtime->hasFunction(0x1F05E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F05E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62B0u; }
        if (ctx->pc != 0x1F62B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F05E8_0x1f05e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62B0u; }
        if (ctx->pc != 0x1F62B0u) { return; }
    }
    ctx->pc = 0x1F62B0u;
    // 0x1f62b0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1f62b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f62b4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1f62b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f62b8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1f62b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f62bc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1f62bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f62c0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1f62c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f62c4: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x1f62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f62c8: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x1f62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f62cc: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1f62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f62d0: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x1f62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f62d4: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1f62d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f62d8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1f62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f62dc: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1f62dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f62e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F62E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F62E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F62E0u;
            // 0x1f62e4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5C68u: goto label_1f5c68;
            case 0x1F5C84u: goto label_1f5c84;
            case 0x1F5C90u: goto label_1f5c90;
            case 0x1F5CC0u: goto label_1f5cc0;
            case 0x1F5CD8u: goto label_1f5cd8;
            case 0x1F5CF4u: goto label_1f5cf4;
            case 0x1F5CF8u: goto label_1f5cf8;
            case 0x1F5D44u: goto label_1f5d44;
            case 0x1F5D80u: goto label_1f5d80;
            case 0x1F5DF0u: goto label_1f5df0;
            case 0x1F5EE8u: goto label_1f5ee8;
            case 0x1F5F10u: goto label_1f5f10;
            case 0x1F5F54u: goto label_1f5f54;
            case 0x1F5FB8u: goto label_1f5fb8;
            case 0x1F5FE4u: goto label_1f5fe4;
            case 0x1F5FE8u: goto label_1f5fe8;
            case 0x1F6140u: goto label_1f6140;
            case 0x1F61A8u: goto label_1f61a8;
            case 0x1F61D0u: goto label_1f61d0;
            case 0x1F61FCu: goto label_1f61fc;
            case 0x1F620Cu: goto label_1f620c;
            case 0x1F6218u: goto label_1f6218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F62E8u;
}

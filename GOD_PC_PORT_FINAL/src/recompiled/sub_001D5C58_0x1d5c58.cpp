#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5C58
// Address: 0x1d5c58 - 0x1d5da0
void sub_001D5C58_0x1d5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C58_0x1d5c58");
#endif

    ctx->pc = 0x1d5c58u;

    // 0x1d5c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5c5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5c60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d5c6c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d5c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5c70: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d5c74: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d5c78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d5c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5c80: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x1d5c84: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1d5c84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5c88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d5c8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d5c90: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d5c94: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D5C94u;
    SET_GPR_U32(ctx, 31, 0x1D5C9Cu);
    ctx->pc = 0x1D5C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C94u;
            // 0x1d5c98: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C9Cu; }
        if (ctx->pc != 0x1D5C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C9Cu; }
        if (ctx->pc != 0x1D5C9Cu) { return; }
    }
    ctx->pc = 0x1D5C9Cu;
    // 0x1d5c9c: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x1D5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5CA4u);
    ctx->pc = 0x1D5CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C9Cu;
            // 0x1d5ca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CA4u; }
        if (ctx->pc != 0x1D5CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CA4u; }
        if (ctx->pc != 0x1D5CA4u) { return; }
    }
    ctx->pc = 0x1D5CA4u;
    // 0x1d5ca4: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x1D5CA4u;
    SET_GPR_U32(ctx, 31, 0x1D5CACu);
    ctx->pc = 0x19F3D8u;
    if (runtime->hasFunction(0x19F3D8u)) {
        auto targetFn = runtime->lookupFunction(0x19F3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CACu; }
        if (ctx->pc != 0x1D5CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3D8_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CACu; }
        if (ctx->pc != 0x1D5CACu) { return; }
    }
    ctx->pc = 0x1D5CACu;
    // 0x1d5cac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5cb4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d5cb8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1d5cbc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5CC4u);
        ctx->pc = 0x1D5CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CBCu;
            // 0x1d5cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5CC4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D7Cu: goto label_1d5d7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CC4u; }
            if (ctx->pc != 0x1D5CC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5CC4u;
    // 0x1d5cc4: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x1D5CC4u;
    SET_GPR_U32(ctx, 31, 0x1D5CCCu);
    ctx->pc = 0x1D5CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CC4u;
            // 0x1d5cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CCCu; }
        if (ctx->pc != 0x1D5CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CCCu; }
        if (ctx->pc != 0x1D5CCCu) { return; }
    }
    ctx->pc = 0x1D5CCCu;
    // 0x1d5ccc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5cd0: 0xc0891de  jal         func_224778
    ctx->pc = 0x1D5CD0u;
    SET_GPR_U32(ctx, 31, 0x1D5CD8u);
    ctx->pc = 0x1D5CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CD0u;
            // 0x1d5cd4: 0x8c44cc5c  lw          $a0, -0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CD8u; }
        if (ctx->pc != 0x1D5CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CD8u; }
        if (ctx->pc != 0x1D5CD8u) { return; }
    }
    ctx->pc = 0x1D5CD8u;
    // 0x1d5cd8: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x1D5CD8u;
    SET_GPR_U32(ctx, 31, 0x1D5CE0u);
    ctx->pc = 0x1F8FC8u;
    if (runtime->hasFunction(0x1F8FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1F8FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CE0u; }
        if (ctx->pc != 0x1D5CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8FC8_0x1f8fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CE0u; }
        if (ctx->pc != 0x1D5CE0u) { return; }
    }
    ctx->pc = 0x1D5CE0u;
    // 0x1d5ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ce4: 0xc076856  jal         func_1DA158
    ctx->pc = 0x1D5CE4u;
    SET_GPR_U32(ctx, 31, 0x1D5CECu);
    ctx->pc = 0x1D5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CE4u;
            // 0x1d5ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA158u;
    if (runtime->hasFunction(0x1DA158u)) {
        auto targetFn = runtime->lookupFunction(0x1DA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CECu; }
        if (ctx->pc != 0x1D5CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA158_0x1da158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CECu; }
        if (ctx->pc != 0x1D5CECu) { return; }
    }
    ctx->pc = 0x1D5CECu;
    // 0x1d5cec: 0xc0674bc  jal         func_19D2F0
    ctx->pc = 0x1D5CECu;
    SET_GPR_U32(ctx, 31, 0x1D5CF4u);
    ctx->pc = 0x19D2F0u;
    if (runtime->hasFunction(0x19D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CF4u; }
        if (ctx->pc != 0x1D5CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D2F0_0x19d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CF4u; }
        if (ctx->pc != 0x1D5CF4u) { return; }
    }
    ctx->pc = 0x1D5CF4u;
    // 0x1d5cf4: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1D5CF4u;
    SET_GPR_U32(ctx, 31, 0x1D5CFCu);
    ctx->pc = 0x1BE7B0u;
    if (runtime->hasFunction(0x1BE7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CFCu; }
        if (ctx->pc != 0x1D5CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7b0_0x1be7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5CFCu; }
        if (ctx->pc != 0x1D5CFCu) { return; }
    }
    ctx->pc = 0x1D5CFCu;
    // 0x1d5cfc: 0xc0873c6  jal         func_21CF18
    ctx->pc = 0x1D5CFCu;
    SET_GPR_U32(ctx, 31, 0x1D5D04u);
    ctx->pc = 0x21CF18u;
    if (runtime->hasFunction(0x21CF18u)) {
        auto targetFn = runtime->lookupFunction(0x21CF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D04u; }
        if (ctx->pc != 0x1D5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF18_0x21cf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D04u; }
        if (ctx->pc != 0x1D5D04u) { return; }
    }
    ctx->pc = 0x1D5D04u;
    // 0x1d5d04: 0xc069af4  jal         func_1A6BD0
    ctx->pc = 0x1D5D04u;
    SET_GPR_U32(ctx, 31, 0x1D5D0Cu);
    ctx->pc = 0x1A6BD0u;
    if (runtime->hasFunction(0x1A6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D0Cu; }
        if (ctx->pc != 0x1D5D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a6bd0_0x1a6c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D0Cu; }
        if (ctx->pc != 0x1D5D0Cu) { return; }
    }
    ctx->pc = 0x1D5D0Cu;
    // 0x1d5d0c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d5d10: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d5d14: 0xc44069f8  lwc1        $f0, 0x69F8($v0)
    ctx->pc = 0x1d5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5d1c: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x1d5d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x1d5d20: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d5d24: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1d5d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1d5d28: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x1d5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x1d5d2c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1d5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1d5d30: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1d5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1d5d34: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1d5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1d5d38: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1d5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1d5d3c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1d5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1d5d40: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1d5d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1d5d44: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1d5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1d5d48: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1d5d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1d5d4c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x1d5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x1d5d50: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1d5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x1d5d54: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x1d5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x1d5d58: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x1d5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x1d5d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5D5Cu;
    {
        const bool branch_taken_0x1d5d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D5Cu;
            // 0x1d5d60: 0xae2001c0  sw          $zero, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d5c) {
            ctx->pc = 0x1D5D70u;
            goto label_1d5d70;
        }
    }
    ctx->pc = 0x1D5D64u;
    // 0x1d5d64: 0x8c42157c  lw          $v0, 0x157C($v0)
    ctx->pc = 0x1d5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5500)));
    // 0x1d5d68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5D68u;
    {
        const bool branch_taken_0x1d5d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d68) {
            ctx->pc = 0x1D5D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D68u;
            // 0x1d5d6c: 0xae2001c4  sw          $zero, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5D7Cu;
            goto label_1d5d7c;
        }
    }
    ctx->pc = 0x1D5D70u;
label_1d5d70:
    // 0x1d5d70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d5d74: 0xc440291c  lwc1        $f0, 0x291C($v0)
    ctx->pc = 0x1d5d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d78: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x1d5d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
label_1d5d7c:
    // 0x1d5d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d80: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x1d5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
    // 0x1d5d84: 0xae2201c8  sw          $v0, 0x1C8($s1)
    ctx->pc = 0x1d5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 2));
    // 0x1d5d88: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x1d5d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
    // 0x1d5d8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d5d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5d90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5d94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D98u;
            // 0x1d5d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D7Cu: goto label_1d5d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5DA0u;
}

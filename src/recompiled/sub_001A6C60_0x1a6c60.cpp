#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6C60
// Address: 0x1a6c60 - 0x1a72a8
void sub_001A6C60_0x1a6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6C60_0x1a6c60");
#endif

    ctx->pc = 0x1a6c60u;

    // 0x1a6c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6c68: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1A6C68u;
    SET_GPR_U32(ctx, 31, 0x1A6C70u);
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C70u; }
        if (ctx->pc != 0x1A6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C70u; }
        if (ctx->pc != 0x1A6C70u) { return; }
    }
    ctx->pc = 0x1A6C70u;
    // 0x1a6c70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6C70u;
    {
        const bool branch_taken_0x1a6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C70u;
            // 0x1a6c74: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c70) {
            ctx->pc = 0x1A6C7Cu;
            goto label_1a6c7c;
        }
    }
    ctx->pc = 0x1A6C78u;
    // 0x1a6c78: 0x9443002a  lhu         $v1, 0x2A($v0)
    ctx->pc = 0x1a6c78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_1a6c7c:
    // 0x1a6c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C84u;
            // 0x1a6c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6C8Cu;
    // 0x1a6c8c: 0x0  nop
    ctx->pc = 0x1a6c8cu;
    // NOP
    // 0x1a6c90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a6c94: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1a6c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1a6c98: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1a6c9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ca0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1a6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1a6ca4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1a6ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1a6ca8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1a6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1a6cac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1a6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1a6cb0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1a6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1a6cb4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1a6cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1a6cb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a6cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a6cbc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a6cc0: 0x8e970018  lw          $s7, 0x18($s4)
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a6cc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a6cc8: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a6ccc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a6cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cd0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a6cd4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a6cd8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a6cdc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A6CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6CE4u);
        ctx->pc = 0x1A6CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CDCu;
            // 0x1a6ce0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6CE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CE4u; }
            if (ctx->pc != 0x1A6CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6CE4u;
    // 0x1a6ce4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1a6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1a6ce8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1a6cec: 0x248440e0  addiu       $a0, $a0, 0x40E0
    ctx->pc = 0x1a6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
    // 0x1a6cf0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a6cf4: 0xc05e962  jal         func_17A588
    ctx->pc = 0x1A6CF4u;
    SET_GPR_U32(ctx, 31, 0x1A6CFCu);
    ctx->pc = 0x1A6CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6CF4u;
            // 0x1a6cf8: 0x8c500088  lw          $s0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A588u;
    if (runtime->hasFunction(0x17A588u)) {
        auto targetFn = runtime->lookupFunction(0x17A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CFCu; }
        if (ctx->pc != 0x1A6CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A588_0x17a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6CFCu; }
        if (ctx->pc != 0x1A6CFCu) { return; }
    }
    ctx->pc = 0x1A6CFCu;
    // 0x1a6cfc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a6d00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a6d04: 0xac40cacc  sw          $zero, -0x3534($v0)
    ctx->pc = 0x1a6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953676), GPR_U32(ctx, 0));
    // 0x1a6d08: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A6D08u;
    SET_GPR_U32(ctx, 31, 0x1A6D10u);
    ctx->pc = 0x1A6D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D08u;
            // 0x1a6d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D10u; }
        if (ctx->pc != 0x1A6D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6D10u; }
        if (ctx->pc != 0x1A6D10u) { return; }
    }
    ctx->pc = 0x1A6D10u;
    // 0x1a6d10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a6d10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d14: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x1a6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x1a6d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6d1c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1a6d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1a6d20: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1a6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1a6d24: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1a6d28: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1a6d2c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1a6d30: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6d34: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6d38: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1a6d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a6d3c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x1A6D3Cu;
    {
        const bool branch_taken_0x1a6d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6D3Cu;
            // 0x1a6d40: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d3c) {
            ctx->pc = 0x1A6FF8u;
            goto label_1a6ff8;
        }
    }
    ctx->pc = 0x1A6D44u;
    // 0x1a6d44: 0x0  nop
    ctx->pc = 0x1a6d44u;
    // NOP
label_1a6d48:
    // 0x1a6d48: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x1a6d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a6d4c: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x1a6d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a6d50: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x1a6d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a6d54: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x1a6d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a6d58: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x1a6d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a6d5c: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x1a6d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a6d60: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x1a6d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a6d64: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x1a6d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a6d68: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a6d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d6c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a6d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d70: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1a6d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d74: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1a6d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d78: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1a6d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d7c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1a6d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d80: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x1a6d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d84: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x1a6d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d88: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x1a6d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a6d8c: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x1a6d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a6d90: 0x6a44002f  ldl         $a0, 0x2F($s2)
    ctx->pc = 0x1a6d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a6d94: 0x6e440028  ldr         $a0, 0x28($s2)
    ctx->pc = 0x1a6d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a6d98: 0x6a450037  ldl         $a1, 0x37($s2)
    ctx->pc = 0x1a6d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a6d9c: 0x6e450030  ldr         $a1, 0x30($s2)
    ctx->pc = 0x1a6d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a6da0: 0x6a42003f  ldl         $v0, 0x3F($s2)
    ctx->pc = 0x1a6da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a6da4: 0x6e420038  ldr         $v0, 0x38($s2)
    ctx->pc = 0x1a6da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a6da8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1a6da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6dac: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1a6dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6db0: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x1a6db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6db4: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x1a6db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6db8: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a6db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6dbc: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a6dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6dc0: 0xb3a2003f  sdl         $v0, 0x3F($sp)
    ctx->pc = 0x1a6dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6dc4: 0x26510054  addiu       $s1, $s2, 0x54
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x1a6dc8: 0xb7a20038  sdr         $v0, 0x38($sp)
    ctx->pc = 0x1a6dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6dcc: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x1a6dccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1a6dd0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1a6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1a6dd4: 0x9647004e  lhu         $a3, 0x4E($s2)
    ctx->pc = 0x1a6dd4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x1a6dd8: 0x96440052  lhu         $a0, 0x52($s2)
    ctx->pc = 0x1a6dd8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
    // 0x1a6ddc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a6de0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6de4: 0x96460046  lhu         $a2, 0x46($s2)
    ctx->pc = 0x1a6de4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x1a6de8: 0x222f021  addu        $fp, $s1, $v0
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6dec: 0x3c39821  addu        $s3, $fp, $v1
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1a6df0: 0x8ca2caa0  lw          $v0, -0x3560($a1)
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953632)));
    // 0x1a6df4: 0x14c20021  bne         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A6DF4u;
    {
        const bool branch_taken_0x1a6df4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DF4u;
            // 0x1a6df8: 0x264a821  addu        $s5, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6df4) {
            ctx->pc = 0x1A6E7Cu;
            goto label_1a6e7c;
        }
    }
    ctx->pc = 0x1A6DFCu;
    // 0x1a6dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e00: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6E00u;
    {
        const bool branch_taken_0x1a6e00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E00u;
            // 0x1a6e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e00) {
            ctx->pc = 0x1A6E40u;
            goto label_1a6e40;
        }
    }
    ctx->pc = 0x1A6E08u;
    // 0x1a6e08: 0x96310002  lhu         $s1, 0x2($s1)
    ctx->pc = 0x1a6e08u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a6e0c: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x1a6e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1a6e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a6e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e18: 0xc05bc58  jal         func_16F160
    ctx->pc = 0x1A6E18u;
    SET_GPR_U32(ctx, 31, 0x1A6E20u);
    ctx->pc = 0x1A6E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E18u;
            // 0x1a6e1c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F160u;
    if (runtime->hasFunction(0x16F160u)) {
        auto targetFn = runtime->lookupFunction(0x16F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E20u; }
        if (ctx->pc != 0x1A6E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f160_0x16f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E20u; }
        if (ctx->pc != 0x1A6E20u) { return; }
    }
    ctx->pc = 0x1A6E20u;
    // 0x1a6e20: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1a6e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1a6e24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a6e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e2c: 0xac40cac8  sw          $zero, -0x3538($v0)
    ctx->pc = 0x1a6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 0));
    // 0x1a6e30: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1a6e34: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A6E34u;
    SET_GPR_U32(ctx, 31, 0x1A6E3Cu);
    ctx->pc = 0x1A6E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E34u;
            // 0x1a6e38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E3Cu; }
        if (ctx->pc != 0x1A6E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E3Cu; }
        if (ctx->pc != 0x1A6E3Cu) { return; }
    }
    ctx->pc = 0x1A6E3Cu;
    // 0x1a6e3c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1a6e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a6e40:
    // 0x1a6e40: 0xc06993e  jal         func_1A64F8
    ctx->pc = 0x1A6E40u;
    SET_GPR_U32(ctx, 31, 0x1A6E48u);
    ctx->pc = 0x1A6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E40u;
            // 0x1a6e44: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F8u;
    if (runtime->hasFunction(0x1A64F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E48u; }
        if (ctx->pc != 0x1A6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A64F8_0x1a64f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E48u; }
        if (ctx->pc != 0x1A6E48u) { return; }
    }
    ctx->pc = 0x1A6E48u;
    // 0x1a6e48: 0xc069780  jal         func_1A5E00
    ctx->pc = 0x1A6E48u;
    SET_GPR_U32(ctx, 31, 0x1A6E50u);
    ctx->pc = 0x1A6E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E48u;
            // 0x1a6e4c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E00u;
    if (runtime->hasFunction(0x1A5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E50u; }
        if (ctx->pc != 0x1A6E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E00_0x1a5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E50u; }
        if (ctx->pc != 0x1A6E50u) { return; }
    }
    ctx->pc = 0x1A6E50u;
    // 0x1a6e50: 0x96470040  lhu         $a3, 0x40($s2)
    ctx->pc = 0x1a6e50u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1a6e54: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a6e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e58: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x1a6e58u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6e5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e64: 0xc0695c8  jal         func_1A5720
    ctx->pc = 0x1A6E64u;
    SET_GPR_U32(ctx, 31, 0x1A6E6Cu);
    ctx->pc = 0x1A6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E64u;
            // 0x1a6e68: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5720u;
    if (runtime->hasFunction(0x1A5720u)) {
        auto targetFn = runtime->lookupFunction(0x1A5720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E6Cu; }
        if (ctx->pc != 0x1A6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5720_0x1a5790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E6Cu; }
        if (ctx->pc != 0x1A6E6Cu) { return; }
    }
    ctx->pc = 0x1A6E6Cu;
    // 0x1a6e6c: 0xc0697ac  jal         func_1A5EB0
    ctx->pc = 0x1A6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E74u);
    ctx->pc = 0x1A6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E6Cu;
            // 0x1a6e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EB0u;
    if (runtime->hasFunction(0x1A5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E74u; }
        if (ctx->pc != 0x1A6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5EB0_0x1a5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E74u; }
        if (ctx->pc != 0x1A6E74u) { return; }
    }
    ctx->pc = 0x1A6E74u;
    // 0x1a6e74: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1A6E74u;
    {
        const bool branch_taken_0x1a6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E74u;
            // 0x1a6e78: 0x96420044  lhu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e74) {
            ctx->pc = 0x1A6FE4u;
            goto label_1a6fe4;
        }
    }
    ctx->pc = 0x1A6E7Cu;
label_1a6e7c:
    // 0x1a6e7c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a6e80: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6e84: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x1a6e88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6e8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6e90: 0x40f809  jalr        $v0
    ctx->pc = 0x1A6E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6E98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6E98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6E98u; }
            if (ctx->pc != 0x1A6E98u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6E98u;
    // 0x1a6e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ea0: 0x96420048  lhu         $v0, 0x48($s2)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1a6ea4: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x1a6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x1a6ea8: 0xa6020042  sh          $v0, 0x42($s0)
    ctx->pc = 0x1a6ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6eac: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a6eb0:
    // 0x1a6eb0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a6eb4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1a6eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a6eb8: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1a6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1a6ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6ec0: 0x10760007  beq         $v1, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6EC0u;
    {
        const bool branch_taken_0x1a6ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1A6EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6EC0u;
            // 0x1a6ec4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ec0) {
            ctx->pc = 0x1A6EE0u;
            goto label_1a6ee0;
        }
    }
    ctx->pc = 0x1A6EC8u;
    // 0x1a6ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a6ecc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a6ed0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A6ED0u;
    {
        const bool branch_taken_0x1a6ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6ED0u;
            // 0x1a6ed4: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ed0) {
            ctx->pc = 0x1A6EB0u;
            runtime->cooperativeGuestYield();
            goto label_1a6eb0;
        }
    }
    ctx->pc = 0x1A6ED8u;
    // 0x1a6ed8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6edc: 0x0  nop
    ctx->pc = 0x1a6edcu;
    // NOP
label_1a6ee0:
    // 0x1a6ee0: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x1a6ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6ee4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a6ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ee8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a6eec: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1a6eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ef0: 0x96430040  lhu         $v1, 0x40($s2)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1a6ef4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1a6ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1a6ef8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1a6ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6efc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1a6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1a6f00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a6f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6f04: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1a6f04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1a6f08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1a6f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6f0c: 0xa6030040  sh          $v1, 0x40($s0)
    ctx->pc = 0x1a6f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6f10: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1a6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1a6f14: 0xae170054  sw          $s7, 0x54($s0)
    ctx->pc = 0x1a6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 23));
    // 0x1a6f18: 0x8642004a  lh          $v0, 0x4A($s2)
    ctx->pc = 0x1a6f18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
    // 0x1a6f1c: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x1a6f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6f20: 0x9642004c  lhu         $v0, 0x4C($s2)
    ctx->pc = 0x1a6f20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1a6f24: 0xc05bc58  jal         func_16F160
    ctx->pc = 0x1A6F24u;
    SET_GPR_U32(ctx, 31, 0x1A6F2Cu);
    ctx->pc = 0x1A6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F24u;
            // 0x1a6f28: 0xa6020046  sh          $v0, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F160u;
    if (runtime->hasFunction(0x16F160u)) {
        auto targetFn = runtime->lookupFunction(0x16F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F2Cu; }
        if (ctx->pc != 0x1A6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16f160_0x16f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F2Cu; }
        if (ctx->pc != 0x1A6F2Cu) { return; }
    }
    ctx->pc = 0x1A6F2Cu;
    // 0x1a6f2c: 0x96420050  lhu         $v0, 0x50($s2)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1a6f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6F34u;
    {
        const bool branch_taken_0x1a6f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F34u;
            // 0x1a6f38: 0xa602004a  sh          $v0, 0x4A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f34) {
            ctx->pc = 0x1A6F40u;
            goto label_1a6f40;
        }
    }
    ctx->pc = 0x1A6F3Cu;
    // 0x1a6f3c: 0xae1e004c  sw          $fp, 0x4C($s0)
    ctx->pc = 0x1a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 30));
label_1a6f40:
    // 0x1a6f40: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a6f44: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a6f48: 0x9646004e  lhu         $a2, 0x4E($s2)
    ctx->pc = 0x1a6f48u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x1a6f4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f50: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a6f54: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a6f58: 0xac70cac8  sw          $s0, -0x3538($v1)
    ctx->pc = 0x1a6f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953672), GPR_U32(ctx, 16));
    // 0x1a6f5c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A6F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6F64u);
        ctx->pc = 0x1A6F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F5Cu;
            // 0x1a6f60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6F64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F64u; }
            if (ctx->pc != 0x1A6F64u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6F64u;
    // 0x1a6f64: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a6f68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f6c: 0xc06cc34  jal         func_1B30D0
    ctx->pc = 0x1A6F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F74u);
    ctx->pc = 0x1A6F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F6Cu;
            // 0x1a6f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B30D0u;
    if (runtime->hasFunction(0x1B30D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B30D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F74u; }
        if (ctx->pc != 0x1A6F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B30D0_0x1b30d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F74u; }
        if (ctx->pc != 0x1A6F74u) { return; }
    }
    ctx->pc = 0x1A6F74u;
    // 0x1a6f74: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6f78: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1a6f7c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a6f80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6f84: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6F84u;
    {
        const bool branch_taken_0x1a6f84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F84u;
            // 0x1a6f88: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f84) {
            ctx->pc = 0x1A6F94u;
            goto label_1a6f94;
        }
    }
    ctx->pc = 0x1A6F8Cu;
    // 0x1a6f8c: 0x86050042  lh          $a1, 0x42($s0)
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1a6f90: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x1a6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_1a6f94:
    // 0x1a6f94: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1A6F94u;
    SET_GPR_U32(ctx, 31, 0x1A6F9Cu);
    ctx->pc = 0x1A6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F94u;
            // 0x1a6f98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F9Cu; }
        if (ctx->pc != 0x1A6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F9Cu; }
        if (ctx->pc != 0x1A6F9Cu) { return; }
    }
    ctx->pc = 0x1A6F9Cu;
    // 0x1a6f9c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1a6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a6fa0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a6fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6fa8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1a6fac: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a6facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a6fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fb4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a6fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fbc: 0xace2cad0  sw          $v0, -0x3530($a3)
    ctx->pc = 0x1a6fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294953680), GPR_U32(ctx, 2));
    // 0x1a6fc0: 0x60f809  jalr        $v1
    ctx->pc = 0x1A6FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6FC8u);
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FC0u;
            // 0x1a6fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6FC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FC8u; }
            if (ctx->pc != 0x1A6FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6FC8u;
    // 0x1a6fc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fcc: 0xc06c712  jal         func_1B1C48
    ctx->pc = 0x1A6FCCu;
    SET_GPR_U32(ctx, 31, 0x1A6FD4u);
    ctx->pc = 0x1A6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FCCu;
            // 0x1a6fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1C48u;
    if (runtime->hasFunction(0x1B1C48u)) {
        auto targetFn = runtime->lookupFunction(0x1B1C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FD4u; }
        if (ctx->pc != 0x1A6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C48_0x1b1c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FD4u; }
        if (ctx->pc != 0x1A6FD4u) { return; }
    }
    ctx->pc = 0x1A6FD4u;
    // 0x1a6fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fd8: 0xc06c4ea  jal         func_1B13A8
    ctx->pc = 0x1A6FD8u;
    SET_GPR_U32(ctx, 31, 0x1A6FE0u);
    ctx->pc = 0x1A6FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FD8u;
            // 0x1a6fdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13A8u;
    if (runtime->hasFunction(0x1B13A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B13A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FE0u; }
        if (ctx->pc != 0x1A6FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B13A8_0x1b13a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FE0u; }
        if (ctx->pc != 0x1A6FE0u) { return; }
    }
    ctx->pc = 0x1A6FE0u;
    // 0x1a6fe0: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_1a6fe4:
    // 0x1a6fe4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1a6fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a6fec: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1a6fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a6ff0: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1A6FF0u;
    {
        const bool branch_taken_0x1a6ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6ff0) {
            ctx->pc = 0x1A6D48u;
            runtime->cooperativeGuestYield();
            goto label_1a6d48;
        }
    }
    ctx->pc = 0x1A6FF8u;
label_1a6ff8:
    // 0x1a6ff8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a6ffc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7000: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7000u;
            // 0x1a7004: 0xac40cac8  sw          $zero, -0x3538($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A7044u;
            goto label_1a7044;
        }
    }
    ctx->pc = 0x1A7008u;
    // 0x1a7008: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1a7008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1a700c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a7010: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a7014: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a7014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a7018: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a701c: 0x24c671a8  addiu       $a2, $a2, 0x71A8
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29096));
    // 0x1a7020: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x1a7024: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a7028: 0xae860030  sw          $a2, 0x30($s4)
    ctx->pc = 0x1a7028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 6));
    // 0x1a702c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7030: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1a7030u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x1a7034: 0x24a57090  addiu       $a1, $a1, 0x7090
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28816));
    // 0x1a7038: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x1a7038u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    // 0x1a703c: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A703Cu;
    SET_GPR_U32(ctx, 31, 0x1A7044u);
    ctx->pc = 0x1A7040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A703Cu;
            // 0x1a7040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7044u; }
        if (ctx->pc != 0x1A7044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7044u; }
        if (ctx->pc != 0x1A7044u) { return; }
    }
    ctx->pc = 0x1A7044u;
label_1a7044:
    // 0x1a7044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7048: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x1a7048u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a704c: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x1a704cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a7050: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x1a7050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x1a7054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7058: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1a7058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a705c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x1a705cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a7060: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1a7060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a7064: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1a7064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a7068: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1a7068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a706c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1a706cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7070: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1a7070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7074: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1a7074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7078: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a7078u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a707c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1a707cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7080: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a7080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7084: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7084u;
            // 0x1a7088: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A708Cu;
    // 0x1a708c: 0x0  nop
    ctx->pc = 0x1a708cu;
    // NOP
    // 0x1a7090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7094: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a7098: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a709c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a70a0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a70a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a70a4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A70A4u;
    {
        const bool branch_taken_0x1a70a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70A4u;
            // 0x1a70a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70a4) {
            ctx->pc = 0x1A70F0u;
            goto label_1a70f0;
        }
    }
    ctx->pc = 0x1A70ACu;
    // 0x1a70ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a70b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a70b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70b4: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a70b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a70bc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a70c0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a70c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A70C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A70CCu);
        ctx->pc = 0x1A70C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70C4u;
            // 0x1a70c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A70CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A70CCu; }
            if (ctx->pc != 0x1A70CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A70CCu;
    // 0x1a70cc: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A70CCu;
    SET_GPR_U32(ctx, 31, 0x1A70D4u);
    ctx->pc = 0x1A70D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70CCu;
            // 0x1a70d0: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70D4u; }
        if (ctx->pc != 0x1A70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70D4u; }
        if (ctx->pc != 0x1A70D4u) { return; }
    }
    ctx->pc = 0x1A70D4u;
    // 0x1a70d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a70d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70d8: 0xc06c73e  jal         func_1B1CF8
    ctx->pc = 0x1A70D8u;
    SET_GPR_U32(ctx, 31, 0x1A70E0u);
    ctx->pc = 0x1A70DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70D8u;
            // 0x1a70dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CF8u;
    if (runtime->hasFunction(0x1B1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70E0u; }
        if (ctx->pc != 0x1A70E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1CF8_0x1b1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70E0u; }
        if (ctx->pc != 0x1A70E0u) { return; }
    }
    ctx->pc = 0x1A70E0u;
    // 0x1a70e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a70e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70e8: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1A70E8u;
    SET_GPR_U32(ctx, 31, 0x1A70F0u);
    ctx->pc = 0x1A70ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70E8u;
            // 0x1a70ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F0u; }
        if (ctx->pc != 0x1A70F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F0u; }
        if (ctx->pc != 0x1A70F0u) { return; }
    }
    ctx->pc = 0x1A70F0u;
label_1a70f0:
    // 0x1a70f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a70f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a70f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a70f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A70F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A70FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A70F8u;
            // 0x1a70fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7100u;
    // 0x1a7100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a710c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a710cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a7110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a7114: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1a7114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a7118: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a7118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a711c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a7120: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A7120u;
    {
        const bool branch_taken_0x1a7120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7120u;
            // 0x1a7124: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7120) {
            ctx->pc = 0x1A7190u;
            goto label_1a7190;
        }
    }
    ctx->pc = 0x1A7128u;
    // 0x1a7128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a712c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a7130: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a7134: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a7138: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a713c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7144u);
        ctx->pc = 0x1A7140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A713Cu;
            // 0x1a7140: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7144u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7144u; }
            if (ctx->pc != 0x1A7144u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7144u;
    // 0x1a7144: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a7148: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a7148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a714c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a7150: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A7150u;
    {
        const bool branch_taken_0x1a7150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7150) {
            ctx->pc = 0x1A7154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7150u;
            // 0x1a7154: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7190u;
            goto label_1a7190;
        }
    }
    ctx->pc = 0x1A7158u;
    // 0x1a7158: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a715c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A715Cu;
    SET_GPR_U32(ctx, 31, 0x1A7164u);
    ctx->pc = 0x1A7160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A715Cu;
            // 0x1a7160: 0x8c44ca1c  lw          $a0, -0x35E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7164u; }
        if (ctx->pc != 0x1A7164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7164u; }
        if (ctx->pc != 0x1A7164u) { return; }
    }
    ctx->pc = 0x1A7164u;
    // 0x1a7164: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a7168: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a7168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a716c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a716cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a7170: 0x24632628  addiu       $v1, $v1, 0x2628
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9768));
    // 0x1a7174: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1a7174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1a7178: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a717c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a717cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a7180: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7184: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a7184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a7188: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a7188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a718c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1a718cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1a7190:
    // 0x1a7190: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a7190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a719c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A71A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A719Cu;
            // 0x1a71a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A71A4u;
    // 0x1a71a4: 0x0  nop
    ctx->pc = 0x1a71a4u;
    // NOP
    // 0x1a71a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a71ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a71acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a71b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a71b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a71b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a71b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a71bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a71bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a71c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a71c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a71c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a71c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a71cc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a71d0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a71d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a71d8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a71dc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a71e0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A71E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A71E8u);
        ctx->pc = 0x1A71E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71E0u;
            // 0x1a71e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A71E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A71E8u; }
            if (ctx->pc != 0x1A71E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A71E8u;
    // 0x1a71e8: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A71E8u;
    SET_GPR_U32(ctx, 31, 0x1A71F0u);
    ctx->pc = 0x1A71ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71E8u;
            // 0x1a71ec: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F0u; }
        if (ctx->pc != 0x1A71F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71F0u; }
        if (ctx->pc != 0x1A71F0u) { return; }
    }
    ctx->pc = 0x1A71F0u;
    // 0x1a71f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a71f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71f4: 0x52600023  beql        $s3, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A71F4u;
    {
        const bool branch_taken_0x1a71f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71f4) {
            ctx->pc = 0x1A71F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A71F4u;
            // 0x1a71f8: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7284u;
            goto label_1a7284;
        }
    }
    ctx->pc = 0x1A71FCu;
    // 0x1a71fc: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1a71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1a7200: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a7200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7204: 0x28c02  srl         $s1, $v0, 16
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1a7208: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7208u;
    {
        const bool branch_taken_0x1a7208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7208u;
            // 0x1a720c: 0x32403  sra         $a0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7208) {
            ctx->pc = 0x1A7280u;
            goto label_1a7280;
        }
    }
    ctx->pc = 0x1A7210u;
    // 0x1a7210: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a7214: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a7218: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1a7218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a721c: 0x0  nop
    ctx->pc = 0x1a721cu;
    // NOP
label_1a7220:
    // 0x1a7220: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1a7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a7224: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1a7224u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7228: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1a722c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a722cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7234: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7238: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A7238u;
    {
        const bool branch_taken_0x1a7238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7238u;
            // 0x1a723c: 0x121c03  sra         $v1, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7238) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A7240u;
    // 0x1a7240: 0xc06a664  jal         func_1A9990
    ctx->pc = 0x1A7240u;
    SET_GPR_U32(ctx, 31, 0x1A7248u);
    ctx->pc = 0x1A7244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7240u;
            // 0x1a7244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9990u;
    if (runtime->hasFunction(0x1A9990u)) {
        auto targetFn = runtime->lookupFunction(0x1A9990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7248u; }
        if (ctx->pc != 0x1A7248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9990_0x1a9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7248u; }
        if (ctx->pc != 0x1A7248u) { return; }
    }
    ctx->pc = 0x1A7248u;
    // 0x1a7248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a724c: 0xc06cc58  jal         func_1B3160
    ctx->pc = 0x1A724Cu;
    SET_GPR_U32(ctx, 31, 0x1A7254u);
    ctx->pc = 0x1A7250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A724Cu;
            // 0x1a7250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3160u;
    if (runtime->hasFunction(0x1B3160u)) {
        auto targetFn = runtime->lookupFunction(0x1B3160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7254u; }
        if (ctx->pc != 0x1A7254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b3160_0x1b3188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7254u; }
        if (ctx->pc != 0x1A7254u) { return; }
    }
    ctx->pc = 0x1A7254u;
    // 0x1a7254: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a7258: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a725c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a7260: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1a7264: 0x40f809  jalr        $v0
    ctx->pc = 0x1A7264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A726Cu);
        ctx->pc = 0x1A7268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7264u;
            // 0x1a7268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A726Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A726Cu; }
            if (ctx->pc != 0x1A726Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A726Cu;
    // 0x1a726c: 0x121c03  sra         $v1, $s2, 16
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
label_1a7270:
    // 0x1a7270: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a7274: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1a7274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7278: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A7278u;
    {
        const bool branch_taken_0x1a7278 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7278u;
            // 0x1a727c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7278) {
            ctx->pc = 0x1A7220u;
            runtime->cooperativeGuestYield();
            goto label_1a7220;
        }
    }
    ctx->pc = 0x1A7280u;
label_1a7280:
    // 0x1a7280: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x1a7280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_1a7284:
    // 0x1a7284: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a7284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7288: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a7288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a728c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a728cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7290: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a7290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7294: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a7294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a729c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A729Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A729Cu;
            // 0x1a72a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6D48u: goto label_1a6d48;
            case 0x1A6E40u: goto label_1a6e40;
            case 0x1A6E7Cu: goto label_1a6e7c;
            case 0x1A6EB0u: goto label_1a6eb0;
            case 0x1A6EE0u: goto label_1a6ee0;
            case 0x1A6F40u: goto label_1a6f40;
            case 0x1A6F94u: goto label_1a6f94;
            case 0x1A6FE4u: goto label_1a6fe4;
            case 0x1A6FF8u: goto label_1a6ff8;
            case 0x1A7044u: goto label_1a7044;
            case 0x1A70F0u: goto label_1a70f0;
            case 0x1A7190u: goto label_1a7190;
            case 0x1A7220u: goto label_1a7220;
            case 0x1A7270u: goto label_1a7270;
            case 0x1A7280u: goto label_1a7280;
            case 0x1A7284u: goto label_1a7284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A72A4u;
    // 0x1a72a4: 0x0  nop
    ctx->pc = 0x1a72a4u;
    // NOP
}

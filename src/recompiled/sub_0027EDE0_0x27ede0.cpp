#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027EDE0
// Address: 0x27ede0 - 0x27f058
void sub_0027EDE0_0x27ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EDE0_0x27ede0");
#endif

    ctx->pc = 0x27ede0u;

    // 0x27ede0: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x27ede4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ede8: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x27ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x27edec: 0xffb70480  sd          $s7, 0x480($sp)
    ctx->pc = 0x27edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x27edf0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x27edf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edf4: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x27edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x27edf8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27edf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edfc: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x27edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x27ee00: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27ee00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee04: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x27ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x27ee08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27ee08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee0c: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x27ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x27ee10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27ee10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee14: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x27ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x27ee18: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x27ee18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee1c: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x27ee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x27ee20: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x27ee20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee24: 0xffb10420  sd          $s1, 0x420($sp)
    ctx->pc = 0x27ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x27ee28: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x27ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x27ee2c: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x27ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x27ee30: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27EE30u;
    {
        const bool branch_taken_0x27ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE30u;
            // 0x27ee34: 0xafa20404  sw          $v0, 0x404($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee30) {
            ctx->pc = 0x27EFC4u;
            goto label_27efc4;
        }
    }
    ctx->pc = 0x27EE38u;
label_27ee38:
    // 0x27ee38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee3c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27EE3Cu;
    SET_GPR_U32(ctx, 31, 0x27EE44u);
    ctx->pc = 0x27EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE3Cu;
            // 0x27ee40: 0x24c55220  addiu       $a1, $a2, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE44u; }
        if (ctx->pc != 0x27EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE44u; }
        if (ctx->pc != 0x27EE44u) { return; }
    }
    ctx->pc = 0x27EE44u;
    // 0x27ee44: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x27EE44u;
    {
        const bool branch_taken_0x27ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE44u;
            // 0x27ee48: 0x27b00240  addiu       $s0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee44) {
            ctx->pc = 0x27F010u;
            goto label_27f010;
        }
    }
    ctx->pc = 0x27EE4Cu;
    // 0x27ee4c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27EE4Cu;
    SET_GPR_U32(ctx, 31, 0x27EE54u);
    ctx->pc = 0x27EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE4Cu;
            // 0x27ee50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE54u; }
        if (ctx->pc != 0x27EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE54u; }
        if (ctx->pc != 0x27EE54u) { return; }
    }
    ctx->pc = 0x27EE54u;
    // 0x27ee54: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x27ee54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27ee58: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x27EE58u;
    {
        const bool branch_taken_0x27ee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE58u;
            // 0x27ee5c: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee58) {
            ctx->pc = 0x27F010u;
            goto label_27f010;
        }
    }
    ctx->pc = 0x27EE60u;
    // 0x27ee60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee64: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27EE64u;
    SET_GPR_U32(ctx, 31, 0x27EE6Cu);
    ctx->pc = 0x27EE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE64u;
            // 0x27ee68: 0x24e55228  addiu       $a1, $a3, 0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 21032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE6Cu; }
        if (ctx->pc != 0x27EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE6Cu; }
        if (ctx->pc != 0x27EE6Cu) { return; }
    }
    ctx->pc = 0x27EE6Cu;
    // 0x27ee6c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x27EE6Cu;
    {
        const bool branch_taken_0x27ee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE6Cu;
            // 0x27ee70: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee6c) {
            ctx->pc = 0x27F010u;
            goto label_27f010;
        }
    }
    ctx->pc = 0x27EE74u;
label_27ee74:
    // 0x27ee74: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x27EE74u;
    {
        const bool branch_taken_0x27ee74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE74u;
            // 0x27ee78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee74) {
            ctx->pc = 0x27EF88u;
            goto label_27ef88;
        }
    }
    ctx->pc = 0x27EE7Cu;
    // 0x27ee7c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27ee7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_27ee80:
    // 0x27ee80: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x27ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x27ee84: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27EE84u;
    {
        const bool branch_taken_0x27ee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE84u;
            // 0x27ee88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee84) {
            ctx->pc = 0x27EF64u;
            goto label_27ef64;
        }
    }
    ctx->pc = 0x27EE8Cu;
    // 0x27ee8c: 0xa200005f  sb          $zero, 0x5F($s0)
    ctx->pc = 0x27ee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ee90: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27EE90u;
    SET_GPR_U32(ctx, 31, 0x27EE98u);
    ctx->pc = 0x27EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE90u;
            // 0x27ee94: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE98u; }
        if (ctx->pc != 0x27EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE98u; }
        if (ctx->pc != 0x27EE98u) { return; }
    }
    ctx->pc = 0x27EE98u;
    // 0x27ee98: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x27EE98u;
    {
        const bool branch_taken_0x27ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EE98u;
            // 0x27ee9c: 0x12102a  slt         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee98) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27EEA0u;
    // 0x27eea0: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x27EEA0u;
    {
        const bool branch_taken_0x27eea0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x27eea0) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EEA8u;
    // 0x27eea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27eea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eeac: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x27eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x27eeb0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27eeb4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27EEB4u;
    {
        const bool branch_taken_0x27eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EEB4u;
            // 0x27eeb8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eeb4) {
            ctx->pc = 0x27EF1Cu;
            goto label_27ef1c;
        }
    }
    ctx->pc = 0x27EEBCu;
    // 0x27eebc: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_27eec0:
    // 0x27eec0: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x27eec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27eec4: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x27eec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27eec8: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x27eec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27eecc: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x27eeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27eed0: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x27eed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27eed4: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x27eed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27eed8: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x27eed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27eedc: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x27eedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27eee0: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x27eee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eee4: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x27eee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eee8: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x27eee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eeec: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x27eeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eef0: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x27eef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eef4: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x27eef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eef8: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x27eef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27eefc: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x27eefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ef00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27ef04: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27ef08: 0x0  nop
    ctx->pc = 0x27ef08u;
    // NOP
    // 0x27ef0c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27EF0Cu;
    {
        const bool branch_taken_0x27ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ef0c) {
            ctx->pc = 0x27EEC0u;
            runtime->cooperativeGuestYield();
            goto label_27eec0;
        }
    }
    ctx->pc = 0x27EF14u;
    // 0x27ef14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27EF14u;
    {
        const bool branch_taken_0x27ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ef14) {
            ctx->pc = 0x27EF54u;
            goto label_27ef54;
        }
    }
    ctx->pc = 0x27EF1Cu;
label_27ef1c:
    // 0x27ef1c: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x27ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_27ef20:
    // 0x27ef20: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x27ef20u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ef24: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x27ef24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ef28: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x27ef28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27ef2c: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x27ef2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27ef30: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x27ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x27ef34: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x27ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x27ef38: 0xfca60010  sd          $a2, 0x10($a1)
    ctx->pc = 0x27ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
    // 0x27ef3c: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x27ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x27ef40: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27ef44: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27ef48: 0x0  nop
    ctx->pc = 0x27ef48u;
    // NOP
    // 0x27ef4c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27EF4Cu;
    {
        const bool branch_taken_0x27ef4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ef4c) {
            ctx->pc = 0x27EF20u;
            runtime->cooperativeGuestYield();
            goto label_27ef20;
        }
    }
    ctx->pc = 0x27EF54u;
label_27ef54:
    // 0x27ef54: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27EF54u;
    {
        const bool branch_taken_0x27ef54 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ef54) {
            ctx->pc = 0x27EF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF54u;
            // 0x27ef58: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27EF5Cu;
            goto label_27ef5c;
        }
    }
    ctx->pc = 0x27EF5Cu;
label_27ef5c:
    // 0x27ef5c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27EF5Cu;
    {
        const bool branch_taken_0x27ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF5Cu;
            // 0x27ef60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef5c) {
            ctx->pc = 0x27F024u;
            goto label_27f024;
        }
    }
    ctx->pc = 0x27EF64u;
label_27ef64:
    // 0x27ef64: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x27ef64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_27ef68:
    // 0x27ef68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27ef68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27ef6c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x27ef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27ef70: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x27ef70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x27ef74: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x27ef74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27ef78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EF78u;
    {
        const bool branch_taken_0x27ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF78u;
            // 0x27ef7c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef78) {
            ctx->pc = 0x27EF88u;
            goto label_27ef88;
        }
    }
    ctx->pc = 0x27EF80u;
    // 0x27ef80: 0x5640ffbf  bnel        $s2, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x27EF80u;
    {
        const bool branch_taken_0x27ef80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ef80) {
            ctx->pc = 0x27EF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF80u;
            // 0x27ef84: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27EE80u;
            runtime->cooperativeGuestYield();
            goto label_27ee80;
        }
    }
    ctx->pc = 0x27EF88u;
label_27ef88:
    // 0x27ef88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27ef88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef90: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27EF90u;
    SET_GPR_U32(ctx, 31, 0x27EF98u);
    ctx->pc = 0x27EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF90u;
            // 0x27ef94: 0x27a60400  addiu       $a2, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF98u; }
        if (ctx->pc != 0x27EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF98u; }
        if (ctx->pc != 0x27EF98u) { return; }
    }
    ctx->pc = 0x27EF98u;
    // 0x27ef98: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x27ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x27ef9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EF9Cu;
    {
        const bool branch_taken_0x27ef9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EF9Cu;
            // 0x27efa0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef9c) {
            ctx->pc = 0x27EFACu;
            goto label_27efac;
        }
    }
    ctx->pc = 0x27EFA4u;
    // 0x27efa4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27EFA4u;
    {
        const bool branch_taken_0x27efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFA4u;
            // 0x27efa8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efa4) {
            ctx->pc = 0x27F024u;
            goto label_27f024;
        }
    }
    ctx->pc = 0x27EFACu;
label_27efac:
    // 0x27efac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27efb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27efb4: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27EFB4u;
    {
        const bool branch_taken_0x27efb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x27EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFB4u;
            // 0x27efb8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efb4) {
            ctx->pc = 0x27F01Cu;
            goto label_27f01c;
        }
    }
    ctx->pc = 0x27EFBCu;
    // 0x27efbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27efc0: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x27efc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_27efc4:
    // 0x27efc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27efc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27efc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27efccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efd0: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x27EFD0u;
    SET_GPR_U32(ctx, 31, 0x27EFD8u);
    ctx->pc = 0x27EFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFD0u;
            // 0x27efd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFD8u; }
        if (ctx->pc != 0x27EFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFD8u; }
        if (ctx->pc != 0x27EFD8u) { return; }
    }
    ctx->pc = 0x27EFD8u;
    // 0x27efd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EFD8u;
    {
        const bool branch_taken_0x27efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFD8u;
            // 0x27efdc: 0x8fa80404  lw          $t0, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efd8) {
            ctx->pc = 0x27EFECu;
            goto label_27efec;
        }
    }
    ctx->pc = 0x27EFE0u;
    // 0x27efe0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27efe4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27EFE4u;
    {
        const bool branch_taken_0x27efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFE4u;
            // 0x27efe8: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efe4) {
            ctx->pc = 0x27F024u;
            goto label_27f024;
        }
    }
    ctx->pc = 0x27EFECu;
label_27efec:
    // 0x27efec: 0x1100ffa1  beqz        $t0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x27EFECu;
    {
        const bool branch_taken_0x27efec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFECu;
            // 0x27eff0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efec) {
            ctx->pc = 0x27EE74u;
            runtime->cooperativeGuestYield();
            goto label_27ee74;
        }
    }
    ctx->pc = 0x27EFF4u;
    // 0x27eff4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x27eff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27eff8: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x27eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x27effc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27EFFCu;
    SET_GPR_U32(ctx, 31, 0x27F004u);
    ctx->pc = 0x27F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EFFCu;
            // 0x27f000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F004u; }
        if (ctx->pc != 0x27F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F004u; }
        if (ctx->pc != 0x27F004u) { return; }
    }
    ctx->pc = 0x27F004u;
    // 0x27f004: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x27f004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x27f008: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x27F008u;
    {
        const bool branch_taken_0x27f008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F008u;
            // 0x27f00c: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f008) {
            ctx->pc = 0x27EE38u;
            runtime->cooperativeGuestYield();
            goto label_27ee38;
        }
    }
    ctx->pc = 0x27F010u;
label_27f010:
    // 0x27f010: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F014u;
    {
        const bool branch_taken_0x27f014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F014u;
            // 0x27f018: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f014) {
            ctx->pc = 0x27F024u;
            goto label_27f024;
        }
    }
    ctx->pc = 0x27F01Cu;
label_27f01c:
    // 0x27f01c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f020: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_27f024:
    // 0x27f024: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x27f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x27f028: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x27f028u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27f02c: 0xdfb70480  ld          $s7, 0x480($sp)
    ctx->pc = 0x27f02cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x27f030: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x27f030u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x27f034: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x27f034u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x27f038: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x27f038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x27f03c: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x27f03cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x27f040: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x27f040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x27f044: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x27f044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x27f048: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x27f048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x27f04c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F04Cu;
            // 0x27f050: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EE38u: goto label_27ee38;
            case 0x27EE74u: goto label_27ee74;
            case 0x27EE80u: goto label_27ee80;
            case 0x27EEC0u: goto label_27eec0;
            case 0x27EF1Cu: goto label_27ef1c;
            case 0x27EF20u: goto label_27ef20;
            case 0x27EF54u: goto label_27ef54;
            case 0x27EF5Cu: goto label_27ef5c;
            case 0x27EF64u: goto label_27ef64;
            case 0x27EF68u: goto label_27ef68;
            case 0x27EF88u: goto label_27ef88;
            case 0x27EFACu: goto label_27efac;
            case 0x27EFC4u: goto label_27efc4;
            case 0x27EFECu: goto label_27efec;
            case 0x27F010u: goto label_27f010;
            case 0x27F01Cu: goto label_27f01c;
            case 0x27F024u: goto label_27f024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F054u;
    // 0x27f054: 0x0  nop
    ctx->pc = 0x27f054u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207EF8
// Address: 0x207ef8 - 0x208518
void sub_00207EF8_0x207ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207EF8_0x207ef8");
#endif

    ctx->pc = 0x207ef8u;

    // 0x207ef8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x207ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x207efc: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x207efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x207f00: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x207f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x207f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f08: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x207f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x207f0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x207f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f10: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x207f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x207f14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x207f14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x207f18: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x207f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x207f1c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x207f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x207f20: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x207f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x207f24: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x207f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x207f28: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x207f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x207f2c: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x207f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x207f30: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x207f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x207f34: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x207F34u;
    SET_GPR_U32(ctx, 31, 0x207F3Cu);
    ctx->pc = 0x207F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F34u;
            // 0x207f38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F3Cu; }
        if (ctx->pc != 0x207F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F3Cu; }
        if (ctx->pc != 0x207F3Cu) { return; }
    }
    ctx->pc = 0x207F3Cu;
    // 0x207f3c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x207f40: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x207f40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x207f44: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x207f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x207f48: 0x10600166  beqz        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x207F48u;
    {
        const bool branch_taken_0x207f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F48u;
            // 0x207f4c: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f48) {
            ctx->pc = 0x2084E4u;
            goto label_2084e4;
        }
    }
    ctx->pc = 0x207F50u;
    // 0x207f50: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x207f54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x207f58: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x207f5c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x207f60: 0x40f809  jalr        $v0
    ctx->pc = 0x207F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207F68u);
        ctx->pc = 0x207F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F60u;
            // 0x207f64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207F68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207FF0u: goto label_207ff0;
            case 0x208020u: goto label_208020;
            case 0x208110u: goto label_208110;
            case 0x208128u: goto label_208128;
            case 0x208140u: goto label_208140;
            case 0x20815Cu: goto label_20815c;
            case 0x208188u: goto label_208188;
            case 0x208194u: goto label_208194;
            case 0x208198u: goto label_208198;
            case 0x2081A4u: goto label_2081a4;
            case 0x2081ACu: goto label_2081ac;
            case 0x208250u: goto label_208250;
            case 0x208260u: goto label_208260;
            case 0x208278u: goto label_208278;
            case 0x208280u: goto label_208280;
            case 0x2082C8u: goto label_2082c8;
            case 0x208308u: goto label_208308;
            case 0x208318u: goto label_208318;
            case 0x208330u: goto label_208330;
            case 0x208380u: goto label_208380;
            case 0x20840Cu: goto label_20840c;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208444u: goto label_208444;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207F68u; }
            if (ctx->pc != 0x207F68u) { return; }
        }
        }
    }
    ctx->pc = 0x207F68u;
    // 0x207f68: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x207F68u;
    {
        const bool branch_taken_0x207f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F68u;
            // 0x207f6c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f68) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x207F70u;
    // 0x207f70: 0xc081c88  jal         func_207220
    ctx->pc = 0x207F70u;
    SET_GPR_U32(ctx, 31, 0x207F78u);
    ctx->pc = 0x207F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F70u;
            // 0x207f74: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207220u;
    if (runtime->hasFunction(0x207220u)) {
        auto targetFn = runtime->lookupFunction(0x207220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F78u; }
        if (ctx->pc != 0x207F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_207220_0x2072a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F78u; }
        if (ctx->pc != 0x207F78u) { return; }
    }
    ctx->pc = 0x207F78u;
    // 0x207f78: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x207f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x207f7c: 0xc081c44  jal         func_207110
    ctx->pc = 0x207F7Cu;
    SET_GPR_U32(ctx, 31, 0x207F84u);
    ctx->pc = 0x207F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F7Cu;
            // 0x207f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207110u;
    if (runtime->hasFunction(0x207110u)) {
        auto targetFn = runtime->lookupFunction(0x207110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F84u; }
        if (ctx->pc != 0x207F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207110_0x207110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F84u; }
        if (ctx->pc != 0x207F84u) { return; }
    }
    ctx->pc = 0x207F84u;
    // 0x207f84: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x207f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x207f88: 0xc081c5e  jal         func_207178
    ctx->pc = 0x207F88u;
    SET_GPR_U32(ctx, 31, 0x207F90u);
    ctx->pc = 0x207F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F88u;
            // 0x207f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207178u;
    if (runtime->hasFunction(0x207178u)) {
        auto targetFn = runtime->lookupFunction(0x207178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F90u; }
        if (ctx->pc != 0x207F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207178_0x207178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F90u; }
        if (ctx->pc != 0x207F90u) { return; }
    }
    ctx->pc = 0x207F90u;
    // 0x207f90: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x207f90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f94: 0xc081c7a  jal         func_2071E8
    ctx->pc = 0x207F94u;
    SET_GPR_U32(ctx, 31, 0x207F9Cu);
    ctx->pc = 0x207F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207F94u;
            // 0x207f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2071E8u;
    if (runtime->hasFunction(0x2071E8u)) {
        auto targetFn = runtime->lookupFunction(0x2071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F9Cu; }
        if (ctx->pc != 0x207F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002071E8_0x2071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F9Cu; }
        if (ctx->pc != 0x207F9Cu) { return; }
    }
    ctx->pc = 0x207F9Cu;
    // 0x207f9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x207f9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fa0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x207fa4: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x207FA4u;
    {
        const bool branch_taken_0x207fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fa4) {
            ctx->pc = 0x208318u;
            goto label_208318;
        }
    }
    ctx->pc = 0x207FACu;
    // 0x207fac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x207facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x207fb0: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x207fb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x207fb4: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x207fb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x207fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207fbc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x207fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x207fc0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x207fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x207fc4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x207fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x207fc8: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x207fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x207fcc: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x207fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x207fd0: 0xb3a2009b  sdl         $v0, 0x9B($sp)
    ctx->pc = 0x207fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207fd4: 0xb7a20094  sdr         $v0, 0x94($sp)
    ctx->pc = 0x207fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207fd8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x207fdc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x207fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207fe0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207fe4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x207FE4u;
    {
        const bool branch_taken_0x207fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207FE4u;
            // 0x207fe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fe4) {
            ctx->pc = 0x2081ACu;
            goto label_2081ac;
        }
    }
    ctx->pc = 0x207FECu;
    // 0x207fec: 0x0  nop
    ctx->pc = 0x207fecu;
    // NOP
label_207ff0:
    // 0x207ff0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207ff4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ff8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x207ffc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x207ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x208000: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x208000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208004: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208008: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x208008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x20800c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x20800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x208010: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x208010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208014: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208014u;
    {
        const bool branch_taken_0x208014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208014u;
            // 0x208018: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208014) {
            ctx->pc = 0x208020u;
            goto label_208020;
        }
    }
    ctx->pc = 0x20801Cu;
    // 0x20801c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x20801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208020:
    // 0x208020: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x208020u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x208024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20802c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20802cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208030: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x208030u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x208034: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x208034u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x208038: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x208038u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x20803c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x208040: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x208040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x208044: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20804c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20804cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208050: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x208050u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x208054: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208058: 0x0  nop
    ctx->pc = 0x208058u;
    // NOP
    // 0x20805c: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x20805Cu;
    {
        const bool branch_taken_0x20805c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20805Cu;
            // 0x208060: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20805c) {
            ctx->pc = 0x208198u;
            goto label_208198;
        }
    }
    ctx->pc = 0x208064u;
    // 0x208064: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x208064u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x208068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20806c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20806cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208070: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x208070u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x208074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208078: 0x0  nop
    ctx->pc = 0x208078u;
    // NOP
    // 0x20807c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x20807Cu;
    {
        const bool branch_taken_0x20807c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20807Cu;
            // 0x208080: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20807c) {
            ctx->pc = 0x208194u;
            goto label_208194;
        }
    }
    ctx->pc = 0x208084u;
    // 0x208084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208088: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x208088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20808c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208090: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x208094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208098: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x208098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20809c: 0xc081ca8  jal         func_2072A0
    ctx->pc = 0x20809Cu;
    SET_GPR_U32(ctx, 31, 0x2080A4u);
    ctx->pc = 0x2080A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20809Cu;
            // 0x2080a0: 0x439014  dsllv       $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2072A0u;
    if (runtime->hasFunction(0x2072A0u)) {
        auto targetFn = runtime->lookupFunction(0x2072A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080A4u; }
        if (ctx->pc != 0x2080A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002072A0_0x2072a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080A4u; }
        if (ctx->pc != 0x2080A4u) { return; }
    }
    ctx->pc = 0x2080A4u;
    // 0x2080a4: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2080A4u;
    {
        const bool branch_taken_0x2080a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2080a4) {
            ctx->pc = 0x2080A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2080A4u;
            // 0x2080a8: 0xde220070  ld          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208188u;
            goto label_208188;
        }
    }
    ctx->pc = 0x2080ACu;
    // 0x2080ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2080acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2080b0: 0x8fa80104  lw          $t0, 0x104($sp)
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2080b4: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2080b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2080b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2080b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080bc: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x2080bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x2080c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2080c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2080c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2080c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2080c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2080ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2080d0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2080d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2080d4: 0xc081e76  jal         func_2079D8
    ctx->pc = 0x2080D4u;
    SET_GPR_U32(ctx, 31, 0x2080DCu);
    ctx->pc = 0x2080D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2080D4u;
            // 0x2080d8: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2079D8u;
    if (runtime->hasFunction(0x2079D8u)) {
        auto targetFn = runtime->lookupFunction(0x2079D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080DCu; }
        if (ctx->pc != 0x2080DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002079D8_0x2079d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080DCu; }
        if (ctx->pc != 0x2080DCu) { return; }
    }
    ctx->pc = 0x2080DCu;
    // 0x2080dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2080DCu;
    {
        const bool branch_taken_0x2080dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2080DCu;
            // 0x2080e0: 0xde220070  ld          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080dc) {
            ctx->pc = 0x208188u;
            goto label_208188;
        }
    }
    ctx->pc = 0x2080E4u;
    // 0x2080e4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2080e8: 0x8203001c  lb          $v1, 0x1C($s0)
    ctx->pc = 0x2080e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2080ec: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2080ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2080f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2080f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2080f4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2080f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2080f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2080f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2080fc: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2080FCu;
    {
        const bool branch_taken_0x2080fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2080fc) {
            ctx->pc = 0x208100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2080FCu;
            // 0x208100: 0x8203001d  lb          $v1, 0x1D($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208110u;
            goto label_208110;
        }
    }
    ctx->pc = 0x208104u;
    // 0x208104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208104u;
            // 0x208108: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208104) {
            ctx->pc = 0x208128u;
            goto label_208128;
        }
    }
    ctx->pc = 0x20810Cu;
    // 0x20810c: 0x0  nop
    ctx->pc = 0x20810cu;
    // NOP
label_208110:
    // 0x208110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208114: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208114u;
    {
        const bool branch_taken_0x208114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208114) {
            ctx->pc = 0x208118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208114u;
            // 0x208118: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208128u;
            goto label_208128;
        }
    }
    ctx->pc = 0x20811Cu;
    // 0x20811c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208120: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208124: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x208124u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_208128:
    // 0x208128: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20812c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x208130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208130u;
    {
        const bool branch_taken_0x208130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208130u;
            // 0x208134: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208130) {
            ctx->pc = 0x208140u;
            goto label_208140;
        }
    }
    ctx->pc = 0x208138u;
    // 0x208138: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x208138u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20813c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x20813cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_208140:
    // 0x208140: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x208140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x208144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208144u;
    {
        const bool branch_taken_0x208144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208144) {
            ctx->pc = 0x20815Cu;
            goto label_20815c;
        }
    }
    ctx->pc = 0x20814Cu;
    // 0x20814c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20814cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208150: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x208150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x208154: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x208154u;
    {
        const bool branch_taken_0x208154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208154u;
            // 0x208158: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208154) {
            ctx->pc = 0x208194u;
            goto label_208194;
        }
    }
    ctx->pc = 0x20815Cu;
label_20815c:
    // 0x20815c: 0x1493000e  bne         $a0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x20815Cu;
    {
        const bool branch_taken_0x20815c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x208160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20815Cu;
            // 0x208160: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20815c) {
            ctx->pc = 0x208198u;
            goto label_208198;
        }
    }
    ctx->pc = 0x208164u;
    // 0x208164: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x208164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x208168: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x20816c: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x20816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x208170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208174: 0xac900010  sw          $s0, 0x10($a0)
    ctx->pc = 0x208174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 16));
    // 0x208178: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x208178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20817c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20817Cu;
    {
        const bool branch_taken_0x20817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20817Cu;
            // 0x208180: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20817c) {
            ctx->pc = 0x2081A4u;
            goto label_2081a4;
        }
    }
    ctx->pc = 0x208184u;
    // 0x208184: 0x0  nop
    ctx->pc = 0x208184u;
    // NOP
label_208188:
    // 0x208188: 0x121827  nor         $v1, $zero, $s2
    ctx->pc = 0x208188u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x20818c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x208190: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x208190u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
label_208194:
    // 0x208194: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_208198:
    // 0x208198: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x208198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x20819c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2081a0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2081a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2081a4:
    // 0x2081a4: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2081A4u;
    {
        const bool branch_taken_0x2081a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2081A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081A4u;
            // 0x2081a8: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081a4) {
            ctx->pc = 0x207FF0u;
            runtime->cooperativeGuestYield();
            goto label_207ff0;
        }
    }
    ctx->pc = 0x2081ACu;
label_2081ac:
    // 0x2081ac: 0x263001c0  addiu       $s0, $s1, 0x1C0
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x2081b0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2081b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2081b4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2081b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2081b8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2081B8u;
    {
        const bool branch_taken_0x2081b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081b8) {
            ctx->pc = 0x208280u;
            goto label_208280;
        }
    }
    ctx->pc = 0x2081C0u;
    // 0x2081c0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2081c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2081c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2081c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2081c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2081c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2081cc: 0x8e2501c0  lw          $a1, 0x1C0($s1)
    ctx->pc = 0x2081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2081d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2081d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2081d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2081d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2081dc: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x2081dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2081e0: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x2081e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2081e4: 0xb3a600c7  sdl         $a2, 0xC7($sp)
    ctx->pc = 0x2081e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2081e8: 0xb7a600c0  sdr         $a2, 0xC0($sp)
    ctx->pc = 0x2081e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2081ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2081ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2081f0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2081f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2081f4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2081f8: 0x9fa400c0  lwu         $a0, 0xC0($sp)
    ctx->pc = 0x2081f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2081fc: 0x9fa200c4  lwu         $v0, 0xC4($sp)
    ctx->pc = 0x2081fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x208200: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x208200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x208204: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x208204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x208208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x208208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20820c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208210: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x208210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x208214: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x208214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x208218: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x208218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20821c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x20821cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x208220: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x208220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x208224: 0x6ba500d7  ldl         $a1, 0xD7($sp)
    ctx->pc = 0x208224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x208228: 0x6fa500d0  ldr         $a1, 0xD0($sp)
    ctx->pc = 0x208228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20822c: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x20822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208230: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x208230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208234: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x208234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208238: 0x80a2001c  lb          $v0, 0x1C($a1)
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x20823c: 0x54460004  bnel        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20823Cu;
    {
        const bool branch_taken_0x20823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x20823c) {
            ctx->pc = 0x208240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20823Cu;
            // 0x208240: 0x80a2001d  lb          $v0, 0x1D($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208250u;
            goto label_208250;
        }
    }
    ctx->pc = 0x208244u;
    // 0x208244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208244u;
    {
        const bool branch_taken_0x208244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208244u;
            // 0x208248: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208244) {
            ctx->pc = 0x208260u;
            goto label_208260;
        }
    }
    ctx->pc = 0x20824Cu;
    // 0x20824c: 0x0  nop
    ctx->pc = 0x20824cu;
    // NOP
label_208250:
    // 0x208250: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208258: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x20825c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x20825cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_208260:
    // 0x208260: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x208260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x208264: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x208264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x208268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208268u;
    {
        const bool branch_taken_0x208268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208268u;
            // 0x20826c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208268) {
            ctx->pc = 0x208278u;
            goto label_208278;
        }
    }
    ctx->pc = 0x208270u;
    // 0x208270: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x208270u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x208274: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x208274u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_208278:
    // 0x208278: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20827c: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x20827cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_208280:
    // 0x208280: 0x1a800098  blez        $s4, . + 4 + (0x98 << 2)
    ctx->pc = 0x208280u;
    {
        const bool branch_taken_0x208280 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x208284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208280u;
            // 0x208284: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208280) {
            ctx->pc = 0x2084E4u;
            goto label_2084e4;
        }
    }
    ctx->pc = 0x208288u;
    // 0x208288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x208288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20828c: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x20828Cu;
    SET_GPR_U32(ctx, 31, 0x208294u);
    ctx->pc = 0x208290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20828Cu;
            // 0x208290: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208294u; }
        if (ctx->pc != 0x208294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208294u; }
        if (ctx->pc != 0x208294u) { return; }
    }
    ctx->pc = 0x208294u;
    // 0x208294: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x208294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20829c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x20829cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2082a0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2082a4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2082a8: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2082a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2082ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2082acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2082b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2082b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2082b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2082B4u;
    {
        const bool branch_taken_0x2082b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082b4) {
            ctx->pc = 0x2082B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2082B4u;
            // 0x2082b8: 0x94a20008  lhu         $v0, 0x8($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2082C8u;
            goto label_2082c8;
        }
    }
    ctx->pc = 0x2082BCu;
    // 0x2082bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2082bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2082c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2082C0u;
    {
        const bool branch_taken_0x2082c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082c0) {
            ctx->pc = 0x208308u;
            goto label_208308;
        }
    }
    ctx->pc = 0x2082C8u;
label_2082c8:
    // 0x2082c8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2082c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2082cc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2082ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2082d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2082d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2082d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2082d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2082d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2082d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2082dc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2082dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2082e0: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x2082e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2082e4: 0x0  nop
    ctx->pc = 0x2082e4u;
    // NOP
    // 0x2082e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2082E8u;
    {
        const bool branch_taken_0x2082e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2082ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082E8u;
            // 0x2082ec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082e8) {
            ctx->pc = 0x208308u;
            goto label_208308;
        }
    }
    ctx->pc = 0x2082F0u;
    // 0x2082f0: 0x80a3001c  lb          $v1, 0x1C($a1)
    ctx->pc = 0x2082f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2082f4: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2082F4u;
    {
        const bool branch_taken_0x2082f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2082F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2082F4u;
            // 0x2082f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f4) {
            ctx->pc = 0x2084E4u;
            goto label_2084e4;
        }
    }
    ctx->pc = 0x2082FCu;
    // 0x2082fc: 0x80a3001d  lb          $v1, 0x1D($a1)
    ctx->pc = 0x2082fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 29)));
    // 0x208300: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x208300u;
    {
        const bool branch_taken_0x208300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208300u;
            // 0x208304: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208300) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x208308u;
label_208308:
    // 0x208308: 0xc082218  jal         func_208860
    ctx->pc = 0x208308u;
    SET_GPR_U32(ctx, 31, 0x208310u);
    ctx->pc = 0x20830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208308u;
            // 0x20830c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208310u; }
        if (ctx->pc != 0x208310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208310u; }
        if (ctx->pc != 0x208310u) { return; }
    }
    ctx->pc = 0x208310u;
    // 0x208310: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x208310u;
    {
        const bool branch_taken_0x208310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208310u;
            // 0x208314: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208310) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x208318u;
label_208318:
    // 0x208318: 0x52c0005b  beql        $s6, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x208318u;
    {
        const bool branch_taken_0x208318 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x208318) {
            ctx->pc = 0x20831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208318u;
            // 0x20831c: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208488u;
            goto label_208488;
        }
    }
    ctx->pc = 0x208320u;
    // 0x208320: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x208324: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x208324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208328: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x208328u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x20832c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_208330:
    // 0x208330: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x208334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208338: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20833c: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x20833Cu;
    {
        const bool branch_taken_0x20833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20833c) {
            ctx->pc = 0x208340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20833Cu;
            // 0x208340: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208444u;
            goto label_208444;
        }
    }
    ctx->pc = 0x208344u;
    // 0x208344: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x208344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x208348: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x208348u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20834c: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x20834cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x208350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208354: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x208354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x208358: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x208358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x20835c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x20835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x208360: 0x6ba300f7  ldl         $v1, 0xF7($sp)
    ctx->pc = 0x208360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x208364: 0x6fa300f0  ldr         $v1, 0xF0($sp)
    ctx->pc = 0x208364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x208368: 0xb3a300eb  sdl         $v1, 0xEB($sp)
    ctx->pc = 0x208368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20836c: 0xb7a300e4  sdr         $v1, 0xE4($sp)
    ctx->pc = 0x20836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208370: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x208370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x208374: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x208374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x208378: 0x58400032  blezl       $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x208378u;
    {
        const bool branch_taken_0x208378 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x208378) {
            ctx->pc = 0x20837Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208378u;
            // 0x20837c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208444u;
            goto label_208444;
        }
    }
    ctx->pc = 0x208380u;
label_208380:
    // 0x208380: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x208380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x208384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208388: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x20838c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x20838cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208398: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x208398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20839c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x20839cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2083a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2083a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083a4: 0xc081ca8  jal         func_2072A0
    ctx->pc = 0x2083A4u;
    SET_GPR_U32(ctx, 31, 0x2083ACu);
    ctx->pc = 0x2083A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083A4u;
            // 0x2083a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2072A0u;
    if (runtime->hasFunction(0x2072A0u)) {
        auto targetFn = runtime->lookupFunction(0x2072A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083ACu; }
        if (ctx->pc != 0x2083ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002072A0_0x2072a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083ACu; }
        if (ctx->pc != 0x2083ACu) { return; }
    }
    ctx->pc = 0x2083ACu;
    // 0x2083ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2083ACu;
    {
        const bool branch_taken_0x2083ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2083ACu;
            // 0x2083b0: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083ac) {
            ctx->pc = 0x20842Cu;
            goto label_20842c;
        }
    }
    ctx->pc = 0x2083B4u;
    // 0x2083b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2083b8: 0x8fa80104  lw          $t0, 0x104($sp)
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2083bc: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2083c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2083c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083c4: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x2083c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x2083c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2083c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083cc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2083ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2083d0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2083d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2083d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2083d8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2083d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2083dc: 0xc081e76  jal         func_2079D8
    ctx->pc = 0x2083DCu;
    SET_GPR_U32(ctx, 31, 0x2083E4u);
    ctx->pc = 0x2083E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2083DCu;
            // 0x2083e0: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2079D8u;
    if (runtime->hasFunction(0x2079D8u)) {
        auto targetFn = runtime->lookupFunction(0x2079D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083E4u; }
        if (ctx->pc != 0x2083E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002079D8_0x2079d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083E4u; }
        if (ctx->pc != 0x2083E4u) { return; }
    }
    ctx->pc = 0x2083E4u;
    // 0x2083e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2083E4u;
    {
        const bool branch_taken_0x2083e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2083E4u;
            // 0x2083e8: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e4) {
            ctx->pc = 0x20842Cu;
            goto label_20842c;
        }
    }
    ctx->pc = 0x2083ECu;
    // 0x2083ec: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2083f0: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2083f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2083F4u;
    {
        const bool branch_taken_0x2083f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2083f4) {
            ctx->pc = 0x20840Cu;
            goto label_20840c;
        }
    }
    ctx->pc = 0x2083FCu;
    // 0x2083fc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2083fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x208400: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x208400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x208404u;
    {
        const bool branch_taken_0x208404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208404u;
            // 0x208408: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208404) {
            ctx->pc = 0x208428u;
            goto label_208428;
        }
    }
    ctx->pc = 0x20840Cu;
label_20840c:
    // 0x20840c: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x20840Cu;
    {
        const bool branch_taken_0x20840c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x208410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20840Cu;
            // 0x208410: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20840c) {
            ctx->pc = 0x20842Cu;
            goto label_20842c;
        }
    }
    ctx->pc = 0x208414u;
    // 0x208414: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x208414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x208418: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20841c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x208420: 0xac530010  sw          $s3, 0x10($v0)
    ctx->pc = 0x208420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 19));
    // 0x208424: 0x0  nop
    ctx->pc = 0x208424u;
    // NOP
label_208428:
    // 0x208428: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_20842c:
    // 0x20842c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x208430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208434: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x208434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208438: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x208438u;
    {
        const bool branch_taken_0x208438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208438u;
            // 0x20843c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208438) {
            ctx->pc = 0x208380u;
            runtime->cooperativeGuestYield();
            goto label_208380;
        }
    }
    ctx->pc = 0x208440u;
    // 0x208440: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_208444:
    // 0x208444: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x208444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x208448: 0x5440ffb9  bnel        $v0, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x208448u;
    {
        const bool branch_taken_0x208448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208448) {
            ctx->pc = 0x20844Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208448u;
            // 0x20844c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208330u;
            runtime->cooperativeGuestYield();
            goto label_208330;
        }
    }
    ctx->pc = 0x208450u;
    // 0x208450: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x208450u;
    {
        const bool branch_taken_0x208450 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x208454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208450u;
            // 0x208454: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208450) {
            ctx->pc = 0x208484u;
            goto label_208484;
        }
    }
    ctx->pc = 0x208458u;
    // 0x208458: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x20845c: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x20845Cu;
    SET_GPR_U32(ctx, 31, 0x208464u);
    ctx->pc = 0x208460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20845Cu;
            // 0x208460: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208464u; }
        if (ctx->pc != 0x208464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208464u; }
        if (ctx->pc != 0x208464u) { return; }
    }
    ctx->pc = 0x208464u;
    // 0x208464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208468: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x208468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x20846c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x208470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x208474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x208478: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20847c: 0xc082218  jal         func_208860
    ctx->pc = 0x20847Cu;
    SET_GPR_U32(ctx, 31, 0x208484u);
    ctx->pc = 0x208480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20847Cu;
            // 0x208480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208484u; }
        if (ctx->pc != 0x208484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208484u; }
        if (ctx->pc != 0x208484u) { return; }
    }
    ctx->pc = 0x208484u;
label_208484:
    // 0x208484: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_208488:
    // 0x208488: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x208488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20848c: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x20848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208490: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x208490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208494: 0x0  nop
    ctx->pc = 0x208494u;
    // NOP
    // 0x208498: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x208498u;
    {
        const bool branch_taken_0x208498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208498u;
            // 0x20849c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208498) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x2084A0u;
    // 0x2084a0: 0x922201c5  lbu         $v0, 0x1C5($s1)
    ctx->pc = 0x2084a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 453)));
    // 0x2084a4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2084a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2084a8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2084A8u;
    {
        const bool branch_taken_0x2084a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2084a8) {
            ctx->pc = 0x2084ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2084A8u;
            // 0x2084ac: 0x7bb10190  lq          $s1, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2084ECu;
            goto label_2084ec;
        }
    }
    ctx->pc = 0x2084B0u;
    // 0x2084b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2084b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2084b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2084b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2084bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2084c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2084c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2084c4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2084c8: 0xc082146  jal         func_208518
    ctx->pc = 0x2084C8u;
    SET_GPR_U32(ctx, 31, 0x2084D0u);
    ctx->pc = 0x2084CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084C8u;
            // 0x2084cc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208518u;
    if (runtime->hasFunction(0x208518u)) {
        auto targetFn = runtime->lookupFunction(0x208518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084D0u; }
        if (ctx->pc != 0x2084D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208518_0x208518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084D0u; }
        if (ctx->pc != 0x2084D0u) { return; }
    }
    ctx->pc = 0x2084D0u;
    // 0x2084d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2084D0u;
    {
        const bool branch_taken_0x2084d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2084D0u;
            // 0x2084d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084d0) {
            ctx->pc = 0x2084E4u;
            goto label_2084e4;
        }
    }
    ctx->pc = 0x2084D8u;
    // 0x2084d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2084d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084dc: 0xc082218  jal         func_208860
    ctx->pc = 0x2084DCu;
    SET_GPR_U32(ctx, 31, 0x2084E4u);
    ctx->pc = 0x2084E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084DCu;
            // 0x2084e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084E4u; }
        if (ctx->pc != 0x2084E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084E4u; }
        if (ctx->pc != 0x2084E4u) { return; }
    }
    ctx->pc = 0x2084E4u;
label_2084e4:
    // 0x2084e4: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2084e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2084e8:
    // 0x2084e8: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2084e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2084ec:
    // 0x2084ec: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2084ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2084f0: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2084f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2084f4: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2084f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2084f8: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2084f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2084fc: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2084fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x208500: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x208500u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x208504: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x208504u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x208508: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x208508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20850c: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x20850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x208510: 0x3e00008  jr          $ra
    ctx->pc = 0x208510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208510u;
            // 0x208514: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207FF0u: goto label_207ff0;
            case 0x208020u: goto label_208020;
            case 0x208110u: goto label_208110;
            case 0x208128u: goto label_208128;
            case 0x208140u: goto label_208140;
            case 0x20815Cu: goto label_20815c;
            case 0x208188u: goto label_208188;
            case 0x208194u: goto label_208194;
            case 0x208198u: goto label_208198;
            case 0x2081A4u: goto label_2081a4;
            case 0x2081ACu: goto label_2081ac;
            case 0x208250u: goto label_208250;
            case 0x208260u: goto label_208260;
            case 0x208278u: goto label_208278;
            case 0x208280u: goto label_208280;
            case 0x2082C8u: goto label_2082c8;
            case 0x208308u: goto label_208308;
            case 0x208318u: goto label_208318;
            case 0x208330u: goto label_208330;
            case 0x208380u: goto label_208380;
            case 0x20840Cu: goto label_20840c;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208444u: goto label_208444;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208518u;
}

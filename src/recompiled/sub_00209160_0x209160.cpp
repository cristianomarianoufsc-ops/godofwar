#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209160
// Address: 0x209160 - 0x2092b8
void sub_00209160_0x209160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209160_0x209160");
#endif

    ctx->pc = 0x209160u;

    // 0x209160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209164: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x209164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20916c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x20916cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x209170: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x209174: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x209174u;
    {
        const bool branch_taken_0x209174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209174) {
            ctx->pc = 0x2092A0u;
            goto label_2092a0;
        }
    }
    ctx->pc = 0x20917Cu;
    // 0x20917c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x20917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x209180: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x209180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x209184: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x209184u;
    {
        const bool branch_taken_0x209184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209184u;
            // 0x209188: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209184) {
            ctx->pc = 0x2091B8u;
            goto label_2091b8;
        }
    }
    ctx->pc = 0x20918Cu;
    // 0x20918c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20918Cu;
    {
        const bool branch_taken_0x20918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20918Cu;
            // 0x209190: 0xc461001c  lwc1        $f1, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20918c) {
            ctx->pc = 0x2091BCu;
            goto label_2091bc;
        }
    }
    ctx->pc = 0x209194u;
    // 0x209194: 0x0  nop
    ctx->pc = 0x209194u;
    // NOP
label_209198:
    // 0x209198: 0x80e20019  lb          $v0, 0x19($a3)
    ctx->pc = 0x209198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 25)));
    // 0x20919c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2091a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2091a4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2091a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2091a8: 0xc0824ae  jal         func_2092B8
    ctx->pc = 0x2091A8u;
    SET_GPR_U32(ctx, 31, 0x2091B0u);
    ctx->pc = 0x2092B8u;
    if (runtime->hasFunction(0x2092B8u)) {
        auto targetFn = runtime->lookupFunction(0x2092B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091B0u; }
        if (ctx->pc != 0x2091B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002092B8_0x2092b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2091B0u; }
        if (ctx->pc != 0x2091B0u) { return; }
    }
    ctx->pc = 0x2091B0u;
    // 0x2091b0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2091B0u;
    {
        const bool branch_taken_0x2091b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2091B0u;
            // 0x2091b4: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091b0) {
            ctx->pc = 0x2092A4u;
            goto label_2092a4;
        }
    }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2091b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2091bc:
    // 0x2091bc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2091bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2091c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2091c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2091c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2091c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2091c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2091c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2091cc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2091ccu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2091d0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x2091d4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x2091d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2091d8: 0x90440015  lbu         $a0, 0x15($v0)
    ctx->pc = 0x2091d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2091dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2091e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2091e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2091e4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2091e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2091e8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2091e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2091ec: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2091ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2091f0: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x2091f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2091f4: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x2091f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2091f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2091f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2091fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209200: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x209200u;
    {
        const bool branch_taken_0x209200 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x209204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209200u;
            // 0x209204: 0x46020869  min.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209200) {
            ctx->pc = 0x2092A4u;
            goto label_2092a4;
        }
    }
    ctx->pc = 0x209208u;
    // 0x209208: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20920c: 0x0  nop
    ctx->pc = 0x20920cu;
    // NOP
label_209210:
    // 0x209210: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x209210u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209214: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x209214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x209218: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20921c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x209220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209224: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x209224u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209228: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x209228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20922c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20922Cu;
    {
        const bool branch_taken_0x20922c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20922Cu;
            // 0x209230: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20922c) {
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209234u;
    // 0x209234: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x209234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x209238: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x209238u;
    {
        const bool branch_taken_0x209238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209238u;
            // 0x20923c: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209238) {
            ctx->pc = 0x20928Cu;
            goto label_20928c;
        }
    }
    ctx->pc = 0x209240u;
label_209240:
    // 0x209240: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x209240u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x209244: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x209244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x209248: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x209248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x20924c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20924cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x209250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209258: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x209258u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20925c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20925cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209260: 0x0  nop
    ctx->pc = 0x209260u;
    // NOP
    // 0x209264: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x209264u;
    {
        const bool branch_taken_0x209264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209264u;
            // 0x209268: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209264) {
            ctx->pc = 0x20928Cu;
            goto label_20928c;
        }
    }
    ctx->pc = 0x20926Cu;
    // 0x20926c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x20926cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x209270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209278: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x209278u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20927c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20927cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209280: 0x0  nop
    ctx->pc = 0x209280u;
    // NOP
    // 0x209284: 0x4501ffc4  bc1t        . + 4 + (-0x3C << 2)
    ctx->pc = 0x209284u;
    {
        const bool branch_taken_0x209284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209284u;
            // 0x209288: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209284) {
            ctx->pc = 0x209198u;
            runtime->cooperativeGuestYield();
            goto label_209198;
        }
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209290: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x209290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x209294: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x209294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209298: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x209298u;
    {
        const bool branch_taken_0x209298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209298u;
            // 0x20929c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209298) {
            ctx->pc = 0x209210u;
            runtime->cooperativeGuestYield();
            goto label_209210;
        }
    }
    ctx->pc = 0x2092A0u;
label_2092a0:
    // 0x2092a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2092a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2092a4:
    // 0x2092a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2092a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2092a8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2092a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2092ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2092ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2092B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092ACu;
            // 0x2092b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209198u: goto label_209198;
            case 0x2091B8u: goto label_2091b8;
            case 0x2091BCu: goto label_2091bc;
            case 0x209210u: goto label_209210;
            case 0x209240u: goto label_209240;
            case 0x20928Cu: goto label_20928c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2092B4u;
    // 0x2092b4: 0x0  nop
    ctx->pc = 0x2092b4u;
    // NOP
}

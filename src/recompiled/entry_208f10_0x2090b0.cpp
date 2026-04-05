#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_208f10
// Address: 0x208f10 - 0x2090b0
void entry_208f10_0x2090b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_208f10_0x2090b0");
#endif

    ctx->pc = 0x208f10u;

    // 0x208f10: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x208f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f14: 0x812b009f  lb          $t3, 0x9F($t1)
    ctx->pc = 0x208f14u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 159)));
    // 0x208f18: 0x29620020  slti        $v0, $t3, 0x20
    ctx->pc = 0x208f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x208f1c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x208F1Cu;
    {
        const bool branch_taken_0x208f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F1Cu;
            // 0x208f20: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f1c) {
            ctx->pc = 0x2090A0u;
            goto label_2090a0;
        }
    }
    ctx->pc = 0x208F24u;
    // 0x208f24: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x208f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x208f28: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x208F28u;
    {
        const bool branch_taken_0x208f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F28u;
            // 0x208f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f28) {
            ctx->pc = 0x2090A4u;
            goto label_2090a4;
        }
    }
    ctx->pc = 0x208F30u;
    // 0x208f30: 0x8d22005c  lw          $v0, 0x5C($t1)
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x208f34: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x208f38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208F38u;
    {
        const bool branch_taken_0x208f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F38u;
            // 0x208f3c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f38) {
            ctx->pc = 0x208F50u;
            goto label_208f50;
        }
    }
    ctx->pc = 0x208F40u;
    // 0x208f40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208F40u;
    {
        const bool branch_taken_0x208f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F40u;
            // 0x208f44: 0xc461001c  lwc1        $f1, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f40) {
            ctx->pc = 0x208F54u;
            goto label_208f54;
        }
    }
    ctx->pc = 0x208F48u;
label_208f48:
    // 0x208f48: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x208F48u;
    {
        const bool branch_taken_0x208f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F48u;
            // 0x208f4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f48) {
            ctx->pc = 0x2090A4u;
            goto label_2090a4;
        }
    }
    ctx->pc = 0x208F50u;
label_208f50:
    // 0x208f50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x208f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208f54:
    // 0x208f54: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x208f54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x208f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208f5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f64: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x208f64u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x208f68: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x208f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x208f6c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x208f6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x208f70: 0x90440015  lbu         $a0, 0x15($v0)
    ctx->pc = 0x208f70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x208f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208f78: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x208f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x208f7c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x208f80: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x208f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x208f84: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x208f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x208f88: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x208f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208f8c: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x208f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208f90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x208f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x208f94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208f98: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x208F98u;
    {
        const bool branch_taken_0x208f98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x208F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208F98u;
            // 0x208f9c: 0x46020869  min.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f98) {
            ctx->pc = 0x2090A0u;
            goto label_2090a0;
        }
    }
    ctx->pc = 0x208FA0u;
    // 0x208fa0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x208fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x208fa4: 0x0  nop
    ctx->pc = 0x208fa4u;
    // NOP
label_208fa8:
    // 0x208fa8: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208fac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x208facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208fb0: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x208fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x208fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208fb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x208fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208fbc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x208fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208fc0: 0x80820018  lb          $v0, 0x18($a0)
    ctx->pc = 0x208fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x208fc4: 0x14460031  bne         $v0, $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x208FC4u;
    {
        const bool branch_taken_0x208fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x208FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208FC4u;
            // 0x208fc8: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fc4) {
            ctx->pc = 0x20908Cu;
            goto label_20908c;
        }
    }
    ctx->pc = 0x208FCCu;
    // 0x208fcc: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x208fccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x208fd0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x208fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x208fd4: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x208fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x208fd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208fe4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x208fe4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x208fe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208fec: 0x0  nop
    ctx->pc = 0x208fecu;
    // NOP
    // 0x208ff0: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x208FF0u;
    {
        const bool branch_taken_0x208ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208FF0u;
            // 0x208ff4: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ff0) {
            ctx->pc = 0x20908Cu;
            goto label_20908c;
        }
    }
    ctx->pc = 0x208FF8u;
    // 0x208ff8: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x208ff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x208ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209004: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x209004u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x209008: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20900c: 0x0  nop
    ctx->pc = 0x20900cu;
    // NOP
    // 0x209010: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209010u;
            // 0x209014: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209010) {
            ctx->pc = 0x20908Cu;
            goto label_20908c;
        }
    }
    ctx->pc = 0x209018u;
    // 0x209018: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x209018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x20901c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x209020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209020u;
    {
        const bool branch_taken_0x209020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209020u;
            // 0x209024: 0x252a00ac  addiu       $t2, $t1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209020) {
            ctx->pc = 0x209038u;
            goto label_209038;
        }
    }
    ctx->pc = 0x209028u;
    // 0x209028: 0x8d220080  lw          $v0, 0x80($t1)
    ctx->pc = 0x209028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x20902c: 0x14450017  bne         $v0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20902Cu;
    {
        const bool branch_taken_0x20902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20902Cu;
            // 0x209030: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20902c) {
            ctx->pc = 0x20908Cu;
            goto label_20908c;
        }
    }
    ctx->pc = 0x209034u;
    // 0x209034: 0x252a00ac  addiu       $t2, $t1, 0xAC
    ctx->pc = 0x209034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 172));
label_209038:
    // 0x209038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20903c: 0x19600011  blez        $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x20903Cu;
    {
        const bool branch_taken_0x20903c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x209040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20903Cu;
            // 0x209040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20903c) {
            ctx->pc = 0x209084u;
            goto label_209084;
        }
    }
    ctx->pc = 0x209044u;
    // 0x209044: 0x8d2200ac  lw          $v0, 0xAC($t1)
    ctx->pc = 0x209044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x209048: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209048u;
    {
        const bool branch_taken_0x209048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x209048) {
            ctx->pc = 0x20904Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209048u;
            // 0x20904c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209058u;
            goto label_209058;
        }
    }
    ctx->pc = 0x209050u;
    // 0x209050: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209050u;
    {
        const bool branch_taken_0x209050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209050u;
            // 0x209054: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209050) {
            ctx->pc = 0x209078u;
            goto label_209078;
        }
    }
    ctx->pc = 0x209058u;
label_209058:
    // 0x209058: 0x10b102a  slt         $v0, $t0, $t3
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x20905c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20905Cu;
    {
        const bool branch_taken_0x20905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20905Cu;
            // 0x209060: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20905c) {
            ctx->pc = 0x209084u;
            goto label_209084;
        }
    }
    ctx->pc = 0x209064u;
    // 0x209064: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x209064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x209068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20906c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20906Cu;
    {
        const bool branch_taken_0x20906c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20906c) {
            ctx->pc = 0x209070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20906Cu;
            // 0x209070: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209058u;
            runtime->cooperativeGuestYield();
            goto label_209058;
        }
    }
    ctx->pc = 0x209074u;
    // 0x209074: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_209078:
    // 0x209078: 0x5482fff7  bnel        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209078u;
    {
        const bool branch_taken_0x209078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x209078) {
            ctx->pc = 0x20907Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209078u;
            // 0x20907c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209058u;
            runtime->cooperativeGuestYield();
            goto label_209058;
        }
    }
    ctx->pc = 0x209080u;
    // 0x209080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209084:
    // 0x209084: 0x10e0ffb0  beqz        $a3, . + 4 + (-0x50 << 2)
    ctx->pc = 0x209084u;
    {
        const bool branch_taken_0x209084 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x209088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209084u;
            // 0x209088: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209084) {
            ctx->pc = 0x208F48u;
            runtime->cooperativeGuestYield();
            goto label_208f48;
        }
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209090: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x209090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x209094: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x209094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209098: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x209098u;
    {
        const bool branch_taken_0x209098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209098u;
            // 0x20909c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209098) {
            ctx->pc = 0x208FA8u;
            runtime->cooperativeGuestYield();
            goto label_208fa8;
        }
    }
    ctx->pc = 0x2090A0u;
label_2090a0:
    // 0x2090a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2090a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2090a4:
    // 0x2090a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2090A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2090A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2090A4u;
            // 0x2090a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208F48u: goto label_208f48;
            case 0x208F50u: goto label_208f50;
            case 0x208F54u: goto label_208f54;
            case 0x208FA8u: goto label_208fa8;
            case 0x209038u: goto label_209038;
            case 0x209058u: goto label_209058;
            case 0x209078u: goto label_209078;
            case 0x209084u: goto label_209084;
            case 0x20908Cu: goto label_20908c;
            case 0x2090A0u: goto label_2090a0;
            case 0x2090A4u: goto label_2090a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2090ACu;
    // 0x2090ac: 0x0  nop
    ctx->pc = 0x2090acu;
    // NOP
}

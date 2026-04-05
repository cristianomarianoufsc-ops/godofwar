#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF650
// Address: 0x1df650 - 0x1df800
void sub_001DF650_0x1df650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF650_0x1df650");
#endif

    ctx->pc = 0x1df650u;

    // 0x1df650: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1df650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1df654: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1df654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1df658: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1df658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1df65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df660: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1df660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1df664: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1df664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1df668: 0xc077d78  jal         func_1DF5E0
    ctx->pc = 0x1DF668u;
    SET_GPR_U32(ctx, 31, 0x1DF670u);
    ctx->pc = 0x1DF66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF668u;
            // 0x1df66c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5E0u;
    if (runtime->hasFunction(0x1DF5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF670u; }
        if (ctx->pc != 0x1DF670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF5E0_0x1df5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF670u; }
        if (ctx->pc != 0x1DF670u) { return; }
    }
    ctx->pc = 0x1DF670u;
    // 0x1df670: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df674: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df678: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df67c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1df680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df684: 0x0  nop
    ctx->pc = 0x1df684u;
    // NOP
label_1df688:
    // 0x1df688: 0x0  nop
    ctx->pc = 0x1df688u;
    // NOP
    // 0x1df68c: 0x0  nop
    ctx->pc = 0x1df68cu;
    // NOP
    // 0x1df690: 0x0  nop
    ctx->pc = 0x1df690u;
    // NOP
    // 0x1df694: 0x0  nop
    ctx->pc = 0x1df694u;
    // NOP
    // 0x1df698: 0x0  nop
    ctx->pc = 0x1df698u;
    // NOP
    // 0x1df69c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF69Cu;
    {
        const bool branch_taken_0x1df69c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df69c) {
            ctx->pc = 0x1DF6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF69Cu;
            // 0x1df6a0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF688u;
            runtime->cooperativeGuestYield();
            goto label_1df688;
        }
    }
    ctx->pc = 0x1DF6A4u;
    // 0x1df6a4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1df6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1df6a8: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1df6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1df6ac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF6ACu;
    {
        const bool branch_taken_0x1df6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6ACu;
            // 0x1df6b0: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6ac) {
            ctx->pc = 0x1DF6F0u;
            goto label_1df6f0;
        }
    }
    ctx->pc = 0x1DF6B4u;
    // 0x1df6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df6b8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF6B8u;
    {
        const bool branch_taken_0x1df6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6B8u;
            // 0x1df6bc: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6b8) {
            ctx->pc = 0x1DF6F4u;
            goto label_1df6f4;
        }
    }
    ctx->pc = 0x1DF6C0u;
    // 0x1df6c0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1df6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1df6c4: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1df6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df6c8: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1df6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df6cc: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1df6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df6d0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1df6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df6d4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1df6d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df6dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1df6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1df6e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1df6e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df6e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1df6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1df6ec: 0x0  nop
    ctx->pc = 0x1df6ecu;
    // NOP
label_1df6f0:
    // 0x1df6f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1df6f4:
    // 0x1df6f4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1df6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1df6f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df6fc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DF6FCu;
    {
        const bool branch_taken_0x1df6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6FCu;
            // 0x1df700: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6fc) {
            ctx->pc = 0x1DF7F0u;
            goto label_1df7f0;
        }
    }
    ctx->pc = 0x1DF704u;
    // 0x1df704: 0x0  nop
    ctx->pc = 0x1df704u;
    // NOP
label_1df708:
    // 0x1df708: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df70c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df70cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1df710: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df714: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1df714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df718: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1df718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df71c: 0xc077d78  jal         func_1DF5E0
    ctx->pc = 0x1DF71Cu;
    SET_GPR_U32(ctx, 31, 0x1DF724u);
    ctx->pc = 0x1DF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF71Cu;
            // 0x1df720: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF5E0u;
    if (runtime->hasFunction(0x1DF5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DF5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF724u; }
        if (ctx->pc != 0x1DF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF5E0_0x1df5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF724u; }
        if (ctx->pc != 0x1DF724u) { return; }
    }
    ctx->pc = 0x1DF724u;
    // 0x1df724: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1df724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df728: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1df728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df72c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1df72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1df730: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1df734: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1df734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df738: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1df738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df73c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1df73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1df740: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF740u;
    {
        const bool branch_taken_0x1df740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF740u;
            // 0x1df744: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df740) {
            ctx->pc = 0x1DF798u;
            goto label_1df798;
        }
    }
    ctx->pc = 0x1DF748u;
    // 0x1df748: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF748u;
    {
        const bool branch_taken_0x1df748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df748) {
            ctx->pc = 0x1DF74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF748u;
            // 0x1df74c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF79Cu;
            goto label_1df79c;
        }
    }
    ctx->pc = 0x1DF750u;
    // 0x1df750: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df754: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF754u;
    {
        const bool branch_taken_0x1df754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DF758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF754u;
            // 0x1df758: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df754) {
            ctx->pc = 0x1DF798u;
            goto label_1df798;
        }
    }
    ctx->pc = 0x1DF75Cu;
    // 0x1df75c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df760: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1df760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1df764: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1df768: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1df768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df76c: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1df76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df770: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1df770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df774: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1df774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df778: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df77c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df780: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df784: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1df784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1df788: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df78c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF78Cu;
    {
        const bool branch_taken_0x1df78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF78Cu;
            // 0x1df790: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df78c) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF794u;
    // 0x1df794: 0x0  nop
    ctx->pc = 0x1df794u;
    // NOP
label_1df798:
    // 0x1df798: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df79c:
    // 0x1df79c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df7a0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF7A0u;
    {
        const bool branch_taken_0x1df7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DF7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7A0u;
            // 0x1df7a4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7a0) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7A8u;
label_1df7a8:
    // 0x1df7a8: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1df7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1df7ac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1df7b0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1df7b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df7b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF7B8u;
    {
        const bool branch_taken_0x1df7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7B8u;
            // 0x1df7bc: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b8) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7C0u;
    // 0x1df7c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df7c4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1df7c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1df7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df7cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df7d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df7d4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF7D4u;
    {
        const bool branch_taken_0x1df7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7D4u;
            // 0x1df7d8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7d4) {
            ctx->pc = 0x1DF7A8u;
            runtime->cooperativeGuestYield();
            goto label_1df7a8;
        }
    }
    ctx->pc = 0x1DF7DCu;
    // 0x1df7dc: 0x0  nop
    ctx->pc = 0x1df7dcu;
    // NOP
label_1df7e0:
    // 0x1df7e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df7e4: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DF7E4u;
    {
        const bool branch_taken_0x1df7e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DF7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7E4u;
            // 0x1df7e8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e4) {
            ctx->pc = 0x1DF708u;
            runtime->cooperativeGuestYield();
            goto label_1df708;
        }
    }
    ctx->pc = 0x1DF7ECu;
    // 0x1df7ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1df7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1df7f0:
    // 0x1df7f0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1df7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df7f4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1df7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1df7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7F8u;
            // 0x1df7fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF688u: goto label_1df688;
            case 0x1DF6F0u: goto label_1df6f0;
            case 0x1DF6F4u: goto label_1df6f4;
            case 0x1DF708u: goto label_1df708;
            case 0x1DF798u: goto label_1df798;
            case 0x1DF79Cu: goto label_1df79c;
            case 0x1DF7A8u: goto label_1df7a8;
            case 0x1DF7E0u: goto label_1df7e0;
            case 0x1DF7F0u: goto label_1df7f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF800u;
}

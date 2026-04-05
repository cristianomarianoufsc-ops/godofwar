#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF140
// Address: 0x1df140 - 0x1df338
void sub_001DF140_0x1df140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF140_0x1df140");
#endif

    ctx->pc = 0x1df140u;

    // 0x1df140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1df140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1df144: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1df144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1df148: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1df148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1df14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df150: 0xc077c00  jal         func_1DF000
    ctx->pc = 0x1DF150u;
    SET_GPR_U32(ctx, 31, 0x1DF158u);
    ctx->pc = 0x1DF154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF150u;
            // 0x1df154: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF000u;
    if (runtime->hasFunction(0x1DF000u)) {
        auto targetFn = runtime->lookupFunction(0x1DF000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF158u; }
        if (ctx->pc != 0x1DF158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF000_0x1df000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF158u; }
        if (ctx->pc != 0x1DF158u) { return; }
    }
    ctx->pc = 0x1DF158u;
    // 0x1df158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df15c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df160: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1df164: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1df168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df16c: 0x0  nop
    ctx->pc = 0x1df16cu;
    // NOP
label_1df170:
    // 0x1df170: 0x0  nop
    ctx->pc = 0x1df170u;
    // NOP
    // 0x1df174: 0x0  nop
    ctx->pc = 0x1df174u;
    // NOP
    // 0x1df178: 0x0  nop
    ctx->pc = 0x1df178u;
    // NOP
    // 0x1df17c: 0x0  nop
    ctx->pc = 0x1df17cu;
    // NOP
    // 0x1df180: 0x0  nop
    ctx->pc = 0x1df180u;
    // NOP
    // 0x1df184: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DF184u;
    {
        const bool branch_taken_0x1df184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df184) {
            ctx->pc = 0x1DF188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF184u;
            // 0x1df188: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF170u;
            runtime->cooperativeGuestYield();
            goto label_1df170;
        }
    }
    ctx->pc = 0x1DF18Cu;
    // 0x1df18c: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1df18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1df190: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1df190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1df194: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF194u;
    {
        const bool branch_taken_0x1df194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF194u;
            // 0x1df198: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df194) {
            ctx->pc = 0x1DF1D8u;
            goto label_1df1d8;
        }
    }
    ctx->pc = 0x1DF19Cu;
    // 0x1df19c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1df19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df1a0: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF1A0u;
    {
        const bool branch_taken_0x1df1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1A0u;
            // 0x1df1a4: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1a0) {
            ctx->pc = 0x1DF1DCu;
            goto label_1df1dc;
        }
    }
    ctx->pc = 0x1DF1A8u;
    // 0x1df1a8: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1df1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1df1ac: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1df1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df1b0: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1df1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df1b4: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1df1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df1b8: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1df1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df1bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1df1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1df1c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df1c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1df1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1df1c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1df1cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df1d0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1df1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1df1d4: 0x0  nop
    ctx->pc = 0x1df1d4u;
    // NOP
label_1df1d8:
    // 0x1df1d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1df1dc:
    // 0x1df1dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1df1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1df1e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df1e4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DF1E4u;
    {
        const bool branch_taken_0x1df1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1e4) {
            ctx->pc = 0x1DF1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1E4u;
            // 0x1df1e8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2D0u;
            goto label_1df2d0;
        }
    }
    ctx->pc = 0x1DF1ECu;
    // 0x1df1ec: 0x0  nop
    ctx->pc = 0x1df1ecu;
    // NOP
label_1df1f0:
    // 0x1df1f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df1f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df1f8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1df1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df1fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1df1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df200: 0xc077c00  jal         func_1DF000
    ctx->pc = 0x1DF200u;
    SET_GPR_U32(ctx, 31, 0x1DF208u);
    ctx->pc = 0x1DF204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF200u;
            // 0x1df204: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF000u;
    if (runtime->hasFunction(0x1DF000u)) {
        auto targetFn = runtime->lookupFunction(0x1DF000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF208u; }
        if (ctx->pc != 0x1DF208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF000_0x1df000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF208u; }
        if (ctx->pc != 0x1DF208u) { return; }
    }
    ctx->pc = 0x1DF208u;
    // 0x1df208: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1df208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df20c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1df20cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df210: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1df214: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1df214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1df218: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df21c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1df21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df220: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1df224: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF224u;
    {
        const bool branch_taken_0x1df224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF224u;
            // 0x1df228: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df224) {
            ctx->pc = 0x1DF278u;
            goto label_1df278;
        }
    }
    ctx->pc = 0x1DF22Cu;
    // 0x1df22c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF22Cu;
    {
        const bool branch_taken_0x1df22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df22c) {
            ctx->pc = 0x1DF230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF22Cu;
            // 0x1df230: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF27Cu;
            goto label_1df27c;
        }
    }
    ctx->pc = 0x1DF234u;
    // 0x1df234: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df238: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF238u;
    {
        const bool branch_taken_0x1df238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DF23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF238u;
            // 0x1df23c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df238) {
            ctx->pc = 0x1DF278u;
            goto label_1df278;
        }
    }
    ctx->pc = 0x1DF240u;
    // 0x1df240: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df244: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1df244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1df248: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1df248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1df24c: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1df24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df250: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1df250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df254: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1df254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df258: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1df258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df25c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1df264: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1df268: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1df268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1df26c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1df26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df270: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF270u;
    {
        const bool branch_taken_0x1df270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF270u;
            // 0x1df274: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df270) {
            ctx->pc = 0x1DF2C0u;
            goto label_1df2c0;
        }
    }
    ctx->pc = 0x1DF278u;
label_1df278:
    // 0x1df278: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df27c:
    // 0x1df27c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df280: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF280u;
    {
        const bool branch_taken_0x1df280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DF284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF280u;
            // 0x1df284: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df280) {
            ctx->pc = 0x1DF2C0u;
            goto label_1df2c0;
        }
    }
    ctx->pc = 0x1DF288u;
label_1df288:
    // 0x1df288: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1df288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1df28c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1df290: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1df290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1df294: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1df294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1df298: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF298u;
    {
        const bool branch_taken_0x1df298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF298u;
            // 0x1df29c: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df298) {
            ctx->pc = 0x1DF2C0u;
            goto label_1df2c0;
        }
    }
    ctx->pc = 0x1DF2A0u;
    // 0x1df2a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df2a4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1df2a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1df2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df2ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df2b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df2b4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DF2B4u;
    {
        const bool branch_taken_0x1df2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2B4u;
            // 0x1df2b8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2b4) {
            ctx->pc = 0x1DF288u;
            runtime->cooperativeGuestYield();
            goto label_1df288;
        }
    }
    ctx->pc = 0x1DF2BCu;
    // 0x1df2bc: 0x0  nop
    ctx->pc = 0x1df2bcu;
    // NOP
label_1df2c0:
    // 0x1df2c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1df2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df2c4: 0x441ffca  bgez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1DF2C4u;
    {
        const bool branch_taken_0x1df2c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DF2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2C4u;
            // 0x1df2c8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2c4) {
            ctx->pc = 0x1DF1F0u;
            runtime->cooperativeGuestYield();
            goto label_1df1f0;
        }
    }
    ctx->pc = 0x1DF2CCu;
    // 0x1df2cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1df2d0:
    // 0x1df2d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df2d4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df2d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF2E0u);
        ctx->pc = 0x1DF2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2D8u;
            // 0x1df2dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF2E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF170u: goto label_1df170;
            case 0x1DF1D8u: goto label_1df1d8;
            case 0x1DF1DCu: goto label_1df1dc;
            case 0x1DF1F0u: goto label_1df1f0;
            case 0x1DF278u: goto label_1df278;
            case 0x1DF27Cu: goto label_1df27c;
            case 0x1DF288u: goto label_1df288;
            case 0x1DF2C0u: goto label_1df2c0;
            case 0x1DF2D0u: goto label_1df2d0;
            case 0x1DF32Cu: goto label_1df32c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
            if (ctx->pc != 0x1DF2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF2E0u;
    // 0x1df2e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF2E0u;
    {
        const bool branch_taken_0x1df2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df2e0) {
            ctx->pc = 0x1DF2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2E0u;
            // 0x1df2e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF32Cu;
            goto label_1df32c;
        }
    }
    ctx->pc = 0x1DF2E8u;
    // 0x1df2e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df2ec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df2f0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df2f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF2FCu);
        ctx->pc = 0x1DF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2F4u;
            // 0x1df2f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF2FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF170u: goto label_1df170;
            case 0x1DF1D8u: goto label_1df1d8;
            case 0x1DF1DCu: goto label_1df1dc;
            case 0x1DF1F0u: goto label_1df1f0;
            case 0x1DF278u: goto label_1df278;
            case 0x1DF27Cu: goto label_1df27c;
            case 0x1DF288u: goto label_1df288;
            case 0x1DF2C0u: goto label_1df2c0;
            case 0x1DF2D0u: goto label_1df2d0;
            case 0x1DF32Cu: goto label_1df32c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2FCu; }
            if (ctx->pc != 0x1DF2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF2FCu;
    // 0x1df2fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df300: 0xc080358  jal         func_200D60
    ctx->pc = 0x1DF300u;
    SET_GPR_U32(ctx, 31, 0x1DF308u);
    ctx->pc = 0x1DF304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF300u;
            // 0x1df304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF308u; }
        if (ctx->pc != 0x1DF308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF308u; }
        if (ctx->pc != 0x1DF308u) { return; }
    }
    ctx->pc = 0x1DF308u;
    // 0x1df308: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1df308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1df30c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1df30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1df310: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1df310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1df314: 0x40f809  jalr        $v0
    ctx->pc = 0x1DF314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DF31Cu);
        ctx->pc = 0x1DF318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF314u;
            // 0x1df318: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF31Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF170u: goto label_1df170;
            case 0x1DF1D8u: goto label_1df1d8;
            case 0x1DF1DCu: goto label_1df1dc;
            case 0x1DF1F0u: goto label_1df1f0;
            case 0x1DF278u: goto label_1df278;
            case 0x1DF27Cu: goto label_1df27c;
            case 0x1DF288u: goto label_1df288;
            case 0x1DF2C0u: goto label_1df2c0;
            case 0x1DF2D0u: goto label_1df2d0;
            case 0x1DF32Cu: goto label_1df32c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF31Cu; }
            if (ctx->pc != 0x1DF31Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF31Cu;
    // 0x1df31c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df320: 0xc080358  jal         func_200D60
    ctx->pc = 0x1DF320u;
    SET_GPR_U32(ctx, 31, 0x1DF328u);
    ctx->pc = 0x1DF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF320u;
            // 0x1df324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF328u; }
        if (ctx->pc != 0x1DF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF328u; }
        if (ctx->pc != 0x1DF328u) { return; }
    }
    ctx->pc = 0x1DF328u;
    // 0x1df328: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1df328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1df32c:
    // 0x1df32c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1df32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df330: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF330u;
            // 0x1df334: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF170u: goto label_1df170;
            case 0x1DF1D8u: goto label_1df1d8;
            case 0x1DF1DCu: goto label_1df1dc;
            case 0x1DF1F0u: goto label_1df1f0;
            case 0x1DF278u: goto label_1df278;
            case 0x1DF27Cu: goto label_1df27c;
            case 0x1DF288u: goto label_1df288;
            case 0x1DF2C0u: goto label_1df2c0;
            case 0x1DF2D0u: goto label_1df2d0;
            case 0x1DF32Cu: goto label_1df32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF338u;
}

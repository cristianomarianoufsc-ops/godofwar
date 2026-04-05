#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001411B8
// Address: 0x1411b8 - 0x141350
void sub_001411B8_0x1411b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001411B8_0x1411b8");
#endif

    ctx->pc = 0x1411b8u;

    // 0x1411b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1411b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1411bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1411c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1411c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1411c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1411c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1411c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1411c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1411cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1411ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1411d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1411d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1411d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1411d8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1411dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1411e0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1411e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1411e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1411E4u;
    {
        const bool branch_taken_0x1411e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411E4u;
            // 0x1411e8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e4) {
            ctx->pc = 0x1411FCu;
            goto label_1411fc;
        }
    }
    ctx->pc = 0x1411ECu;
    // 0x1411ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1411f0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1411f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1411f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1411f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1411f8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1411f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1411fc:
    // 0x1411fc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141200: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x141204: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x141204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141208: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x141208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14120c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14120Cu;
    {
        const bool branch_taken_0x14120c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14120Cu;
            // 0x141210: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14120c) {
            ctx->pc = 0x141290u;
            goto label_141290;
        }
    }
    ctx->pc = 0x141214u;
    // 0x141214: 0x8c421048  lw          $v0, 0x1048($v0)
    ctx->pc = 0x141214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x141218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x141218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14121c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14121cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141220: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x141220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x141224: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x141224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x141228: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x141228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14122c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x14122cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141234: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x141234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x141238: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x141238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14123c: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x14123cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x141240: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x141240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141244: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x141244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141248: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x141248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14124c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14124cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x141250: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x141250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141254: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x141254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x141258: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14125c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x14125cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x141260: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x141260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x141264: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x141264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x141268: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x141268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14126c: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x14126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141270: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x141270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141274: 0xa0620018  sb          $v0, 0x18($v1)
    ctx->pc = 0x141274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x141278: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x141278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14127c: 0xa0600019  sb          $zero, 0x19($v1)
    ctx->pc = 0x14127cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x141280: 0xa460001c  sh          $zero, 0x1C($v1)
    ctx->pc = 0x141280u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x141284: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x141284u;
    {
        const bool branch_taken_0x141284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141284u;
            // 0x141288: 0xa460001e  sh          $zero, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141284) {
            ctx->pc = 0x141310u;
            goto label_141310;
        }
    }
    ctx->pc = 0x14128Cu;
    // 0x14128c: 0x0  nop
    ctx->pc = 0x14128cu;
    // NOP
label_141290:
    // 0x141290: 0xc04f824  jal         func_13E090
    ctx->pc = 0x141290u;
    SET_GPR_U32(ctx, 31, 0x141298u);
    ctx->pc = 0x141294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141290u;
            // 0x141294: 0x8c900138  lw          $s0, 0x138($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141298u; }
        if (ctx->pc != 0x141298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141298u; }
        if (ctx->pc != 0x141298u) { return; }
    }
    ctx->pc = 0x141298u;
    // 0x141298: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x141298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14129c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1412a0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1412A0u;
    SET_GPR_U32(ctx, 31, 0x1412A8u);
    ctx->pc = 0x1412A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1412A0u;
            // 0x1412a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412A8u; }
        if (ctx->pc != 0x1412A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412A8u; }
        if (ctx->pc != 0x1412A8u) { return; }
    }
    ctx->pc = 0x1412A8u;
    // 0x1412a8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1412a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1412ac: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1412acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1412b0: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1412b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412b4: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1412b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1412b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1412bc: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1412bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1412c0: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1412c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1412c4: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1412c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412c8: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1412c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412cc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1412d0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1412d4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1412d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1412d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1412d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1412dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1412dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1412e0: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x1412e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1412e4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x1412e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1412e8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1412e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1412ec: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x1412ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1412f0: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x1412f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1412f4: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1412f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412f8: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1412f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1412fc: 0xa0440018  sb          $a0, 0x18($v0)
    ctx->pc = 0x1412fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x141300: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141304: 0xa0400019  sb          $zero, 0x19($v0)
    ctx->pc = 0x141304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x141308: 0xa440001c  sh          $zero, 0x1C($v0)
    ctx->pc = 0x141308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x14130c: 0xa440001e  sh          $zero, 0x1E($v0)
    ctx->pc = 0x14130cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
label_141310:
    // 0x141310: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x141310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x141314: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x141314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141318: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x141318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14131c: 0x90c40018  lbu         $a0, 0x18($a2)
    ctx->pc = 0x14131cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x141320: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x141320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x141324: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x141324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141328: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x141328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14132c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141330: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x141330u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x141334: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x141334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x141338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14133c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14133cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x141340: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x141340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x141344: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x141344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x141348: 0x3e00008  jr          $ra
    ctx->pc = 0x141348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141348u;
            // 0x14134c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1411FCu: goto label_1411fc;
            case 0x141290u: goto label_141290;
            case 0x141310u: goto label_141310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141350u;
}

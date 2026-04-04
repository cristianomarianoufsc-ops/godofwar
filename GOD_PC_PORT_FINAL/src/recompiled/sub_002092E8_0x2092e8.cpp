#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002092E8
// Address: 0x2092e8 - 0x2093b8
void sub_002092E8_0x2092e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002092E8_0x2092e8");
#endif

    ctx->pc = 0x2092e8u;

    // 0x2092e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2092ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2092ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2092f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2092f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2092f4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2092f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2092f8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2092F8u;
    {
        const bool branch_taken_0x2092f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2092FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092F8u;
            // 0x2092fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092f8) {
            ctx->pc = 0x2093A4u;
            goto label_2093a4;
        }
    }
    ctx->pc = 0x209300u;
    // 0x209300: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x209300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x209304: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x209304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209308: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x209308u;
    SET_GPR_U32(ctx, 31, 0x209310u);
    ctx->pc = 0x20930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209308u;
            // 0x20930c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209310u; }
        if (ctx->pc != 0x209310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209310u; }
        if (ctx->pc != 0x209310u) { return; }
    }
    ctx->pc = 0x209310u;
    // 0x209310: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x209310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209314: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x209314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x209318: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x209318u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20931c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x20931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x209320: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x209320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x209324: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x209324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x209328: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x209328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20932c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x20932cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x209330: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x209330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x209334: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x209334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x209338: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x209338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20933c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209340: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x209340u;
    {
        const bool branch_taken_0x209340 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x209344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209340u;
            // 0x209344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209340) {
            ctx->pc = 0x2093A4u;
            goto label_2093a4;
        }
    }
    ctx->pc = 0x209348u;
    // 0x209348: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20934c: 0x0  nop
    ctx->pc = 0x20934cu;
    // NOP
label_209350:
    // 0x209350: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209354: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x209354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x209358: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20935c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x209360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209364: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x209364u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x209368: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20936c: 0x8062000f  lb          $v0, 0xF($v1)
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x209370: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209370u;
    {
        const bool branch_taken_0x209370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x209374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209370u;
            // 0x209374: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209370) {
            ctx->pc = 0x20938Cu;
            goto label_20938c;
        }
    }
    ctx->pc = 0x209378u;
    // 0x209378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20937c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x20937Cu;
    {
        const bool branch_taken_0x20937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x209380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20937Cu;
            // 0x209380: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20937c) {
            ctx->pc = 0x20938Cu;
            goto label_20938c;
        }
    }
    ctx->pc = 0x209384u;
    // 0x209384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209384u;
    {
        const bool branch_taken_0x209384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209384u;
            // 0x209388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209384) {
            ctx->pc = 0x2093A4u;
            goto label_2093a4;
        }
    }
    ctx->pc = 0x20938Cu;
label_20938c:
    // 0x20938c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209390: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x209390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x209394: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x209394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209398: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x209398u;
    {
        const bool branch_taken_0x209398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209398u;
            // 0x20939c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209398) {
            ctx->pc = 0x209350u;
            runtime->cooperativeGuestYield();
            goto label_209350;
        }
    }
    ctx->pc = 0x2093A0u;
    // 0x2093a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2093a4:
    // 0x2093a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2093a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2093a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2093a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2093ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2093ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093ACu;
            // 0x2093b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209350u: goto label_209350;
            case 0x20938Cu: goto label_20938c;
            case 0x2093A4u: goto label_2093a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2093B4u;
    // 0x2093b4: 0x0  nop
    ctx->pc = 0x2093b4u;
    // NOP
}

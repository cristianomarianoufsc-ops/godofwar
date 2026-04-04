#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229560
// Address: 0x229560 - 0x229640
void sub_00229560_0x229560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229560_0x229560");
#endif

    ctx->pc = 0x229560u;

    // 0x229560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229564: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x229564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x229568: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x229568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22956c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22956cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x229570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x229574: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x229574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22957c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229580:
    // 0x229580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229584: 0xc08a502  jal         func_229408
    ctx->pc = 0x229584u;
    SET_GPR_U32(ctx, 31, 0x22958Cu);
    ctx->pc = 0x229588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229584u;
            // 0x229588: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229408u;
    if (runtime->hasFunction(0x229408u)) {
        auto targetFn = runtime->lookupFunction(0x229408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22958Cu; }
        if (ctx->pc != 0x22958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229408_0x229408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22958Cu; }
        if (ctx->pc != 0x22958Cu) { return; }
    }
    ctx->pc = 0x22958Cu;
    // 0x22958c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229590: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x229590u;
    {
        const bool branch_taken_0x229590 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x229594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229590u;
            // 0x229594: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229590) {
            ctx->pc = 0x229580u;
            runtime->cooperativeGuestYield();
            goto label_229580;
        }
    }
    ctx->pc = 0x229598u;
    // 0x229598: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22959c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x22959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2295a0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2295a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2295a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2295a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2295a8: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2295a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2295ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2295acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295b0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2295b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2295b4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2295b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2295b8: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x2295bc: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x2295BCu;
    SET_GPR_U32(ctx, 31, 0x2295C4u);
    ctx->pc = 0x2295C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2295BCu;
            // 0x2295c0: 0xac5011d0  sw          $s0, 0x11D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295C4u; }
        if (ctx->pc != 0x2295C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295C4u; }
        if (ctx->pc != 0x2295C4u) { return; }
    }
    ctx->pc = 0x2295C4u;
    // 0x2295c4: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x2295c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2295c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2295c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2295ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295d0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2295d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2295d4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2295d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2295d8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2295d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2295dc: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2295dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2295e0: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2295e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2295e4: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2295e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2295e8: 0xb20200db  sdl         $v0, 0xDB($s0)
    ctx->pc = 0x2295e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2295ec: 0xb60200d4  sdr         $v0, 0xD4($s0)
    ctx->pc = 0x2295ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2295f0: 0xb20300e3  sdl         $v1, 0xE3($s0)
    ctx->pc = 0x2295f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2295f4: 0xb60300dc  sdr         $v1, 0xDC($s0)
    ctx->pc = 0x2295f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2295f8: 0xb20600eb  sdl         $a2, 0xEB($s0)
    ctx->pc = 0x2295f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2295fc: 0xb60600e4  sdr         $a2, 0xE4($s0)
    ctx->pc = 0x2295fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x229600: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x229600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x229604: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x229604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x229608: 0xc60c00ec  lwc1        $f12, 0xEC($s0)
    ctx->pc = 0x229608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22960c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x22960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x229610: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x229610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x229614: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x229614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x229618: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x229618u;
    SET_GPR_U32(ctx, 31, 0x229620u);
    ctx->pc = 0x22961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229618u;
            // 0x22961c: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229620u; }
        if (ctx->pc != 0x229620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229620u; }
        if (ctx->pc != 0x229620u) { return; }
    }
    ctx->pc = 0x229620u;
    // 0x229620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x229620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229624: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x229624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229628: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x229628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22962c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22962cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x229630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229634: 0x3e00008  jr          $ra
    ctx->pc = 0x229634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229634u;
            // 0x229638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229580u: goto label_229580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22963Cu;
    // 0x22963c: 0x0  nop
    ctx->pc = 0x22963cu;
    // NOP
}

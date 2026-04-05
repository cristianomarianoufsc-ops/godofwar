#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170620
// Address: 0x170620 - 0x170760
void sub_00170620_0x170620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170620_0x170620");
#endif

    ctx->pc = 0x170620u;

    // 0x170620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x170624: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x170628: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x170628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17062c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17062cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170630: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x170630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170634: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x170634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x170638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17063c: 0xc04c012  jal         func_130048
    ctx->pc = 0x17063Cu;
    SET_GPR_U32(ctx, 31, 0x170644u);
    ctx->pc = 0x170640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17063Cu;
            // 0x170640: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170644u; }
        if (ctx->pc != 0x170644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170644u; }
        if (ctx->pc != 0x170644u) { return; }
    }
    ctx->pc = 0x170644u;
    // 0x170644: 0xae300070  sw          $s0, 0x70($s1)
    ctx->pc = 0x170644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 16));
    // 0x170648: 0xc08f3e0  jal         func_23CF80
    ctx->pc = 0x170648u;
    SET_GPR_U32(ctx, 31, 0x170650u);
    ctx->pc = 0x17064Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170648u;
            // 0x17064c: 0x26240074  addiu       $a0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CF80u;
    if (runtime->hasFunction(0x23CF80u)) {
        auto targetFn = runtime->lookupFunction(0x23CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170650u; }
        if (ctx->pc != 0x170650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23cf80_0x23cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170650u; }
        if (ctx->pc != 0x170650u) { return; }
    }
    ctx->pc = 0x170650u;
    // 0x170650: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x170650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x170654: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x170654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x170658: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x170658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17065c: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x17065cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x170660: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x170660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x170664: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x170664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x170668: 0x6a45003f  ldl         $a1, 0x3F($s2)
    ctx->pc = 0x170668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17066c: 0x6e450038  ldr         $a1, 0x38($s2)
    ctx->pc = 0x17066cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x170670: 0xb22200a3  sdl         $v0, 0xA3($s1)
    ctx->pc = 0x170670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170674: 0xb622009c  sdr         $v0, 0x9C($s1)
    ctx->pc = 0x170674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170678: 0xb22300ab  sdl         $v1, 0xAB($s1)
    ctx->pc = 0x170678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17067c: 0xb62300a4  sdr         $v1, 0xA4($s1)
    ctx->pc = 0x17067cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170680: 0xb22400b3  sdl         $a0, 0xB3($s1)
    ctx->pc = 0x170680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170684: 0xb62400ac  sdr         $a0, 0xAC($s1)
    ctx->pc = 0x170684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170688: 0xb22500bb  sdl         $a1, 0xBB($s1)
    ctx->pc = 0x170688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17068c: 0xb62500b4  sdr         $a1, 0xB4($s1)
    ctx->pc = 0x17068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170690: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x170694: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x170694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    // 0x170698: 0x92420044  lbu         $v0, 0x44($s2)
    ctx->pc = 0x170698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17069c: 0xa22200c0  sb          $v0, 0xC0($s1)
    ctx->pc = 0x17069cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x1706a0: 0x92420045  lbu         $v0, 0x45($s2)
    ctx->pc = 0x1706a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x1706a4: 0xa22200c1  sb          $v0, 0xC1($s1)
    ctx->pc = 0x1706a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 193), (uint8_t)GPR_U32(ctx, 2));
    // 0x1706a8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1706a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1706ac: 0x96420046  lhu         $v0, 0x46($s2)
    ctx->pc = 0x1706acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x1706b0: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x1706b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x1706b4: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x1706b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x1706b8: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x1706b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1706bc: 0xa62000cc  sh          $zero, 0xCC($s1)
    ctx->pc = 0x1706bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 204), (uint16_t)GPR_U32(ctx, 0));
    // 0x1706c0: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x1706c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
    // 0x1706c4: 0xa22000ce  sb          $zero, 0xCE($s1)
    ctx->pc = 0x1706c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x1706c8: 0xa22000cf  sb          $zero, 0xCF($s1)
    ctx->pc = 0x1706c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 207), (uint8_t)GPR_U32(ctx, 0));
    // 0x1706cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1706ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706d0:
    // 0x1706d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1706d4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1706d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1706dc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1706e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1706e4: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x1706e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1706e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1706E8u;
    {
        const bool branch_taken_0x1706e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1706ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706E8u;
            // 0x1706ec: 0xac44008c  sw          $a0, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706e8) {
            ctx->pc = 0x1706D0u;
            runtime->cooperativeGuestYield();
            goto label_1706d0;
        }
    }
    ctx->pc = 0x1706F0u;
    // 0x1706f0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1706f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1706f4: 0x82420050  lb          $v0, 0x50($s2)
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1706f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1706F8u;
    {
        const bool branch_taken_0x1706f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706F8u;
            // 0x1706fc: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706f8) {
            ctx->pc = 0x170740u;
            goto label_170740;
        }
    }
    ctx->pc = 0x170700u;
    // 0x170700: 0x96420046  lhu         $v0, 0x46($s2)
    ctx->pc = 0x170700u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x170704: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x170704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x170708: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x170708u;
    {
        const bool branch_taken_0x170708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170708u;
            // 0x17070c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170708) {
            ctx->pc = 0x170744u;
            goto label_170744;
        }
    }
    ctx->pc = 0x170710u;
    // 0x170710: 0xc05e996  jal         func_17A658
    ctx->pc = 0x170710u;
    SET_GPR_U32(ctx, 31, 0x170718u);
    ctx->pc = 0x170714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170710u;
            // 0x170714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170718u; }
        if (ctx->pc != 0x170718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170718u; }
        if (ctx->pc != 0x170718u) { return; }
    }
    ctx->pc = 0x170718u;
    // 0x170718: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x170718u;
    {
        const bool branch_taken_0x170718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170718u;
            // 0x17071c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170718) {
            ctx->pc = 0x170744u;
            goto label_170744;
        }
    }
    ctx->pc = 0x170720u;
    // 0x170720: 0xc05d656  jal         func_175958
    ctx->pc = 0x170720u;
    SET_GPR_U32(ctx, 31, 0x170728u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170728u; }
        if (ctx->pc != 0x170728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170728u; }
        if (ctx->pc != 0x170728u) { return; }
    }
    ctx->pc = 0x170728u;
    // 0x170728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17072c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170730: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x170730u;
    SET_GPR_U32(ctx, 31, 0x170738u);
    ctx->pc = 0x170734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170730u;
            // 0x170734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170738u; }
        if (ctx->pc != 0x170738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170738u; }
        if (ctx->pc != 0x170738u) { return; }
    }
    ctx->pc = 0x170738u;
    // 0x170738: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x170738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x17073c: 0x0  nop
    ctx->pc = 0x17073cu;
    // NOP
label_170740:
    // 0x170740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x170740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170744:
    // 0x170744: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x170744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x170748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17074c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17074cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170754: 0x3e00008  jr          $ra
    ctx->pc = 0x170754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170754u;
            // 0x170758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1706D0u: goto label_1706d0;
            case 0x170740u: goto label_170740;
            case 0x170744u: goto label_170744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17075Cu;
    // 0x17075c: 0x0  nop
    ctx->pc = 0x17075cu;
    // NOP
}

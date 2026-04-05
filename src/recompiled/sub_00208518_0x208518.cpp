#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208518
// Address: 0x208518 - 0x2087d8
void sub_00208518_0x208518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208518_0x208518");
#endif

    ctx->pc = 0x208518u;

    // 0x208518: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x208518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x20851c: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x20851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x208520: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x208520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x208524: 0x3c117fff  lui         $s1, 0x7FFF
    ctx->pc = 0x208524u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
    // 0x208528: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x208528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x20852c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20852cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208530: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x208530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x208534: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x208534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208538: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x208538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x20853c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x20853cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x208540: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x208540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x208544: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x208544u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208548: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x208548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x20854c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x20854cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208550: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x208550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x208554: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x208554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x208558: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x208558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x20855c: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x20855cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x208560: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x208560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x208564: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x208564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x208568: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x208568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
    // 0x20856c: 0xc081c88  jal         func_207220
    ctx->pc = 0x20856Cu;
    SET_GPR_U32(ctx, 31, 0x208574u);
    ctx->pc = 0x208570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20856Cu;
            // 0x208570: 0xafa800e4  sw          $t0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207220u;
    if (runtime->hasFunction(0x207220u)) {
        auto targetFn = runtime->lookupFunction(0x207220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208574u; }
        if (ctx->pc != 0x208574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_207220_0x2072a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208574u; }
        if (ctx->pc != 0x208574u) { return; }
    }
    ctx->pc = 0x208574u;
    // 0x208574: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x208574u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208578: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x208578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x20857c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x20857Cu;
    {
        const bool branch_taken_0x20857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20857c) {
            ctx->pc = 0x208668u;
            goto label_208668;
        }
    }
    ctx->pc = 0x208584u;
    // 0x208584: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x208588: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x208588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x20858c: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x20858cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x208590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208594: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x208594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x208598: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x208598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x20859c: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x20859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2085a0: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x2085a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2085a4: 0xb3a2009b  sdl         $v0, 0x9B($sp)
    ctx->pc = 0x2085a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2085a8: 0xb7a20094  sdr         $v0, 0x94($sp)
    ctx->pc = 0x2085a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2085ac: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2085acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x2085b0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2085b4: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2085B4u;
    {
        const bool branch_taken_0x2085b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2085b4) {
            ctx->pc = 0x208668u;
            goto label_208668;
        }
    }
    ctx->pc = 0x2085BCu;
    // 0x2085bc: 0x0  nop
    ctx->pc = 0x2085bcu;
    // NOP
label_2085c0:
    // 0x2085c0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2085c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2085c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2085c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2085cc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2085ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2085d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2085d4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2085d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2085d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2085dc: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x2085dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2085e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2085e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2085e4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2085e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085e8: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2085ec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2085f0: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x2085f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2085f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2085f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085f8: 0x8fab00e4  lw          $t3, 0xE4($sp)
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2085fc: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x2085fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x208600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208604: 0xc081e76  jal         func_2079D8
    ctx->pc = 0x208604u;
    SET_GPR_U32(ctx, 31, 0x20860Cu);
    ctx->pc = 0x208608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208604u;
            // 0x208608: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2079D8u;
    if (runtime->hasFunction(0x2079D8u)) {
        auto targetFn = runtime->lookupFunction(0x2079D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20860Cu; }
        if (ctx->pc != 0x20860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002079D8_0x2079d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20860Cu; }
        if (ctx->pc != 0x20860Cu) { return; }
    }
    ctx->pc = 0x20860Cu;
    // 0x20860c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20860Cu;
    {
        const bool branch_taken_0x20860c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20860Cu;
            // 0x208610: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20860c) {
            ctx->pc = 0x208654u;
            goto label_208654;
        }
    }
    ctx->pc = 0x208614u;
    // 0x208614: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x208618: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x208618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20861c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20861Cu;
    {
        const bool branch_taken_0x20861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20861c) {
            ctx->pc = 0x208634u;
            goto label_208634;
        }
    }
    ctx->pc = 0x208624u;
    // 0x208624: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x208624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x208628: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x208628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20862c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20862Cu;
    {
        const bool branch_taken_0x20862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20862Cu;
            // 0x208630: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20862c) {
            ctx->pc = 0x208650u;
            goto label_208650;
        }
    }
    ctx->pc = 0x208634u;
label_208634:
    // 0x208634: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x208634u;
    {
        const bool branch_taken_0x208634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x208638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208634u;
            // 0x208638: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208634) {
            ctx->pc = 0x208654u;
            goto label_208654;
        }
    }
    ctx->pc = 0x20863Cu;
    // 0x20863c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x208640: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x208644: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x208648: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x208648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x20864c: 0x0  nop
    ctx->pc = 0x20864cu;
    // NOP
label_208650:
    // 0x208650: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_208654:
    // 0x208654: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x208658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20865c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x20865cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208660: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x208660u;
    {
        const bool branch_taken_0x208660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208660u;
            // 0x208664: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208660) {
            ctx->pc = 0x2085C0u;
            runtime->cooperativeGuestYield();
            goto label_2085c0;
        }
    }
    ctx->pc = 0x208668u;
label_208668:
    // 0x208668: 0x1e600049  bgtz        $s3, . + 4 + (0x49 << 2)
    ctx->pc = 0x208668u;
    {
        const bool branch_taken_0x208668 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x20866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208668u;
            // 0x20866c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208668) {
            ctx->pc = 0x208790u;
            goto label_208790;
        }
    }
    ctx->pc = 0x208670u;
    // 0x208670: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208674: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_208678:
    // 0x208678: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x208678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x20867c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208680: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x208680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x208684: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x208684u;
    {
        const bool branch_taken_0x208684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208684) {
            ctx->pc = 0x208688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208684u;
            // 0x208688: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208774u;
            goto label_208774;
        }
    }
    ctx->pc = 0x20868Cu;
    // 0x20868c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x208690: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208694: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x208694u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x208698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20869c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2086a0: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2086a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2086a4: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2086a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2086a8: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x2086a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2086ac: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x2086acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2086b0: 0xb3a200bb  sdl         $v0, 0xBB($sp)
    ctx->pc = 0x2086b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2086b4: 0xb7a200b4  sdr         $v0, 0xB4($sp)
    ctx->pc = 0x2086b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2086b8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2086b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2086bc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2086c0: 0x5840002c  blezl       $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2086C0u;
    {
        const bool branch_taken_0x2086c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2086c0) {
            ctx->pc = 0x2086C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2086C0u;
            // 0x2086c4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208774u;
            goto label_208774;
        }
    }
    ctx->pc = 0x2086C8u;
label_2086c8:
    // 0x2086c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2086cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2086ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2086d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2086d4: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x2086d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2086d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2086dc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2086dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2086e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2086e4: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2086e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2086e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2086ec: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2086ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086f0: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x2086f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2086f4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2086f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2086f8: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2086fc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2086fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208700: 0x8fab00e4  lw          $t3, 0xE4($sp)
    ctx->pc = 0x208700u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x208704: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x208704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x208708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20870c: 0xc081e76  jal         func_2079D8
    ctx->pc = 0x20870Cu;
    SET_GPR_U32(ctx, 31, 0x208714u);
    ctx->pc = 0x208710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20870Cu;
            // 0x208710: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2079D8u;
    if (runtime->hasFunction(0x2079D8u)) {
        auto targetFn = runtime->lookupFunction(0x2079D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208714u; }
        if (ctx->pc != 0x208714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002079D8_0x2079d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208714u; }
        if (ctx->pc != 0x208714u) { return; }
    }
    ctx->pc = 0x208714u;
    // 0x208714: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x208714u;
    {
        const bool branch_taken_0x208714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208714u;
            // 0x208718: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208714) {
            ctx->pc = 0x20875Cu;
            goto label_20875c;
        }
    }
    ctx->pc = 0x20871Cu;
    // 0x20871c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x20871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x208720: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x208720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x208724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208724u;
    {
        const bool branch_taken_0x208724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208724) {
            ctx->pc = 0x20873Cu;
            goto label_20873c;
        }
    }
    ctx->pc = 0x20872Cu;
    // 0x20872c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x20872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x208730: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x208730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x208734u;
    {
        const bool branch_taken_0x208734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208734u;
            // 0x208738: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208734) {
            ctx->pc = 0x208758u;
            goto label_208758;
        }
    }
    ctx->pc = 0x20873Cu;
label_20873c:
    // 0x20873c: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20873Cu;
    {
        const bool branch_taken_0x20873c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x208740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20873Cu;
            // 0x208740: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20873c) {
            ctx->pc = 0x20875Cu;
            goto label_20875c;
        }
    }
    ctx->pc = 0x208744u;
    // 0x208744: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x208744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x208748: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x208748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x20874c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x208750: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x208750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x208754: 0x0  nop
    ctx->pc = 0x208754u;
    // NOP
label_208758:
    // 0x208758: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20875c:
    // 0x20875c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x208760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208764: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x208764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208768: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x208768u;
    {
        const bool branch_taken_0x208768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208768u;
            // 0x20876c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208768) {
            ctx->pc = 0x2086C8u;
            runtime->cooperativeGuestYield();
            goto label_2086c8;
        }
    }
    ctx->pc = 0x208770u;
    // 0x208770: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_208774:
    // 0x208774: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x208774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x208778: 0x5440ffbf  bnel        $v0, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x208778u;
    {
        const bool branch_taken_0x208778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208778) {
            ctx->pc = 0x20877Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208778u;
            // 0x20877c: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208678u;
            runtime->cooperativeGuestYield();
            goto label_208678;
        }
    }
    ctx->pc = 0x208780u;
    // 0x208780: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x208780u;
    {
        const bool branch_taken_0x208780 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x208784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208780u;
            // 0x208784: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208780) {
            ctx->pc = 0x208790u;
            goto label_208790;
        }
    }
    ctx->pc = 0x208788u;
    // 0x208788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208788u;
    {
        const bool branch_taken_0x208788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208788u;
            // 0x20878c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208788) {
            ctx->pc = 0x2087A8u;
            goto label_2087a8;
        }
    }
    ctx->pc = 0x208790u;
label_208790:
    // 0x208790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x208790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208794: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x208794u;
    SET_GPR_U32(ctx, 31, 0x20879Cu);
    ctx->pc = 0x208798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208794u;
            // 0x208798: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20879Cu; }
        if (ctx->pc != 0x20879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20879Cu; }
        if (ctx->pc != 0x20879Cu) { return; }
    }
    ctx->pc = 0x20879Cu;
    // 0x20879c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2087a0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2087a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2087a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2087a8:
    // 0x2087a8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2087a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2087ac: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2087acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2087b0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2087b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2087b4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2087b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2087b8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2087b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2087bc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2087bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2087c0: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2087c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2087c4: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2087c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2087c8: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2087c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2087cc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2087ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2087d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2087D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2087D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2087D0u;
            // 0x2087d4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2085C0u: goto label_2085c0;
            case 0x208634u: goto label_208634;
            case 0x208650u: goto label_208650;
            case 0x208654u: goto label_208654;
            case 0x208668u: goto label_208668;
            case 0x208678u: goto label_208678;
            case 0x2086C8u: goto label_2086c8;
            case 0x20873Cu: goto label_20873c;
            case 0x208758u: goto label_208758;
            case 0x20875Cu: goto label_20875c;
            case 0x208774u: goto label_208774;
            case 0x208790u: goto label_208790;
            case 0x2087A8u: goto label_2087a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2087D8u;
}

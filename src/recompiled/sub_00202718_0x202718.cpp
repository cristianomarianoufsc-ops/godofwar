#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202718
// Address: 0x202718 - 0x202ce8
void sub_00202718_0x202718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202718_0x202718");
#endif

    ctx->pc = 0x202718u;

    // 0x202718: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x202718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x20271c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x20271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x202720: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x202720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x202724: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x202724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202728: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x202728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x20272c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x20272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x202730: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x202730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202734: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x202734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x202738: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x202738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20273c: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x20273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x202740: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x202740u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202744: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x202744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x202748: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x202748u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20274c: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x20274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x202750: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x202750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x202754: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x202754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x202758: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x202758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x20275c: 0x97a301d0  lhu         $v1, 0x1D0($sp)
    ctx->pc = 0x20275cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x202760: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x202764: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x202764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x202768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20276c: 0x8fb301d8  lw          $s3, 0x1D8($sp)
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x202770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202770u;
    {
        const bool branch_taken_0x202770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202770u;
            // 0x202774: 0xafa300f4  sw          $v1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202770) {
            ctx->pc = 0x202798u;
            goto label_202798;
        }
    }
    ctx->pc = 0x202778u;
    // 0x202778: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x20277c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x202780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202780u;
    {
        const bool branch_taken_0x202780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202780u;
            // 0x202784: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202780) {
            ctx->pc = 0x202798u;
            goto label_202798;
        }
    }
    ctx->pc = 0x202788u;
    // 0x202788: 0x90a2001a  lbu         $v0, 0x1A($a1)
    ctx->pc = 0x202788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x20278c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x202790: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x202790u;
    {
        const bool branch_taken_0x202790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202790u;
            // 0x202794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202790) {
            ctx->pc = 0x202CB0u;
            goto label_202cb0;
        }
    }
    ctx->pc = 0x202798u;
label_202798:
    // 0x202798: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x202798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20279c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2027a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2027A0u;
    {
        const bool branch_taken_0x2027a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027A0u;
            // 0x2027a4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027a0) {
            ctx->pc = 0x2027E0u;
            goto label_2027e0;
        }
    }
    ctx->pc = 0x2027A8u;
    // 0x2027a8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2027a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2027ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2027ACu;
    {
        const bool branch_taken_0x2027ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027ACu;
            // 0x2027b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027ac) {
            ctx->pc = 0x2027D0u;
            goto label_2027d0;
        }
    }
    ctx->pc = 0x2027B4u;
    // 0x2027b4: 0x0  nop
    ctx->pc = 0x2027b4u;
    // NOP
label_2027b8:
    // 0x2027b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2027bc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x2027bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2027c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2027C0u;
    {
        const bool branch_taken_0x2027c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027C0u;
            // 0x2027c4: 0x240203f1  addiu       $v0, $zero, 0x3F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027c0) {
            ctx->pc = 0x2027E8u;
            goto label_2027e8;
        }
    }
    ctx->pc = 0x2027C8u;
    // 0x2027c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2027cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2027ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2027d0:
    // 0x2027d0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2027d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2027d4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2027d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2027d8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2027D8u;
    {
        const bool branch_taken_0x2027d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2027DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027D8u;
            // 0x2027dc: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027d8) {
            ctx->pc = 0x2027B8u;
            runtime->cooperativeGuestYield();
            goto label_2027b8;
        }
    }
    ctx->pc = 0x2027E0u;
label_2027e0:
    // 0x2027e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2027e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027e4: 0x240203f1  addiu       $v0, $zero, 0x3F1
    ctx->pc = 0x2027e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
label_2027e8:
    // 0x2027e8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2027e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2027ec: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2027ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2027f0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2027f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2027f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2027f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2027f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2027f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2027fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2027fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x202800: 0x2455e848  addiu       $s5, $v0, -0x17B8
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x202804: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202808: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x202808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x20280c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x20280Cu;
    SET_GPR_U32(ctx, 31, 0x202814u);
    ctx->pc = 0x202810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20280Cu;
            // 0x202810: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202814u; }
        if (ctx->pc != 0x202814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202814u; }
        if (ctx->pc != 0x202814u) { return; }
    }
    ctx->pc = 0x202814u;
    // 0x202814: 0x126000a4  beqz        $s3, . + 4 + (0xA4 << 2)
    ctx->pc = 0x202814u;
    {
        const bool branch_taken_0x202814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x202818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202814u;
            // 0x202818: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202814) {
            ctx->pc = 0x202AA8u;
            goto label_202aa8;
        }
    }
    ctx->pc = 0x20281Cu;
    // 0x20281c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x20281cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x202820: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x202820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x202824: 0x504000a1  beql        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x202824u;
    {
        const bool branch_taken_0x202824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202824) {
            ctx->pc = 0x202828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202824u;
            // 0x202828: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202AACu;
            goto label_202aac;
        }
    }
    ctx->pc = 0x20282Cu;
    // 0x20282c: 0x84650016  lh          $a1, 0x16($v1)
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x202830: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x202830u;
    {
        const bool branch_taken_0x202830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x202834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202830u;
            // 0x202834: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202830) {
            ctx->pc = 0x2028A0u;
            goto label_2028a0;
        }
    }
    ctx->pc = 0x202838u;
    // 0x202838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20283c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x20283Cu;
    SET_GPR_U32(ctx, 31, 0x202844u);
    ctx->pc = 0x202840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20283Cu;
            // 0x202840: 0x8c441184  lw          $a0, 0x1184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202844u; }
        if (ctx->pc != 0x202844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202844u; }
        if (ctx->pc != 0x202844u) { return; }
    }
    ctx->pc = 0x202844u;
    // 0x202844: 0x7a700000  lq          $s0, 0x0($s3)
    ctx->pc = 0x202844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x202848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20284c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x20284cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x202850: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x202850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x202854: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x202854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x202858: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x202858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20285c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x20285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x202860: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x202864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202868: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x20286c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x202870: 0x40f809  jalr        $v0
    ctx->pc = 0x202870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202878u);
        ctx->pc = 0x202874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202870u;
            // 0x202874: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x202878u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202798u: goto label_202798;
            case 0x2027B8u: goto label_2027b8;
            case 0x2027D0u: goto label_2027d0;
            case 0x2027E0u: goto label_2027e0;
            case 0x2027E8u: goto label_2027e8;
            case 0x2028A0u: goto label_2028a0;
            case 0x202918u: goto label_202918;
            case 0x202920u: goto label_202920;
            case 0x202924u: goto label_202924;
            case 0x202944u: goto label_202944;
            case 0x202A28u: goto label_202a28;
            case 0x202A88u: goto label_202a88;
            case 0x202A8Cu: goto label_202a8c;
            case 0x202AA8u: goto label_202aa8;
            case 0x202AACu: goto label_202aac;
            case 0x202AE0u: goto label_202ae0;
            case 0x202AE4u: goto label_202ae4;
            case 0x202B68u: goto label_202b68;
            case 0x202BE4u: goto label_202be4;
            case 0x202C2Cu: goto label_202c2c;
            case 0x202C60u: goto label_202c60;
            case 0x202C80u: goto label_202c80;
            case 0x202CB0u: goto label_202cb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x202878u; }
            if (ctx->pc != 0x202878u) { return; }
        }
        }
    }
    ctx->pc = 0x202878u;
    // 0x202878: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x20287c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202884: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x202884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202888: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x202888u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x20288c: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x20288cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202890: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x202890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202894: 0xc088312  jal         func_220C48
    ctx->pc = 0x202894u;
    SET_GPR_U32(ctx, 31, 0x20289Cu);
    ctx->pc = 0x202898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202894u;
            // 0x202898: 0x8fa900f4  lw          $t1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20289Cu; }
        if (ctx->pc != 0x20289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20289Cu; }
        if (ctx->pc != 0x20289Cu) { return; }
    }
    ctx->pc = 0x20289Cu;
    // 0x20289c: 0x0  nop
    ctx->pc = 0x20289cu;
    // NOP
label_2028a0:
    // 0x2028a0: 0x12c00081  beqz        $s6, . + 4 + (0x81 << 2)
    ctx->pc = 0x2028A0u;
    {
        const bool branch_taken_0x2028a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2028A0u;
            // 0x2028a4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028a0) {
            ctx->pc = 0x202AA8u;
            goto label_202aa8;
        }
    }
    ctx->pc = 0x2028A8u;
    // 0x2028a8: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x2028ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2028acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2028b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2028b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2028b8: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x2028bc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x2028BCu;
    SET_GPR_U32(ctx, 31, 0x2028C4u);
    ctx->pc = 0x2028C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2028BCu;
            // 0x2028c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2028C4u; }
        if (ctx->pc != 0x2028C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2028C4u; }
        if (ctx->pc != 0x2028C4u) { return; }
    }
    ctx->pc = 0x2028C4u;
    // 0x2028c4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x2028c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2028c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2028c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028cc: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2028d0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2028d4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2028d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2028d8: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2028dc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2028dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2028e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2028E0u;
    {
        const bool branch_taken_0x2028e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2028E0u;
            // 0x2028e4: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028e0) {
            ctx->pc = 0x202920u;
            goto label_202920;
        }
    }
    ctx->pc = 0x2028E8u;
    // 0x2028e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2028ec: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x2028f0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2028f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2028f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2028f8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2028fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x202900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202908: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202908u;
    {
        const bool branch_taken_0x202908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202908u;
            // 0x20290c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202908) {
            ctx->pc = 0x202918u;
            goto label_202918;
        }
    }
    ctx->pc = 0x202910u;
    // 0x202910: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202914: 0x0  nop
    ctx->pc = 0x202914u;
    // NOP
label_202918:
    // 0x202918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202918u;
    {
        const bool branch_taken_0x202918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202918u;
            // 0x20291c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202918) {
            ctx->pc = 0x202924u;
            goto label_202924;
        }
    }
    ctx->pc = 0x202920u;
label_202920:
    // 0x202920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202924:
    // 0x202924: 0x5e1026  xor         $v0, $v0, $fp
    ctx->pc = 0x202924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 30));
    // 0x202928: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x20292c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20292cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x202930: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x202930u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x202934: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x202934u;
    {
        const bool branch_taken_0x202934 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x202934) {
            ctx->pc = 0x202944u;
            goto label_202944;
        }
    }
    ctx->pc = 0x20293Cu;
    // 0x20293c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20293cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x202940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_202944:
    // 0x202944: 0x12400050  beqz        $s2, . + 4 + (0x50 << 2)
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x202948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202944u;
            // 0x202948: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202944) {
            ctx->pc = 0x202A88u;
            goto label_202a88;
        }
    }
    ctx->pc = 0x20294Cu;
    // 0x20294c: 0x5222004f  beql        $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x20294Cu;
    {
        const bool branch_taken_0x20294c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x20294c) {
            ctx->pc = 0x202950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20294Cu;
            // 0x202950: 0x8e670028  lw          $a3, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202A8Cu;
            goto label_202a8c;
        }
    }
    ctx->pc = 0x202954u;
    // 0x202954: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x202954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x202958: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x202958u;
    {
        const bool branch_taken_0x202958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202958u;
            // 0x20295c: 0x7ba500d0  lq          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202958) {
            ctx->pc = 0x202AA8u;
            goto label_202aa8;
        }
    }
    ctx->pc = 0x202960u;
    // 0x202960: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x202960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202964: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x202968: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20296c: 0xc04e176  jal         func_1385D8
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20296Cu;
            // 0x202970: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1385D8u;
    if (runtime->hasFunction(0x1385D8u)) {
        auto targetFn = runtime->lookupFunction(0x1385D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202974u; }
        if (ctx->pc != 0x202974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001385D8_0x1385d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202974u; }
        if (ctx->pc != 0x202974u) { return; }
    }
    ctx->pc = 0x202974u;
    // 0x202974: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x202978: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x202978u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20297c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x202980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202988: 0xc04c586  jal         func_131618
    ctx->pc = 0x202988u;
    SET_GPR_U32(ctx, 31, 0x202990u);
    ctx->pc = 0x20298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202988u;
            // 0x20298c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131618u;
    if (runtime->hasFunction(0x131618u)) {
        auto targetFn = runtime->lookupFunction(0x131618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202990u; }
        if (ctx->pc != 0x202990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131618_0x131618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202990u; }
        if (ctx->pc != 0x202990u) { return; }
    }
    ctx->pc = 0x202990u;
    // 0x202990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202994: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x202994u;
    SET_GPR_U32(ctx, 31, 0x20299Cu);
    ctx->pc = 0x202998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202994u;
            // 0x202998: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20299Cu; }
        if (ctx->pc != 0x20299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20299Cu; }
        if (ctx->pc != 0x20299Cu) { return; }
    }
    ctx->pc = 0x20299Cu;
    // 0x20299c: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x20299cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2029a0: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x2029a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2029a4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x2029a4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x2029a8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2029a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2029ac: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x2029acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2029b0: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2029b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2029b4: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x2029b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x2029b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2029b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2029bc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2029bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2029c0: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x2029c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x2029c4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2029c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2029c8: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x2029c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2029cc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2029ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2029d0: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x2029d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2029d4: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x2029d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2029d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2029d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029dc: 0xdba30110  lqc2        $vf3, 0x110($sp)
    ctx->pc = 0x2029dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2029e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2029e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2029e4: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x2029e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2029e8: 0x8e670028  lw          $a3, 0x28($s3)
    ctx->pc = 0x2029e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2029ec: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2029ecu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2029f0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2029f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f4: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x2029f4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2029f8: 0xc088312  jal         func_220C48
    ctx->pc = 0x2029F8u;
    SET_GPR_U32(ctx, 31, 0x202A00u);
    ctx->pc = 0x2029FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2029F8u;
            // 0x2029fc: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A00u; }
        if (ctx->pc != 0x202A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A00u; }
        if (ctx->pc != 0x202A00u) { return; }
    }
    ctx->pc = 0x202A00u;
    // 0x202a00: 0x52c0002a  beql        $s6, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x202A00u;
    {
        const bool branch_taken_0x202a00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a00) {
            ctx->pc = 0x202A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202A00u;
            // 0x202a04: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202AACu;
            goto label_202aac;
        }
    }
    ctx->pc = 0x202A08u;
    // 0x202a08: 0x8e4200fc  lw          $v0, 0xFC($s2)
    ctx->pc = 0x202a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x202a0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202A0Cu;
    {
        const bool branch_taken_0x202a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202A0Cu;
            // 0x202a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a0c) {
            ctx->pc = 0x202A28u;
            goto label_202a28;
        }
    }
    ctx->pc = 0x202A14u;
    // 0x202a14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202a18: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202A18u;
    {
        const bool branch_taken_0x202a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x202a18) {
            ctx->pc = 0x202A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202A18u;
            // 0x202a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202A28u;
            goto label_202a28;
        }
    }
    ctx->pc = 0x202A20u;
    // 0x202a20: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x202a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x202a24: 0x0  nop
    ctx->pc = 0x202a24u;
    // NOP
label_202a28:
    // 0x202a28: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x202a28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202a2c: 0xdba10110  lqc2        $vf1, 0x110($sp)
    ctx->pc = 0x202a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x202a30: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x202a30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x202a34: 0xdba60030  lqc2        $vf6, 0x30($sp)
    ctx->pc = 0x202a34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202a38: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x202a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x202a3c: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x202a3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202a40: 0x4be228bd  vmadday.xyzw $ACC, $vf5, $vf2y
    ctx->pc = 0x202a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x202a44: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x202a44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202a48: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x202a48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202a4c: 0x4be218be  vmaddaz.xyzw $ACC, $vf3, $vf2z
    ctx->pc = 0x202a4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x202a50: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x202a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x202a54: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x202a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x202a58: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x202a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x202a5c: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x202a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x202a60: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x202a60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x202a64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a68: 0x4be120cb  vmaddw.xyzw $vf3, $vf4, $vf1w
    ctx->pc = 0x202a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x202a6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x202a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a70: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x202a70u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x202a74: 0xc0883a2  jal         func_220E88
    ctx->pc = 0x202A74u;
    SET_GPR_U32(ctx, 31, 0x202A7Cu);
    ctx->pc = 0x202A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202A74u;
            // 0x202a78: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220E88u;
    if (runtime->hasFunction(0x220E88u)) {
        auto targetFn = runtime->lookupFunction(0x220E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A7Cu; }
        if (ctx->pc != 0x202A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220E88_0x220e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A7Cu; }
        if (ctx->pc != 0x202A7Cu) { return; }
    }
    ctx->pc = 0x202A7Cu;
    // 0x202a7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x202A7Cu;
    {
        const bool branch_taken_0x202a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202A7Cu;
            // 0x202a80: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a7c) {
            ctx->pc = 0x202AACu;
            goto label_202aac;
        }
    }
    ctx->pc = 0x202A84u;
    // 0x202a84: 0x0  nop
    ctx->pc = 0x202a84u;
    // NOP
label_202a88:
    // 0x202a88: 0x8e670028  lw          $a3, 0x28($s3)
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_202a8c:
    // 0x202a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a90: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x202a90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x202a94: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x202a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a98: 0x7a660010  lq          $a2, 0x10($s3)
    ctx->pc = 0x202a98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x202a9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x202a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202aa0: 0xc088312  jal         func_220C48
    ctx->pc = 0x202AA0u;
    SET_GPR_U32(ctx, 31, 0x202AA8u);
    ctx->pc = 0x202AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AA0u;
            // 0x202aa4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AA8u; }
        if (ctx->pc != 0x202AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AA8u; }
        if (ctx->pc != 0x202AA8u) { return; }
    }
    ctx->pc = 0x202AA8u;
label_202aa8:
    // 0x202aa8: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x202aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_202aac:
    // 0x202aac: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x202ab0: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202AB0u;
    {
        const bool branch_taken_0x202ab0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x202ab0) {
            ctx->pc = 0x202AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202AB0u;
            // 0x202ab4: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202AE4u;
            goto label_202ae4;
        }
    }
    ctx->pc = 0x202AB8u;
    // 0x202ab8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x202ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x202abc: 0x80620019  lb          $v0, 0x19($v1)
    ctx->pc = 0x202abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x202ac0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202AC0u;
    {
        const bool branch_taken_0x202ac0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x202ac0) {
            ctx->pc = 0x202AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202AC0u;
            // 0x202ac4: 0x8e820044  lw          $v0, 0x44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202AE4u;
            goto label_202ae4;
        }
    }
    ctx->pc = 0x202AC8u;
    // 0x202ac8: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x202acc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x202accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x202ad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202AD0u;
    {
        const bool branch_taken_0x202ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202AD0u;
            // 0x202ad4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ad0) {
            ctx->pc = 0x202AE0u;
            goto label_202ae0;
        }
    }
    ctx->pc = 0x202AD8u;
    // 0x202ad8: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x202AD8u;
    SET_GPR_U32(ctx, 31, 0x202AE0u);
    ctx->pc = 0x202ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202AD8u;
            // 0x202adc: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AE0u; }
        if (ctx->pc != 0x202AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202AE0u; }
        if (ctx->pc != 0x202AE0u) { return; }
    }
    ctx->pc = 0x202AE0u;
label_202ae0:
    // 0x202ae0: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x202ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_202ae4:
    // 0x202ae4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x202AE4u;
    {
        const bool branch_taken_0x202ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202AE4u;
            // 0x202ae8: 0x3c050780  lui         $a1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1920 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ae4) {
            ctx->pc = 0x202B68u;
            goto label_202b68;
        }
    }
    ctx->pc = 0x202AECu;
    // 0x202aec: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x202aecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x202af0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x202af0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202af4: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x202af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x202af8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x202af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x202afc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202b00: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x202b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x202b04: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x202b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x202b08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x202b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x202b10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x202b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202b14: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x202b14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x202b18: 0xc0a14de  jal         func_285378
    ctx->pc = 0x202B18u;
    SET_GPR_U32(ctx, 31, 0x202B20u);
    ctx->pc = 0x202B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B18u;
            // 0x202b1c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B20u; }
        if (ctx->pc != 0x202B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B20u; }
        if (ctx->pc != 0x202B20u) { return; }
    }
    ctx->pc = 0x202B20u;
    // 0x202b20: 0x24030414  addiu       $v1, $zero, 0x414
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x202b24: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x202b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x202b28: 0xa7a300b0  sh          $v1, 0xB0($sp)
    ctx->pc = 0x202b28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x202b2c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x202b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x202b30: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x202b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x202b34: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x202b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x202b38: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x202b38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x202b3c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x202b40: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x202b44: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x202b48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x202b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b4c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x202B4Cu;
    SET_GPR_U32(ctx, 31, 0x202B54u);
    ctx->pc = 0x202B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B4Cu;
            // 0x202b50: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B54u; }
        if (ctx->pc != 0x202B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B54u; }
        if (ctx->pc != 0x202B54u) { return; }
    }
    ctx->pc = 0x202B54u;
    // 0x202b54: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x202b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x202b58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b5c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x202B5Cu;
    SET_GPR_U32(ctx, 31, 0x202B64u);
    ctx->pc = 0x202B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202B5Cu;
            // 0x202b60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B64u; }
        if (ctx->pc != 0x202B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B64u; }
        if (ctx->pc != 0x202B64u) { return; }
    }
    ctx->pc = 0x202B64u;
    // 0x202b64: 0x0  nop
    ctx->pc = 0x202b64u;
    // NOP
label_202b68:
    // 0x202b68: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x202b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x202b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b70: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x202b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202b74: 0x80620019  lb          $v0, 0x19($v1)
    ctx->pc = 0x202b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x202b78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x202b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x202b7c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x202b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x202b80: 0xc0824ae  jal         func_2092B8
    ctx->pc = 0x202B80u;
    SET_GPR_U32(ctx, 31, 0x202B88u);
    ctx->pc = 0x2092B8u;
    if (runtime->hasFunction(0x2092B8u)) {
        auto targetFn = runtime->lookupFunction(0x2092B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B88u; }
        if (ctx->pc != 0x202B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002092B8_0x2092b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202B88u; }
        if (ctx->pc != 0x202B88u) { return; }
    }
    ctx->pc = 0x202B88u;
    // 0x202b88: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x202b88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x202b8c: 0x8ee2004c  lw          $v0, 0x4C($s7)
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 76)));
    // 0x202b90: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x202b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202b94: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x202b98: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x202b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x202b9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202B9Cu;
    {
        const bool branch_taken_0x202b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202B9Cu;
            // 0x202ba0: 0xe6e10064  swc1        $f1, 0x64($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b9c) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BA4u;
    // 0x202ba4: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x202ba4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x202ba8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x202ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x202bac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x202BACu;
    {
        const bool branch_taken_0x202bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202BACu;
            // 0x202bb0: 0x30630004  andi        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bac) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BB4u;
    // 0x202bb4: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x202bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
    // 0x202bb8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x202BB8u;
    {
        const bool branch_taken_0x202bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202BB8u;
            // 0x202bbc: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bb8) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BC0u;
    // 0x202bc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202bc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202bc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x202bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202bcc: 0x0  nop
    ctx->pc = 0x202bccu;
    // NOP
    // 0x202bd0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x202BD0u;
    {
        const bool branch_taken_0x202bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202bd0) {
            ctx->pc = 0x202BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202BD0u;
            // 0x202bd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BD8u;
    // 0x202bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202bdc: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x202BDCu;
    {
        const bool branch_taken_0x202bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x202bdc) {
            ctx->pc = 0x202BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202BDCu;
            // 0x202be0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BE4u;
label_202be4:
    // 0x202be4: 0xc082448  jal         func_209120
    ctx->pc = 0x202BE4u;
    SET_GPR_U32(ctx, 31, 0x202BECu);
    ctx->pc = 0x202BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202BE4u;
            // 0x202be8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209120u;
    if (runtime->hasFunction(0x209120u)) {
        auto targetFn = runtime->lookupFunction(0x209120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BECu; }
        if (ctx->pc != 0x202BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209120_0x209140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202BECu; }
        if (ctx->pc != 0x202BECu) { return; }
    }
    ctx->pc = 0x202BECu;
    // 0x202bec: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x202becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202bf0: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x202bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x202bf4: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x202bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x202bf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202bfc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x202bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x202c00: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x202C00u;
    {
        const bool branch_taken_0x202c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c00) {
            ctx->pc = 0x202C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202C00u;
            // 0x202c04: 0xc7c10178  lwc1        $f1, 0x178($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            goto label_202c2c;
        }
    }
    ctx->pc = 0x202C08u;
    // 0x202c08: 0x8ee201ac  lw          $v0, 0x1AC($s7)
    ctx->pc = 0x202c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 428)));
    // 0x202c0c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x202c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x202c10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202C10u;
    {
        const bool branch_taken_0x202c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C10u;
            // 0x202c14: 0xc7c10178  lwc1        $f1, 0x178($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c10) {
            ctx->pc = 0x202C2Cu;
            goto label_202c2c;
        }
    }
    ctx->pc = 0x202C18u;
    // 0x202c18: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x202c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x202c1c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x202c1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x202c20: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x202c24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x202C24u;
    {
        const bool branch_taken_0x202c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c24) {
            ctx->pc = 0x202C80u;
            goto label_202c80;
        }
    }
    ctx->pc = 0x202C2Cu;
label_202c2c:
    // 0x202c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x202c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202c34: 0x0  nop
    ctx->pc = 0x202c34u;
    // NOP
    // 0x202c38: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x202C38u;
    {
        const bool branch_taken_0x202c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202c38) {
            ctx->pc = 0x202C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202C38u;
            // 0x202c3c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202C60u;
            goto label_202c60;
        }
    }
    ctx->pc = 0x202C40u;
    // 0x202c40: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x202c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202c44: 0x0  nop
    ctx->pc = 0x202c44u;
    // NOP
    // 0x202c48: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x202C48u;
    {
        const bool branch_taken_0x202c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x202c48) {
            ctx->pc = 0x202C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202C48u;
            // 0x202c4c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202C60u;
            goto label_202c60;
        }
    }
    ctx->pc = 0x202C50u;
    // 0x202c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c54: 0xc082450  jal         func_209140
    ctx->pc = 0x202C54u;
    SET_GPR_U32(ctx, 31, 0x202C5Cu);
    ctx->pc = 0x202C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202C54u;
            // 0x202c58: 0x36100003  ori         $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209140u;
    if (runtime->hasFunction(0x209140u)) {
        auto targetFn = runtime->lookupFunction(0x209140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C5Cu; }
        if (ctx->pc != 0x202C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_209140_0x209160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202C5Cu; }
        if (ctx->pc != 0x202C5Cu) { return; }
    }
    ctx->pc = 0x202C5Cu;
    // 0x202c5c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x202c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_202c60:
    // 0x202c60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x202c60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202c64: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x202c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x202c68: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x202c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x202c6c: 0x40f809  jalr        $v0
    ctx->pc = 0x202C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202C74u);
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C6Cu;
            // 0x202c70: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x202C74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202798u: goto label_202798;
            case 0x2027B8u: goto label_2027b8;
            case 0x2027D0u: goto label_2027d0;
            case 0x2027E0u: goto label_2027e0;
            case 0x2027E8u: goto label_2027e8;
            case 0x2028A0u: goto label_2028a0;
            case 0x202918u: goto label_202918;
            case 0x202920u: goto label_202920;
            case 0x202924u: goto label_202924;
            case 0x202944u: goto label_202944;
            case 0x202A28u: goto label_202a28;
            case 0x202A88u: goto label_202a88;
            case 0x202A8Cu: goto label_202a8c;
            case 0x202AA8u: goto label_202aa8;
            case 0x202AACu: goto label_202aac;
            case 0x202AE0u: goto label_202ae0;
            case 0x202AE4u: goto label_202ae4;
            case 0x202B68u: goto label_202b68;
            case 0x202BE4u: goto label_202be4;
            case 0x202C2Cu: goto label_202c2c;
            case 0x202C60u: goto label_202c60;
            case 0x202C80u: goto label_202c80;
            case 0x202CB0u: goto label_202cb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x202C74u; }
            if (ctx->pc != 0x202C74u) { return; }
        }
        }
    }
    ctx->pc = 0x202C74u;
    // 0x202c74: 0x36030006  ori         $v1, $s0, 0x6
    ctx->pc = 0x202c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x202c78: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x202c78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x202c7c: 0xc7c10178  lwc1        $f1, 0x178($fp)
    ctx->pc = 0x202c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202c80:
    // 0x202c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202c84: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x202c84u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x202c88: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x202c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c8c: 0x4600a028  max.s       $f0, $f20, $f0
    ctx->pc = 0x202c8cu;
    ctx->f[0] = std::max(ctx->f[20], ctx->f[0]);
    // 0x202c90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x202c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x202c94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x202c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x202c98: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x202c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x202c9c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x202c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x202ca0: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x202ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x202ca4: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x202CA4u;
    SET_GPR_U32(ctx, 31, 0x202CACu);
    ctx->pc = 0x202CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202CA4u;
            // 0x202ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202CACu; }
        if (ctx->pc != 0x202CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202CACu; }
        if (ctx->pc != 0x202CACu) { return; }
    }
    ctx->pc = 0x202CACu;
    // 0x202cac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202cb0:
    // 0x202cb0: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x202cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x202cb4: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x202cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x202cb8: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x202cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x202cbc: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x202cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x202cc0: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x202cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x202cc4: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x202cc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x202cc8: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x202cc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x202ccc: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x202cccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x202cd0: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x202cd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x202cd4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x202cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x202cd8: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x202cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x202CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CDCu;
            // 0x202ce0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202798u: goto label_202798;
            case 0x2027B8u: goto label_2027b8;
            case 0x2027D0u: goto label_2027d0;
            case 0x2027E0u: goto label_2027e0;
            case 0x2027E8u: goto label_2027e8;
            case 0x2028A0u: goto label_2028a0;
            case 0x202918u: goto label_202918;
            case 0x202920u: goto label_202920;
            case 0x202924u: goto label_202924;
            case 0x202944u: goto label_202944;
            case 0x202A28u: goto label_202a28;
            case 0x202A88u: goto label_202a88;
            case 0x202A8Cu: goto label_202a8c;
            case 0x202AA8u: goto label_202aa8;
            case 0x202AACu: goto label_202aac;
            case 0x202AE0u: goto label_202ae0;
            case 0x202AE4u: goto label_202ae4;
            case 0x202B68u: goto label_202b68;
            case 0x202BE4u: goto label_202be4;
            case 0x202C2Cu: goto label_202c2c;
            case 0x202C60u: goto label_202c60;
            case 0x202C80u: goto label_202c80;
            case 0x202CB0u: goto label_202cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202CE4u;
    // 0x202ce4: 0x0  nop
    ctx->pc = 0x202ce4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001986F0
// Address: 0x1986f0 - 0x198798
void sub_001986F0_0x1986f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986F0_0x1986f0");
#endif

    ctx->pc = 0x1986f0u;

    // 0x1986f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1986f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1986f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1986f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1986f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1986f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1986fc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198700: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x198704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198708: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19870c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19870cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198714: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x198714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x198718: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x198718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19871c: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x19871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x198720: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x198720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198724: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x198728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19872c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198730: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198730u;
    {
        const bool branch_taken_0x198730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x198734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198730u;
            // 0x198734: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198730) {
            ctx->pc = 0x19873Cu;
            goto label_19873c;
        }
    }
    ctx->pc = 0x198738u;
    // 0x198738: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19873c:
    // 0x19873c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x19873Cu;
    {
        const bool branch_taken_0x19873c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19873Cu;
            // 0x198740: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19873c) {
            ctx->pc = 0x198768u;
            goto label_198768;
        }
    }
    ctx->pc = 0x198744u;
    // 0x198744: 0xc04cb8e  jal         func_132E38
    ctx->pc = 0x198744u;
    SET_GPR_U32(ctx, 31, 0x19874Cu);
    ctx->pc = 0x198748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198744u;
            // 0x198748: 0x8c44be04  lw          $a0, -0x41FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E38u;
    if (runtime->hasFunction(0x132E38u)) {
        auto targetFn = runtime->lookupFunction(0x132E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19874Cu; }
        if (ctx->pc != 0x19874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E38_0x132e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19874Cu; }
        if (ctx->pc != 0x19874Cu) { return; }
    }
    ctx->pc = 0x19874Cu;
    // 0x19874c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x19874cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x198750: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x198750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x198754: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198754u;
    {
        const bool branch_taken_0x198754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198754u;
            // 0x198758: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198754) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x19875Cu;
    // 0x19875c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198760: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x198760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x198764: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x198764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_198768:
    // 0x198768: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_19876c:
    // 0x19876c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19876Cu;
    {
        const bool branch_taken_0x19876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19876Cu;
            // 0x198770: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19876c) {
            ctx->pc = 0x198780u;
            goto label_198780;
        }
    }
    ctx->pc = 0x198774u;
    // 0x198774: 0xc0655ec  jal         func_1957B0
    ctx->pc = 0x198774u;
    SET_GPR_U32(ctx, 31, 0x19877Cu);
    ctx->pc = 0x198778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198774u;
            // 0x198778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957B0u;
    if (runtime->hasFunction(0x1957B0u)) {
        auto targetFn = runtime->lookupFunction(0x1957B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19877Cu; }
        if (ctx->pc != 0x19877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1957b0_0x1958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19877Cu; }
        if (ctx->pc != 0x19877Cu) { return; }
    }
    ctx->pc = 0x19877Cu;
    // 0x19877c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19877cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198780:
    // 0x198780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198784: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19878c: 0x3e00008  jr          $ra
    ctx->pc = 0x19878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19878Cu;
            // 0x198790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19873Cu: goto label_19873c;
            case 0x198768u: goto label_198768;
            case 0x19876Cu: goto label_19876c;
            case 0x198780u: goto label_198780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198794u;
    // 0x198794: 0x0  nop
    ctx->pc = 0x198794u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AB38
// Address: 0x14ab38 - 0x14abf8
void sub_0014AB38_0x14ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AB38_0x14ab38");
#endif

    ctx->pc = 0x14ab38u;

    // 0x14ab38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ab3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ab40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ab44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ab44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ab4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14ab4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ab54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14ab54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab58: 0x8e220cd0  lw          $v0, 0xCD0($s1)
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
    // 0x14ab5c: 0xc052afe  jal         func_14ABF8
    ctx->pc = 0x14AB5Cu;
    SET_GPR_U32(ctx, 31, 0x14AB64u);
    ctx->pc = 0x14AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB5Cu;
            // 0x14ab60: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABF8u;
    if (runtime->hasFunction(0x14ABF8u)) {
        auto targetFn = runtime->lookupFunction(0x14ABF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB64u; }
        if (ctx->pc != 0x14AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABF8_0x14abf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB64u; }
        if (ctx->pc != 0x14AB64u) { return; }
    }
    ctx->pc = 0x14AB64u;
    // 0x14ab64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14AB64u;
    {
        const bool branch_taken_0x14ab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB64u;
            // 0x14ab68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab64) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14AB6Cu;
    // 0x14ab6c: 0x8e260cd0  lw          $a2, 0xCD0($s1)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
    // 0x14ab70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14ab74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14AB74u;
    {
        const bool branch_taken_0x14ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB74u;
            // 0x14ab78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab74) {
            ctx->pc = 0x14ABD8u;
            goto label_14abd8;
        }
    }
    ctx->pc = 0x14AB7Cu;
    // 0x14ab7c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_14ab80:
    // 0x14ab80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ab84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ab88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ab8c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14ab8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ab90: 0x5444000c  bnel        $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14AB90u;
    {
        const bool branch_taken_0x14ab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14ab90) {
            ctx->pc = 0x14AB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB90u;
            // 0x14ab94: 0x8e260cd0  lw          $a2, 0xCD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ABC4u;
            goto label_14abc4;
        }
    }
    ctx->pc = 0x14AB98u;
    // 0x14ab98: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x14ab98u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ab9c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14aba0: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x14aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x14aba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aba8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14aba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14abac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14abacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abb0: 0xc052afe  jal         func_14ABF8
    ctx->pc = 0x14ABB0u;
    SET_GPR_U32(ctx, 31, 0x14ABB8u);
    ctx->pc = 0x14ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABB0u;
            // 0x14abb4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABF8u;
    if (runtime->hasFunction(0x14ABF8u)) {
        auto targetFn = runtime->lookupFunction(0x14ABF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABB8u; }
        if (ctx->pc != 0x14ABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABF8_0x14abf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABB8u; }
        if (ctx->pc != 0x14ABB8u) { return; }
    }
    ctx->pc = 0x14ABB8u;
    // 0x14abb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14ABB8u;
    {
        const bool branch_taken_0x14abb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14abb8) {
            ctx->pc = 0x14ABBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABB8u;
            // 0x14abbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14ABC0u;
    // 0x14abc0: 0x8e260cd0  lw          $a2, 0xCD0($s1)
    ctx->pc = 0x14abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
label_14abc4:
    // 0x14abc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14abc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14abc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14abcc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14abccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14abd0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14ABD0u;
    {
        const bool branch_taken_0x14abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14abd0) {
            ctx->pc = 0x14ABD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABD0u;
            // 0x14abd4: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AB80u;
            runtime->cooperativeGuestYield();
            goto label_14ab80;
        }
    }
    ctx->pc = 0x14ABD8u;
label_14abd8:
    // 0x14abd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14abd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14abe0:
    // 0x14abe0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14abe4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14abe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14abe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14abec: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABECu;
            // 0x14abf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AB80u: goto label_14ab80;
            case 0x14ABC4u: goto label_14abc4;
            case 0x14ABD8u: goto label_14abd8;
            case 0x14ABE0u: goto label_14abe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14ABF4u;
    // 0x14abf4: 0x0  nop
    ctx->pc = 0x14abf4u;
    // NOP
}

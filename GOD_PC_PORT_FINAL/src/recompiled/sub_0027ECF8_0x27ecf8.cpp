#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027ECF8
// Address: 0x27ecf8 - 0x27ede0
void sub_0027ECF8_0x27ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ECF8_0x27ecf8");
#endif

    ctx->pc = 0x27ecf8u;

    // 0x27ecf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ecfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ed00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ed04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ed04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27ed0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27ed0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ed14: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x27ED14u;
    SET_GPR_U32(ctx, 31, 0x27ED1Cu);
    ctx->pc = 0x27ED18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED14u;
            // 0x27ed18: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED1Cu; }
        if (ctx->pc != 0x27ED1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED1Cu; }
        if (ctx->pc != 0x27ED1Cu) { return; }
    }
    ctx->pc = 0x27ED1Cu;
    // 0x27ed1c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27ED1Cu;
    {
        const bool branch_taken_0x27ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED1Cu;
            // 0x27ed20: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed1c) {
            ctx->pc = 0x27ED74u;
            goto label_27ed74;
        }
    }
    ctx->pc = 0x27ED24u;
    // 0x27ed24: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27ed28: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x27ed28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27ed2c: 0x2466c9c8  addiu       $a2, $v1, -0x3638
    ctx->pc = 0x27ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x27ed30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ed34: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x27ed38: 0x8c430888  lw          $v1, 0x888($v0)
    ctx->pc = 0x27ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
    // 0x27ed3c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED3Cu;
    {
        const bool branch_taken_0x27ed3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27ed3c) {
            ctx->pc = 0x27ED50u;
            goto label_27ed50;
        }
    }
    ctx->pc = 0x27ED44u;
    // 0x27ed44: 0x8c43088c  lw          $v1, 0x88C($v0)
    ctx->pc = 0x27ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x27ed48: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED48u;
    {
        const bool branch_taken_0x27ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ed48) {
            ctx->pc = 0x27ED5Cu;
            goto label_27ed5c;
        }
    }
    ctx->pc = 0x27ED50u;
label_27ed50:
    // 0x27ed50: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ed54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27ED54u;
    {
        const bool branch_taken_0x27ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED54u;
            // 0x27ed58: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed54) {
            ctx->pc = 0x27EDC8u;
            goto label_27edc8;
        }
    }
    ctx->pc = 0x27ED5Cu;
label_27ed5c:
    // 0x27ed5c: 0xc0a09c4  jal         func_282710
    ctx->pc = 0x27ED5Cu;
    SET_GPR_U32(ctx, 31, 0x27ED64u);
    ctx->pc = 0x27ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED5Cu;
            // 0x27ed60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282710u;
    if (runtime->hasFunction(0x282710u)) {
        auto targetFn = runtime->lookupFunction(0x282710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED64u; }
        if (ctx->pc != 0x27ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282710_0x282710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED64u; }
        if (ctx->pc != 0x27ED64u) { return; }
    }
    ctx->pc = 0x27ED64u;
    // 0x27ed64: 0xc0a0562  jal         func_281588
    ctx->pc = 0x27ED64u;
    SET_GPR_U32(ctx, 31, 0x27ED6Cu);
    ctx->pc = 0x27ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED64u;
            // 0x27ed68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281588u;
    if (runtime->hasFunction(0x281588u)) {
        auto targetFn = runtime->lookupFunction(0x281588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED6Cu; }
        if (ctx->pc != 0x27ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281588_0x281588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED6Cu; }
        if (ctx->pc != 0x27ED6Cu) { return; }
    }
    ctx->pc = 0x27ED6Cu;
    // 0x27ed6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED6Cu;
    {
        const bool branch_taken_0x27ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ed6c) {
            ctx->pc = 0x27ED70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED6Cu;
            // 0x27ed70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27ED80u;
            goto label_27ed80;
        }
    }
    ctx->pc = 0x27ED74u;
label_27ed74:
    // 0x27ed74: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27ed78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27ED78u;
    {
        const bool branch_taken_0x27ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED78u;
            // 0x27ed7c: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed78) {
            ctx->pc = 0x27EDC8u;
            goto label_27edc8;
        }
    }
    ctx->pc = 0x27ED80u;
label_27ed80:
    // 0x27ed80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27ed80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed84: 0xc09f50c  jal         func_27D430
    ctx->pc = 0x27ED84u;
    SET_GPR_U32(ctx, 31, 0x27ED8Cu);
    ctx->pc = 0x27ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED84u;
            // 0x27ed88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D430u;
    if (runtime->hasFunction(0x27D430u)) {
        auto targetFn = runtime->lookupFunction(0x27D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED8Cu; }
        if (ctx->pc != 0x27ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D430_0x27d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED8Cu; }
        if (ctx->pc != 0x27ED8Cu) { return; }
    }
    ctx->pc = 0x27ED8Cu;
    // 0x27ed8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27ED8Cu;
    {
        const bool branch_taken_0x27ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed8c) {
            ctx->pc = 0x27EDA4u;
            goto label_27eda4;
        }
    }
    ctx->pc = 0x27ED94u;
    // 0x27ed94: 0xc09f43a  jal         func_27D0E8
    ctx->pc = 0x27ED94u;
    SET_GPR_U32(ctx, 31, 0x27ED9Cu);
    ctx->pc = 0x27ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ED94u;
            // 0x27ed98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D0E8u;
    if (runtime->hasFunction(0x27D0E8u)) {
        auto targetFn = runtime->lookupFunction(0x27D0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED9Cu; }
        if (ctx->pc != 0x27ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d0e8_0x27d148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED9Cu; }
        if (ctx->pc != 0x27ED9Cu) { return; }
    }
    ctx->pc = 0x27ED9Cu;
    // 0x27ed9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED9Cu;
    {
        const bool branch_taken_0x27ed9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ed9c) {
            ctx->pc = 0x27EDB0u;
            goto label_27edb0;
        }
    }
    ctx->pc = 0x27EDA4u;
label_27eda4:
    // 0x27eda4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27eda8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27EDA8u;
    {
        const bool branch_taken_0x27eda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDA8u;
            // 0x27edac: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eda8) {
            ctx->pc = 0x27EDC8u;
            goto label_27edc8;
        }
    }
    ctx->pc = 0x27EDB0u;
label_27edb0:
    // 0x27edb0: 0xc09f41e  jal         func_27D078
    ctx->pc = 0x27EDB0u;
    SET_GPR_U32(ctx, 31, 0x27EDB8u);
    ctx->pc = 0x27EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDB0u;
            // 0x27edb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D078u;
    if (runtime->hasFunction(0x27D078u)) {
        auto targetFn = runtime->lookupFunction(0x27D078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDB8u; }
        if (ctx->pc != 0x27EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D078_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDB8u; }
        if (ctx->pc != 0x27EDB8u) { return; }
    }
    ctx->pc = 0x27EDB8u;
    // 0x27edb8: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27edbc: 0x3463005b  ori         $v1, $v1, 0x5B
    ctx->pc = 0x27edbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)91);
    // 0x27edc0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x27edc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x27edc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27edc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27edc8:
    // 0x27edc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27edc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27edcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27edccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27edd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27edd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27edd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27edd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EDD8u;
            // 0x27eddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27ED50u: goto label_27ed50;
            case 0x27ED5Cu: goto label_27ed5c;
            case 0x27ED74u: goto label_27ed74;
            case 0x27ED80u: goto label_27ed80;
            case 0x27EDA4u: goto label_27eda4;
            case 0x27EDB0u: goto label_27edb0;
            case 0x27EDC8u: goto label_27edc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27EDE0u;
}

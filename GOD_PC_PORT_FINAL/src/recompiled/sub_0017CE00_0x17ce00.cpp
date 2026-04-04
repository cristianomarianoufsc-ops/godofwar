#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CE00
// Address: 0x17ce00 - 0x17cf28
void sub_0017CE00_0x17ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CE00_0x17ce00");
#endif

    ctx->pc = 0x17ce00u;

    // 0x17ce00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17ce04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17ce08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17ce0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17ce0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17ce14: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17ce14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17ce1c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x17ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17ce24: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x17ce24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce28: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x17ce28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ce30: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x17ce30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce34: 0xc05f1e4  jal         func_17C790
    ctx->pc = 0x17CE34u;
    SET_GPR_U32(ctx, 31, 0x17CE3Cu);
    ctx->pc = 0x17CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CE34u;
            // 0x17ce38: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C790u;
    if (runtime->hasFunction(0x17C790u)) {
        auto targetFn = runtime->lookupFunction(0x17C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE3Cu; }
        if (ctx->pc != 0x17CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C790_0x17c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CE3Cu; }
        if (ctx->pc != 0x17CE3Cu) { return; }
    }
    ctx->pc = 0x17CE3Cu;
    // 0x17ce3c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x17ce40: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x17ce44: 0x8cc34718  lw          $v1, 0x4718($a2)
    ctx->pc = 0x17ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17ce48: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17ce4c: 0x8d024714  lw          $v0, 0x4714($t0)
    ctx->pc = 0x17ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17ce50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ce58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17ce5c: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17ce60: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17ce64: 0x8d054714  lw          $a1, 0x4714($t0)
    ctx->pc = 0x17ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17ce68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ce6c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17ce70: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17ce74: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17ce78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17ce7c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x17ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x17ce80: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17ce84: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17ce88: 0x8d054714  lw          $a1, 0x4714($t0)
    ctx->pc = 0x17ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17ce8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ce90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17ce94: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17ce98: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17ce9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17cea0: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x17cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x17cea4: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17cea8: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17ceac: 0x8d054714  lw          $a1, 0x4714($t0)
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17ceb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ceb4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17ceb8: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17cebc: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17cec0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17cec4: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x17cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x17cec8: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17cecc: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17ced0: 0x8d054714  lw          $a1, 0x4714($t0)
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18196)));
    // 0x17ced4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ced8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cedc: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17cee0: 0xace34710  sw          $v1, 0x4710($a3)
    ctx->pc = 0x17cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
    // 0x17cee4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17cee8: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x17cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
    // 0x17ceec: 0x8cc24718  lw          $v0, 0x4718($a2)
    ctx->pc = 0x17ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18200)));
    // 0x17cef0: 0x8ce34710  lw          $v1, 0x4710($a3)
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18192)));
    // 0x17cef4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cef8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cefc: 0xacc24718  sw          $v0, 0x4718($a2)
    ctx->pc = 0x17cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18200), GPR_U32(ctx, 2));
    // 0x17cf00: 0xc05f1a2  jal         func_17C688
    ctx->pc = 0x17CF00u;
    SET_GPR_U32(ctx, 31, 0x17CF08u);
    ctx->pc = 0x17CF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF00u;
            // 0x17cf04: 0xace34710  sw          $v1, 0x4710($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C688u;
    if (runtime->hasFunction(0x17C688u)) {
        auto targetFn = runtime->lookupFunction(0x17C688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF08u; }
        if (ctx->pc != 0x17CF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c688_0x17c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF08u; }
        if (ctx->pc != 0x17CF08u) { return; }
    }
    ctx->pc = 0x17CF08u;
    // 0x17cf08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cf0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17cf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cf10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17cf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cf14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17cf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17cf18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cf1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CF20u;
            // 0x17cf24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CF28u;
}

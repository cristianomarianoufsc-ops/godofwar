#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5088
// Address: 0x1b5088 - 0x1b52f8
void sub_001B5088_0x1b5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5088_0x1b5088");
#endif

    ctx->pc = 0x1b5088u;

    // 0x1b5088: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b5088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b508c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1b5090: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1b5094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5098: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1b509c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1b50a0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b50a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1b50a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b50a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b50ac: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1b50b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b50b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b50b4: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B50B4u;
    {
        const bool branch_taken_0x1b50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b4) {
            ctx->pc = 0x1B50B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50B4u;
            // 0x1b50b8: 0x922601a0  lbu         $a2, 0x1A0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B50BCu;
    // 0x1b50bc: 0x922601a1  lbu         $a2, 0x1A1($s1)
    ctx->pc = 0x1b50bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b50c0: 0x10c00085  beqz        $a2, . + 4 + (0x85 << 2)
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50C0u;
            // 0x1b50c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B50C8u;
    // 0x1b50c8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x1b50c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b50cc: 0x0  nop
    ctx->pc = 0x1b50ccu;
    // NOP
label_1b50d0:
    // 0x1b50d0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1b50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1b50d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b50d8: 0x14450036  bne         $v0, $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50D8u;
            // 0x1b50dc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B51B4u;
            goto label_1b51b4;
        }
    }
    ctx->pc = 0x1B50E0u;
    // 0x1b50e0: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1b50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1b50e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B50E4u;
    {
        const bool branch_taken_0x1b50e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50E4u;
            // 0x1b50e8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50e4) {
            ctx->pc = 0x1B5120u;
            goto label_1b5120;
        }
    }
    ctx->pc = 0x1B50ECu;
    // 0x1b50ec: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1b50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1b50f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B50F0u;
    {
        const bool branch_taken_0x1b50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50F0u;
            // 0x1b50f4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50f0) {
            ctx->pc = 0x1B5110u;
            goto label_1b5110;
        }
    }
    ctx->pc = 0x1B50F8u;
label_1b50f8:
    // 0x1b50f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b50fc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1b50fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1b5100: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5100u;
    {
        const bool branch_taken_0x1b5100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5100u;
            // 0x1b5104: 0x240203f4  addiu       $v0, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5100) {
            ctx->pc = 0x1B5128u;
            goto label_1b5128;
        }
    }
    ctx->pc = 0x1B5108u;
    // 0x1b5108: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b510c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5110:
    // 0x1b5110: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1b5110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1b5114: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1b5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b5118: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B5118u;
    {
        const bool branch_taken_0x1b5118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5118u;
            // 0x1b511c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5118) {
            ctx->pc = 0x1B50F8u;
            runtime->cooperativeGuestYield();
            goto label_1b50f8;
        }
    }
    ctx->pc = 0x1B5120u;
label_1b5120:
    // 0x1b5120: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b5120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5124: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x1b5124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_1b5128:
    // 0x1b5128: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1b5128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1b512c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1b512cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b5130: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b5130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b5134: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1b5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1b5138: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b5138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b513c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b5140: 0x922301a0  lbu         $v1, 0x1A0($s1)
    ctx->pc = 0x1b5140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b5144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5148: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5148u;
    {
        const bool branch_taken_0x1b5148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5148u;
            // 0x1b514c: 0x8c53e89c  lw          $s3, -0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5148) {
            ctx->pc = 0x1B5184u;
            goto label_1b5184;
        }
    }
    ctx->pc = 0x1B5150u;
    // 0x1b5150: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b5150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b5154: 0x0  nop
    ctx->pc = 0x1b5154u;
    // NOP
label_1b5158:
    // 0x1b5158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b515c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b5160: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5164: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1b5168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b516c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1B516Cu;
    SET_GPR_U32(ctx, 31, 0x1B5174u);
    ctx->pc = 0x1B5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B516Cu;
            // 0x1b5170: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5174u; }
        if (ctx->pc != 0x1B5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5174u; }
        if (ctx->pc != 0x1B5174u) { return; }
    }
    ctx->pc = 0x1B5174u;
    // 0x1b5174: 0x922201a0  lbu         $v0, 0x1A0($s1)
    ctx->pc = 0x1b5174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b5178: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b5178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b517c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B517Cu;
    {
        const bool branch_taken_0x1b517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B517Cu;
            // 0x1b5180: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b517c) {
            ctx->pc = 0x1B5158u;
            runtime->cooperativeGuestYield();
            goto label_1b5158;
        }
    }
    ctx->pc = 0x1B5184u;
label_1b5184:
    // 0x1b5184: 0x922601a1  lbu         $a2, 0x1A1($s1)
    ctx->pc = 0x1b5184u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b5188: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1b5188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1b518c: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1b5190: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b5194: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b5198: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x1b5198u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1b519c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B519Cu;
    SET_GPR_U32(ctx, 31, 0x1B51A4u);
    ctx->pc = 0x1B51A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B519Cu;
            // 0x1b51a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A4u; }
        if (ctx->pc != 0x1B51A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51A4u; }
        if (ctx->pc != 0x1B51A4u) { return; }
    }
    ctx->pc = 0x1B51A4u;
    // 0x1b51a4: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b51a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b51a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b51ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1B51ACu;
    {
        const bool branch_taken_0x1b51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51ACu;
            // 0x1b51b0: 0xa22201a1  sb          $v0, 0x1A1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51ac) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B51B4u;
label_1b51b4:
    // 0x1b51b4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b51b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b51b8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b51bc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b51c0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1B51C0u;
    {
        const bool branch_taken_0x1b51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B51C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51C0u;
            // 0x1b51c4: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51c0) {
            ctx->pc = 0x1B50D0u;
            runtime->cooperativeGuestYield();
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B51C8u;
    // 0x1b51c8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1B51C8u;
    {
        const bool branch_taken_0x1b51c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51C8u;
            // 0x1b51cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51c8) {
            ctx->pc = 0x1B52DCu;
            goto label_1b52dc;
        }
    }
    ctx->pc = 0x1B51D0u;
label_1b51d0:
    // 0x1b51d0: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1B51D0u;
    {
        const bool branch_taken_0x1b51d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51D0u;
            // 0x1b51d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51d0) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B51D8u;
    // 0x1b51d8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x1b51d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b51dc: 0x0  nop
    ctx->pc = 0x1b51dcu;
    // NOP
label_1b51e0:
    // 0x1b51e0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1b51e4: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1b51e8: 0x14450036  bne         $v0, $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B51E8u;
    {
        const bool branch_taken_0x1b51e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B51ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51E8u;
            // 0x1b51ec: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51e8) {
            ctx->pc = 0x1B52C4u;
            goto label_1b52c4;
        }
    }
    ctx->pc = 0x1B51F0u;
    // 0x1b51f0: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1b51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1b51f4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B51F4u;
    {
        const bool branch_taken_0x1b51f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51F4u;
            // 0x1b51f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51f4) {
            ctx->pc = 0x1B5230u;
            goto label_1b5230;
        }
    }
    ctx->pc = 0x1B51FCu;
    // 0x1b51fc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1b51fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1b5200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5200u;
    {
        const bool branch_taken_0x1b5200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5200u;
            // 0x1b5204: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5200) {
            ctx->pc = 0x1B5220u;
            goto label_1b5220;
        }
    }
    ctx->pc = 0x1B5208u;
label_1b5208:
    // 0x1b5208: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b520c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1b520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1b5210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5210u;
    {
        const bool branch_taken_0x1b5210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5210u;
            // 0x1b5214: 0x240203f4  addiu       $v0, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5210) {
            ctx->pc = 0x1B5238u;
            goto label_1b5238;
        }
    }
    ctx->pc = 0x1B5218u;
    // 0x1b5218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b521c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1b5220:
    // 0x1b5220: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1b5220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1b5224: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1b5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1b5228: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B5228u;
    {
        const bool branch_taken_0x1b5228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5228u;
            // 0x1b522c: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5228) {
            ctx->pc = 0x1B5208u;
            runtime->cooperativeGuestYield();
            goto label_1b5208;
        }
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5234: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x1b5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_1b5238:
    // 0x1b5238: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1b5238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1b523c: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x1b523cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b5240: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b5240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b5244: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1b5244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1b5248: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1b5248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1b524c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b5250: 0x922301a1  lbu         $v1, 0x1A1($s1)
    ctx->pc = 0x1b5250u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b5254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5258: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5258u;
    {
        const bool branch_taken_0x1b5258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5258u;
            // 0x1b525c: 0x8c53e89c  lw          $s3, -0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5258) {
            ctx->pc = 0x1B5294u;
            goto label_1b5294;
        }
    }
    ctx->pc = 0x1B5260u;
    // 0x1b5260: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b5260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b5264: 0x0  nop
    ctx->pc = 0x1b5264u;
    // NOP
label_1b5268:
    // 0x1b5268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b5268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b526c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b5270: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5274: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b5278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b527c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1B527Cu;
    SET_GPR_U32(ctx, 31, 0x1B5284u);
    ctx->pc = 0x1B5280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B527Cu;
            // 0x1b5280: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5284u; }
        if (ctx->pc != 0x1B5284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5284u; }
        if (ctx->pc != 0x1B5284u) { return; }
    }
    ctx->pc = 0x1B5284u;
    // 0x1b5284: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1b5284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1b5288: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b5288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b528c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B528Cu;
    {
        const bool branch_taken_0x1b528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B528Cu;
            // 0x1b5290: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b528c) {
            ctx->pc = 0x1B5268u;
            runtime->cooperativeGuestYield();
            goto label_1b5268;
        }
    }
    ctx->pc = 0x1B5294u;
label_1b5294:
    // 0x1b5294: 0x922601a0  lbu         $a2, 0x1A0($s1)
    ctx->pc = 0x1b5294u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b5298: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1b5298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1b529c: 0x248500dc  addiu       $a1, $a0, 0xDC
    ctx->pc = 0x1b529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x1b52a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b52a4: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x1b52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x1b52a8: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1b52ac: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B52ACu;
    SET_GPR_U32(ctx, 31, 0x1B52B4u);
    ctx->pc = 0x1B52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52ACu;
            // 0x1b52b0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52B4u; }
        if (ctx->pc != 0x1B52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52B4u; }
        if (ctx->pc != 0x1B52B4u) { return; }
    }
    ctx->pc = 0x1B52B4u;
    // 0x1b52b4: 0x922201a0  lbu         $v0, 0x1A0($s1)
    ctx->pc = 0x1b52b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1b52b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b52bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B52BCu;
    {
        const bool branch_taken_0x1b52bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52BCu;
            // 0x1b52c0: 0xa22201a0  sb          $v0, 0x1A0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 416), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52bc) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B52C4u;
label_1b52c4:
    // 0x1b52c4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b52c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b52c8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1b52c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b52cc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b52ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b52d0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1B52D0u;
    {
        const bool branch_taken_0x1b52d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B52D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52D0u;
            // 0x1b52d4: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52d0) {
            ctx->pc = 0x1B51E0u;
            runtime->cooperativeGuestYield();
            goto label_1b51e0;
        }
    }
    ctx->pc = 0x1B52D8u;
label_1b52d8:
    // 0x1b52d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b52d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b52dc:
    // 0x1b52dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b52dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b52e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b52e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b52e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b52e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b52e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b52e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b52ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b52ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b52f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B52F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B52F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52F0u;
            // 0x1b52f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B50D0u: goto label_1b50d0;
            case 0x1B50F8u: goto label_1b50f8;
            case 0x1B5110u: goto label_1b5110;
            case 0x1B5120u: goto label_1b5120;
            case 0x1B5128u: goto label_1b5128;
            case 0x1B5158u: goto label_1b5158;
            case 0x1B5184u: goto label_1b5184;
            case 0x1B51B4u: goto label_1b51b4;
            case 0x1B51D0u: goto label_1b51d0;
            case 0x1B51E0u: goto label_1b51e0;
            case 0x1B5208u: goto label_1b5208;
            case 0x1B5220u: goto label_1b5220;
            case 0x1B5230u: goto label_1b5230;
            case 0x1B5238u: goto label_1b5238;
            case 0x1B5268u: goto label_1b5268;
            case 0x1B5294u: goto label_1b5294;
            case 0x1B52C4u: goto label_1b52c4;
            case 0x1B52D8u: goto label_1b52d8;
            case 0x1B52DCu: goto label_1b52dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B52F8u;
}

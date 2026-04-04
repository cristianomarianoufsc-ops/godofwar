#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBDC0
// Address: 0x1cbdc0 - 0x1cc188
void sub_001CBDC0_0x1cbdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBDC0_0x1cbdc0");
#endif

    ctx->pc = 0x1cbdc0u;

    // 0x1cbdc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cbdc4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cbdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1cbdc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1cbdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1cbdcc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1cbdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1cbdd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cbdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbdd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cbdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cbdd8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cbddc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1cbddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1cbde0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1cbde4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1cbde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1cbde8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cbde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cbdec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1cbdecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cbdf0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cbdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1cbdf4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cbdf8: 0x8e83d2ac  lw          $v1, -0x2D54($s4)
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x1cbdfc: 0x1015c2  srl         $v0, $s0, 23
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
    // 0x1cbe00: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1cbe00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cbe04: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cbe08: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cbe0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbe10: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBE10u;
    {
        const bool branch_taken_0x1cbe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CBE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE10u;
            // 0x1cbe14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe10) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBE18u;
    // 0x1cbe18: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x1cbe18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cbe1c:
    // 0x1cbe1c: 0x126000ce  beqz        $s3, . + 4 + (0xCE << 2)
    ctx->pc = 0x1CBE1Cu;
    {
        const bool branch_taken_0x1cbe1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE1Cu;
            // 0x1cbe20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe1c) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBE24u;
    // 0x1cbe24: 0xc072b5c  jal         func_1CAD70
    ctx->pc = 0x1CBE24u;
    SET_GPR_U32(ctx, 31, 0x1CBE2Cu);
    ctx->pc = 0x1CBE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE24u;
            // 0x1cbe28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD70u;
    if (runtime->hasFunction(0x1CAD70u)) {
        auto targetFn = runtime->lookupFunction(0x1CAD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE2Cu; }
        if (ctx->pc != 0x1CBE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAD70_0x1cad70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE2Cu; }
        if (ctx->pc != 0x1CBE2Cu) { return; }
    }
    ctx->pc = 0x1CBE2Cu;
    // 0x1cbe2c: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x1CBE2Cu;
    {
        const bool branch_taken_0x1cbe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE2Cu;
            // 0x1cbe30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe2c) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBE34u;
    // 0x1cbe34: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cbe38: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1CBE38u;
    {
        const bool branch_taken_0x1cbe38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE38u;
            // 0x1cbe3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe38) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBE40u;
    // 0x1cbe40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbe44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbe48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cbe4c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cbe50: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBE58u);
        ctx->pc = 0x1CBE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE50u;
            // 0x1cbe54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBE58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE98u: goto label_1cbe98;
            case 0x1CBE9Cu: goto label_1cbe9c;
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF30u: goto label_1cbf30;
            case 0x1CBF4Cu: goto label_1cbf4c;
            case 0x1CBF68u: goto label_1cbf68;
            case 0x1CBF88u: goto label_1cbf88;
            case 0x1CBFD0u: goto label_1cbfd0;
            case 0x1CC004u: goto label_1cc004;
            case 0x1CC010u: goto label_1cc010;
            case 0x1CC034u: goto label_1cc034;
            case 0x1CC068u: goto label_1cc068;
            case 0x1CC074u: goto label_1cc074;
            case 0x1CC098u: goto label_1cc098;
            case 0x1CC108u: goto label_1cc108;
            case 0x1CC154u: goto label_1cc154;
            case 0x1CC158u: goto label_1cc158;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE58u; }
            if (ctx->pc != 0x1CBE58u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBE58u;
    // 0x1cbe58: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cbe5c: 0x144000be  bnez        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1CBE5Cu;
    {
        const bool branch_taken_0x1cbe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE5Cu;
            // 0x1cbe60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe5c) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBE64u;
    // 0x1cbe64: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x1cbe68: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1cbe6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cbe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cbe70: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1CBE70u;
    {
        const bool branch_taken_0x1cbe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE70u;
            // 0x1cbe74: 0x32020007  andi        $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe70) {
            ctx->pc = 0x1CC154u;
            goto label_1cc154;
        }
    }
    ctx->pc = 0x1CBE78u;
    // 0x1cbe78: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CBE78u;
    {
        const bool branch_taken_0x1cbe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe78) {
            ctx->pc = 0x1CBE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE78u;
            // 0x1cbe7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE9Cu;
            goto label_1cbe9c;
        }
    }
    ctx->pc = 0x1CBE80u;
    // 0x1cbe80: 0x8e82d2ac  lw          $v0, -0x2D54($s4)
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294955692)));
    // 0x1cbe84: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1cbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cbe88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbe8c: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBE8Cu;
    {
        const bool branch_taken_0x1cbe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CBE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE8Cu;
            // 0x1cbe90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe8c) {
            ctx->pc = 0x1CBE98u;
            goto label_1cbe98;
        }
    }
    ctx->pc = 0x1CBE94u;
    // 0x1cbe94: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1cbe94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cbe98:
    // 0x1cbe98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cbe98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe9c:
    // 0x1cbe9c: 0x120000ad  beqz        $s0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1CBE9Cu;
    {
        const bool branch_taken_0x1cbe9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE9Cu;
            // 0x1cbea0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe9c) {
            ctx->pc = 0x1CC154u;
            goto label_1cc154;
        }
    }
    ctx->pc = 0x1CBEA4u;
    // 0x1cbea4: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1cbea4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbea8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1cbeac: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cbeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cbeb0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cbeb4: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBEBCu);
        ctx->pc = 0x1CBEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEB4u;
            // 0x1cbeb8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBEBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE98u: goto label_1cbe98;
            case 0x1CBE9Cu: goto label_1cbe9c;
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF30u: goto label_1cbf30;
            case 0x1CBF4Cu: goto label_1cbf4c;
            case 0x1CBF68u: goto label_1cbf68;
            case 0x1CBF88u: goto label_1cbf88;
            case 0x1CBFD0u: goto label_1cbfd0;
            case 0x1CC004u: goto label_1cc004;
            case 0x1CC010u: goto label_1cc010;
            case 0x1CC034u: goto label_1cc034;
            case 0x1CC068u: goto label_1cc068;
            case 0x1CC074u: goto label_1cc074;
            case 0x1CC098u: goto label_1cc098;
            case 0x1CC108u: goto label_1cc108;
            case 0x1CC154u: goto label_1cc154;
            case 0x1CC158u: goto label_1cc158;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEBCu; }
            if (ctx->pc != 0x1CBEBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CBEBCu;
    // 0x1cbebc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cbebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbec0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cbec4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cbec8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cbecc: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBED4u);
        ctx->pc = 0x1CBED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBECCu;
            // 0x1cbed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBED4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE98u: goto label_1cbe98;
            case 0x1CBE9Cu: goto label_1cbe9c;
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF30u: goto label_1cbf30;
            case 0x1CBF4Cu: goto label_1cbf4c;
            case 0x1CBF68u: goto label_1cbf68;
            case 0x1CBF88u: goto label_1cbf88;
            case 0x1CBFD0u: goto label_1cbfd0;
            case 0x1CC004u: goto label_1cc004;
            case 0x1CC010u: goto label_1cc010;
            case 0x1CC034u: goto label_1cc034;
            case 0x1CC068u: goto label_1cc068;
            case 0x1CC074u: goto label_1cc074;
            case 0x1CC098u: goto label_1cc098;
            case 0x1CC108u: goto label_1cc108;
            case 0x1CC154u: goto label_1cc154;
            case 0x1CC158u: goto label_1cc158;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBED4u; }
            if (ctx->pc != 0x1CBED4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBED4u;
    // 0x1cbed4: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBED4u;
    {
        const bool branch_taken_0x1cbed4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBED4u;
            // 0x1cbed8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbed4) {
            ctx->pc = 0x1CBEE0u;
            goto label_1cbee0;
        }
    }
    ctx->pc = 0x1CBEDCu;
    // 0x1cbedc: 0x8eb60008  lw          $s6, 0x8($s5)
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1cbee0:
    // 0x1cbee0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cbee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cbee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbee8: 0xc068682  jal         func_1A1A08
    ctx->pc = 0x1CBEE8u;
    SET_GPR_U32(ctx, 31, 0x1CBEF0u);
    ctx->pc = 0x1CBEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEE8u;
            // 0x1cbeec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A08u;
    if (runtime->hasFunction(0x1A1A08u)) {
        auto targetFn = runtime->lookupFunction(0x1A1A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF0u; }
        if (ctx->pc != 0x1CBEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1a08_0x1a1a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF0u; }
        if (ctx->pc != 0x1CBEF0u) { return; }
    }
    ctx->pc = 0x1CBEF0u;
    // 0x1cbef0: 0x12c00098  beqz        $s6, . + 4 + (0x98 << 2)
    ctx->pc = 0x1CBEF0u;
    {
        const bool branch_taken_0x1cbef0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEF0u;
            // 0x1cbef4: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbef0) {
            ctx->pc = 0x1CC154u;
            goto label_1cc154;
        }
    }
    ctx->pc = 0x1CBEF8u;
    // 0x1cbef8: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1CBEF8u;
    {
        const bool branch_taken_0x1cbef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEF8u;
            // 0x1cbefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbef8) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBF00u;
    // 0x1cbf00: 0xc6810178  lwc1        $f1, 0x178($s4)
    ctx->pc = 0x1cbf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbf04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbf04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbf08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cbf08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbf0c: 0x0  nop
    ctx->pc = 0x1cbf0cu;
    // NOP
    // 0x1cbf10: 0x45000091  bc1f        . + 4 + (0x91 << 2)
    ctx->pc = 0x1CBF10u;
    {
        const bool branch_taken_0x1cbf10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF10u;
            // 0x1cbf14: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf10) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CBF18u;
    // 0x1cbf18: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cbf1c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1cbf1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cbf20: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBF20u;
    {
        const bool branch_taken_0x1cbf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF20u;
            // 0x1cbf24: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf20) {
            ctx->pc = 0x1CBF30u;
            goto label_1cbf30;
        }
    }
    ctx->pc = 0x1CBF28u;
    // 0x1cbf28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CBF28u;
    {
        const bool branch_taken_0x1cbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF28u;
            // 0x1cbf2c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf28) {
            ctx->pc = 0x1CBF4Cu;
            goto label_1cbf4c;
        }
    }
    ctx->pc = 0x1CBF30u;
label_1cbf30:
    // 0x1cbf30: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1cbf30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cbf34: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cbf34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cbf38: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBF38u;
    {
        const bool branch_taken_0x1cbf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF38u;
            // 0x1cbf3c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf38) {
            ctx->pc = 0x1CBF4Cu;
            goto label_1cbf4c;
        }
    }
    ctx->pc = 0x1CBF40u;
    // 0x1cbf40: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CBF40u;
    SET_GPR_U32(ctx, 31, 0x1CBF48u);
    ctx->pc = 0x1CBF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF40u;
            // 0x1cbf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF48u; }
        if (ctx->pc != 0x1CBF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF48u; }
        if (ctx->pc != 0x1CBF48u) { return; }
    }
    ctx->pc = 0x1CBF48u;
    // 0x1cbf48: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1cbf4c:
    // 0x1cbf4c: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1cbf4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cbf50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbf54: 0x86630060  lh          $v1, 0x60($s3)
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cbf58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBF58u;
    {
        const bool branch_taken_0x1cbf58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF58u;
            // 0x1cbf5c: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf58) {
            ctx->pc = 0x1CBF68u;
            goto label_1cbf68;
        }
    }
    ctx->pc = 0x1CBF60u;
    // 0x1cbf60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBF60u;
    {
        const bool branch_taken_0x1cbf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF60u;
            // 0x1cbf64: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf60) {
            ctx->pc = 0x1CBF88u;
            goto label_1cbf88;
        }
    }
    ctx->pc = 0x1CBF68u;
label_1cbf68:
    // 0x1cbf68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cbf6c: 0xde630068  ld          $v1, 0x68($s3)
    ctx->pc = 0x1cbf6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1cbf70: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1cbf70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1cbf74: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBF74u;
    {
        const bool branch_taken_0x1cbf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CBF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF74u;
            // 0x1cbf78: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf74) {
            ctx->pc = 0x1CBF88u;
            goto label_1cbf88;
        }
    }
    ctx->pc = 0x1CBF7Cu;
    // 0x1cbf7c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1CBF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF84u);
    ctx->pc = 0x1CBF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF7Cu;
            // 0x1cbf80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF84u; }
        if (ctx->pc != 0x1CBF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF84u; }
        if (ctx->pc != 0x1CBF84u) { return; }
    }
    ctx->pc = 0x1CBF84u;
    // 0x1cbf84: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1cbf88:
    // 0x1cbf88: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1cbf88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1cbf8c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cbf8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbf90: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1cbf90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cbf94: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1cbf94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cbf98: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cbf98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cbf9c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cbf9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cbfa0: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x1cbfa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1cbfa4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1cbfa4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cbfa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cbfa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbfac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1cbfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1cbfb0: 0x46000504  c1          0x504
    ctx->pc = 0x1cbfb0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cbfb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBFB4u;
    {
        const bool branch_taken_0x1cbfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFB4u;
            // 0x1cbfb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfb4) {
            ctx->pc = 0x1CBFD0u;
            goto label_1cbfd0;
        }
    }
    ctx->pc = 0x1CBFBCu;
    // 0x1cbfbc: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CBFBCu;
    SET_GPR_U32(ctx, 31, 0x1CBFC4u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFC4u; }
        if (ctx->pc != 0x1CBFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFC4u; }
        if (ctx->pc != 0x1CBFC4u) { return; }
    }
    ctx->pc = 0x1CBFC4u;
    // 0x1cbfc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBFC4u;
    {
        const bool branch_taken_0x1cbfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFC4u;
            // 0x1cbfc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfc4) {
            ctx->pc = 0x1CBFD0u;
            goto label_1cbfd0;
        }
    }
    ctx->pc = 0x1CBFCCu;
    // 0x1cbfcc: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x1cbfccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_1cbfd0:
    // 0x1cbfd0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1cbfd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1cbfd4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1cbfd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cbfd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBFD8u;
    {
        const bool branch_taken_0x1cbfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFD8u;
            // 0x1cbfdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfd8) {
            ctx->pc = 0x1CC010u;
            goto label_1cc010;
        }
    }
    ctx->pc = 0x1CBFE0u;
    // 0x1cbfe0: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x1cbfe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1cbfe4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1cbfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1cbfe8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBFE8u;
    {
        const bool branch_taken_0x1cbfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFE8u;
            // 0x1cbfec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfe8) {
            ctx->pc = 0x1CC004u;
            goto label_1cc004;
        }
    }
    ctx->pc = 0x1CBFF0u;
    // 0x1cbff0: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CBFF0u;
    SET_GPR_U32(ctx, 31, 0x1CBFF8u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFF8u; }
        if (ctx->pc != 0x1CBFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFF8u; }
        if (ctx->pc != 0x1CBFF8u) { return; }
    }
    ctx->pc = 0x1CBFF8u;
    // 0x1cbff8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBFF8u;
    {
        const bool branch_taken_0x1cbff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFF8u;
            // 0x1cbffc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbff8) {
            ctx->pc = 0x1CC004u;
            goto label_1cc004;
        }
    }
    ctx->pc = 0x1CC000u;
    // 0x1cc000: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x1cc000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_1cc004:
    // 0x1cc004: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1cc004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1cc008: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cc008u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc00c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1cc00cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1cc010:
    // 0x1cc010: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x1cc010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1cc014: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1cc014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1cc018: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC018u;
    {
        const bool branch_taken_0x1cc018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC018u;
            // 0x1cc01c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc018) {
            ctx->pc = 0x1CC034u;
            goto label_1cc034;
        }
    }
    ctx->pc = 0x1CC020u;
    // 0x1cc020: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CC020u;
    SET_GPR_U32(ctx, 31, 0x1CC028u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC028u; }
        if (ctx->pc != 0x1CC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC028u; }
        if (ctx->pc != 0x1CC028u) { return; }
    }
    ctx->pc = 0x1CC028u;
    // 0x1cc028: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC028u;
    {
        const bool branch_taken_0x1cc028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC028u;
            // 0x1cc02c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc028) {
            ctx->pc = 0x1CC034u;
            goto label_1cc034;
        }
    }
    ctx->pc = 0x1CC030u;
    // 0x1cc030: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x1cc030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_1cc034:
    // 0x1cc034: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x1cc034u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc038: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1cc038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cc03c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC03Cu;
    {
        const bool branch_taken_0x1cc03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC03Cu;
            // 0x1cc040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc03c) {
            ctx->pc = 0x1CC074u;
            goto label_1cc074;
        }
    }
    ctx->pc = 0x1CC044u;
    // 0x1cc044: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x1cc044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1cc048: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1cc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1cc04c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC04Cu;
    {
        const bool branch_taken_0x1cc04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC04Cu;
            // 0x1cc050: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc04c) {
            ctx->pc = 0x1CC068u;
            goto label_1cc068;
        }
    }
    ctx->pc = 0x1CC054u;
    // 0x1cc054: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1CC054u;
    SET_GPR_U32(ctx, 31, 0x1CC05Cu);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC05Cu; }
        if (ctx->pc != 0x1CC05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC05Cu; }
        if (ctx->pc != 0x1CC05Cu) { return; }
    }
    ctx->pc = 0x1CC05Cu;
    // 0x1cc05c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC05Cu;
    {
        const bool branch_taken_0x1cc05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC05Cu;
            // 0x1cc060: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc05c) {
            ctx->pc = 0x1CC068u;
            goto label_1cc068;
        }
    }
    ctx->pc = 0x1CC064u;
    // 0x1cc064: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x1cc064u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_1cc068:
    // 0x1cc068: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x1cc068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc06c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc070: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x1cc070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1cc074:
    // 0x1cc074: 0x92a20016  lbu         $v0, 0x16($s5)
    ctx->pc = 0x1cc074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x1cc078: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cc078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cc07c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC07Cu;
    {
        const bool branch_taken_0x1cc07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC07Cu;
            // 0x1cc080: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc07c) {
            ctx->pc = 0x1CC098u;
            goto label_1cc098;
        }
    }
    ctx->pc = 0x1CC084u;
    // 0x1cc084: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1cc088: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cc08c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cc090: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1cc090u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1cc094: 0x0  nop
    ctx->pc = 0x1cc094u;
    // NOP
label_1cc098:
    // 0x1cc098: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cc098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc09c: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1cc0a0: 0xc08a1a4  jal         func_228690
    ctx->pc = 0x1CC0A0u;
    SET_GPR_U32(ctx, 31, 0x1CC0A8u);
    ctx->pc = 0x1CC0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0A0u;
            // 0x1cc0a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228690u;
    if (runtime->hasFunction(0x228690u)) {
        auto targetFn = runtime->lookupFunction(0x228690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0A8u; }
        if (ctx->pc != 0x1CC0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228690_0x228690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0A8u; }
        if (ctx->pc != 0x1CC0A8u) { return; }
    }
    ctx->pc = 0x1CC0A8u;
    // 0x1cc0a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0ac: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CC0ACu;
    {
        const bool branch_taken_0x1cc0ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0ACu;
            // 0x1cc0b0: 0xae45003c  sw          $a1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0ac) {
            ctx->pc = 0x1CC154u;
            goto label_1cc154;
        }
    }
    ctx->pc = 0x1CC0B4u;
    // 0x1cc0b4: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x1cc0b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1cc0b8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x1cc0b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1cc0bc: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x1cc0bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc0c4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x1cc0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cc0c8: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x1cc0c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x1cc0cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cc0d0: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x1cc0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cc0d4: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x1cc0d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cc0d8: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC0D8u;
    {
        const bool branch_taken_0x1cc0d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1cc0d8) {
            ctx->pc = 0x1CC0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0D8u;
            // 0x1cc0dc: 0x8e43003c  lw          $v1, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC108u;
            goto label_1cc108;
        }
    }
    ctx->pc = 0x1CC0E0u;
    // 0x1cc0e0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1cc0e4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cc0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cc0e8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cc0ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1CC0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC0F4u);
        ctx->pc = 0x1CC0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0ECu;
            // 0x1cc0f0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC0F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE98u: goto label_1cbe98;
            case 0x1CBE9Cu: goto label_1cbe9c;
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF30u: goto label_1cbf30;
            case 0x1CBF4Cu: goto label_1cbf4c;
            case 0x1CBF68u: goto label_1cbf68;
            case 0x1CBF88u: goto label_1cbf88;
            case 0x1CBFD0u: goto label_1cbfd0;
            case 0x1CC004u: goto label_1cc004;
            case 0x1CC010u: goto label_1cc010;
            case 0x1CC034u: goto label_1cc034;
            case 0x1CC068u: goto label_1cc068;
            case 0x1CC074u: goto label_1cc074;
            case 0x1CC098u: goto label_1cc098;
            case 0x1CC108u: goto label_1cc108;
            case 0x1CC154u: goto label_1cc154;
            case 0x1CC158u: goto label_1cc158;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F4u; }
            if (ctx->pc != 0x1CC0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC0F4u;
    // 0x1cc0f4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1cc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1cc0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0fc: 0xc0821f6  jal         func_2087D8
    ctx->pc = 0x1CC0FCu;
    SET_GPR_U32(ctx, 31, 0x1CC104u);
    ctx->pc = 0x1CC100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0FCu;
            // 0x1cc100: 0x8465000c  lh          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2087D8u;
    if (runtime->hasFunction(0x2087D8u)) {
        auto targetFn = runtime->lookupFunction(0x2087D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC104u; }
        if (ctx->pc != 0x1CC104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002087D8_0x2087d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC104u; }
        if (ctx->pc != 0x1CC104u) { return; }
    }
    ctx->pc = 0x1CC104u;
    // 0x1cc104: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x1cc104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1cc108:
    // 0x1cc108: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1cc10c: 0x8444cc9c  lh          $a0, -0x3364($v0)
    ctx->pc = 0x1cc10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1cc110: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cc110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc114: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cc118: 0x94650018  lhu         $a1, 0x18($v1)
    ctx->pc = 0x1cc118u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cc11c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1cc11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cc120: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1cc124: 0x24635ea8  addiu       $v1, $v1, 0x5EA8
    ctx->pc = 0x1cc124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24232));
    // 0x1cc128: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cc128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc12c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc134: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc138: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1cc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc13c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc140: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1cc140u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1cc144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cc144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cc148: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cc148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cc14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC14Cu;
    {
        const bool branch_taken_0x1cc14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC14Cu;
            // 0x1cc150: 0xa6430078  sh          $v1, 0x78($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc14c) {
            ctx->pc = 0x1CC158u;
            goto label_1cc158;
        }
    }
    ctx->pc = 0x1CC154u;
label_1cc154:
    // 0x1cc154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc158:
    // 0x1cc158: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1cc158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cc15c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1cc15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc160: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1cc160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc164: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1cc164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc168: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cc168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc16c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1cc16cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc170: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1cc170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc178: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1cc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC17Cu;
            // 0x1cc180: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBE1Cu: goto label_1cbe1c;
            case 0x1CBE98u: goto label_1cbe98;
            case 0x1CBE9Cu: goto label_1cbe9c;
            case 0x1CBEE0u: goto label_1cbee0;
            case 0x1CBF30u: goto label_1cbf30;
            case 0x1CBF4Cu: goto label_1cbf4c;
            case 0x1CBF68u: goto label_1cbf68;
            case 0x1CBF88u: goto label_1cbf88;
            case 0x1CBFD0u: goto label_1cbfd0;
            case 0x1CC004u: goto label_1cc004;
            case 0x1CC010u: goto label_1cc010;
            case 0x1CC034u: goto label_1cc034;
            case 0x1CC068u: goto label_1cc068;
            case 0x1CC074u: goto label_1cc074;
            case 0x1CC098u: goto label_1cc098;
            case 0x1CC108u: goto label_1cc108;
            case 0x1CC154u: goto label_1cc154;
            case 0x1CC158u: goto label_1cc158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC184u;
    // 0x1cc184: 0x0  nop
    ctx->pc = 0x1cc184u;
    // NOP
}

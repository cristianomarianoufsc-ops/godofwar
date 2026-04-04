#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023C078
// Address: 0x23c078 - 0x23c590
void sub_0023C078_0x23c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C078_0x23c078");
#endif

    ctx->pc = 0x23c078u;

    // 0x23c078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c07c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23c084: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x23c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x23c088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23c08c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23c08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c094: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x23c094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x23c098: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23c09c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x23c09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23c0a0: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C0A0u;
    {
        const bool branch_taken_0x23c0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0A0u;
            // 0x23c0a4: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0a0) {
            ctx->pc = 0x23C0C4u;
            goto label_23c0c4;
        }
    }
    ctx->pc = 0x23C0A8u;
    // 0x23c0a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0ac: 0x0  nop
    ctx->pc = 0x23c0acu;
    // NOP
label_23c0b0:
    // 0x23c0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0b4: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x23C0B4u;
    SET_GPR_U32(ctx, 31, 0x23C0BCu);
    ctx->pc = 0x23C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0B4u;
            // 0x23c0b8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0BCu; }
        if (ctx->pc != 0x23C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0BCu; }
        if (ctx->pc != 0x23C0BCu) { return; }
    }
    ctx->pc = 0x23C0BCu;
    // 0x23c0bc: 0x1612fffc  bne         $s0, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x23C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0BCu;
            // 0x23c0c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23C0B0u;
            runtime->cooperativeGuestYield();
            goto label_23c0b0;
        }
    }
    ctx->pc = 0x23C0C4u;
label_23c0c4:
    // 0x23c0c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23c0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c0c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23c0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c0cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23c0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23C0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0D4u;
            // 0x23c0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C0DCu;
    // 0x23c0dc: 0x0  nop
    ctx->pc = 0x23c0dcu;
    // NOP
    // 0x23c0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23c0e4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x23c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x23c0e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23c0e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x23c0f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x23c0f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x23c0f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23c0fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x23c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x23c100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c104: 0xc045f20  jal         func_117C80
    ctx->pc = 0x23C104u;
    SET_GPR_U32(ctx, 31, 0x23C10Cu);
    ctx->pc = 0x23C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C104u;
            // 0x23c108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (runtime->hasFunction(0x117C80u)) {
        auto targetFn = runtime->lookupFunction(0x117C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C10Cu; }
        if (ctx->pc != 0x23C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117C80_0x117c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C10Cu; }
        if (ctx->pc != 0x23C10Cu) { return; }
    }
    ctx->pc = 0x23C10Cu;
    // 0x23c10c: 0x8eb30020  lw          $s3, 0x20($s5)
    ctx->pc = 0x23c10cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x23c110: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23c110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c11c: 0x8eb00030  lw          $s0, 0x30($s5)
    ctx->pc = 0x23c11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x23c120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23c120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c124: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x23c124u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x23c128: 0xc045b42  jal         func_116D08
    ctx->pc = 0x23C128u;
    SET_GPR_U32(ctx, 31, 0x23C130u);
    ctx->pc = 0x23C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C128u;
            // 0x23c12c: 0x8eb2003c  lw          $s2, 0x3C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116D08u;
    if (runtime->hasFunction(0x116D08u)) {
        auto targetFn = runtime->lookupFunction(0x116D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C130u; }
        if (ctx->pc != 0x23C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116D08_0x116d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C130u; }
        if (ctx->pc != 0x23C130u) { return; }
    }
    ctx->pc = 0x23C130u;
    // 0x23c130: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c134: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23c138: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x23c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x23c13c: 0xae900064  sw          $s0, 0x64($s4)
    ctx->pc = 0x23c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 16));
    // 0x23c140: 0xae910068  sw          $s1, 0x68($s4)
    ctx->pc = 0x23c140u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 17));
    // 0x23c144: 0xae920078  sw          $s2, 0x78($s4)
    ctx->pc = 0x23c144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 18));
    // 0x23c148: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x23c148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    // 0x23c14c: 0xae800060  sw          $zero, 0x60($s4)
    ctx->pc = 0x23c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 0));
    // 0x23c150: 0xae80006c  sw          $zero, 0x6C($s4)
    ctx->pc = 0x23c150u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
    // 0x23c154: 0xc04060a  jal         func_101828
    ctx->pc = 0x23C154u;
    SET_GPR_U32(ctx, 31, 0x23C15Cu);
    ctx->pc = 0x23C158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C154u;
            // 0x23c158: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C15Cu; }
        if (ctx->pc != 0x23C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C15Cu; }
        if (ctx->pc != 0x23C15Cu) { return; }
    }
    ctx->pc = 0x23C15Cu;
    // 0x23c15c: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x23c160: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23c164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c168: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23c168u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23c16c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C16Cu;
    {
        const bool branch_taken_0x23c16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c16c) {
            ctx->pc = 0x23C170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C16Cu;
            // 0x23c170: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C174u;
            goto label_23c174;
        }
    }
    ctx->pc = 0x23C174u;
label_23c174:
    // 0x23c174: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23c178: 0x2012  mflo        $a0
    ctx->pc = 0x23c178u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23c17c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c180: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c184: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23C184u;
    SET_GPR_U32(ctx, 31, 0x23C18Cu);
    ctx->pc = 0x23C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C184u;
            // 0x23c188: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C18Cu; }
        if (ctx->pc != 0x23C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C18Cu; }
        if (ctx->pc != 0x23C18Cu) { return; }
    }
    ctx->pc = 0x23C18Cu;
    // 0x23c18c: 0x8eb0002c  lw          $s0, 0x2C($s5)
    ctx->pc = 0x23c18cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x23c190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c194: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x23c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x23c198: 0xae900060  sw          $s0, 0x60($s4)
    ctx->pc = 0x23c198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 16));
    // 0x23c19c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x23c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23c1a0: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x23c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x23c1a4: 0xc04060a  jal         func_101828
    ctx->pc = 0x23C1A4u;
    SET_GPR_U32(ctx, 31, 0x23C1ACu);
    ctx->pc = 0x23C1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1A4u;
            // 0x23c1a8: 0xae85006c  sw          $a1, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1ACu; }
        if (ctx->pc != 0x23C1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1ACu; }
        if (ctx->pc != 0x23C1ACu) { return; }
    }
    ctx->pc = 0x23C1ACu;
    // 0x23c1ac: 0x8e930068  lw          $s3, 0x68($s4)
    ctx->pc = 0x23c1acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x23c1b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23c1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1b4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x23c1b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23c1bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23c1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c1c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23c1c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c1c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C1C4u;
    {
        const bool branch_taken_0x23c1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1c4) {
            ctx->pc = 0x23C1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1C4u;
            // 0x23c1c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C1CCu;
            goto label_23c1cc;
        }
    }
    ctx->pc = 0x23C1CCu;
label_23c1cc:
    // 0x23c1cc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x23c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x23c1d0: 0x1012  mflo        $v0
    ctx->pc = 0x23c1d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23c1d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c1dc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23C1DCu;
    SET_GPR_U32(ctx, 31, 0x23C1E4u);
    ctx->pc = 0x23C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1DCu;
            // 0x23c1e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1E4u; }
        if (ctx->pc != 0x23C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C1E4u; }
        if (ctx->pc != 0x23C1E4u) { return; }
    }
    ctx->pc = 0x23C1E4u;
    // 0x23c1e4: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x23C1E4u;
    {
        const bool branch_taken_0x23c1e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1E4u;
            // 0x23c1e8: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c1e4) {
            ctx->pc = 0x23C240u;
            goto label_23c240;
        }
    }
    ctx->pc = 0x23C1ECu;
    // 0x23c1ec: 0x0  nop
    ctx->pc = 0x23c1ecu;
    // NOP
label_23c1f0:
    // 0x23c1f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c1f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23c1fc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23c1fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23c200: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C200u;
    {
        const bool branch_taken_0x23c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c200) {
            ctx->pc = 0x23C204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C200u;
            // 0x23c204: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C208u;
            goto label_23c208;
        }
    }
    ctx->pc = 0x23C208u;
label_23c208:
    // 0x23c208: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x23c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x23c20c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x23c210: 0x1812  mflo        $v1
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c21c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23C21Cu;
    SET_GPR_U32(ctx, 31, 0x23C224u);
    ctx->pc = 0x23C220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C21Cu;
            // 0x23c220: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C224u; }
        if (ctx->pc != 0x23C224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C224u; }
        if (ctx->pc != 0x23C224u) { return; }
    }
    ctx->pc = 0x23C224u;
    // 0x23c224: 0x8e84005c  lw          $a0, 0x5C($s4)
    ctx->pc = 0x23c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x23c228: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23c228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23c22c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23c22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23c230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c234: 0x233202b  sltu        $a0, $s1, $s3
    ctx->pc = 0x23c234u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x23c238: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23C238u;
    {
        const bool branch_taken_0x23c238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C238u;
            // 0x23c23c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c238) {
            ctx->pc = 0x23C1F0u;
            runtime->cooperativeGuestYield();
            goto label_23c1f0;
        }
    }
    ctx->pc = 0x23C240u;
label_23c240:
    // 0x23c240: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x23c244: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23c244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c248: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23c248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23c24c: 0xae830070  sw          $v1, 0x70($s4)
    ctx->pc = 0x23c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
    // 0x23c250: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23c250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c254: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x23c254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23c258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c25c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x23c25cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c260: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x23c260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c268: 0x3e00008  jr          $ra
    ctx->pc = 0x23C268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C268u;
            // 0x23c26c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C270u;
    // 0x23c270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c274: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23c27c: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x23c280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c288: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23c288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23c28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c290: 0xc04198a  jal         func_106628
    ctx->pc = 0x23C290u;
    SET_GPR_U32(ctx, 31, 0x23C298u);
    ctx->pc = 0x23C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C290u;
            // 0x23c294: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C298u; }
        if (ctx->pc != 0x23C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C298u; }
        if (ctx->pc != 0x23C298u) { return; }
    }
    ctx->pc = 0x23C298u;
    // 0x23c298: 0xc04060a  jal         func_101828
    ctx->pc = 0x23C298u;
    SET_GPR_U32(ctx, 31, 0x23C2A0u);
    ctx->pc = 0x23C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C298u;
            // 0x23c29c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2A0u; }
        if (ctx->pc != 0x23C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2A0u; }
        if (ctx->pc != 0x23C2A0u) { return; }
    }
    ctx->pc = 0x23C2A0u;
    // 0x23c2a0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c2a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23c2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c2ac: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23c2acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23c2b0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C2B0u;
    {
        const bool branch_taken_0x23c2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2b0) {
            ctx->pc = 0x23C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2B0u;
            // 0x23c2b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C2B8u;
            goto label_23c2b8;
        }
    }
    ctx->pc = 0x23C2B8u;
label_23c2b8:
    // 0x23c2b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23c2bc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23c2c0: 0x2012  mflo        $a0
    ctx->pc = 0x23c2c0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23c2c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c2c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c2cc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C2CCu;
    SET_GPR_U32(ctx, 31, 0x23C2D4u);
    ctx->pc = 0x23C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2CCu;
            // 0x23c2d0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2D4u; }
        if (ctx->pc != 0x23C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2D4u; }
        if (ctx->pc != 0x23C2D4u) { return; }
    }
    ctx->pc = 0x23C2D4u;
    // 0x23c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c2d8: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23C2D8u;
    SET_GPR_U32(ctx, 31, 0x23C2E0u);
    ctx->pc = 0x23C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2D8u;
            // 0x23c2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2E0u; }
        if (ctx->pc != 0x23C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2E0u; }
        if (ctx->pc != 0x23C2E0u) { return; }
    }
    ctx->pc = 0x23C2E0u;
    // 0x23c2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23c2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2E8u;
            // 0x23c2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C2F0u;
    // 0x23c2f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c2f4: 0x0  nop
    ctx->pc = 0x23c2f4u;
    // NOP
    // 0x23c2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c2fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23c304: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x23c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x23c308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c310: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23c314: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23c318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c320: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c324: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23c324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23c328: 0xc04198a  jal         func_106628
    ctx->pc = 0x23C328u;
    SET_GPR_U32(ctx, 31, 0x23C330u);
    ctx->pc = 0x23C32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C328u;
            // 0x23c32c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C330u; }
        if (ctx->pc != 0x23C330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C330u; }
        if (ctx->pc != 0x23C330u) { return; }
    }
    ctx->pc = 0x23C330u;
    // 0x23c330: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c334: 0x8e130128  lw          $s3, 0x128($s0)
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x23c338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23C338u;
    {
        const bool branch_taken_0x23c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C338u;
            // 0x23c33c: 0x8e030064  lw          $v1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c338) {
            ctx->pc = 0x23C3A0u;
            goto label_23c3a0;
        }
    }
    ctx->pc = 0x23C340u;
    // 0x23c340: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23c340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c344: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23c348:
    // 0x23c348: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x23c348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23c34c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23c350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c354: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c358: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23c35c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23c35cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23c360: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C360u;
    {
        const bool branch_taken_0x23c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c360) {
            ctx->pc = 0x23C364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C360u;
            // 0x23c364: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C368u;
            goto label_23c368;
        }
    }
    ctx->pc = 0x23C368u;
label_23c368:
    // 0x23c368: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x23c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23c36c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23c36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23c370: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23c374: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23c378: 0x1812  mflo        $v1
    ctx->pc = 0x23c378u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c37c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c380: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c384: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C384u;
    SET_GPR_U32(ctx, 31, 0x23C38Cu);
    ctx->pc = 0x23C388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C384u;
            // 0x23c388: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C38Cu; }
        if (ctx->pc != 0x23C38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C38Cu; }
        if (ctx->pc != 0x23C38Cu) { return; }
    }
    ctx->pc = 0x23C38Cu;
    // 0x23c38c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c390: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x23c390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23c394: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23C394u;
    {
        const bool branch_taken_0x23c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c394) {
            ctx->pc = 0x23C398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C394u;
            // 0x23c398: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C348u;
            runtime->cooperativeGuestYield();
            goto label_23c348;
        }
    }
    ctx->pc = 0x23C39Cu;
    // 0x23c39c: 0x0  nop
    ctx->pc = 0x23c39cu;
    // NOP
label_23c3a0:
    // 0x23c3a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c3a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23c3a8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x23c3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23c3ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23c3b0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23c3b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23c3b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C3B4u;
    {
        const bool branch_taken_0x23c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3b4) {
            ctx->pc = 0x23C3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C3B4u;
            // 0x23c3b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C3BCu;
            goto label_23c3bc;
        }
    }
    ctx->pc = 0x23C3BCu;
label_23c3bc:
    // 0x23c3bc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x23c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23c3c0: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x23c3c4: 0x1812  mflo        $v1
    ctx->pc = 0x23c3c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c3c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c3cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c3d0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C3D0u;
    SET_GPR_U32(ctx, 31, 0x23C3D8u);
    ctx->pc = 0x23C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C3D0u;
            // 0x23c3d4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3D8u; }
        if (ctx->pc != 0x23C3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3D8u; }
        if (ctx->pc != 0x23C3D8u) { return; }
    }
    ctx->pc = 0x23C3D8u;
    // 0x23c3d8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x23c3dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23c3e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23c3e4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23c3e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23c3e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C3E8u;
    {
        const bool branch_taken_0x23c3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3e8) {
            ctx->pc = 0x23C3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C3E8u;
            // 0x23c3ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C3F0u;
            goto label_23c3f0;
        }
    }
    ctx->pc = 0x23C3F0u;
label_23c3f0:
    // 0x23c3f0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23c3f4: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x23c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x23c3f8: 0x1812  mflo        $v1
    ctx->pc = 0x23c3f8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23c3fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c404: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C404u;
    SET_GPR_U32(ctx, 31, 0x23C40Cu);
    ctx->pc = 0x23C408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C404u;
            // 0x23c408: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C40Cu; }
        if (ctx->pc != 0x23C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C40Cu; }
        if (ctx->pc != 0x23C40Cu) { return; }
    }
    ctx->pc = 0x23C40Cu;
    // 0x23c40c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23c410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c414: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x23c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x23c418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c41c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x23c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x23c420: 0xc04198a  jal         func_106628
    ctx->pc = 0x23C420u;
    SET_GPR_U32(ctx, 31, 0x23C428u);
    ctx->pc = 0x23C424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C420u;
            // 0x23c424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C428u; }
        if (ctx->pc != 0x23C428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C428u; }
        if (ctx->pc != 0x23C428u) { return; }
    }
    ctx->pc = 0x23C428u;
    // 0x23c428: 0xc04060a  jal         func_101828
    ctx->pc = 0x23C428u;
    SET_GPR_U32(ctx, 31, 0x23C430u);
    ctx->pc = 0x23C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C428u;
            // 0x23c42c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101828u;
    if (runtime->hasFunction(0x101828u)) {
        auto targetFn = runtime->lookupFunction(0x101828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C430u; }
        if (ctx->pc != 0x23C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101828_0x101828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C430u; }
        if (ctx->pc != 0x23C430u) { return; }
    }
    ctx->pc = 0x23C430u;
    // 0x23c430: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c434: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x23c434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23c438: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c43c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x23c43cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23c440: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C440u;
    {
        const bool branch_taken_0x23c440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c440) {
            ctx->pc = 0x23C444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23C440u;
            // 0x23c444: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23C448u;
            goto label_23c448;
        }
    }
    ctx->pc = 0x23C448u;
label_23c448:
    // 0x23c448: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23c44c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x23c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x23c450: 0x2012  mflo        $a0
    ctx->pc = 0x23c450u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x23c454: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23c454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c45c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23C45Cu;
    SET_GPR_U32(ctx, 31, 0x23C464u);
    ctx->pc = 0x23C460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C45Cu;
            // 0x23c460: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C464u; }
        if (ctx->pc != 0x23C464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C464u; }
        if (ctx->pc != 0x23C464u) { return; }
    }
    ctx->pc = 0x23C464u;
    // 0x23c464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c468: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x23C468u;
    SET_GPR_U32(ctx, 31, 0x23C470u);
    ctx->pc = 0x23C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C468u;
            // 0x23c46c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C470u; }
        if (ctx->pc != 0x23C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C470u; }
        if (ctx->pc != 0x23C470u) { return; }
    }
    ctx->pc = 0x23C470u;
    // 0x23c470: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23c470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c474: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23c474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c47c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23c47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c484: 0x3e00008  jr          $ra
    ctx->pc = 0x23C484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C484u;
            // 0x23c488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C48Cu;
    // 0x23c48c: 0x0  nop
    ctx->pc = 0x23c48cu;
    // NOP
    // 0x23c490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23c498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c4a8: 0xc0422a2  jal         func_108A88
    ctx->pc = 0x23C4A8u;
    SET_GPR_U32(ctx, 31, 0x23C4B0u);
    ctx->pc = 0x23C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4A8u;
            // 0x23c4ac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108A88u;
    if (runtime->hasFunction(0x108A88u)) {
        auto targetFn = runtime->lookupFunction(0x108A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C4B0u; }
        if (ctx->pc != 0x23C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108A88_0x108a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C4B0u; }
        if (ctx->pc != 0x23C4B0u) { return; }
    }
    ctx->pc = 0x23C4B0u;
    // 0x23c4b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4b4: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x23c4b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23c4b8: 0x8e0b0020  lw          $t3, 0x20($s0)
    ctx->pc = 0x23c4b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23c4bc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23c4c0: 0x8e0c007c  lw          $t4, 0x7C($s0)
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x23c4c4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x23c4c8: 0x8e09006c  lw          $t1, 0x6C($s0)
    ctx->pc = 0x23c4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x23c4cc: 0x24a5ed40  addiu       $a1, $a1, -0x12C0
    ctx->pc = 0x23c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962496));
    // 0x23c4d0: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x23c4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23c4d4: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x23c4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x23c4d8: 0x8e080078  lw          $t0, 0x78($s0)
    ctx->pc = 0x23c4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x23c4dc: 0xac710010  sw          $s1, 0x10($v1)
    ctx->pc = 0x23c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 17));
    // 0x23c4e0: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x23c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
    // 0x23c4e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23c4e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23c4ec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x23c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x23c4f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23c4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c4f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4fc: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x23c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x23c500: 0xac670028  sw          $a3, 0x28($v1)
    ctx->pc = 0x23c500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 7));
    // 0x23c504: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x23c504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
    // 0x23c508: 0xac6a0030  sw          $t2, 0x30($v1)
    ctx->pc = 0x23c508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 10));
    // 0x23c50c: 0xac6b0034  sw          $t3, 0x34($v1)
    ctx->pc = 0x23c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 11));
    // 0x23c510: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x23c510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x23c514: 0xac690038  sw          $t1, 0x38($v1)
    ctx->pc = 0x23c514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 9));
    // 0x23c518: 0xac6c003c  sw          $t4, 0x3C($v1)
    ctx->pc = 0x23c518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 12));
    // 0x23c51c: 0xac680040  sw          $t0, 0x40($v1)
    ctx->pc = 0x23c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 8));
    // 0x23c520: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x23c520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x23c524: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x23c524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x23c528: 0x3e00008  jr          $ra
    ctx->pc = 0x23C528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C528u;
            // 0x23c52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C530u;
    // 0x23c530: 0x3e00008  jr          $ra
    ctx->pc = 0x23C530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C530u;
            // 0x23c534: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C538u;
    // 0x23c538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c540: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x23c544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C544u;
            // 0x23c548: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C558u;
            goto label_23c558;
        }
    }
    ctx->pc = 0x23C54Cu;
    // 0x23c54c: 0xc041f12  jal         func_107C48
    ctx->pc = 0x23C54Cu;
    SET_GPR_U32(ctx, 31, 0x23C554u);
    ctx->pc = 0x107C48u;
    if (runtime->hasFunction(0x107C48u)) {
        auto targetFn = runtime->lookupFunction(0x107C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C554u; }
        if (ctx->pc != 0x23C554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C48_0x107c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C554u; }
        if (ctx->pc != 0x23C554u) { return; }
    }
    ctx->pc = 0x23C554u;
    // 0x23c554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c558:
    // 0x23c558: 0x3e00008  jr          $ra
    ctx->pc = 0x23C558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C558u;
            // 0x23c55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C560u;
    // 0x23c560: 0x3e00008  jr          $ra
    ctx->pc = 0x23C560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C560u;
            // 0x23c564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C568u;
    // 0x23c568: 0xac850118  sw          $a1, 0x118($a0)
    ctx->pc = 0x23c568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
    // 0x23c56c: 0x0  nop
    ctx->pc = 0x23c56cu;
    // NOP
    // 0x23c570: 0xac850110  sw          $a1, 0x110($a0)
    ctx->pc = 0x23c570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
    // 0x23c574: 0x0  nop
    ctx->pc = 0x23c574u;
    // NOP
    // 0x23c578: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x23c578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x23c57c: 0x0  nop
    ctx->pc = 0x23c57cu;
    // NOP
    // 0x23c580: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c584: 0x0  nop
    ctx->pc = 0x23c584u;
    // NOP
    // 0x23c588: 0x3e00008  jr          $ra
    ctx->pc = 0x23C588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C588u;
            // 0x23c58c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C0B0u: goto label_23c0b0;
            case 0x23C0C4u: goto label_23c0c4;
            case 0x23C174u: goto label_23c174;
            case 0x23C1CCu: goto label_23c1cc;
            case 0x23C1F0u: goto label_23c1f0;
            case 0x23C208u: goto label_23c208;
            case 0x23C240u: goto label_23c240;
            case 0x23C2B8u: goto label_23c2b8;
            case 0x23C348u: goto label_23c348;
            case 0x23C368u: goto label_23c368;
            case 0x23C3A0u: goto label_23c3a0;
            case 0x23C3BCu: goto label_23c3bc;
            case 0x23C3F0u: goto label_23c3f0;
            case 0x23C448u: goto label_23c448;
            case 0x23C558u: goto label_23c558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C590u;
}

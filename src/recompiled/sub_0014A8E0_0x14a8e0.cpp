#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A8E0
// Address: 0x14a8e0 - 0x14aa78
void sub_0014A8E0_0x14a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8E0_0x14a8e0");
#endif

    ctx->pc = 0x14a8e0u;

    // 0x14a8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14a8e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14a8e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14a8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14a8f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a8f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14a8fc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x14a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x14a900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a904: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x14a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x14a908: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A908u;
    {
        const bool branch_taken_0x14a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A908u;
            // 0x14a90c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a908) {
            ctx->pc = 0x14A934u;
            goto label_14a934;
        }
    }
    ctx->pc = 0x14A910u;
    // 0x14a910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14a910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14a914: 0x0  nop
    ctx->pc = 0x14a914u;
    // NOP
label_14a918:
    // 0x14a918: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x14a918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14a91c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A91Cu;
    {
        const bool branch_taken_0x14a91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A91Cu;
            // 0x14a920: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a91c) {
            ctx->pc = 0x14A934u;
            goto label_14a934;
        }
    }
    ctx->pc = 0x14A924u;
    // 0x14a924: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14a928: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x14a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x14a92c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14A92Cu;
    {
        const bool branch_taken_0x14a92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a92c) {
            ctx->pc = 0x14A930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A92Cu;
            // 0x14a930: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A918u;
            runtime->cooperativeGuestYield();
            goto label_14a918;
        }
    }
    ctx->pc = 0x14A934u;
label_14a934:
    // 0x14a934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a938: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x14A938u;
    {
        const bool branch_taken_0x14a938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A938u;
            // 0x14a93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a938) {
            ctx->pc = 0x14AA54u;
            goto label_14aa54;
        }
    }
    ctx->pc = 0x14A940u;
    // 0x14a940: 0xc052ace  jal         func_14AB38
    ctx->pc = 0x14A940u;
    SET_GPR_U32(ctx, 31, 0x14A948u);
    ctx->pc = 0x14A944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A940u;
            // 0x14a944: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AB38u;
    if (runtime->hasFunction(0x14AB38u)) {
        auto targetFn = runtime->lookupFunction(0x14AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A948u; }
        if (ctx->pc != 0x14A948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AB38_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A948u; }
        if (ctx->pc != 0x14A948u) { return; }
    }
    ctx->pc = 0x14A948u;
    // 0x14a948: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a94c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A94Cu;
    {
        const bool branch_taken_0x14a94c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A94Cu;
            // 0x14a950: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a94c) {
            ctx->pc = 0x14A95Cu;
            goto label_14a95c;
        }
    }
    ctx->pc = 0x14A954u;
    // 0x14a954: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14A954u;
    {
        const bool branch_taken_0x14a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A954u;
            // 0x14a958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a954) {
            ctx->pc = 0x14AA54u;
            goto label_14aa54;
        }
    }
    ctx->pc = 0x14A95Cu;
label_14a95c:
    // 0x14a95c: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14A95Cu;
    SET_GPR_U32(ctx, 31, 0x14A964u);
    ctx->pc = 0x14A960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A95Cu;
            // 0x14a960: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A964u; }
        if (ctx->pc != 0x14A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A964u; }
        if (ctx->pc != 0x14A964u) { return; }
    }
    ctx->pc = 0x14A964u;
    // 0x14a964: 0x261300e4  addiu       $s3, $s0, 0xE4
    ctx->pc = 0x14a964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x14a968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a96c: 0x8e1000e0  lw          $s0, 0xE0($s0)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x14a970: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14a974: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14a974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14a978: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x14a97c: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x14a980: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14a980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x14a984: 0xc050fda  jal         func_143F68
    ctx->pc = 0x14A984u;
    SET_GPR_U32(ctx, 31, 0x14A98Cu);
    ctx->pc = 0x14A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A984u;
            // 0x14a988: 0x274a821  addu        $s5, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (runtime->hasFunction(0x143F68u)) {
        auto targetFn = runtime->lookupFunction(0x143F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A98Cu; }
        if (ctx->pc != 0x14A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143f68_0x143f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A98Cu; }
        if (ctx->pc != 0x14A98Cu) { return; }
    }
    ctx->pc = 0x14A98Cu;
    // 0x14a98c: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x14a98cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14a990: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14a990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14a994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14a99c: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x14a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x14a9a0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14a9a4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14a9a8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x14a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x14a9ac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x14a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x14a9b0: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x14a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x14a9b4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x14a9b8: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14A9B8u;
    SET_GPR_U32(ctx, 31, 0x14A9C0u);
    ctx->pc = 0x14A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9B8u;
            // 0x14a9bc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9C0u; }
        if (ctx->pc != 0x14A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9C0u; }
        if (ctx->pc != 0x14A9C0u) { return; }
    }
    ctx->pc = 0x14A9C0u;
    // 0x14a9c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14a9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x14a9c8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x14a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x14a9cc: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x14a9ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14a9d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A9D0u;
    {
        const bool branch_taken_0x14a9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9D0u;
            // 0x14a9d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9d0) {
            ctx->pc = 0x14A9FCu;
            goto label_14a9fc;
        }
    }
    ctx->pc = 0x14A9D8u;
    // 0x14a9d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14a9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a9e0:
    // 0x14a9e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x14a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14a9e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14a9e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a9ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14a9f0: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x14a9f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14a9f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14A9F4u;
    {
        const bool branch_taken_0x14a9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9F4u;
            // 0x14a9f8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f4) {
            ctx->pc = 0x14A9E0u;
            runtime->cooperativeGuestYield();
            goto label_14a9e0;
        }
    }
    ctx->pc = 0x14A9FCu;
label_14a9fc:
    // 0x14a9fc: 0x3c02ff0f  lui         $v0, 0xFF0F
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65295 << 16));
    // 0x14aa00: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x14aa04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14aa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14aa08: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x14aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x14aa0c: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x14aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x14aa10: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14aa14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14aa14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14aa18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14aa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14aa1c: 0x2742021  addu        $a0, $s3, $s4
    ctx->pc = 0x14aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x14aa20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aa24: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x14aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x14aa28: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x14aa28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x14aa2c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x14aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x14aa30: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x14aa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x14aa34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14aa38: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x14aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x14aa3c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x14aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x14aa40: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x14aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x14aa44: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x14aa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x14aa48: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x14aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x14aa4c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x14aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x14aa50: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x14aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_14aa54:
    // 0x14aa54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14aa58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14aa58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14aa5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14aa5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aa60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14aa60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14aa64: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14aa64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aa68: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x14aa68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA70u;
            // 0x14aa74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A918u: goto label_14a918;
            case 0x14A934u: goto label_14a934;
            case 0x14A95Cu: goto label_14a95c;
            case 0x14A9E0u: goto label_14a9e0;
            case 0x14A9FCu: goto label_14a9fc;
            case 0x14AA54u: goto label_14aa54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AA78u;
}

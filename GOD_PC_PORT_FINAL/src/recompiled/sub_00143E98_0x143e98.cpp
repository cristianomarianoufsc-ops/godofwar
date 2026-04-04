#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143E98
// Address: 0x143e98 - 0x143f68
void sub_00143E98_0x143e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143E98_0x143e98");
#endif

    ctx->pc = 0x143e98u;

    // 0x143e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143e9c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x143e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x143ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143ea4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x143ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x143ea8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x143ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143eac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x143EACu;
    {
        const bool branch_taken_0x143eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EACu;
            // 0x143eb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eac) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143EB4u;
    // 0x143eb4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143eb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x143eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x143ebc: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x143ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x143ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143ec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143ec8: 0x400008  jr          $v0
    ctx->pc = 0x143EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143ED0u: goto label_143ed0;
            case 0x143EE4u: goto label_143ee4;
            case 0x143EF4u: goto label_143ef4;
            case 0x143F04u: goto label_143f04;
            case 0x143F24u: goto label_143f24;
            case 0x143F30u: goto label_143f30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x143ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ed4: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x143ED4u;
    {
        const bool branch_taken_0x143ed4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x143ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143ED4u;
            // 0x143ed8: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ed4) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143EDCu;
    // 0x143edc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x143EDCu;
    {
        const bool branch_taken_0x143edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EDCu;
            // 0x143ee0: 0x24511300  addiu       $s1, $v0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143edc) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143EE4u;
label_143ee4:
    // 0x143ee4: 0xc050e86  jal         func_143A18
    ctx->pc = 0x143EE4u;
    SET_GPR_U32(ctx, 31, 0x143EECu);
    ctx->pc = 0x143EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EE4u;
            // 0x143ee8: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A18u;
    if (runtime->hasFunction(0x143A18u)) {
        auto targetFn = runtime->lookupFunction(0x143A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EECu; }
        if (ctx->pc != 0x143EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143a18_0x143b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EECu; }
        if (ctx->pc != 0x143EECu) { return; }
    }
    ctx->pc = 0x143EECu;
    // 0x143eec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x143EECu;
    {
        const bool branch_taken_0x143eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EECu;
            // 0x143ef0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eec) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143EF4u;
label_143ef4:
    // 0x143ef4: 0xc050e68  jal         func_1439A0
    ctx->pc = 0x143EF4u;
    SET_GPR_U32(ctx, 31, 0x143EFCu);
    ctx->pc = 0x143EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EF4u;
            // 0x143ef8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439A0u;
    if (runtime->hasFunction(0x1439A0u)) {
        auto targetFn = runtime->lookupFunction(0x1439A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EFCu; }
        if (ctx->pc != 0x143EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1439a0_0x143a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143EFCu; }
        if (ctx->pc != 0x143EFCu) { return; }
    }
    ctx->pc = 0x143EFCu;
    // 0x143efc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143EFCu;
    {
        const bool branch_taken_0x143efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EFCu;
            // 0x143f00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143efc) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143F04u;
label_143f04:
    // 0x143f04: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x143f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x143f08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143F08u;
    {
        const bool branch_taken_0x143f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F08u;
            // 0x143f0c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f08) {
            ctx->pc = 0x143F18u;
            goto label_143f18;
        }
    }
    ctx->pc = 0x143F10u;
    // 0x143f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143F10u;
    {
        const bool branch_taken_0x143f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F10u;
            // 0x143f14: 0x24511718  addiu       $s1, $v0, 0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f10) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143F18u;
label_143f18:
    // 0x143f18: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143f1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143F1Cu;
    {
        const bool branch_taken_0x143f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F1Cu;
            // 0x143f20: 0x24511720  addiu       $s1, $v0, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f1c) {
            ctx->pc = 0x143F30u;
            goto label_143f30;
        }
    }
    ctx->pc = 0x143F24u;
label_143f24:
    // 0x143f24: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143f28: 0x24511790  addiu       $s1, $v0, 0x1790
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x143f2c: 0x0  nop
    ctx->pc = 0x143f2cu;
    // NOP
label_143f30:
    // 0x143f30: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x143F30u;
    SET_GPR_U32(ctx, 31, 0x143F38u);
    ctx->pc = 0x143F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143F30u;
            // 0x143f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F38u; }
        if (ctx->pc != 0x143F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F38u; }
        if (ctx->pc != 0x143F38u) { return; }
    }
    ctx->pc = 0x143F38u;
    // 0x143f38: 0xc050f16  jal         func_143C58
    ctx->pc = 0x143F38u;
    SET_GPR_U32(ctx, 31, 0x143F40u);
    ctx->pc = 0x143F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143F38u;
            // 0x143f3c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C58u;
    if (runtime->hasFunction(0x143C58u)) {
        auto targetFn = runtime->lookupFunction(0x143C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F40u; }
        if (ctx->pc != 0x143F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C58_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F40u; }
        if (ctx->pc != 0x143F40u) { return; }
    }
    ctx->pc = 0x143F40u;
    // 0x143f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f48: 0xc0a2644  jal         func_289910
    ctx->pc = 0x143F48u;
    SET_GPR_U32(ctx, 31, 0x143F50u);
    ctx->pc = 0x143F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143F48u;
            // 0x143f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F50u; }
        if (ctx->pc != 0x143F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F50u; }
        if (ctx->pc != 0x143F50u) { return; }
    }
    ctx->pc = 0x143F50u;
    // 0x143f50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143f58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x143f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143f60: 0x3e00008  jr          $ra
    ctx->pc = 0x143F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F60u;
            // 0x143f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143ED0u: goto label_143ed0;
            case 0x143EE4u: goto label_143ee4;
            case 0x143EF4u: goto label_143ef4;
            case 0x143F04u: goto label_143f04;
            case 0x143F18u: goto label_143f18;
            case 0x143F24u: goto label_143f24;
            case 0x143F30u: goto label_143f30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143F68u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292E10
// Address: 0x292e10 - 0x292f10
void sub_00292E10_0x292e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292E10_0x292e10");
#endif

    ctx->pc = 0x292e10u;

    // 0x292e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292e14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x292e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x292e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292e1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x292e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x292e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x292e24: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x292e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x292e28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x292e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x292e2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x292e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292e34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x292E34u;
    {
        const bool branch_taken_0x292e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E34u;
            // 0x292e38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e34) {
            ctx->pc = 0x292E60u;
            goto label_292e60;
        }
    }
    ctx->pc = 0x292E3Cu;
    // 0x292e3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x292e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x292e40: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x292e44: 0x24426688  addiu       $v0, $v0, 0x6688
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26248));
    // 0x292e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292e4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x292e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292e50: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x292e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292e54: 0xc0a4a12  jal         func_292848
    ctx->pc = 0x292E54u;
    SET_GPR_U32(ctx, 31, 0x292E5Cu);
    ctx->pc = 0x292E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292E54u;
            // 0x292e58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292848u;
    if (runtime->hasFunction(0x292848u)) {
        auto targetFn = runtime->lookupFunction(0x292848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E5Cu; }
        if (ctx->pc != 0x292E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292848_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E5Cu; }
        if (ctx->pc != 0x292E5Cu) { return; }
    }
    ctx->pc = 0x292E5Cu;
    // 0x292e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x292e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292e60:
    // 0x292e60: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x292e60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x292e64: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x292E64u;
    {
        const bool branch_taken_0x292e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E64u;
            // 0x292e68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e64) {
            ctx->pc = 0x292EF4u;
            goto label_292ef4;
        }
    }
    ctx->pc = 0x292E6Cu;
    // 0x292e6c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x292e70: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292E70u;
    {
        const bool branch_taken_0x292e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x292E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E70u;
            // 0x292e74: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e70) {
            ctx->pc = 0x292EC0u;
            goto label_292ec0;
        }
    }
    ctx->pc = 0x292E78u;
    // 0x292e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e7c: 0xc0a4af4  jal         func_292BD0
    ctx->pc = 0x292E7Cu;
    SET_GPR_U32(ctx, 31, 0x292E84u);
    ctx->pc = 0x292E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292E7Cu;
            // 0x292e80: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292BD0u;
    if (runtime->hasFunction(0x292BD0u)) {
        auto targetFn = runtime->lookupFunction(0x292BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E84u; }
        if (ctx->pc != 0x292E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292BD0_0x292bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E84u; }
        if (ctx->pc != 0x292E84u) { return; }
    }
    ctx->pc = 0x292E84u;
    // 0x292e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e88: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x292e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x292e8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x292E8Cu;
    {
        const bool branch_taken_0x292e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E8Cu;
            // 0x292e90: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e8c) {
            ctx->pc = 0x292EBCu;
            goto label_292ebc;
        }
    }
    ctx->pc = 0x292E94u;
    // 0x292e94: 0x0  nop
    ctx->pc = 0x292e94u;
    // NOP
label_292e98:
    // 0x292e98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292E98u;
    {
        const bool branch_taken_0x292e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292e98) {
            ctx->pc = 0x292E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292E98u;
            // 0x292e9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292EBCu;
            goto label_292ebc;
        }
    }
    ctx->pc = 0x292EA0u;
    // 0x292ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ea8: 0xc0a4b02  jal         func_292C08
    ctx->pc = 0x292EA8u;
    SET_GPR_U32(ctx, 31, 0x292EB0u);
    ctx->pc = 0x292EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292EA8u;
            // 0x292eac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292C08u;
    if (runtime->hasFunction(0x292C08u)) {
        auto targetFn = runtime->lookupFunction(0x292C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EB0u; }
        if (ctx->pc != 0x292EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292C08_0x292c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EB0u; }
        if (ctx->pc != 0x292EB0u) { return; }
    }
    ctx->pc = 0x292EB0u;
    // 0x292eb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x292eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x292eb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x292eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x292eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292ebc:
    // 0x292ebc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_292ec0:
    // 0x292ec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292EC0u;
    {
        const bool branch_taken_0x292ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292EC0u;
            // 0x292ec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ec0) {
            ctx->pc = 0x292EE4u;
            goto label_292ee4;
        }
    }
    ctx->pc = 0x292EC8u;
    // 0x292ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ecc: 0xc0a4b02  jal         func_292C08
    ctx->pc = 0x292ECCu;
    SET_GPR_U32(ctx, 31, 0x292ED4u);
    ctx->pc = 0x292ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292ECCu;
            // 0x292ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292C08u;
    if (runtime->hasFunction(0x292C08u)) {
        auto targetFn = runtime->lookupFunction(0x292C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292ED4u; }
        if (ctx->pc != 0x292ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292C08_0x292c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292ED4u; }
        if (ctx->pc != 0x292ED4u) { return; }
    }
    ctx->pc = 0x292ED4u;
    // 0x292ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292edc: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x292EDCu;
    SET_GPR_U32(ctx, 31, 0x292EE4u);
    ctx->pc = 0x292EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292EDCu;
            // 0x292ee0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EE4u; }
        if (ctx->pc != 0x292EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292EE4u; }
        if (ctx->pc != 0x292EE4u) { return; }
    }
    ctx->pc = 0x292EE4u;
label_292ee4:
    // 0x292ee4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x292ee4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x292ee8: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x292EE8u;
    {
        const bool branch_taken_0x292ee8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ee8) {
            ctx->pc = 0x292EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292EE8u;
            // 0x292eec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292E98u;
            runtime->cooperativeGuestYield();
            goto label_292e98;
        }
    }
    ctx->pc = 0x292EF0u;
    // 0x292ef0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x292ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292ef4:
    // 0x292ef4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x292ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292ef8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x292ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292efc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292f00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x292f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292f08: 0x3e00008  jr          $ra
    ctx->pc = 0x292F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292F08u;
            // 0x292f0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292E60u: goto label_292e60;
            case 0x292E98u: goto label_292e98;
            case 0x292EBCu: goto label_292ebc;
            case 0x292EC0u: goto label_292ec0;
            case 0x292EE4u: goto label_292ee4;
            case 0x292EF4u: goto label_292ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292F10u;
}

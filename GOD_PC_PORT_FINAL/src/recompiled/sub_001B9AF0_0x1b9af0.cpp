#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9AF0
// Address: 0x1b9af0 - 0x1b9bc8
void sub_001B9AF0_0x1b9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9AF0_0x1b9af0");
#endif

    ctx->pc = 0x1b9af0u;

    // 0x1b9af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9af4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b9af8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b9afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9b04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b9b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9b0c: 0x8e02156c  lw          $v0, 0x156C($s0)
    ctx->pc = 0x1b9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
    // 0x1b9b10: 0x50520027  beql        $v0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B9B10u;
    {
        const bool branch_taken_0x1b9b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1b9b10) {
            ctx->pc = 0x1B9B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B10u;
            // 0x1b9b14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9BB0u;
            goto label_1b9bb0;
        }
    }
    ctx->pc = 0x1B9B18u;
    // 0x1b9b18: 0x8e021568  lw          $v0, 0x1568($s0)
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
    // 0x1b9b1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9B1Cu;
    {
        const bool branch_taken_0x1b9b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B1Cu;
            // 0x1b9b20: 0xae12156c  sw          $s2, 0x156C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5484), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b1c) {
            ctx->pc = 0x1B9B58u;
            goto label_1b9b58;
        }
    }
    ctx->pc = 0x1B9B24u;
    // 0x1b9b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b28:
    // 0x1b9b28: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b9b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b9b2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9B2Cu;
    {
        const bool branch_taken_0x1b9b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B2Cu;
            // 0x1b9b30: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b2c) {
            ctx->pc = 0x1B9B54u;
            goto label_1b9b54;
        }
    }
    ctx->pc = 0x1B9B34u;
    // 0x1b9b34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b9b38: 0x8c441558  lw          $a0, 0x1558($v0)
    ctx->pc = 0x1b9b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b9b3c: 0x5080fffa  beql        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B9B3Cu;
    {
        const bool branch_taken_0x1b9b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b3c) {
            ctx->pc = 0x1B9B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B3Cu;
            // 0x1b9b40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B28u;
            runtime->cooperativeGuestYield();
            goto label_1b9b28;
        }
    }
    ctx->pc = 0x1B9B44u;
    // 0x1b9b44: 0xc052a9e  jal         func_14AA78
    ctx->pc = 0x1B9B44u;
    SET_GPR_U32(ctx, 31, 0x1B9B4Cu);
    ctx->pc = 0x1B9B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B44u;
            // 0x1b9b48: 0x8e051568  lw          $a1, 0x1568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AA78u;
    if (runtime->hasFunction(0x14AA78u)) {
        auto targetFn = runtime->lookupFunction(0x14AA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B4Cu; }
        if (ctx->pc != 0x1B9B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AA78_0x14aa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B4Cu; }
        if (ctx->pc != 0x1B9B4Cu) { return; }
    }
    ctx->pc = 0x1B9B4Cu;
    // 0x1b9b4c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B9B4Cu;
    {
        const bool branch_taken_0x1b9b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B4Cu;
            // 0x1b9b50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b4c) {
            ctx->pc = 0x1B9B28u;
            runtime->cooperativeGuestYield();
            goto label_1b9b28;
        }
    }
    ctx->pc = 0x1B9B54u;
label_1b9b54:
    // 0x1b9b54: 0xae001568  sw          $zero, 0x1568($s0)
    ctx->pc = 0x1b9b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5480), GPR_U32(ctx, 0));
label_1b9b58:
    // 0x1b9b58: 0x2e42000f  sltiu       $v0, $s2, 0xF
    ctx->pc = 0x1b9b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b9b5c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B9B5Cu;
    {
        const bool branch_taken_0x1b9b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B5Cu;
            // 0x1b9b60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b5c) {
            ctx->pc = 0x1B9BACu;
            goto label_1b9bac;
        }
    }
    ctx->pc = 0x1B9B64u;
    // 0x1b9b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9B64u;
    {
        const bool branch_taken_0x1b9b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B64u;
            // 0x1b9b68: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b64) {
            ctx->pc = 0x1B9B78u;
            goto label_1b9b78;
        }
    }
    ctx->pc = 0x1B9B6Cu;
    // 0x1b9b6c: 0x0  nop
    ctx->pc = 0x1b9b6cu;
    // NOP
label_1b9b70:
    // 0x1b9b70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9b74: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b9b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b9b78:
    // 0x1b9b78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9B78u;
    {
        const bool branch_taken_0x1b9b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B78u;
            // 0x1b9b7c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b78) {
            ctx->pc = 0x1B9BACu;
            goto label_1b9bac;
        }
    }
    ctx->pc = 0x1B9B80u;
    // 0x1b9b80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b9b84: 0x8c441558  lw          $a0, 0x1558($v0)
    ctx->pc = 0x1b9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5464)));
    // 0x1b9b88: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9B88u;
    {
        const bool branch_taken_0x1b9b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B88u;
            // 0x1b9b8c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b88) {
            ctx->pc = 0x1B9B70u;
            runtime->cooperativeGuestYield();
            goto label_1b9b70;
        }
    }
    ctx->pc = 0x1B9B90u;
    // 0x1b9b90: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b9b94: 0x2442cbb8  addiu       $v0, $v0, -0x3448
    ctx->pc = 0x1b9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953912));
    // 0x1b9b98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9b9c: 0xc052a38  jal         func_14A8E0
    ctx->pc = 0x1B9B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B9BA4u);
    ctx->pc = 0x1B9BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B9Cu;
            // 0x1b9ba0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A8E0u;
    if (runtime->hasFunction(0x14A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BA4u; }
        if (ctx->pc != 0x1B9BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A8E0_0x14a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BA4u; }
        if (ctx->pc != 0x1B9BA4u) { return; }
    }
    ctx->pc = 0x1B9BA4u;
    // 0x1b9ba4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B9BA4u;
    {
        const bool branch_taken_0x1b9ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BA4u;
            // 0x1b9ba8: 0xae021568  sw          $v0, 0x1568($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ba4) {
            ctx->pc = 0x1B9B70u;
            runtime->cooperativeGuestYield();
            goto label_1b9b70;
        }
    }
    ctx->pc = 0x1B9BACu;
label_1b9bac:
    // 0x1b9bac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b9bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9bb0:
    // 0x1b9bb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9bb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b9bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BBCu;
            // 0x1b9bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9BC4u;
    // 0x1b9bc4: 0x0  nop
    ctx->pc = 0x1b9bc4u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182BD8
// Address: 0x182bd8 - 0x182c68
void sub_00182BD8_0x182bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182BD8_0x182bd8");
#endif

    ctx->pc = 0x182bd8u;

    // 0x182bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182bdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x182be0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182be8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x182be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x182bec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bf0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x182bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x182bf4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182bfc:
    // 0x182bfc: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x182bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x182c00: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x182C00u;
    SET_GPR_U32(ctx, 31, 0x182C08u);
    ctx->pc = 0x182C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C00u;
            // 0x182c04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C08u; }
        if (ctx->pc != 0x182C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C08u; }
        if (ctx->pc != 0x182C08u) { return; }
    }
    ctx->pc = 0x182C08u;
    // 0x182c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182C08u;
    {
        const bool branch_taken_0x182c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c08) {
            ctx->pc = 0x182C28u;
            goto label_182c28;
        }
    }
    ctx->pc = 0x182C10u;
    // 0x182c10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x182c14: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x182c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x182c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x182c1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182C1Cu;
    {
        const bool branch_taken_0x182c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C1Cu;
            // 0x182c20: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c1c) {
            ctx->pc = 0x182C4Cu;
            goto label_182c4c;
        }
    }
    ctx->pc = 0x182C24u;
    // 0x182c24: 0x0  nop
    ctx->pc = 0x182c24u;
    // NOP
label_182c28:
    // 0x182c28: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x182C28u;
    {
        const bool branch_taken_0x182c28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C28u;
            // 0x182c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c28) {
            ctx->pc = 0x182C48u;
            goto label_182c48;
        }
    }
    ctx->pc = 0x182C30u;
    // 0x182c30: 0x96300010  lhu         $s0, 0x10($s1)
    ctx->pc = 0x182c30u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182c34: 0xa6330010  sh          $s3, 0x10($s1)
    ctx->pc = 0x182c34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 19));
    // 0x182c38: 0xc060a5c  jal         func_182970
    ctx->pc = 0x182C38u;
    SET_GPR_U32(ctx, 31, 0x182C40u);
    ctx->pc = 0x182C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C38u;
            // 0x182c3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182970u;
    if (runtime->hasFunction(0x182970u)) {
        auto targetFn = runtime->lookupFunction(0x182970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C40u; }
        if (ctx->pc != 0x182C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182970_0x182970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C40u; }
        if (ctx->pc != 0x182C40u) { return; }
    }
    ctx->pc = 0x182C40u;
    // 0x182c40: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x182C40u;
    {
        const bool branch_taken_0x182c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C40u;
            // 0x182c44: 0xa6300010  sh          $s0, 0x10($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c40) {
            ctx->pc = 0x182BFCu;
            runtime->cooperativeGuestYield();
            goto label_182bfc;
        }
    }
    ctx->pc = 0x182C48u;
label_182c48:
    // 0x182c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c4c:
    // 0x182c4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182c50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x182c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182c58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x182c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c60: 0x3e00008  jr          $ra
    ctx->pc = 0x182C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C60u;
            // 0x182c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182BFCu: goto label_182bfc;
            case 0x182C28u: goto label_182c28;
            case 0x182C48u: goto label_182c48;
            case 0x182C4Cu: goto label_182c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182C68u;
}

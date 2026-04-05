#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DBF0
// Address: 0x27dbf0 - 0x27dcc8
void sub_0027DBF0_0x27dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DBF0_0x27dbf0");
#endif

    ctx->pc = 0x27dbf0u;

    // 0x27dbf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27dbf4: 0x24060898  addiu       $a2, $zero, 0x898
    ctx->pc = 0x27dbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27dbf8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27dbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27dbfc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27dc00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27dc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27dc08: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x27dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27dc0c: 0x72863018  mult1       $a2, $s4, $a2
    ctx->pc = 0x27dc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x27dc10: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x27dc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27dc14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27dc18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27dc1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27dc1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27dc24: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x27dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x27dc28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27dc2c: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27dc30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27dc34: 0x2463c9c8  addiu       $v1, $v1, -0x3638
    ctx->pc = 0x27dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953416));
    // 0x27dc38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x27dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x27dc3c: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x27dc3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27dc40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27dc44: 0x8c700890  lw          $s0, 0x890($v1)
    ctx->pc = 0x27dc44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2192)));
    // 0x27dc48: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x27dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x27dc4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27dc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27dc50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27DC50u;
    {
        const bool branch_taken_0x27dc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC50u;
            // 0x27dc54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc50) {
            ctx->pc = 0x27DC9Cu;
            goto label_27dc9c;
        }
    }
    ctx->pc = 0x27DC58u;
    // 0x27dc58: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x27dc58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x27dc5c: 0x0  nop
    ctx->pc = 0x27dc5cu;
    // NOP
label_27dc60:
    // 0x27dc60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27dc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27dc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc68: 0xc09f5f2  jal         func_27D7C8
    ctx->pc = 0x27DC68u;
    SET_GPR_U32(ctx, 31, 0x27DC70u);
    ctx->pc = 0x27DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC68u;
            // 0x27dc6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D7C8u;
    if (runtime->hasFunction(0x27D7C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC70u; }
        if (ctx->pc != 0x27DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d7c8_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC70u; }
        if (ctx->pc != 0x27DC70u) { return; }
    }
    ctx->pc = 0x27DC70u;
    // 0x27dc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27dc78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DC78u;
    {
        const bool branch_taken_0x27dc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC78u;
            // 0x27dc7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc78) {
            ctx->pc = 0x27DCA0u;
            goto label_27dca0;
        }
    }
    ctx->pc = 0x27DC80u;
    // 0x27dc80: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x27dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x27dc84: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x27dc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x27dc88: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27dc8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27dc90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27dc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27dc94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x27DC94u;
    {
        const bool branch_taken_0x27dc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC94u;
            // 0x27dc98: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc94) {
            ctx->pc = 0x27DC60u;
            runtime->cooperativeGuestYield();
            goto label_27dc60;
        }
    }
    ctx->pc = 0x27DC9Cu;
label_27dc9c:
    // 0x27dc9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27dc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27dca0:
    // 0x27dca0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27dca4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27dca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27dca8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27dca8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27dcac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27dcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27dcb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27dcb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dcb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27dcb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27dcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DCBCu;
            // 0x27dcc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DC60u: goto label_27dc60;
            case 0x27DC9Cu: goto label_27dc9c;
            case 0x27DCA0u: goto label_27dca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DCC4u;
    // 0x27dcc4: 0x0  nop
    ctx->pc = 0x27dcc4u;
    // NOP
}

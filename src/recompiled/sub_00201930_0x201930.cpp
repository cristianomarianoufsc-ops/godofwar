#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201930
// Address: 0x201930 - 0x2019b8
void sub_00201930_0x201930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201930_0x201930");
#endif

    ctx->pc = 0x201930u;

    // 0x201930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201934: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x201938: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20193c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x201940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201948: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x201948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x20194c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x20194cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201950: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x201950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x201954: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x201954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x201958: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x201958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20195c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x201960: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x201964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201968: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x201968u;
    {
        const bool branch_taken_0x201968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201968u;
            // 0x20196c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201968) {
            ctx->pc = 0x201974u;
            goto label_201974;
        }
    }
    ctx->pc = 0x201970u;
    // 0x201970: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_201974:
    // 0x201974: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201974u;
    {
        const bool branch_taken_0x201974 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x201974) {
            ctx->pc = 0x201978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201974u;
            // 0x201978: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201990u;
            goto label_201990;
        }
    }
    ctx->pc = 0x20197Cu;
    // 0x20197c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201980: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x201980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x201984: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x201984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x201988: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x201988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20198c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x20198cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_201990:
    // 0x201990: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201990u;
    {
        const bool branch_taken_0x201990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x201990) {
            ctx->pc = 0x201994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201990u;
            // 0x201994: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2019A8u;
            goto label_2019a8;
        }
    }
    ctx->pc = 0x201998u;
    // 0x201998: 0xc05c302  jal         func_170C08
    ctx->pc = 0x201998u;
    SET_GPR_U32(ctx, 31, 0x2019A0u);
    ctx->pc = 0x20199Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201998u;
            // 0x20199c: 0x8d0401a0  lw          $a0, 0x1A0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019A0u; }
        if (ctx->pc != 0x2019A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019A0u; }
        if (ctx->pc != 0x2019A0u) { return; }
    }
    ctx->pc = 0x2019A0u;
    // 0x2019a0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2019a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2019a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2019a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2019a8:
    // 0x2019a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2019a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2019ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019ACu;
            // 0x2019b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201974u: goto label_201974;
            case 0x201990u: goto label_201990;
            case 0x2019A8u: goto label_2019a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2019B4u;
    // 0x2019b4: 0x0  nop
    ctx->pc = 0x2019b4u;
    // NOP
}

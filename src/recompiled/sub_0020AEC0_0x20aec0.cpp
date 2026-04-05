#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020AEC0
// Address: 0x20aec0 - 0x20b410
void sub_0020AEC0_0x20aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEC0_0x20aec0");
#endif

    ctx->pc = 0x20aec0u;

    // 0x20aec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20aec4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x20aec8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20aecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20aeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aed0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x20aed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20aed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20aed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aed8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x20aedc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20aedcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20aee0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20aee4: 0x2e290079  sltiu       $t1, $s1, 0x79
    ctx->pc = 0x20aee4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x20aee8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x20aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x20aeec: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x20aef0: 0x8e470048  lw          $a3, 0x48($s2)
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x20aef4: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x20aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x20aef8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x20aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x20aefc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x20af00: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20af00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20af04: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x20af04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x20af08: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x20af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x20af0c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x20af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20af10: 0x8e46004c  lw          $a2, 0x4C($s2)
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x20af14: 0x8e470060  lw          $a3, 0x60($s2)
    ctx->pc = 0x20af14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x20af18: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x20af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x20af1c: 0x8e480064  lw          $t0, 0x64($s2)
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x20af20: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x20af20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x20af24: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x20af28: 0x8e47006c  lw          $a3, 0x6C($s2)
    ctx->pc = 0x20af28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x20af2c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x20af2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x20af30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20af34: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x20af34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x20af38: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x20af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x20af3c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x20af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x20af40: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x20af44: 0x11200126  beqz        $t1, . + 4 + (0x126 << 2)
    ctx->pc = 0x20AF44u;
    {
        const bool branch_taken_0x20af44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF44u;
            // 0x20af48: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af44) {
            ctx->pc = 0x20B3E0u;
            goto label_20b3e0;
        }
    }
    ctx->pc = 0x20AF4Cu;
    // 0x20af4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20af50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x20af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20af54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af58: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x20AF58u;
    SET_GPR_U32(ctx, 31, 0x20AF60u);
    ctx->pc = 0x20AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF58u;
            // 0x20af5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF60u; }
        if (ctx->pc != 0x20AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF60u; }
        if (ctx->pc != 0x20AF60u) { return; }
    }
    ctx->pc = 0x20AF60u;
    // 0x20af60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20af64: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x20af68: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x20af68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x20af6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20af70: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x20af70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x20af74: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x20af78: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20af7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20af84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x20af88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20af8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20af90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20af90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x20af94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20af98:
    // 0x20af98: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20af98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20af9c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20af9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20afa0: 0x264b0050  addiu       $t3, $s2, 0x50
    ctx->pc = 0x20afa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x20afa4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20afa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20afa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20afac: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20afb0: 0xc22004  sllv        $a0, $v0, $a2
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20afb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20afb8: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20afbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20afc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20afc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20afc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AFC4u;
    {
        const bool branch_taken_0x20afc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFC4u;
            // 0x20afc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afc4) {
            ctx->pc = 0x20AFE0u;
            goto label_20afe0;
        }
    }
    ctx->pc = 0x20AFCCu;
    // 0x20afcc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20afd0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20afd4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20afd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20afd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20AFD8u;
    {
        const bool branch_taken_0x20afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afd8) {
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFE0u;
label_20afe0:
    // 0x20afe0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20afe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20afe4:
    // 0x20afe4: 0x15400065  bnez        $t2, . + 4 + (0x65 << 2)
    ctx->pc = 0x20AFE4u;
    {
        const bool branch_taken_0x20afe4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFE4u;
            // 0x20afe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afe4) {
            ctx->pc = 0x20B17Cu;
            goto label_20b17c;
        }
    }
    ctx->pc = 0x20AFECu;
    // 0x20afec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aff0:
    // 0x20aff0: 0x11050021  beq         $t0, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x20AFF0u;
    {
        const bool branch_taken_0x20aff0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x20AFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFF0u;
            // 0x20aff4: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aff0) {
            ctx->pc = 0x20B078u;
            goto label_20b078;
        }
    }
    ctx->pc = 0x20AFF8u;
    // 0x20aff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AFF8u;
    {
        const bool branch_taken_0x20aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFF8u;
            // 0x20affc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aff8) {
            ctx->pc = 0x20B010u;
            goto label_20b010;
        }
    }
    ctx->pc = 0x20B000u;
    // 0x20b000: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B000u;
    {
        const bool branch_taken_0x20b000 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B000u;
            // 0x20b004: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b000) {
            ctx->pc = 0x20B028u;
            goto label_20b028;
        }
    }
    ctx->pc = 0x20B008u;
    // 0x20b008: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x20B008u;
    {
        const bool branch_taken_0x20b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B008u;
            // 0x20b00c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b008) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B010u;
label_20b010:
    // 0x20b010: 0x11020036  beq         $t0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20B010u;
    {
        const bool branch_taken_0x20b010 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B010u;
            // 0x20b014: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b010) {
            ctx->pc = 0x20B0ECu;
            goto label_20b0ec;
        }
    }
    ctx->pc = 0x20B018u;
    // 0x20b018: 0x11020039  beq         $t0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20B018u;
    {
        const bool branch_taken_0x20b018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B018u;
            // 0x20b01c: 0x24c4000b  addiu       $a0, $a2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b018) {
            ctx->pc = 0x20B100u;
            goto label_20b100;
        }
    }
    ctx->pc = 0x20B020u;
    // 0x20b020: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20B020u;
    {
        const bool branch_taken_0x20b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B020u;
            // 0x20b024: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b020) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B028u;
label_20b028:
    // 0x20b028: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x20b028u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b02c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B02Cu;
    {
        const bool branch_taken_0x20b02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b02c) {
            ctx->pc = 0x20B030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B02Cu;
            // 0x20b030: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B034u;
            goto label_20b034;
        }
    }
    ctx->pc = 0x20B034u;
label_20b034:
    // 0x20b034: 0x1810  mfhi        $v1
    ctx->pc = 0x20b034u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20b038: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x20b038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b03c: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x20B03Cu;
    {
        const bool branch_taken_0x20b03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b03c) {
            ctx->pc = 0x20B040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B03Cu;
            // 0x20b040: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B044u;
    // 0x20b044: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20b048: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b04c: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x20b04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b050: 0x24c2001e  addiu       $v0, $a2, 0x1E
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x20b054: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b054u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b058: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20b058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b05c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b05cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b060: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b068: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b06c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b070: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20B070u;
    {
        const bool branch_taken_0x20b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B070u;
            // 0x20b074: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b070) {
            ctx->pc = 0x20B134u;
            goto label_20b134;
        }
    }
    ctx->pc = 0x20B078u;
label_20b078:
    // 0x20b078: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b07c: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x20b07cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b080: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B080u;
    {
        const bool branch_taken_0x20b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b080) {
            ctx->pc = 0x20B084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B080u;
            // 0x20b084: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B088u;
            goto label_20b088;
        }
    }
    ctx->pc = 0x20B088u;
label_20b088:
    // 0x20b088: 0x1810  mfhi        $v1
    ctx->pc = 0x20b088u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20b08c: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x20b08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20b090: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x20B090u;
    {
        const bool branch_taken_0x20b090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B090u;
            // 0x20b094: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b090) {
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B098u;
    // 0x20b098: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20b098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b09c: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x20b09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b0a0: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x20b0a4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b0a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b0a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b0ac: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b0b0: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x20b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b0b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b0b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20b0bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b0c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b0c4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20B0C4u;
    {
        const bool branch_taken_0x20b0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0C4u;
            // 0x20b0c8: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0c4) {
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B0CCu;
    // 0x20b0cc: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20b0d0: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20b0d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20b0d4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b0d8: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x20b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x20b0dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b0e0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b0e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20B0E4u;
    {
        const bool branch_taken_0x20b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0E4u;
            // 0x20b0e8: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0e4) {
            ctx->pc = 0x20B158u;
            goto label_20b158;
        }
    }
    ctx->pc = 0x20B0ECu;
label_20b0ec:
    // 0x20b0ec: 0x24c4fff5  addiu       $a0, $a2, -0xB
    ctx->pc = 0x20b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x20b0f0: 0x480001c  bltz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20B0F0u;
    {
        const bool branch_taken_0x20b0f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0F0u;
            // 0x20b0f4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0f0) {
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B0F8u;
    // 0x20b0f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B0F8u;
    {
        const bool branch_taken_0x20b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0F8u;
            // 0x20b0fc: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0f8) {
            ctx->pc = 0x20B110u;
            goto label_20b110;
        }
    }
    ctx->pc = 0x20B100u;
label_20b100:
    // 0x20b100: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x20b100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20b104: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B104u;
    {
        const bool branch_taken_0x20b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B104u;
            // 0x20b108: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b104) {
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B10Cu;
    // 0x20b10c: 0x24c2002a  addiu       $v0, $a2, 0x2A
    ctx->pc = 0x20b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 42));
label_20b110:
    // 0x20b110: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x20b110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b114: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b118: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b118u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b11c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b11cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b120: 0x851804  sllv        $v1, $a1, $a0
    ctx->pc = 0x20b120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b128: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b12c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b130: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20b134:
    // 0x20b134: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B134u;
    {
        const bool branch_taken_0x20b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B134u;
            // 0x20b138: 0x126102a  slt         $v0, $t1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b134) {
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B13Cu;
    // 0x20b13c: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20b140: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20b140u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20b144: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b144u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b148: 0xc52004  sllv        $a0, $a1, $a2
    ctx->pc = 0x20b148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x20b14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b150: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b154: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20b158:
    // 0x20b158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b15c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20b160: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20b160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20b164:
    // 0x20b164: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20b168:
    // 0x20b168: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x20b168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20b16c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B16Cu;
    {
        const bool branch_taken_0x20b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b16c) {
            ctx->pc = 0x20B170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B16Cu;
            // 0x20b170: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B180u;
            goto label_20b180;
        }
    }
    ctx->pc = 0x20B174u;
    // 0x20b174: 0x1140ff9e  beqz        $t2, . + 4 + (-0x62 << 2)
    ctx->pc = 0x20B174u;
    {
        const bool branch_taken_0x20b174 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B174u;
            // 0x20b178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b174) {
            ctx->pc = 0x20AFF0u;
            runtime->cooperativeGuestYield();
            goto label_20aff0;
        }
    }
    ctx->pc = 0x20B17Cu;
label_20b17c:
    // 0x20b17c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20b180:
    // 0x20b180: 0x28c20079  slti        $v0, $a2, 0x79
    ctx->pc = 0x20b180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20b184: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x20B184u;
    {
        const bool branch_taken_0x20b184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B184u;
            // 0x20b188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b184) {
            ctx->pc = 0x20AF98u;
            runtime->cooperativeGuestYield();
            goto label_20af98;
        }
    }
    ctx->pc = 0x20B18Cu;
    // 0x20b18c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20b190:
    // 0x20b190: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20b194: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20b194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20b198: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b19c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20b19cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20b1a0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b1a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b1a4: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x20b1a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b1ac: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x20b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x20b1b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x20b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20b1b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b1b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B1B8u;
    {
        const bool branch_taken_0x20b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1B8u;
            // 0x20b1bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1b8) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B1C0u;
    // 0x20b1c0: 0x6b1021  addu        $v0, $v1, $t3
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20b1c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b1c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b1cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B1CCu;
    {
        const bool branch_taken_0x20b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b1cc) {
            ctx->pc = 0x20B1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1CCu;
            // 0x20b1d0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B1ECu;
            goto label_20b1ec;
        }
    }
    ctx->pc = 0x20B1D4u;
    // 0x20b1d4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x20b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20b1d8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20b1dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b1e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20B1E0u;
    {
        const bool branch_taken_0x20b1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1e0) {
            ctx->pc = 0x20B1ECu;
            goto label_20b1ec;
        }
    }
    ctx->pc = 0x20B1E8u;
label_20b1e8:
    // 0x20b1e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1ec:
    // 0x20b1ec: 0x15400065  bnez        $t2, . + 4 + (0x65 << 2)
    ctx->pc = 0x20B1ECu;
    {
        const bool branch_taken_0x20b1ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1ECu;
            // 0x20b1f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1ec) {
            ctx->pc = 0x20B384u;
            goto label_20b384;
        }
    }
    ctx->pc = 0x20B1F4u;
    // 0x20b1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1f8:
    // 0x20b1f8: 0x11050021  beq         $t0, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x20B1F8u;
    {
        const bool branch_taken_0x20b1f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x20B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1F8u;
            // 0x20b1fc: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1f8) {
            ctx->pc = 0x20B280u;
            goto label_20b280;
        }
    }
    ctx->pc = 0x20B200u;
    // 0x20b200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B200u;
    {
        const bool branch_taken_0x20b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B200u;
            // 0x20b204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b200) {
            ctx->pc = 0x20B218u;
            goto label_20b218;
        }
    }
    ctx->pc = 0x20B208u;
    // 0x20b208: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B208u;
    {
        const bool branch_taken_0x20b208 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B208u;
            // 0x20b20c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b208) {
            ctx->pc = 0x20B230u;
            goto label_20b230;
        }
    }
    ctx->pc = 0x20B210u;
    // 0x20b210: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x20B210u;
    {
        const bool branch_taken_0x20b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B210u;
            // 0x20b214: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b210) {
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B218u;
label_20b218:
    // 0x20b218: 0x11020036  beq         $t0, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20B218u;
    {
        const bool branch_taken_0x20b218 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B218u;
            // 0x20b21c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b218) {
            ctx->pc = 0x20B2F4u;
            goto label_20b2f4;
        }
    }
    ctx->pc = 0x20B220u;
    // 0x20b220: 0x11020039  beq         $t0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20B220u;
    {
        const bool branch_taken_0x20b220 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B220u;
            // 0x20b224: 0x24c4000b  addiu       $a0, $a2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b220) {
            ctx->pc = 0x20B308u;
            goto label_20b308;
        }
    }
    ctx->pc = 0x20B228u;
    // 0x20b228: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20B228u;
    {
        const bool branch_taken_0x20b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B228u;
            // 0x20b22c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b228) {
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B230u;
label_20b230:
    // 0x20b230: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x20b230u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b234: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B234u;
    {
        const bool branch_taken_0x20b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b234) {
            ctx->pc = 0x20B238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B234u;
            // 0x20b238: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B23Cu;
            goto label_20b23c;
        }
    }
    ctx->pc = 0x20B23Cu;
label_20b23c:
    // 0x20b23c: 0x1810  mfhi        $v1
    ctx->pc = 0x20b23cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20b240: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x20b240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b244: 0x5460004a  bnel        $v1, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x20B244u;
    {
        const bool branch_taken_0x20b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b244) {
            ctx->pc = 0x20B248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B244u;
            // 0x20b248: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B24Cu;
    // 0x20b24c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20b250: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b254: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x20b254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b258: 0x24c2001e  addiu       $v0, $a2, 0x1E
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x20b25c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b25cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b260: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b264: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b268: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b26c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b270: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b274: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b278: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20B278u;
    {
        const bool branch_taken_0x20b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B278u;
            // 0x20b27c: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b278) {
            ctx->pc = 0x20B33Cu;
            goto label_20b33c;
        }
    }
    ctx->pc = 0x20B280u;
label_20b280:
    // 0x20b280: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20b284: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x20b284u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20b288: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B288u;
    {
        const bool branch_taken_0x20b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b288) {
            ctx->pc = 0x20B28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B288u;
            // 0x20b28c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B290u;
            goto label_20b290;
        }
    }
    ctx->pc = 0x20B290u;
label_20b290:
    // 0x20b290: 0x1810  mfhi        $v1
    ctx->pc = 0x20b290u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20b294: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20b298: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x20B298u;
    {
        const bool branch_taken_0x20b298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B298u;
            // 0x20b29c: 0x24c40001  addiu       $a0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b298) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B2A0u;
    // 0x20b2a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b2a4: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x20b2a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b2a8: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x20b2ac: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b2acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b2b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b2b4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b2b8: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x20b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b2bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b2c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20b2c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b2c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20b2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20b2cc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2CCu;
            // 0x20b2d0: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B2D4u;
    // 0x20b2d4: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20b2d8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20b2d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20b2dc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b2e0: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x20b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x20b2e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b2e8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20b2e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20B2ECu;
    {
        const bool branch_taken_0x20b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2ECu;
            // 0x20b2f0: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2ec) {
            ctx->pc = 0x20B360u;
            goto label_20b360;
        }
    }
    ctx->pc = 0x20B2F4u;
label_20b2f4:
    // 0x20b2f4: 0x24c4fff5  addiu       $a0, $a2, -0xB
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x20b2f8: 0x480001c  bltz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20B2F8u;
    {
        const bool branch_taken_0x20b2f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2F8u;
            // 0x20b2fc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2f8) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B300u;
    // 0x20b300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B300u;
    {
        const bool branch_taken_0x20b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B300u;
            // 0x20b304: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b300) {
            ctx->pc = 0x20B318u;
            goto label_20b318;
        }
    }
    ctx->pc = 0x20B308u;
label_20b308:
    // 0x20b308: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x20b308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20b30c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B30Cu;
    {
        const bool branch_taken_0x20b30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B30Cu;
            // 0x20b310: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b30c) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B314u;
    // 0x20b314: 0x24c2002a  addiu       $v0, $a2, 0x2A
    ctx->pc = 0x20b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 42));
label_20b318:
    // 0x20b318: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x20b318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20b31c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20b31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b320: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20b320u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20b324: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20b324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20b328: 0x851804  sllv        $v1, $a1, $a0
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x20b32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b330: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20b33c:
    // 0x20b33c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B33Cu;
    {
        const bool branch_taken_0x20b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B33Cu;
            // 0x20b340: 0x126102a  slt         $v0, $t1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b33c) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B344u;
    // 0x20b344: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x20b348: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20b348u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20b34c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20b350: 0xc52004  sllv        $a0, $a1, $a2
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x20b354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b358: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b35c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20b360:
    // 0x20b360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b364: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20b368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20b368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20b36c:
    // 0x20b36c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20b36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20b370:
    // 0x20b370: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x20b370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20b374: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B374u;
    {
        const bool branch_taken_0x20b374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b374) {
            ctx->pc = 0x20B378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B374u;
            // 0x20b378: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B388u;
            goto label_20b388;
        }
    }
    ctx->pc = 0x20B37Cu;
    // 0x20b37c: 0x1140ff9e  beqz        $t2, . + 4 + (-0x62 << 2)
    ctx->pc = 0x20B37Cu;
    {
        const bool branch_taken_0x20b37c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B37Cu;
            // 0x20b380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b37c) {
            ctx->pc = 0x20B1F8u;
            runtime->cooperativeGuestYield();
            goto label_20b1f8;
        }
    }
    ctx->pc = 0x20B384u;
label_20b384:
    // 0x20b384: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_20b388:
    // 0x20b388: 0x4c1ff81  bgez        $a2, . + 4 + (-0x7F << 2)
    ctx->pc = 0x20B388u;
    {
        const bool branch_taken_0x20b388 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20B38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B388u;
            // 0x20b38c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b388) {
            ctx->pc = 0x20B190u;
            runtime->cooperativeGuestYield();
            goto label_20b190;
        }
    }
    ctx->pc = 0x20B390u;
    // 0x20b390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b394: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b398: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x20b398u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x20b39c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x20b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20b3a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20b3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20b3a4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x20b3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20b3a8: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20b3ac: 0x63027  nor         $a2, $zero, $a2
    ctx->pc = 0x20b3acu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x20b3b0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20b3b4: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x20b3b4u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x20b3b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b3bc: 0x84027  nor         $t0, $zero, $t0
    ctx->pc = 0x20b3bcu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x20b3c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x20b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20b3c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x20b3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x20b3c8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x20b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20b3cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20b3d0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x20b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x20b3d4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x20b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x20b3d8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x20b3dc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_20b3e0:
    // 0x20b3e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20b3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20b3e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20b3e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b3ec: 0xc082d04  jal         func_20B410
    ctx->pc = 0x20B3ECu;
    SET_GPR_U32(ctx, 31, 0x20B3F4u);
    ctx->pc = 0x20B3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3ECu;
            // 0x20b3f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B410u;
    if (runtime->hasFunction(0x20B410u)) {
        auto targetFn = runtime->lookupFunction(0x20B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B3F4u; }
        if (ctx->pc != 0x20B3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B410_0x20b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B3F4u; }
        if (ctx->pc != 0x20B3F4u) { return; }
    }
    ctx->pc = 0x20B3F4u;
    // 0x20b3f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20b3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b3f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20b3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b3fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b404: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x20b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b408: 0x3e00008  jr          $ra
    ctx->pc = 0x20B408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B408u;
            // 0x20b40c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AF98u: goto label_20af98;
            case 0x20AFE0u: goto label_20afe0;
            case 0x20AFE4u: goto label_20afe4;
            case 0x20AFF0u: goto label_20aff0;
            case 0x20B010u: goto label_20b010;
            case 0x20B028u: goto label_20b028;
            case 0x20B034u: goto label_20b034;
            case 0x20B078u: goto label_20b078;
            case 0x20B088u: goto label_20b088;
            case 0x20B0ECu: goto label_20b0ec;
            case 0x20B100u: goto label_20b100;
            case 0x20B110u: goto label_20b110;
            case 0x20B134u: goto label_20b134;
            case 0x20B158u: goto label_20b158;
            case 0x20B164u: goto label_20b164;
            case 0x20B168u: goto label_20b168;
            case 0x20B17Cu: goto label_20b17c;
            case 0x20B180u: goto label_20b180;
            case 0x20B190u: goto label_20b190;
            case 0x20B1E8u: goto label_20b1e8;
            case 0x20B1ECu: goto label_20b1ec;
            case 0x20B1F8u: goto label_20b1f8;
            case 0x20B218u: goto label_20b218;
            case 0x20B230u: goto label_20b230;
            case 0x20B23Cu: goto label_20b23c;
            case 0x20B280u: goto label_20b280;
            case 0x20B290u: goto label_20b290;
            case 0x20B2F4u: goto label_20b2f4;
            case 0x20B308u: goto label_20b308;
            case 0x20B318u: goto label_20b318;
            case 0x20B33Cu: goto label_20b33c;
            case 0x20B360u: goto label_20b360;
            case 0x20B36Cu: goto label_20b36c;
            case 0x20B370u: goto label_20b370;
            case 0x20B384u: goto label_20b384;
            case 0x20B388u: goto label_20b388;
            case 0x20B3E0u: goto label_20b3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B410u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279A40
// Address: 0x279a40 - 0x279ad8
void sub_00279A40_0x279a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279A40_0x279a40");
#endif

    ctx->pc = 0x279a40u;

    fprintf(stderr, "[279A40] ENTRADA (SifCheckInit?)\n"); fflush(stderr);
    // 0x279a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279a4c: 0xc09e672  jal         func_2799C8
    ctx->pc = 0x279A4Cu;
    SET_GPR_U32(ctx, 31, 0x279A54u);
    ctx->pc = 0x2799C8u;
    if (runtime->hasFunction(0x2799C8u)) {
        auto targetFn = runtime->lookupFunction(0x2799C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A54u; }
        if (ctx->pc != 0x279A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2799c8_0x2799d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A54u; }
        if (ctx->pc != 0x279A54u) { return; }
    }
    ctx->pc = 0x279A54u;
    // 0x279a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x279a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    fprintf(stderr, "[279A40] sif_struct=0x%x sif+8=0x%x\n", GPR_U32(ctx, 16), GPR_U32(ctx, 2)); fflush(stderr);
    // 0x279a5c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279A5Cu;
    {
        const bool branch_taken_0x279a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279a5c) {
            fprintf(stderr, "[279A40] JA INICIALIZADO -> func_294140\n"); fflush(stderr);
            ctx->pc = 0x279AA0u;
            goto label_279aa0;
        }
    }
    fprintf(stderr, "[279A40] NAO INICIALIZADO -> func_2940B0 (SifInit?)\n"); fflush(stderr);
    ctx->pc = 0x279A64u;
    // 0x279a64: 0xc0a502c  jal         func_2940B0
    ctx->pc = 0x279A64u;
    SET_GPR_U32(ctx, 31, 0x279A6Cu);
    ctx->pc = 0x2940B0u;
    if (runtime->hasFunction(0x2940B0u)) {
        auto targetFn = runtime->lookupFunction(0x2940B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A6Cu; }
        if (ctx->pc != 0x279A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002940B0_0x2940b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279A6Cu; }
        if (ctx->pc != 0x279A6Cu) { return; }
    }
    ctx->pc = 0x279A6Cu;
    // 0x279a6c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279a74: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x279A74u;
    {
        const bool branch_taken_0x279a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x279A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A74u;
            // 0x279a78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a74) {
            ctx->pc = 0x279AC8u;
            goto label_279ac8;
        }
    }
    ctx->pc = 0x279A7Cu;
    // 0x279a7c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x279a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x279a80: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x279a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x279a84: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x279a84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279a88: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x279a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x279a8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279a90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x279a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x279a94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x279a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x279a98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279A98u;
    {
        const bool branch_taken_0x279a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A98u;
            // 0x279a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a98) {
            ctx->pc = 0x279ACCu;
            goto label_279acc;
        }
    }
    ctx->pc = 0x279AA0u;
label_279aa0:
    // 0x279aa0: 0xc0a5050  jal         func_294140
    ctx->pc = 0x279AA0u;
    SET_GPR_U32(ctx, 31, 0x279AA8u);
    ctx->pc = 0x294140u;
    if (runtime->hasFunction(0x294140u)) {
        auto targetFn = runtime->lookupFunction(0x294140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279AA8u; }
        if (ctx->pc != 0x279AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294140_0x294140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279AA8u; }
        if (ctx->pc != 0x279AA8u) { return; }
    }
    ctx->pc = 0x279AA8u;
    // 0x279aa8: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x279aa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x279aac: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x279aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279ab0: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x279ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279ab8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279AB8u;
    {
        const bool branch_taken_0x279ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x279ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AB8u;
            // 0x279abc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ab8) {
            ctx->pc = 0x279AC8u;
            goto label_279ac8;
        }
    }
    ctx->pc = 0x279AC0u;
    // 0x279ac0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x279ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x279ac4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x279ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_279ac8:
    // 0x279ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279acc:
    // 0x279acc: 0x3e00008  jr          $ra
    ctx->pc = 0x279ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279ACCu;
            // 0x279ad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279AA0u: goto label_279aa0;
            case 0x279AC8u: goto label_279ac8;
            case 0x279ACCu: goto label_279acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279AD4u;
    // 0x279ad4: 0x0  nop
    ctx->pc = 0x279ad4u;
    // NOP
}

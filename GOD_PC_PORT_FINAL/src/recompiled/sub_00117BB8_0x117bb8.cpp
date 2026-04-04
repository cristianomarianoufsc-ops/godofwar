#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117BB8
// Address: 0x117bb8 - 0x117c28
void sub_00117BB8_0x117bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117BB8_0x117bb8");
#endif

    ctx->pc = 0x117bb8u;

    // 0x117bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117bbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x117bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x117bc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x117bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x117bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x117bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x117bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117bd0: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x117bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x117bd4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x117bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117bd8: 0x50b2000d  beql        $a1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x117BD8u;
    {
        const bool branch_taken_0x117bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        if (branch_taken_0x117bd8) {
            ctx->pc = 0x117BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117BD8u;
            // 0x117bdc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117C10u;
            goto label_117c10;
        }
    }
    ctx->pc = 0x117BE0u;
    // 0x117be0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x117be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x117be4: 0x0  nop
    ctx->pc = 0x117be4u;
    // NOP
label_117be8:
    // 0x117be8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x117be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x117bec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117BECu;
    {
        const bool branch_taken_0x117bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BECu;
            // 0x117bf0: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bec) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BF4u;
    // 0x117bf4: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x117BF4u;
    SET_GPR_U32(ctx, 31, 0x117BFCu);
    ctx->pc = 0x117BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BF4u;
            // 0x117bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BFCu; }
        if (ctx->pc != 0x117BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BFCu; }
        if (ctx->pc != 0x117BFCu) { return; }
    }
    ctx->pc = 0x117BFCu;
    // 0x117bfc: 0x0  nop
    ctx->pc = 0x117bfcu;
    // NOP
label_117c00:
    // 0x117c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c04: 0x54b2fff8  bnel        $a1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117C04u;
    {
        const bool branch_taken_0x117c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x117c04) {
            ctx->pc = 0x117C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117C04u;
            // 0x117c08: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117BE8u;
            runtime->cooperativeGuestYield();
            goto label_117be8;
        }
    }
    ctx->pc = 0x117C0Cu;
    // 0x117c0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x117c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_117c10:
    // 0x117c10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x117c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x117c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x117C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C1Cu;
            // 0x117c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117BE8u: goto label_117be8;
            case 0x117C00u: goto label_117c00;
            case 0x117C10u: goto label_117c10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117C24u;
    // 0x117c24: 0x0  nop
    ctx->pc = 0x117c24u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFD88
// Address: 0x1efd88 - 0x1efe10
void sub_001EFD88_0x1efd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFD88_0x1efd88");
#endif

    ctx->pc = 0x1efd88u;

    // 0x1efd88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efd90: 0x8c8208cc  lw          $v0, 0x8CC($a0)
    ctx->pc = 0x1efd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2252)));
    // 0x1efd94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EFD94u;
    {
        const bool branch_taken_0x1efd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD94u;
            // 0x1efd98: 0x248808d0  addiu       $t0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd94) {
            ctx->pc = 0x1EFE00u;
            goto label_1efe00;
        }
    }
    ctx->pc = 0x1EFD9Cu;
    // 0x1efd9c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1efd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1efda0: 0xac8008cc  sw          $zero, 0x8CC($a0)
    ctx->pc = 0x1efda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2252), GPR_U32(ctx, 0));
    // 0x1efda4: 0x788208d0  lq          $v0, 0x8D0($a0)
    ctx->pc = 0x1efda4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 2256)));
    // 0x1efda8: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1efdac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1efdacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdb0: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1efdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x1efdb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efdb8: 0xdd27bdf8  ld          $a3, -0x4208($t1)
    ctx->pc = 0x1efdb8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 4294950392)));
    // 0x1efdbc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1efdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdc0: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1efdc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1efdc4: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x1efdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1efdc8: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1efdc8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1efdcc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1efdccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1efdd0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1efdd0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1efdd4: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x1efdd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1efdd8: 0xe3500a  movz        $t2, $a3, $v1
    ctx->pc = 0x1efdd8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
    // 0x1efddc: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efde0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1efde0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1efde4: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1efde4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1efde8: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x1efde8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x1efdec: 0xfd27bdf8  sd          $a3, -0x4208($t1)
    ctx->pc = 0x1efdecu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294950392), GPR_U64(ctx, 7));
    // 0x1efdf0: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x1efdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x1efdf4: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1EFDF4u;
    SET_GPR_U32(ctx, 31, 0x1EFDFCu);
    ctx->pc = 0x1EFDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDF4u;
            // 0x1efdf8: 0xfcc000f0  sd          $zero, 0xF0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDFCu; }
        if (ctx->pc != 0x1EFDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDFCu; }
        if (ctx->pc != 0x1EFDFCu) { return; }
    }
    ctx->pc = 0x1EFDFCu;
    // 0x1efdfc: 0x0  nop
    ctx->pc = 0x1efdfcu;
    // NOP
label_1efe00:
    // 0x1efe00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efe04: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE04u;
            // 0x1efe08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFE00u: goto label_1efe00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFE0Cu;
    // 0x1efe0c: 0x0  nop
    ctx->pc = 0x1efe0cu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2278
// Address: 0x1c2278 - 0x1c22e8
void sub_001C2278_0x1c2278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2278_0x1c2278");
#endif

    ctx->pc = 0x1c2278u;

    // 0x1c2278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c227c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2288: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1c2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1c228c: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1c228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1c2290: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2290u;
    {
        const bool branch_taken_0x1c2290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2290u;
            // 0x1c2294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2290) {
            ctx->pc = 0x1C22D8u;
            goto label_1c22d8;
        }
    }
    ctx->pc = 0x1C2298u;
    // 0x1c2298: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c229c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c229cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c22a0: 0x8c44cc5c  lw          $a0, -0x33A4($v0)
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954076)));
    // 0x1c22a4: 0xc061a06  jal         func_186818
    ctx->pc = 0x1C22A4u;
    SET_GPR_U32(ctx, 31, 0x1C22ACu);
    ctx->pc = 0x1C22A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22A4u;
            // 0x1c22a8: 0x24a562a8  addiu       $a1, $a1, 0x62A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22ACu; }
        if (ctx->pc != 0x1C22ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22ACu; }
        if (ctx->pc != 0x1C22ACu) { return; }
    }
    ctx->pc = 0x1C22ACu;
    // 0x1c22ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C22ACu;
    {
        const bool branch_taken_0x1c22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22ACu;
            // 0x1c22b0: 0x8e030364  lw          $v1, 0x364($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22ac) {
            ctx->pc = 0x1C22D8u;
            goto label_1c22d8;
        }
    }
    ctx->pc = 0x1C22B4u;
    // 0x1c22b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C22B4u;
    {
        const bool branch_taken_0x1c22b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22B4u;
            // 0x1c22b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22b4) {
            ctx->pc = 0x1C22DCu;
            goto label_1c22dc;
        }
    }
    ctx->pc = 0x1C22BCu;
    // 0x1c22bc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1c22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c22c0: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x1c22c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c22c4: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x1c22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c22c8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c22cc: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1c22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1c22d0: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x1c22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
    // 0x1c22d4: 0x0  nop
    ctx->pc = 0x1c22d4u;
    // NOP
label_1c22d8:
    // 0x1c22d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c22d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c22dc:
    // 0x1c22dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c22dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22E0u;
            // 0x1c22e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C22D8u: goto label_1c22d8;
            case 0x1C22DCu: goto label_1c22dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C22E8u;
}

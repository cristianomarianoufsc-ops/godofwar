#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001065A8
// Address: 0x1065a8 - 0x106628
void sub_001065A8_0x1065a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001065A8_0x1065a8");
#endif

    ctx->pc = 0x1065a8u;

    // 0x1065a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1065a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1065ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1065acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1065b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1065b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1065b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1065b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1065b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1065bc: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1065bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1065c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1065c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1065c4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1065c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1065c8: 0x52120012  beql        $s0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1065C8u;
    {
        const bool branch_taken_0x1065c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1065c8) {
            ctx->pc = 0x1065CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1065C8u;
            // 0x1065cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106614u;
            goto label_106614;
        }
    }
    ctx->pc = 0x1065D0u;
    // 0x1065d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1065d4: 0x0  nop
    ctx->pc = 0x1065d4u;
    // NOP
label_1065d8:
    // 0x1065d8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1065d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1065dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1065DCu;
    {
        const bool branch_taken_0x1065dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1065DCu;
            // 0x1065e0: 0x30620108  andi        $v0, $v1, 0x108 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065dc) {
            ctx->pc = 0x106604u;
            goto label_106604;
        }
    }
    ctx->pc = 0x1065E4u;
    // 0x1065e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1065E4u;
    {
        const bool branch_taken_0x1065e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1065e4) {
            ctx->pc = 0x1065E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1065E4u;
            // 0x1065e8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106608u;
            goto label_106608;
        }
    }
    ctx->pc = 0x1065ECu;
    // 0x1065ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1065ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1065f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f4: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x1065F4u;
    SET_GPR_U32(ctx, 31, 0x1065FCu);
    ctx->pc = 0x1065F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1065F4u;
            // 0x1065f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065FCu; }
        if (ctx->pc != 0x1065FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065FCu; }
        if (ctx->pc != 0x1065FCu) { return; }
    }
    ctx->pc = 0x1065FCu;
    // 0x1065fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1065FCu;
    {
        const bool branch_taken_0x1065fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1065fc) {
            ctx->pc = 0x106608u;
            goto label_106608;
        }
    }
    ctx->pc = 0x106604u;
label_106604:
    // 0x106604: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106608:
    // 0x106608: 0x5612fff3  bnel        $s0, $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x106608u;
    {
        const bool branch_taken_0x106608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x106608) {
            ctx->pc = 0x10660Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106608u;
            // 0x10660c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1065D8u;
            runtime->cooperativeGuestYield();
            goto label_1065d8;
        }
    }
    ctx->pc = 0x106610u;
    // 0x106610: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x106610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106614:
    // 0x106614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x106614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106618: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x106618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10661c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10661cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106620: 0x3e00008  jr          $ra
    ctx->pc = 0x106620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106620u;
            // 0x106624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1065D8u: goto label_1065d8;
            case 0x106604u: goto label_106604;
            case 0x106608u: goto label_106608;
            case 0x106614u: goto label_106614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106628u;
}

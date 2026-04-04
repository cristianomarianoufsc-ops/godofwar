#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201F88
// Address: 0x201f88 - 0x201ff8
void sub_00201F88_0x201f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F88_0x201f88");
#endif

    ctx->pc = 0x201f88u;

    // 0x201f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201f8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x201f90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201f94: 0x2442a090  addiu       $v0, $v0, -0x5F70
    ctx->pc = 0x201f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
    // 0x201f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201fa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fa8: 0xc08085e  jal         func_202178
    ctx->pc = 0x201FA8u;
    SET_GPR_U32(ctx, 31, 0x201FB0u);
    ctx->pc = 0x201FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FA8u;
            // 0x201fac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202178u;
    if (runtime->hasFunction(0x202178u)) {
        auto targetFn = runtime->lookupFunction(0x202178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FB0u; }
        if (ctx->pc != 0x201FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202178_0x202178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FB0u; }
        if (ctx->pc != 0x201FB0u) { return; }
    }
    ctx->pc = 0x201FB0u;
    // 0x201fb0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x201fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x201fb4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x201fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x201fb8: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x201fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x201fbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201FBCu;
    {
        const bool branch_taken_0x201fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201FBCu;
            // 0x201fc0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fbc) {
            ctx->pc = 0x201FCCu;
            goto label_201fcc;
        }
    }
    ctx->pc = 0x201FC4u;
    // 0x201fc4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x201FC4u;
    SET_GPR_U32(ctx, 31, 0x201FCCu);
    ctx->pc = 0x201FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FC4u;
            // 0x201fc8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FCCu; }
        if (ctx->pc != 0x201FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FCCu; }
        if (ctx->pc != 0x201FCCu) { return; }
    }
    ctx->pc = 0x201FCCu;
label_201fcc:
    // 0x201fcc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x201fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x201fd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x201FD0u;
    {
        const bool branch_taken_0x201fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201fd0) {
            ctx->pc = 0x201FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201FD0u;
            // 0x201fd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201FE4u;
            goto label_201fe4;
        }
    }
    ctx->pc = 0x201FD8u;
    // 0x201fd8: 0xc0806a2  jal         func_201A88
    ctx->pc = 0x201FD8u;
    SET_GPR_U32(ctx, 31, 0x201FE0u);
    ctx->pc = 0x201FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201FD8u;
            // 0x201fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A88u;
    if (runtime->hasFunction(0x201A88u)) {
        auto targetFn = runtime->lookupFunction(0x201A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FE0u; }
        if (ctx->pc != 0x201FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201a88_0x201ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201FE0u; }
        if (ctx->pc != 0x201FE0u) { return; }
    }
    ctx->pc = 0x201FE0u;
    // 0x201fe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x201fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201fe4:
    // 0x201fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fec: 0x3e00008  jr          $ra
    ctx->pc = 0x201FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201FECu;
            // 0x201ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201FCCu: goto label_201fcc;
            case 0x201FE4u: goto label_201fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201FF4u;
    // 0x201ff4: 0x0  nop
    ctx->pc = 0x201ff4u;
    // NOP
}

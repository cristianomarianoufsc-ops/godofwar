#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222C88
// Address: 0x222c88 - 0x222d58
void sub_00222C88_0x222c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C88_0x222c88");
#endif

    ctx->pc = 0x222c88u;

    // 0x222c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222c8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x222c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222c9c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x222c9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222ca0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x222CA0u;
    {
        const bool branch_taken_0x222ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CA0u;
            // 0x222ca4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ca0) {
            ctx->pc = 0x222D40u;
            goto label_222d40;
        }
    }
    ctx->pc = 0x222CA8u;
    // 0x222ca8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222cac: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x222cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x222cb0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x222cb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x222cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x222cb8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x222cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x222cbc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x222cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x222cc0: 0x40f809  jalr        $v0
    ctx->pc = 0x222CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x222CC8u);
        ctx->pc = 0x222CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CC0u;
            // 0x222cc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222CC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222D00u: goto label_222d00;
            case 0x222D30u: goto label_222d30;
            case 0x222D40u: goto label_222d40;
            case 0x222D44u: goto label_222d44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222CC8u; }
            if (ctx->pc != 0x222CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x222CC8u;
    // 0x222cc8: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x222ccc: 0xc061a06  jal         func_186818
    ctx->pc = 0x222CCCu;
    SET_GPR_U32(ctx, 31, 0x222CD4u);
    ctx->pc = 0x222CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222CCCu;
            // 0x222cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CD4u; }
        if (ctx->pc != 0x222CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222CD4u; }
        if (ctx->pc != 0x222CD4u) { return; }
    }
    ctx->pc = 0x222CD4u;
    // 0x222cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cd8: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x222CD8u;
    {
        const bool branch_taken_0x222cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CD8u;
            // 0x222cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cd8) {
            ctx->pc = 0x222D44u;
            goto label_222d44;
        }
    }
    ctx->pc = 0x222CE0u;
    // 0x222ce0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x222ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x222ce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ce8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222cec: 0x8c42ecc0  lw          $v0, -0x1340($v0)
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962368)));
    // 0x222cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222cf8: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x222cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x222cfc: 0x0  nop
    ctx->pc = 0x222cfcu;
    // NOP
label_222d00:
    // 0x222d00: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x222D00u;
    {
        const bool branch_taken_0x222d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d00) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222D08u;
    // 0x222d08: 0x2486ffec  addiu       $a2, $a0, -0x14
    ctx->pc = 0x222d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x222d0c: 0x50c0fffc  beql        $a2, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x222D0Cu;
    {
        const bool branch_taken_0x222d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d0c) {
            ctx->pc = 0x222D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222D0Cu;
            // 0x222d10: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222D00u;
            runtime->cooperativeGuestYield();
            goto label_222d00;
        }
    }
    ctx->pc = 0x222D14u;
    // 0x222d14: 0xc4c100c8  lwc1        $f1, 0xC8($a2)
    ctx->pc = 0x222d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222d18: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x222d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x222d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x222d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222d20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d24: 0x0  nop
    ctx->pc = 0x222d24u;
    // NOP
    // 0x222d28: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x222D28u;
    {
        const bool branch_taken_0x222d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222d28) {
            ctx->pc = 0x222D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222D28u;
            // 0x222d2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222D00u;
            runtime->cooperativeGuestYield();
            goto label_222d00;
        }
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x222D30u;
    {
        const bool branch_taken_0x222d30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222D30u;
            // 0x222d34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d30) {
            ctx->pc = 0x222D44u;
            goto label_222d44;
        }
    }
    ctx->pc = 0x222D38u;
    // 0x222d38: 0xc05c294  jal         func_170A50
    ctx->pc = 0x222D38u;
    SET_GPR_U32(ctx, 31, 0x222D40u);
    ctx->pc = 0x222D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222D38u;
            // 0x222d3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D40u; }
        if (ctx->pc != 0x222D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222D40u; }
        if (ctx->pc != 0x222D40u) { return; }
    }
    ctx->pc = 0x222D40u;
label_222d40:
    // 0x222d40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x222d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222d44:
    // 0x222d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x222D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222D4Cu;
            // 0x222d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222D00u: goto label_222d00;
            case 0x222D30u: goto label_222d30;
            case 0x222D40u: goto label_222d40;
            case 0x222D44u: goto label_222d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222D54u;
    // 0x222d54: 0x0  nop
    ctx->pc = 0x222d54u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023AAC8
// Address: 0x23aac8 - 0x23ab28
void sub_0023AAC8_0x23aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAC8_0x23aac8");
#endif

    ctx->pc = 0x23aac8u;

    // 0x23aac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23aacc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23aad0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23aad4: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x23aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x23aad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23aadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23aadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aae4: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x23aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x23aae8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23aaec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x23aaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x23aaf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AAF0u;
    {
        const bool branch_taken_0x23aaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAF0u;
            // 0x23aaf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aaf0) {
            ctx->pc = 0x23AB00u;
            goto label_23ab00;
        }
    }
    ctx->pc = 0x23AAF8u;
    // 0x23aaf8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x23AAF8u;
    SET_GPR_U32(ctx, 31, 0x23AB00u);
    ctx->pc = 0x23AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAF8u;
            // 0x23aafc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB00u; }
        if (ctx->pc != 0x23AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB00u; }
        if (ctx->pc != 0x23AB00u) { return; }
    }
    ctx->pc = 0x23AB00u;
label_23ab00:
    // 0x23ab00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23ab04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AB04u;
    {
        const bool branch_taken_0x23ab04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab04) {
            ctx->pc = 0x23AB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB04u;
            // 0x23ab08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AB18u;
            goto label_23ab18;
        }
    }
    ctx->pc = 0x23AB0Cu;
    // 0x23ab0c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23AB0Cu;
    SET_GPR_U32(ctx, 31, 0x23AB14u);
    ctx->pc = 0x23AB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB0Cu;
            // 0x23ab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB14u; }
        if (ctx->pc != 0x23AB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB14u; }
        if (ctx->pc != 0x23AB14u) { return; }
    }
    ctx->pc = 0x23AB14u;
    // 0x23ab14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23ab14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ab18:
    // 0x23ab18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ab18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ab1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab20: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB20u;
            // 0x23ab24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AB00u: goto label_23ab00;
            case 0x23AB18u: goto label_23ab18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AB28u;
}

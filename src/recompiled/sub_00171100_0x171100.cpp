#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171100
// Address: 0x171100 - 0x1711b8
void sub_00171100_0x171100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171100_0x171100");
#endif

    ctx->pc = 0x171100u;

    // 0x171100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171104: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17110c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17110cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171114: 0x26110074  addiu       $s1, $s0, 0x74
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_171118:
    // 0x171118: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_17111c:
    // 0x17111c: 0x10510020  beq         $v0, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x17111Cu;
    {
        const bool branch_taken_0x17111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x171120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17111Cu;
            // 0x171120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17111c) {
            ctx->pc = 0x1711A0u;
            goto label_1711a0;
        }
    }
    ctx->pc = 0x171124u;
    // 0x171124: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x171124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x171128: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17112c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171130: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x171130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x171134: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x171134u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x171138: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x171138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17113c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171140: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x171144: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x171144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x171148: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x171148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17114c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17114cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x171150: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x171150u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x171154: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x171154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x171158: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x171158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17115c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17115Cu;
    {
        const bool branch_taken_0x17115c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17115Cu;
            // 0x171160: 0xa4c20004  sh          $v0, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17115c) {
            ctx->pc = 0x171118u;
            runtime->cooperativeGuestYield();
            goto label_171118;
        }
    }
    ctx->pc = 0x171164u;
    // 0x171164: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x171164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x171168: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17116c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x17116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x171170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x171174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171178: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x171178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17117c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171180: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x171180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x171184: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x171188: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x17118c: 0x40f809  jalr        $v0
    ctx->pc = 0x17118Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171194u);
        ctx->pc = 0x171190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17118Cu;
            // 0x171190: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171194u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171118u: goto label_171118;
            case 0x17111Cu: goto label_17111c;
            case 0x1711A0u: goto label_1711a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171194u; }
            if (ctx->pc != 0x171194u) { return; }
        }
        }
    }
    ctx->pc = 0x171194u;
    // 0x171194: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x171194u;
    {
        const bool branch_taken_0x171194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171194u;
            // 0x171198: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171194) {
            ctx->pc = 0x17111Cu;
            runtime->cooperativeGuestYield();
            goto label_17111c;
        }
    }
    ctx->pc = 0x17119Cu;
    // 0x17119c: 0x0  nop
    ctx->pc = 0x17119cu;
    // NOP
label_1711a0:
    // 0x1711a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1711a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1711a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1711a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1711a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1711a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1711ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1711ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711ACu;
            // 0x1711b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171118u: goto label_171118;
            case 0x17111Cu: goto label_17111c;
            case 0x1711A0u: goto label_1711a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1711B4u;
    // 0x1711b4: 0x0  nop
    ctx->pc = 0x1711b4u;
    // NOP
}

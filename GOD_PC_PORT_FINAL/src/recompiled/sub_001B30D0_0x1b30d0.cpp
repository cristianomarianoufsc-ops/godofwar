#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B30D0
// Address: 0x1b30d0 - 0x1b3160
void sub_001B30D0_0x1b30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B30D0_0x1b30d0");
#endif

    ctx->pc = 0x1b30d0u;

    // 0x1b30d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b30d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b30d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b30d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b30d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b30dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b30dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b30e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b30e4: 0x96020062  lhu         $v0, 0x62($s0)
    ctx->pc = 0x1b30e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x1b30e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B30E8u;
    {
        const bool branch_taken_0x1b30e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30E8u;
            // 0x1b30ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30e8) {
            ctx->pc = 0x1B3138u;
            goto label_1b3138;
        }
    }
    ctx->pc = 0x1B30F0u;
    // 0x1b30f0: 0xa6060062  sh          $a2, 0x62($s0)
    ctx->pc = 0x1b30f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 98), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b30f4: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x1b30f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1b30f8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1B30F8u;
    SET_GPR_U32(ctx, 31, 0x1B3100u);
    ctx->pc = 0x1B30FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30F8u;
            // 0x1b30fc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3100u; }
        if (ctx->pc != 0x1B3100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3100u; }
        if (ctx->pc != 0x1B3100u) { return; }
    }
    ctx->pc = 0x1B3100u;
    // 0x1b3100: 0x96040062  lhu         $a0, 0x62($s0)
    ctx->pc = 0x1b3100u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x1b3104: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b3104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3108: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3108u;
    {
        const bool branch_taken_0x1b3108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3108u;
            // 0x1b310c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3108) {
            ctx->pc = 0x1B3138u;
            goto label_1b3138;
        }
    }
    ctx->pc = 0x1B3110u;
    // 0x1b3110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3114: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b3114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b3118:
    // 0x1b3118: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b311c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b3120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b3120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b3124: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1b3124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b3128: 0x0  nop
    ctx->pc = 0x1b3128u;
    // NOP
    // 0x1b312c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B312Cu;
    {
        const bool branch_taken_0x1b312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B312Cu;
            // 0x1b3130: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b312c) {
            ctx->pc = 0x1B3118u;
            runtime->cooperativeGuestYield();
            goto label_1b3118;
        }
    }
    ctx->pc = 0x1B3134u;
    // 0x1b3134: 0x0  nop
    ctx->pc = 0x1b3134u;
    // NOP
label_1b3138:
    // 0x1b3138: 0x96220042  lhu         $v0, 0x42($s1)
    ctx->pc = 0x1b3138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x1b313c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1b313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1b3140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3144: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b314c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3150: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b3150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b3154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3158: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3158u;
            // 0x1b315c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3118u: goto label_1b3118;
            case 0x1B3138u: goto label_1b3138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3160u;
}

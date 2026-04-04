#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218318
// Address: 0x218318 - 0x2183c8
void sub_00218318_0x218318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218318_0x218318");
#endif

    ctx->pc = 0x218318u;

    // 0x218318: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21831c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x218320: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x218320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x218324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218328: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x218328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21832c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21832cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218330: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x218330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x218334: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x218334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x218338: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x218338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x21833c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218340: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x218340u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x218344: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x218344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218348: 0x255182a  slt         $v1, $s2, $s5
    ctx->pc = 0x218348u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x21834c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21834Cu;
    {
        const bool branch_taken_0x21834c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21834Cu;
            // 0x218350: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21834c) {
            ctx->pc = 0x2183A0u;
            goto label_2183a0;
        }
    }
    ctx->pc = 0x218354u;
    // 0x218354: 0x0  nop
    ctx->pc = 0x218354u;
    // NOP
label_218358:
    // 0x218358: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x218358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21835c: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x21835cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x218360: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218364: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x218364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x218368: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x218368u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x21836c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x21836cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x218370: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x218370u;
    {
        const bool branch_taken_0x218370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x218374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218370u;
            // 0x218374: 0x8e930018  lw          $s3, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218370) {
            ctx->pc = 0x218380u;
            goto label_218380;
        }
    }
    ctx->pc = 0x218378u;
    // 0x218378: 0xc04da64  jal         func_136990
    ctx->pc = 0x218378u;
    SET_GPR_U32(ctx, 31, 0x218380u);
    ctx->pc = 0x21837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218378u;
            // 0x21837c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218380u; }
        if (ctx->pc != 0x218380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218380u; }
        if (ctx->pc != 0x218380u) { return; }
    }
    ctx->pc = 0x218380u;
label_218380:
    // 0x218380: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x218384: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x218384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x218388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21838c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218390: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x218390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x218394: 0x255182a  slt         $v1, $s2, $s5
    ctx->pc = 0x218394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x218398: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x218398u;
    {
        const bool branch_taken_0x218398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218398u;
            // 0x21839c: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218398) {
            ctx->pc = 0x218358u;
            runtime->cooperativeGuestYield();
            goto label_218358;
        }
    }
    ctx->pc = 0x2183A0u;
label_2183a0:
    // 0x2183a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2183a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2183a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2183a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2183a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2183a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2183ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2183acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2183b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2183b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2183b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2183b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2183b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2183b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2183bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2183BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2183C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2183BCu;
            // 0x2183c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218358u: goto label_218358;
            case 0x218380u: goto label_218380;
            case 0x2183A0u: goto label_2183a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2183C4u;
    // 0x2183c4: 0x0  nop
    ctx->pc = 0x2183c4u;
    // NOP
}

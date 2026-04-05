#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175268
// Address: 0x175268 - 0x1752e8
void sub_00175268_0x175268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175268_0x175268");
#endif

    ctx->pc = 0x175268u;

    // 0x175268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17526c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x175270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17527c: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17527Cu;
    SET_GPR_U32(ctx, 31, 0x175284u);
    ctx->pc = 0x175280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17527Cu;
            // 0x175280: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    }
    ctx->pc = 0x175284u;
    // 0x175284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175288: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x175288u;
    {
        const bool branch_taken_0x175288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175288u;
            // 0x17528c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175288) {
            ctx->pc = 0x1752D0u;
            goto label_1752d0;
        }
    }
    ctx->pc = 0x175290u;
    // 0x175290: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x175290u;
    SET_GPR_U32(ctx, 31, 0x175298u);
    ctx->pc = 0x175294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175290u;
            // 0x175294: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175298u; }
        if (ctx->pc != 0x175298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175298u; }
        if (ctx->pc != 0x175298u) { return; }
    }
    ctx->pc = 0x175298u;
    // 0x175298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17529c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1752a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752a4: 0xc05cd2a  jal         func_1734A8
    ctx->pc = 0x1752A4u;
    SET_GPR_U32(ctx, 31, 0x1752ACu);
    ctx->pc = 0x1752A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752A4u;
            // 0x1752a8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A8u;
    if (runtime->hasFunction(0x1734A8u)) {
        auto targetFn = runtime->lookupFunction(0x1734A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752ACu; }
        if (ctx->pc != 0x1752ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1734a8_0x1734c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752ACu; }
        if (ctx->pc != 0x1752ACu) { return; }
    }
    ctx->pc = 0x1752ACu;
    // 0x1752ac: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1752acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1752b0: 0xc05d656  jal         func_175958
    ctx->pc = 0x1752B0u;
    SET_GPR_U32(ctx, 31, 0x1752B8u);
    ctx->pc = 0x1752B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752B0u;
            // 0x1752b4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752B8u; }
        if (ctx->pc != 0x1752B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752B8u; }
        if (ctx->pc != 0x1752B8u) { return; }
    }
    ctx->pc = 0x1752B8u;
    // 0x1752b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1752b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1752bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752c0: 0xc05d6e8  jal         func_175BA0
    ctx->pc = 0x1752C0u;
    SET_GPR_U32(ctx, 31, 0x1752C8u);
    ctx->pc = 0x1752C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752C0u;
            // 0x1752c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175BA0u;
    if (runtime->hasFunction(0x175BA0u)) {
        auto targetFn = runtime->lookupFunction(0x175BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752C8u; }
        if (ctx->pc != 0x1752C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175BA0_0x175ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752C8u; }
        if (ctx->pc != 0x1752C8u) { return; }
    }
    ctx->pc = 0x1752C8u;
    // 0x1752c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752cc: 0x0  nop
    ctx->pc = 0x1752ccu;
    // NOP
label_1752d0:
    // 0x1752d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1752d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1752d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1752d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1752d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1752d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1752dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1752e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1752E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1752E0u;
            // 0x1752e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1752D0u: goto label_1752d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1752E8u;
}

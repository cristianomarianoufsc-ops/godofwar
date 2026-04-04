#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186118
// Address: 0x186118 - 0x186300
void sub_00186118_0x186118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186118_0x186118");
#endif

    ctx->pc = 0x186118u;

    // 0x186118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18611c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186120: 0xc06182e  jal         func_1860B8
    ctx->pc = 0x186120u;
    SET_GPR_U32(ctx, 31, 0x186128u);
    ctx->pc = 0x186124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186120u;
            // 0x186124: 0x24a60020  addiu       $a2, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1860B8u;
    if (runtime->hasFunction(0x1860B8u)) {
        auto targetFn = runtime->lookupFunction(0x1860B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186128u; }
        if (ctx->pc != 0x186128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001860B8_0x1860b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186128u; }
        if (ctx->pc != 0x186128u) { return; }
    }
    ctx->pc = 0x186128u;
    // 0x186128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18612c: 0x3e00008  jr          $ra
    ctx->pc = 0x18612Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18612Cu;
            // 0x186130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1862E4u: goto label_1862e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186134u;
    // 0x186134: 0x0  nop
    ctx->pc = 0x186134u;
    // NOP
    // 0x186138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18613c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186144: 0xc05d656  jal         func_175958
    ctx->pc = 0x186144u;
    SET_GPR_U32(ctx, 31, 0x18614Cu);
    ctx->pc = 0x186148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186144u;
            // 0x186148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18614Cu; }
        if (ctx->pc != 0x18614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18614Cu; }
        if (ctx->pc != 0x18614Cu) { return; }
    }
    ctx->pc = 0x18614Cu;
    // 0x18614c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x186150: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x186154: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x186154u;
    SET_GPR_U32(ctx, 31, 0x18615Cu);
    ctx->pc = 0x186158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186154u;
            // 0x186158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18615Cu; }
        if (ctx->pc != 0x18615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18615Cu; }
        if (ctx->pc != 0x18615Cu) { return; }
    }
    ctx->pc = 0x18615Cu;
    // 0x18615c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x186160: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186168: 0x3e00008  jr          $ra
    ctx->pc = 0x186168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186168u;
            // 0x18616c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1862E4u: goto label_1862e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186170u;
    // 0x186170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186174: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x186174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x186178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x186178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18617c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x186180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186188: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x186188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18618c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186190: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x186190u;
    SET_GPR_U32(ctx, 31, 0x186198u);
    ctx->pc = 0x186194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186190u;
            // 0x186194: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186198u; }
        if (ctx->pc != 0x186198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186198u; }
        if (ctx->pc != 0x186198u) { return; }
    }
    ctx->pc = 0x186198u;
    // 0x186198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18619c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x18619cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1861a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1861a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1861A4u;
    SET_GPR_U32(ctx, 31, 0x1861ACu);
    ctx->pc = 0x1861A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861A4u;
            // 0x1861a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861ACu; }
        if (ctx->pc != 0x1861ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861ACu; }
        if (ctx->pc != 0x1861ACu) { return; }
    }
    ctx->pc = 0x1861ACu;
    // 0x1861ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1861acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1861b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1861b4: 0xc05d656  jal         func_175958
    ctx->pc = 0x1861B4u;
    SET_GPR_U32(ctx, 31, 0x1861BCu);
    ctx->pc = 0x1861B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861B4u;
            // 0x1861b8: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861BCu; }
        if (ctx->pc != 0x1861BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861BCu; }
        if (ctx->pc != 0x1861BCu) { return; }
    }
    ctx->pc = 0x1861BCu;
    // 0x1861bc: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1861bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1861c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1861c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861c4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1861C4u;
    SET_GPR_U32(ctx, 31, 0x1861CCu);
    ctx->pc = 0x1861C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1861C4u;
            // 0x1861c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861CCu; }
        if (ctx->pc != 0x1861CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1861CCu; }
        if (ctx->pc != 0x1861CCu) { return; }
    }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1861ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1861d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1861d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1861d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1861d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1861d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1861d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1861dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1861DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1861E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1861DCu;
            // 0x1861e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1862E4u: goto label_1862e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1861E4u;
    // 0x1861e4: 0x0  nop
    ctx->pc = 0x1861e4u;
    // NOP
    // 0x1861e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1861ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1861ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1861f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1861f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1861f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1861f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1861f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1861f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1861fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186200: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x186200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186204: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186208: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x186208u;
    SET_GPR_U32(ctx, 31, 0x186210u);
    ctx->pc = 0x18620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186208u;
            // 0x18620c: 0x24840005  addiu       $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186210u; }
        if (ctx->pc != 0x186210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186210u; }
        if (ctx->pc != 0x186210u) { return; }
    }
    ctx->pc = 0x186210u;
    // 0x186210: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18621c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x18621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x186220: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x186220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186224: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x186224u;
    SET_GPR_U32(ctx, 31, 0x18622Cu);
    ctx->pc = 0x186228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186224u;
            // 0x186228: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18622Cu; }
        if (ctx->pc != 0x18622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18622Cu; }
        if (ctx->pc != 0x18622Cu) { return; }
    }
    ctx->pc = 0x18622Cu;
    // 0x18622c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186230: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x186230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x186234: 0xc05d656  jal         func_175958
    ctx->pc = 0x186234u;
    SET_GPR_U32(ctx, 31, 0x18623Cu);
    ctx->pc = 0x186238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186234u;
            // 0x186238: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18623Cu; }
        if (ctx->pc != 0x18623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18623Cu; }
        if (ctx->pc != 0x18623Cu) { return; }
    }
    ctx->pc = 0x18623Cu;
    // 0x18623c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x18623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x186240: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186244: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x186244u;
    SET_GPR_U32(ctx, 31, 0x18624Cu);
    ctx->pc = 0x186248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186244u;
            // 0x186248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18624Cu; }
        if (ctx->pc != 0x18624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18624Cu; }
        if (ctx->pc != 0x18624Cu) { return; }
    }
    ctx->pc = 0x18624Cu;
    // 0x18624c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18624cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186250: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186254: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x186254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18625c: 0x3e00008  jr          $ra
    ctx->pc = 0x18625Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18625Cu;
            // 0x186260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1862E4u: goto label_1862e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186264u;
    // 0x186264: 0x0  nop
    ctx->pc = 0x186264u;
    // NOP
    // 0x186268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18626c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x186270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186278: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x186278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18627c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x18627cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x186280: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x186280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x186284: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18628c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x18628Cu;
    SET_GPR_U32(ctx, 31, 0x186294u);
    ctx->pc = 0x186290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18628Cu;
            // 0x186290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186294u; }
        if (ctx->pc != 0x186294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186294u; }
        if (ctx->pc != 0x186294u) { return; }
    }
    ctx->pc = 0x186294u;
    // 0x186294: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x186294u;
    {
        const bool branch_taken_0x186294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186294u;
            // 0x186298: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186294) {
            ctx->pc = 0x1862E4u;
            goto label_1862e4;
        }
    }
    ctx->pc = 0x18629Cu;
    // 0x18629c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x18629Cu;
    SET_GPR_U32(ctx, 31, 0x1862A4u);
    ctx->pc = 0x1862A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18629Cu;
            // 0x1862a0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862A4u; }
        if (ctx->pc != 0x1862A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862A4u; }
        if (ctx->pc != 0x1862A4u) { return; }
    }
    ctx->pc = 0x1862A4u;
    // 0x1862a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1862a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1862a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862ac: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1862ACu;
    SET_GPR_U32(ctx, 31, 0x1862B4u);
    ctx->pc = 0x1862B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862ACu;
            // 0x1862b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862B4u; }
        if (ctx->pc != 0x1862B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862B4u; }
        if (ctx->pc != 0x1862B4u) { return; }
    }
    ctx->pc = 0x1862B4u;
    // 0x1862b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1862b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1862bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1862bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862c0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1862C0u;
    SET_GPR_U32(ctx, 31, 0x1862C8u);
    ctx->pc = 0x1862C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862C0u;
            // 0x1862c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862C8u; }
        if (ctx->pc != 0x1862C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862C8u; }
        if (ctx->pc != 0x1862C8u) { return; }
    }
    ctx->pc = 0x1862C8u;
    // 0x1862c8: 0xc05d656  jal         func_175958
    ctx->pc = 0x1862C8u;
    SET_GPR_U32(ctx, 31, 0x1862D0u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862D0u; }
        if (ctx->pc != 0x1862D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862D0u; }
        if (ctx->pc != 0x1862D0u) { return; }
    }
    ctx->pc = 0x1862D0u;
    // 0x1862d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1862d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1862d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862d8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x1862D8u;
    SET_GPR_U32(ctx, 31, 0x1862E0u);
    ctx->pc = 0x1862DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1862D8u;
            // 0x1862dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862E0u; }
        if (ctx->pc != 0x1862E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862E0u; }
        if (ctx->pc != 0x1862E0u) { return; }
    }
    ctx->pc = 0x1862E0u;
    // 0x1862e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1862e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1862e4:
    // 0x1862e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1862e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1862e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1862e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1862ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1862ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1862f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1862f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1862f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1862F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1862F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862F4u;
            // 0x1862f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1862E4u: goto label_1862e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1862FCu;
    // 0x1862fc: 0x0  nop
    ctx->pc = 0x1862fcu;
    // NOP
}

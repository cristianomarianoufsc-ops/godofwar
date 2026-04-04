#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173258
// Address: 0x173258 - 0x173318
void sub_00173258_0x173258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173258_0x173258");
#endif

    ctx->pc = 0x173258u;

    // 0x173258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17325c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x173260: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x173260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x173264: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x173264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x173268: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x173268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17326c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17326cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x173274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17327c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17327cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173280: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x173280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x173284: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x173284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x173288: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x173288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x17328c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x17328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x173290: 0xc0a2644  jal         func_289910
    ctx->pc = 0x173290u;
    SET_GPR_U32(ctx, 31, 0x173298u);
    ctx->pc = 0x173294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173290u;
            // 0x173294: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173298u; }
        if (ctx->pc != 0x173298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173298u; }
        if (ctx->pc != 0x173298u) { return; }
    }
    ctx->pc = 0x173298u;
    // 0x173298: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17329c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1732a0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1732a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1732a4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1732a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1732a8: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1732ac: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1732acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1732b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1732B0u;
    {
        const bool branch_taken_0x1732b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732B0u;
            // 0x1732b4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732b0) {
            ctx->pc = 0x1732F0u;
            goto label_1732f0;
        }
    }
    ctx->pc = 0x1732B8u;
    // 0x1732b8: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x1732b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x1732bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1732bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1732c0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x1732c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x1732c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1732c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1732c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1732c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732cc: 0x256b3398  addiu       $t3, $t3, 0x3398
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13208));
    // 0x1732d0: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x1732d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x1732d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1732d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1732d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1732dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732e0: 0xc09b272  jal         func_26C9C8
    ctx->pc = 0x1732E0u;
    SET_GPR_U32(ctx, 31, 0x1732E8u);
    ctx->pc = 0x1732E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732E0u;
            // 0x1732e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C9C8u;
    if (runtime->hasFunction(0x26C9C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732E8u; }
        if (ctx->pc != 0x1732E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C9C8_0x26c9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732E8u; }
        if (ctx->pc != 0x1732E8u) { return; }
    }
    ctx->pc = 0x1732E8u;
    // 0x1732e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1732E8u;
    {
        const bool branch_taken_0x1732e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732E8u;
            // 0x1732ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732e8) {
            ctx->pc = 0x173300u;
            goto label_173300;
        }
    }
    ctx->pc = 0x1732F0u;
label_1732f0:
    // 0x1732f0: 0xc05cb42  jal         func_172D08
    ctx->pc = 0x1732F0u;
    SET_GPR_U32(ctx, 31, 0x1732F8u);
    ctx->pc = 0x172D08u;
    if (runtime->hasFunction(0x172D08u)) {
        auto targetFn = runtime->lookupFunction(0x172D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732F8u; }
        if (ctx->pc != 0x1732F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172D08_0x172d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732F8u; }
        if (ctx->pc != 0x1732F8u) { return; }
    }
    ctx->pc = 0x1732F8u;
    // 0x1732f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1732f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732fc: 0x0  nop
    ctx->pc = 0x1732fcu;
    // NOP
label_173300:
    // 0x173300: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x173300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173304: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x173304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17330c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173310: 0x3e00008  jr          $ra
    ctx->pc = 0x173310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173310u;
            // 0x173314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1732F0u: goto label_1732f0;
            case 0x173300u: goto label_173300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173318u;
}

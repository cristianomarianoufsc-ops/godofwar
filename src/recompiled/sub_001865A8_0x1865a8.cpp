#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001865A8
// Address: 0x1865a8 - 0x186678
void sub_001865A8_0x1865a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001865A8_0x1865a8");
#endif

    ctx->pc = 0x1865a8u;

label_1865a8:
    // 0x1865a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1865a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1865ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1865acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1865b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1865b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1865b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1865b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1865b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1865bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1865bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1865c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1865c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1865c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1865c8: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x1865C8u;
    SET_GPR_U32(ctx, 31, 0x1865D0u);
    ctx->pc = 0x1865CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865C8u;
            // 0x1865cc: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D0u; }
        if (ctx->pc != 0x1865D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865D0u; }
        if (ctx->pc != 0x1865D0u) { return; }
    }
    ctx->pc = 0x1865D0u;
    // 0x1865d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1865D0u;
    {
        const bool branch_taken_0x1865d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865d0) {
            ctx->pc = 0x1865D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1865D0u;
            // 0x1865d4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1865E0u;
            goto label_1865e0;
        }
    }
    ctx->pc = 0x1865D8u;
    // 0x1865d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1865D8u;
    {
        const bool branch_taken_0x1865d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1865D8u;
            // 0x1865dc: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865d8) {
            ctx->pc = 0x186650u;
            goto label_186650;
        }
    }
    ctx->pc = 0x1865E0u;
label_1865e0:
    // 0x1865e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1865E0u;
    {
        const bool branch_taken_0x1865e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1865E0u;
            // 0x1865e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865e0) {
            ctx->pc = 0x186628u;
            goto label_186628;
        }
    }
    ctx->pc = 0x1865E8u;
    // 0x1865e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1865ec: 0x0  nop
    ctx->pc = 0x1865ecu;
    // NOP
label_1865f0:
    // 0x1865f0: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x1865f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1865f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1865f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1865f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865fc: 0xc06196a  jal         func_1865A8
    ctx->pc = 0x1865FCu;
    SET_GPR_U32(ctx, 31, 0x186604u);
    ctx->pc = 0x186600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865FCu;
            // 0x186600: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1865A8u;
    runtime->cooperativeGuestYield();
    goto label_1865a8;
    ctx->pc = 0x186604u;
label_186604:
    // 0x186604: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x186604u;
    {
        const bool branch_taken_0x186604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186604u;
            // 0x186608: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186604) {
            ctx->pc = 0x186658u;
            goto label_186658;
        }
    }
    ctx->pc = 0x18660Cu;
    // 0x18660c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x18660cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186610u;
    {
        const bool branch_taken_0x186610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186610u;
            // 0x186614: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186610) {
            ctx->pc = 0x186628u;
            goto label_186628;
        }
    }
    ctx->pc = 0x186618u;
    // 0x186618: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18661c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186620: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x186620u;
    {
        const bool branch_taken_0x186620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186620u;
            // 0x186624: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186620) {
            ctx->pc = 0x1865F0u;
            runtime->cooperativeGuestYield();
            goto label_1865f0;
        }
    }
    ctx->pc = 0x186628u;
label_186628:
    // 0x186628: 0xc05d652  jal         func_175948
    ctx->pc = 0x186628u;
    SET_GPR_U32(ctx, 31, 0x186630u);
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186630u; }
        if (ctx->pc != 0x186630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186630u; }
        if (ctx->pc != 0x186630u) { return; }
    }
    ctx->pc = 0x186630u;
    // 0x186630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186634: 0xc05d69c  jal         func_175A70
    ctx->pc = 0x186634u;
    SET_GPR_U32(ctx, 31, 0x18663Cu);
    ctx->pc = 0x186638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186634u;
            // 0x186638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A70u;
    if (runtime->hasFunction(0x175A70u)) {
        auto targetFn = runtime->lookupFunction(0x175A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18663Cu; }
        if (ctx->pc != 0x18663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A70_0x175a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18663Cu; }
        if (ctx->pc != 0x18663Cu) { return; }
    }
    ctx->pc = 0x18663Cu;
    // 0x18663c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18663Cu;
            // 0x186640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18663c) {
            ctx->pc = 0x18665Cu;
            goto label_18665c;
        }
    }
    ctx->pc = 0x186644u;
    // 0x186644: 0xc05d652  jal         func_175948
    ctx->pc = 0x186644u;
    SET_GPR_U32(ctx, 31, 0x18664Cu);
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18664Cu; }
        if (ctx->pc != 0x18664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18664Cu; }
        if (ctx->pc != 0x18664Cu) { return; }
    }
    ctx->pc = 0x18664Cu;
    // 0x18664c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186650:
    // 0x186650: 0xc05d702  jal         func_175C08
    ctx->pc = 0x186650u;
    SET_GPR_U32(ctx, 31, 0x186658u);
    ctx->pc = 0x186654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186650u;
            // 0x186654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C08u;
    if (runtime->hasFunction(0x175C08u)) {
        auto targetFn = runtime->lookupFunction(0x175C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186658u; }
        if (ctx->pc != 0x186658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C08_0x175c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186658u; }
        if (ctx->pc != 0x186658u) { return; }
    }
    ctx->pc = 0x186658u;
label_186658:
    // 0x186658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18665c:
    // 0x18665c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18665cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186660: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x186660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186668: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x186668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18666c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18666cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186670: 0x3e00008  jr          $ra
    ctx->pc = 0x186670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186670u;
            // 0x186674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1865A8u: goto label_1865a8;
            case 0x1865E0u: goto label_1865e0;
            case 0x1865F0u: goto label_1865f0;
            case 0x186604u: goto label_186604;
            case 0x186628u: goto label_186628;
            case 0x186650u: goto label_186650;
            case 0x186658u: goto label_186658;
            case 0x18665Cu: goto label_18665c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186678u;
}

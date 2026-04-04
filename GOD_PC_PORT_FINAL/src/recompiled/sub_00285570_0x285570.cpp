#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285570
// Address: 0x285570 - 0x285650
void sub_00285570_0x285570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285570_0x285570");
#endif

    ctx->pc = 0x285570u;

    // 0x285570: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x285570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x285574: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285578: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
    // 0x28557c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285580: 0x40f809  jalr        $v0
    ctx->pc = 0x285580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285588u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x285588u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285588u; }
            if (ctx->pc != 0x285588u) { return; }
        }
        }
    }
    ctx->pc = 0x285588u;
    // 0x285588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28558c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x28558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x285590: 0x3e00008  jr          $ra
    ctx->pc = 0x285590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285590u;
            // 0x285594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285598u;
    // 0x285598: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x28559c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28559cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2855a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2855a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2855a4: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
    // 0x2855a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2855a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2855ac: 0x40f809  jalr        $v0
    ctx->pc = 0x2855ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2855B4u);
        ctx->pc = 0x2855B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855ACu;
            // 0x2855b0: 0xac6239b4  sw          $v0, 0x39B4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2855B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2855B4u; }
            if (ctx->pc != 0x2855B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2855B4u;
    // 0x2855b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2855b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2855b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2855B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2855BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855B8u;
            // 0x2855bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2855C0u;
    // 0x2855c0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x2855c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2855c8: 0x8c626980  lw          $v0, 0x6980($v1)
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27008)));
    // 0x2855cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2855ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2855d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2855d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2855d4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2855D4u;
    {
        const bool branch_taken_0x2855d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2855D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2855D4u;
            // 0x2855d8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855d4) {
            ctx->pc = 0x28560Cu;
            goto label_28560c;
        }
    }
    ctx->pc = 0x2855DCu;
    // 0x2855dc: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x2855dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x2855e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2855e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2855e4: 0x26306970  addiu       $s0, $s1, 0x6970
    ctx->pc = 0x2855e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 26992));
    // 0x2855e8: 0xac626980  sw          $v0, 0x6980($v1)
    ctx->pc = 0x2855e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27008), GPR_U32(ctx, 2));
    // 0x2855ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2855ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2855f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855f4: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2855F4u;
    SET_GPR_U32(ctx, 31, 0x2855FCu);
    ctx->pc = 0x2855F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2855F4u;
            // 0x2855f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2855FCu; }
        if (ctx->pc != 0x2855FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2855FCu; }
        if (ctx->pc != 0x2855FCu) { return; }
    }
    ctx->pc = 0x2855FCu;
    // 0x2855fc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x285600: 0x24636988  addiu       $v1, $v1, 0x6988
    ctx->pc = 0x285600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27016));
    // 0x285604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285604u;
    {
        const bool branch_taken_0x285604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285604u;
            // 0x285608: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285604) {
            ctx->pc = 0x285610u;
            goto label_285610;
        }
    }
    ctx->pc = 0x28560Cu;
label_28560c:
    // 0x28560c: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
label_285610:
    // 0x285610: 0x26226970  addiu       $v0, $s1, 0x6970
    ctx->pc = 0x285610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 26992));
    // 0x285614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285618: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28561c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28561cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285620: 0x3e00008  jr          $ra
    ctx->pc = 0x285620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285620u;
            // 0x285624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285628u;
    // 0x285628: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28562c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285630: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x285630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
    // 0x285634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285638: 0x40f809  jalr        $v0
    ctx->pc = 0x285638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285640u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x285640u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285640u; }
            if (ctx->pc != 0x285640u) { return; }
        }
        }
    }
    ctx->pc = 0x285640u;
    // 0x285640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285644: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x285648: 0x3e00008  jr          $ra
    ctx->pc = 0x285648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285648u;
            // 0x28564c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28560Cu: goto label_28560c;
            case 0x285610u: goto label_285610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285650u;
}

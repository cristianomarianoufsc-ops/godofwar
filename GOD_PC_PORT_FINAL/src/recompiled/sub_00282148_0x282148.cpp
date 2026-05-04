#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282148
// Address: 0x282148 - 0x2821d8
void sub_00282148_0x282148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282148_0x282148");
#endif

    ctx->pc = 0x282148u;
    std::cerr << "[sub_00282148] START\n";

    // 0x282148: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x282148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28214c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28214cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282150: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x282150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x282154: 0x24425298  addiu       $v0, $v0, 0x5298
    ctx->pc = 0x282154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21144));
    // 0x282158: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x282158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x28215c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282160: 0xac603620  sw          $zero, 0x3620($v1)
    ctx->pc = 0x282160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13856), GPR_U32(ctx, 0));
    // 0x282164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282168: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x282168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x28216c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x282170: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x282170u;
    SET_GPR_U32(ctx, 31, 0x282178u);
    ctx->pc = 0x282174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282170u;
            // 0x282174: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282178u; }
        if (ctx->pc != 0x282178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282178u; }
        if (ctx->pc != 0x282178u) { return; }
    }
    ctx->pc = 0x282178u;
    // 0x282178: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x28217c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28217Cu;
    {
        const bool branch_taken_0x28217c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x282180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28217Cu;
            // 0x282180: 0xac622740  sw          $v0, 0x2740($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28217c) {
            ctx->pc = 0x28218Cu;
            goto label_28218c;
        }
    }
    ctx->pc = 0x282184u;
    // 0x282184: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x282184u;
    {
        const bool branch_taken_0x282184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282184u;
            // 0x282188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282184) {
            ctx->pc = 0x2821CCu;
            goto label_2821cc;
        }
    }
    ctx->pc = 0x28218Cu;
label_28218c:
    // 0x28218c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x282190: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x282194: 0x24432748  addiu       $v1, $v0, 0x2748
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x282198: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x282198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28219c: 0x24650048  addiu       $a1, $v1, 0x48
    ctx->pc = 0x28219cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2821a0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x2821a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2821a4: 0x0  nop
    ctx->pc = 0x2821a4u;
    // NOP
label_2821a8:
    // 0x2821a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2821a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2821ac: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x2821acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x2821b0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2821b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2821b4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x2821b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2821b8: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2821bc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2821bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2821c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2821C0u;
    {
        const bool branch_taken_0x2821c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2821c0) {
            ctx->pc = 0x2821A8u;
            runtime->cooperativeGuestYield();
            goto label_2821a8;
        }
    }
    ctx->pc = 0x2821C8u;
    // 0x2821c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2821cc:
    // 0x2821cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2821ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2821d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2821D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2821D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2821D0u;
            // 0x2821d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28218Cu: goto label_28218c;
            case 0x2821A8u: goto label_2821a8;
            case 0x2821CCu: goto label_2821cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2821D8u;
}

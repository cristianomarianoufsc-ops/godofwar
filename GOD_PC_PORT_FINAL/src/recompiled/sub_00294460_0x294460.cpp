#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294460
// Address: 0x294460 - 0x2944e8
void sub_00294460_0x294460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294460_0x294460");
#endif

    ctx->pc = 0x294460u;

    // 0x294460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294468: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29446c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29446cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294470: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x294474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29447c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x29447cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x294480: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x294480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x294484: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x294484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x294488: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294488u;
    {
        const bool branch_taken_0x294488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294488) {
            ctx->pc = 0x294498u;
            goto label_294498;
        }
    }
    ctx->pc = 0x294490u;
    // 0x294490: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294490u;
    SET_GPR_U32(ctx, 31, 0x294498u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294498u; }
        if (ctx->pc != 0x294498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294498u; }
        if (ctx->pc != 0x294498u) { return; }
    }
    ctx->pc = 0x294498u;
label_294498:
    // 0x294498: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x294498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x29449c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x29449cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2944a0: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x2944a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2944a4: 0xc0a50ee  jal         func_2943B8
    ctx->pc = 0x2944A4u;
    SET_GPR_U32(ctx, 31, 0x2944ACu);
    ctx->pc = 0x2944A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2944A4u;
            // 0x2944a8: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2943B8u;
    if (runtime->hasFunction(0x2943B8u)) {
        auto targetFn = runtime->lookupFunction(0x2943B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944ACu; }
        if (ctx->pc != 0x2944ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2943b8_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944ACu; }
        if (ctx->pc != 0x2944ACu) { return; }
    }
    ctx->pc = 0x2944ACu;
    // 0x2944ac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2944ACu;
    {
        const bool branch_taken_0x2944ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2944ACu;
            // 0x2944b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944ac) {
            ctx->pc = 0x2944C8u;
            goto label_2944c8;
        }
    }
    ctx->pc = 0x2944B4u;
    // 0x2944b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2944b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2944b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2944b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2944bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2944bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944c0: 0x80a64a0  j           func_299280
    ctx->pc = 0x2944C0u;
    ctx->pc = 0x2944C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2944C0u;
            // 0x2944c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2944C8u;
label_2944c8:
    // 0x2944c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2944c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2944cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2944ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2944d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2944d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2944D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2944D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2944D4u;
            // 0x2944d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294498u: goto label_294498;
            case 0x2944C8u: goto label_2944c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2944DCu;
    // 0x2944dc: 0x0  nop
    ctx->pc = 0x2944dcu;
    // NOP
    // 0x2944e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2944e4: 0x0  nop
    ctx->pc = 0x2944e4u;
    // NOP
}

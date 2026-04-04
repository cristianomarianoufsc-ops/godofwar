#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294590
// Address: 0x294590 - 0x294618
void sub_00294590_0x294590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294590_0x294590");
#endif

    ctx->pc = 0x294590u;

    // 0x294590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294594: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294598: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29459c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29459cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2945a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2945a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2945a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2945a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2945ac: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2945acu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2945b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2945b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2945b4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2945b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2945b8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2945B8u;
    {
        const bool branch_taken_0x2945b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2945b8) {
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x2945C0u;
    // 0x2945c0: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2945C0u;
    SET_GPR_U32(ctx, 31, 0x2945C8u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945C8u; }
        if (ctx->pc != 0x2945C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945C8u; }
        if (ctx->pc != 0x2945C8u) { return; }
    }
    ctx->pc = 0x2945C8u;
label_2945c8:
    // 0x2945c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2945c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2945cc: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x2945ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x2945d0: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x2945d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x2945d4: 0xc0a513a  jal         func_2944E8
    ctx->pc = 0x2945D4u;
    SET_GPR_U32(ctx, 31, 0x2945DCu);
    ctx->pc = 0x2945D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945D4u;
            // 0x2945d8: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944E8u;
    if (runtime->hasFunction(0x2944E8u)) {
        auto targetFn = runtime->lookupFunction(0x2944E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945DCu; }
        if (ctx->pc != 0x2945DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2944e8_0x294590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945DCu; }
        if (ctx->pc != 0x2945DCu) { return; }
    }
    ctx->pc = 0x2945DCu;
    // 0x2945dc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2945DCu;
    {
        const bool branch_taken_0x2945dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2945E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2945DCu;
            // 0x2945e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945dc) {
            ctx->pc = 0x2945F8u;
            goto label_2945f8;
        }
    }
    ctx->pc = 0x2945E4u;
    // 0x2945e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2945e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2945e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2945e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2945ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2945ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2945f0: 0x80a64a0  j           func_299280
    ctx->pc = 0x2945F0u;
    ctx->pc = 0x2945F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945F0u;
            // 0x2945f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2945F8u;
label_2945f8:
    // 0x2945f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2945f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2945fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2945fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294604: 0x3e00008  jr          $ra
    ctx->pc = 0x294604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294604u;
            // 0x294608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2945C8u: goto label_2945c8;
            case 0x2945F8u: goto label_2945f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29460Cu;
    // 0x29460c: 0x0  nop
    ctx->pc = 0x29460cu;
    // NOP
    // 0x294610: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x294610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x294614: 0x0  nop
    ctx->pc = 0x294614u;
    // NOP
}

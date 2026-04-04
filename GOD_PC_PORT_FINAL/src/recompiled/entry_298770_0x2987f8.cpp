#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_298770
// Address: 0x298770 - 0x2987f8
void entry_298770_0x2987f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_298770_0x2987f8");
#endif

    ctx->pc = 0x298770u;

    // 0x298770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298774: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29877c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x29877cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x298780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x298780u;
    {
        const bool branch_taken_0x298780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298780u;
            // 0x298784: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298780) {
            ctx->pc = 0x2987ACu;
            goto label_2987ac;
        }
    }
    ctx->pc = 0x298788u;
label_298788:
    // 0x298788: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x298788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x29878c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298790:
    // 0x298790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298794: 0x0  nop
    ctx->pc = 0x298794u;
    // NOP
    // 0x298798: 0x0  nop
    ctx->pc = 0x298798u;
    // NOP
    // 0x29879c: 0x0  nop
    ctx->pc = 0x29879cu;
    // NOP
    // 0x2987a0: 0x0  nop
    ctx->pc = 0x2987a0u;
    // NOP
    // 0x2987a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2987A4u;
    {
        const bool branch_taken_0x2987a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2987a4) {
            ctx->pc = 0x298790u;
            runtime->cooperativeGuestYield();
            goto label_298790;
        }
    }
    ctx->pc = 0x2987ACu;
label_2987ac:
    // 0x2987ac: 0x2630ab40  addiu       $s0, $s1, -0x54C0
    ctx->pc = 0x2987acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945600));
    // 0x2987b0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2987b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2987b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2987b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987b8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x2987b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2987bc: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x2987BCu;
    SET_GPR_U32(ctx, 31, 0x2987C4u);
    ctx->pc = 0x2987C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2987BCu;
            // 0x2987c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987C4u; }
        if (ctx->pc != 0x2987C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987C4u; }
        if (ctx->pc != 0x2987C4u) { return; }
    }
    ctx->pc = 0x2987C4u;
    // 0x2987c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2987C4u;
    {
        const bool branch_taken_0x2987c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2987c4) {
            ctx->pc = 0x2987C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2987C4u;
            // 0x2987c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2987D4u;
            goto label_2987d4;
        }
    }
    ctx->pc = 0x2987CCu;
    // 0x2987cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2987CCu;
    {
        const bool branch_taken_0x2987cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987CCu;
            // 0x2987d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987cc) {
            ctx->pc = 0x2987E4u;
            goto label_2987e4;
        }
    }
    ctx->pc = 0x2987D4u;
label_2987d4:
    // 0x2987d4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2987D4u;
    {
        const bool branch_taken_0x2987d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987D4u;
            // 0x2987d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987d4) {
            ctx->pc = 0x298788u;
            runtime->cooperativeGuestYield();
            goto label_298788;
        }
    }
    ctx->pc = 0x2987DCu;
    // 0x2987dc: 0xac404b5c  sw          $zero, 0x4B5C($v0)
    ctx->pc = 0x2987dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19292), GPR_U32(ctx, 0));
    // 0x2987e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2987e4:
    // 0x2987e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2987e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2987e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2987e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2987ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2987ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2987f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2987F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2987F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987F0u;
            // 0x2987f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298788u: goto label_298788;
            case 0x298790u: goto label_298790;
            case 0x2987ACu: goto label_2987ac;
            case 0x2987D4u: goto label_2987d4;
            case 0x2987E4u: goto label_2987e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2987F8u;
}

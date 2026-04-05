#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270D80
// Address: 0x270d80 - 0x270e10
void sub_00270D80_0x270d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270D80_0x270d80");
#endif

    ctx->pc = 0x270d80u;

    // 0x270d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270d84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x270d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x270d8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270d90: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x270D90u;
    {
        const bool branch_taken_0x270d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270D90u;
            // 0x270d94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d90) {
            ctx->pc = 0x270DECu;
            goto label_270dec;
        }
    }
    ctx->pc = 0x270D98u;
    // 0x270d98: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x270d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x270d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270da0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270DA0u;
    {
        const bool branch_taken_0x270da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x270DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DA0u;
            // 0x270da4: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270da0) {
            ctx->pc = 0x270DC8u;
            goto label_270dc8;
        }
    }
    ctx->pc = 0x270DA8u;
    // 0x270da8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x270DA8u;
    {
        const bool branch_taken_0x270da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270da8) {
            ctx->pc = 0x270DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270DA8u;
            // 0x270dac: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270DB4u;
            goto label_270db4;
        }
    }
    ctx->pc = 0x270DB0u;
    // 0x270db0: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x270db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_270db4:
    // 0x270db4: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x270db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x270db8: 0xc09c178  jal         func_2705E0
    ctx->pc = 0x270DB8u;
    SET_GPR_U32(ctx, 31, 0x270DC0u);
    ctx->pc = 0x270DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270DB8u;
            // 0x270dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2705E0u;
    if (runtime->hasFunction(0x2705E0u)) {
        auto targetFn = runtime->lookupFunction(0x2705E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DC0u; }
        if (ctx->pc != 0x270DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002705E0_0x2705e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DC0u; }
        if (ctx->pc != 0x270DC0u) { return; }
    }
    ctx->pc = 0x270DC0u;
    // 0x270dc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270DC0u;
    {
        const bool branch_taken_0x270dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DC0u;
            // 0x270dc4: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dc0) {
            ctx->pc = 0x270DF0u;
            goto label_270df0;
        }
    }
    ctx->pc = 0x270DC8u;
label_270dc8:
    // 0x270dc8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x270DC8u;
    {
        const bool branch_taken_0x270dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270dc8) {
            ctx->pc = 0x270DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270DC8u;
            // 0x270dcc: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270DDCu;
            goto label_270ddc;
        }
    }
    ctx->pc = 0x270DD0u;
    // 0x270dd0: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x270dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x270dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x270DD4u;
    {
        const bool branch_taken_0x270dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DD4u;
            // 0x270dd8: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dd4) {
            ctx->pc = 0x270DE0u;
            goto label_270de0;
        }
    }
    ctx->pc = 0x270DDCu;
label_270ddc:
    // 0x270ddc: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x270ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_270de0:
    // 0x270de0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x270de4: 0xc09c228  jal         func_2708A0
    ctx->pc = 0x270DE4u;
    SET_GPR_U32(ctx, 31, 0x270DECu);
    ctx->pc = 0x270DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270DE4u;
            // 0x270de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2708A0u;
    if (runtime->hasFunction(0x2708A0u)) {
        auto targetFn = runtime->lookupFunction(0x2708A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DECu; }
        if (ctx->pc != 0x270DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002708A0_0x2708a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DECu; }
        if (ctx->pc != 0x270DECu) { return; }
    }
    ctx->pc = 0x270DECu;
label_270dec:
    // 0x270dec: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_270df0:
    // 0x270df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270df4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270DF4u;
    {
        const bool branch_taken_0x270df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270DF4u;
            // 0x270df8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270df4) {
            ctx->pc = 0x270E04u;
            goto label_270e04;
        }
    }
    ctx->pc = 0x270DFCu;
    // 0x270dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270e00: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x270e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_270e04:
    // 0x270e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e08: 0x3e00008  jr          $ra
    ctx->pc = 0x270E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E08u;
            // 0x270e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270DB4u: goto label_270db4;
            case 0x270DC8u: goto label_270dc8;
            case 0x270DDCu: goto label_270ddc;
            case 0x270DE0u: goto label_270de0;
            case 0x270DECu: goto label_270dec;
            case 0x270DF0u: goto label_270df0;
            case 0x270E04u: goto label_270e04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270E10u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143d70
// Address: 0x143d70 - 0x143e00
void entry_143d70_0x143e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143d70_0x143e00");
#endif

    ctx->pc = 0x143d70u;

    // 0x143d70: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x143d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143d78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x143d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143d80: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x143d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x143d84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x143D84u;
    {
        const bool branch_taken_0x143d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D84u;
            // 0x143d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d84) {
            ctx->pc = 0x143DF0u;
            goto label_143df0;
        }
    }
    ctx->pc = 0x143D8Cu;
    // 0x143d8c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143d90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143d94: 0x24421750  addiu       $v0, $v0, 0x1750
    ctx->pc = 0x143d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5968));
    // 0x143d98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143d9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143da0: 0x400008  jr          $v0
    ctx->pc = 0x143DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143DA8u: goto label_143da8;
            case 0x143DC4u: goto label_143dc4;
            case 0x143DD8u: goto label_143dd8;
            case 0x143DE0u: goto label_143de0;
            case 0x143DECu: goto label_143dec;
            case 0x143DF0u: goto label_143df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143DA8u;
label_143da8:
    // 0x143da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143dac: 0xc0a441e  jal         func_291078
    ctx->pc = 0x143DACu;
    SET_GPR_U32(ctx, 31, 0x143DB4u);
    ctx->pc = 0x143DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143DACu;
            // 0x143db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291078u;
    if (runtime->hasFunction(0x291078u)) {
        auto targetFn = runtime->lookupFunction(0x291078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DB4u; }
        if (ctx->pc != 0x143DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291078_0x2910b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DB4u; }
        if (ctx->pc != 0x143DB4u) { return; }
    }
    ctx->pc = 0x143DB4u;
    // 0x143db4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x143db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143db8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x143db8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x143dbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x143DBCu;
    {
        const bool branch_taken_0x143dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DBCu;
            // 0x143dc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dbc) {
            ctx->pc = 0x143DF4u;
            goto label_143df4;
        }
    }
    ctx->pc = 0x143DC4u;
label_143dc4:
    // 0x143dc4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x143dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143dc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x143dcc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x143dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x143dd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143DD0u;
    {
        const bool branch_taken_0x143dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DD0u;
            // 0x143dd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dd0) {
            ctx->pc = 0x143DF4u;
            goto label_143df4;
        }
    }
    ctx->pc = 0x143DD8u;
label_143dd8:
    // 0x143dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143DD8u;
    {
        const bool branch_taken_0x143dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DD8u;
            // 0x143ddc: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dd8) {
            ctx->pc = 0x143DF0u;
            goto label_143df0;
        }
    }
    ctx->pc = 0x143DE0u;
label_143de0:
    // 0x143de0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x143de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143DE4u;
    {
        const bool branch_taken_0x143de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DE4u;
            // 0x143de8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143de4) {
            ctx->pc = 0x143DF0u;
            goto label_143df0;
        }
    }
    ctx->pc = 0x143DECu;
label_143dec:
    // 0x143dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143df0:
    // 0x143df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143df4:
    // 0x143df4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x143df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143df8: 0x3e00008  jr          $ra
    ctx->pc = 0x143DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DF8u;
            // 0x143dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143DA8u: goto label_143da8;
            case 0x143DC4u: goto label_143dc4;
            case 0x143DD8u: goto label_143dd8;
            case 0x143DE0u: goto label_143de0;
            case 0x143DECu: goto label_143dec;
            case 0x143DF0u: goto label_143df0;
            case 0x143DF4u: goto label_143df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143E00u;
}

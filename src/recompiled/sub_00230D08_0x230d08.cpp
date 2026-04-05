#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230D08
// Address: 0x230d08 - 0x230ee8
void sub_00230D08_0x230d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230D08_0x230d08");
#endif

    ctx->pc = 0x230d08u;

    // 0x230d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230d1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230d24: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x230d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x230d28: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x230d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x230d2c: 0x40f809  jalr        $v0
    ctx->pc = 0x230D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D34u);
        ctx->pc = 0x230D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D2Cu;
            // 0x230d30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230D34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230D34u; }
            if (ctx->pc != 0x230D34u) { return; }
        }
        }
    }
    ctx->pc = 0x230D34u;
    // 0x230d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D34u;
            // 0x230d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D50u;
            goto label_230d50;
        }
    }
    ctx->pc = 0x230D3Cu;
    // 0x230d3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230d40: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x230d44: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x230d48: 0x40f809  jalr        $v0
    ctx->pc = 0x230D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D50u);
        ctx->pc = 0x230D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D48u;
            // 0x230d4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230D50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230D50u; }
            if (ctx->pc != 0x230D50u) { return; }
        }
        }
    }
    ctx->pc = 0x230D50u;
label_230d50:
    // 0x230d50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x230D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D5Cu;
            // 0x230d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230D64u;
    // 0x230d64: 0x0  nop
    ctx->pc = 0x230d64u;
    // NOP
    // 0x230d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230d6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x230d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230d7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d80: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x230d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230d84: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x230d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x230d88: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x230d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x230d8c: 0x40f809  jalr        $v0
    ctx->pc = 0x230D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D94u);
        ctx->pc = 0x230D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D8Cu;
            // 0x230d90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230D94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230D94u; }
            if (ctx->pc != 0x230D94u) { return; }
        }
        }
    }
    ctx->pc = 0x230D94u;
    // 0x230d94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x230D94u;
    {
        const bool branch_taken_0x230d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230D94u;
            // 0x230d98: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d94) {
            ctx->pc = 0x230E38u;
            goto label_230e38;
        }
    }
    ctx->pc = 0x230D9Cu;
    // 0x230d9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x230d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230da0: 0x51180b  movn        $v1, $v0, $s1
    ctx->pc = 0x230da0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x230da4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x230da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x230da8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230DA8u;
    {
        const bool branch_taken_0x230da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DA8u;
            // 0x230dac: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230da8) {
            ctx->pc = 0x230DC0u;
            goto label_230dc0;
        }
    }
    ctx->pc = 0x230DB0u;
    // 0x230db0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230db4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230DB4u;
    {
        const bool branch_taken_0x230db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DB4u;
            // 0x230db8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db4) {
            ctx->pc = 0x230DC8u;
            goto label_230dc8;
        }
    }
    ctx->pc = 0x230DBCu;
    // 0x230dbc: 0x0  nop
    ctx->pc = 0x230dbcu;
    // NOP
label_230dc0:
    // 0x230dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230dc4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x230dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_230dc8:
    // 0x230dc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230dcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DCCu;
            // 0x230dd0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230DDCu;
            goto label_230ddc;
        }
    }
    ctx->pc = 0x230DD4u;
    // 0x230dd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230DD4u;
    {
        const bool branch_taken_0x230dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DD4u;
            // 0x230dd8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dd4) {
            ctx->pc = 0x230DE0u;
            goto label_230de0;
        }
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x230ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_230de0:
    // 0x230de0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x230de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x230de4: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x230de4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x230de8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x230dec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x230decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x230df0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x230df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x230df4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x230df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x230df8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230DF8u;
            // 0x230dfc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230E28u;
            goto label_230e28;
        }
    }
    ctx->pc = 0x230E00u;
    // 0x230e00: 0x3082fffa  andi        $v0, $a0, 0xFFFA
    ctx->pc = 0x230e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65530);
    // 0x230e04: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x230e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x230e08: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x230e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x230e0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e10: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x230e14: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x230e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x230e18: 0x40f809  jalr        $v0
    ctx->pc = 0x230E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230E20u);
        ctx->pc = 0x230E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E18u;
            // 0x230e1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230E20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230E20u; }
            if (ctx->pc != 0x230E20u) { return; }
        }
        }
    }
    ctx->pc = 0x230E20u;
    // 0x230e20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230E20u;
    {
        const bool branch_taken_0x230e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E20u;
            // 0x230e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e20) {
            ctx->pc = 0x230E3Cu;
            goto label_230e3c;
        }
    }
    ctx->pc = 0x230E28u;
label_230e28:
    // 0x230e28: 0x3082fffa  andi        $v0, $a0, 0xFFFA
    ctx->pc = 0x230e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65530);
    // 0x230e2c: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x230e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x230e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230E30u;
    {
        const bool branch_taken_0x230e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E30u;
            // 0x230e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e30) {
            ctx->pc = 0x230E3Cu;
            goto label_230e3c;
        }
    }
    ctx->pc = 0x230E38u;
label_230e38:
    // 0x230e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230e3c:
    // 0x230e3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x230e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230e48: 0x3e00008  jr          $ra
    ctx->pc = 0x230E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E48u;
            // 0x230e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230E50u;
    // 0x230e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230e54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x230e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x230e58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x230e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x230e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230e64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x230e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x230e68: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x230e6c: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x230E6Cu;
    {
        const bool branch_taken_0x230e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e6c) {
            ctx->pc = 0x230E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230E6Cu;
            // 0x230e70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230ED4u;
            goto label_230ed4;
        }
    }
    ctx->pc = 0x230E74u;
    // 0x230e74: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x230e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_230e78:
    // 0x230e78: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e80: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x230e80u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x230e84: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x230e84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x230e88: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x230e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x230e8c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x230E8Cu;
    {
        const bool branch_taken_0x230e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E8Cu;
            // 0x230e90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e8c) {
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230E94u;
    // 0x230e94: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x230e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x230e98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230E98u;
    {
        const bool branch_taken_0x230e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230E98u;
            // 0x230e9c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e98) {
            ctx->pc = 0x230EB8u;
            goto label_230eb8;
        }
    }
    ctx->pc = 0x230EA0u;
    // 0x230ea0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x230ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x230ea4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x230ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x230ea8: 0x40f809  jalr        $v0
    ctx->pc = 0x230EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230EB0u);
        ctx->pc = 0x230EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EA8u;
            // 0x230eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230EB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230EB0u; }
            if (ctx->pc != 0x230EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x230EB0u;
    // 0x230eb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230EB0u;
    {
        const bool branch_taken_0x230eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230eb0) {
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230EB8u;
label_230eb8:
    // 0x230eb8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x230ebc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x230ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x230ec0: 0x40f809  jalr        $v0
    ctx->pc = 0x230EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230EC8u);
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EC0u;
            // 0x230ec4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230EC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230EC8u; }
            if (ctx->pc != 0x230EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x1640ffeb  bnez        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x230EC8u;
    {
        const bool branch_taken_0x230ec8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EC8u;
            // 0x230ecc: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec8) {
            ctx->pc = 0x230E78u;
            runtime->cooperativeGuestYield();
            goto label_230e78;
        }
    }
    ctx->pc = 0x230ED0u;
    // 0x230ed0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x230ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230ed4:
    // 0x230ed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x230ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230ed8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x230ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x230EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230EE0u;
            // 0x230ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230D50u: goto label_230d50;
            case 0x230DC0u: goto label_230dc0;
            case 0x230DC8u: goto label_230dc8;
            case 0x230DDCu: goto label_230ddc;
            case 0x230DE0u: goto label_230de0;
            case 0x230E28u: goto label_230e28;
            case 0x230E38u: goto label_230e38;
            case 0x230E3Cu: goto label_230e3c;
            case 0x230E78u: goto label_230e78;
            case 0x230EB8u: goto label_230eb8;
            case 0x230EC8u: goto label_230ec8;
            case 0x230ED4u: goto label_230ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230EE8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153DA0
// Address: 0x153da0 - 0x154370
void sub_00153DA0_0x153da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153DA0_0x153da0");
#endif

    ctx->pc = 0x153da0u;

    // 0x153da0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x153da4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x153da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x153da8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x153da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x153dac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x153dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153db0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x153db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x153db4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x153db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x153db8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x153db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x153dbc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x153dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x153dc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x153dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x153dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153dc8: 0x8e850048  lw          $a1, 0x48($s4)
    ctx->pc = 0x153dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x153dcc: 0x50a00136  beql        $a1, $zero, . + 4 + (0x136 << 2)
    ctx->pc = 0x153DCCu;
    {
        const bool branch_taken_0x153dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153dcc) {
            ctx->pc = 0x153DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153DCCu;
            // 0x153dd0: 0x92820042  lbu         $v0, 0x42($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 66)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1542A8u;
            goto label_1542a8;
        }
    }
    ctx->pc = 0x153DD4u;
    // 0x153dd4: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x153dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x153dd8: 0x54400133  bnel        $v0, $zero, . + 4 + (0x133 << 2)
    ctx->pc = 0x153DD8u;
    {
        const bool branch_taken_0x153dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153dd8) {
            ctx->pc = 0x153DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153DD8u;
            // 0x153ddc: 0x92820042  lbu         $v0, 0x42($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 66)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1542A8u;
            goto label_1542a8;
        }
    }
    ctx->pc = 0x153DE0u;
    // 0x153de0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x153de0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153de4: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x153de8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x153dec: 0x26c3e848  addiu       $v1, $s6, -0x17B8
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961224));
    // 0x153df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153df8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153dfc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x153dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x153e00: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x153e04: 0x40f809  jalr        $v0
    ctx->pc = 0x153E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153E0Cu);
        ctx->pc = 0x153E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E04u;
            // 0x153e08: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153E0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153E0Cu; }
            if (ctx->pc != 0x153E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x153E0Cu;
    // 0x153e0c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x153e10: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x153e14: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x153e18: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x153e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x153e1c: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x153e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x153e20: 0x12640120  beq         $s3, $a0, . + 4 + (0x120 << 2)
    ctx->pc = 0x153E20u;
    {
        const bool branch_taken_0x153e20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x153E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E20u;
            // 0x153e24: 0xac430034  sw          $v1, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e20) {
            ctx->pc = 0x1542A4u;
            goto label_1542a4;
        }
    }
    ctx->pc = 0x153E28u;
    // 0x153e28: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x153e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x153e2c: 0x0  nop
    ctx->pc = 0x153e2cu;
    // NOP
label_153e30:
    // 0x153e30: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x153e34: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x153e38: 0x40f809  jalr        $v0
    ctx->pc = 0x153E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153E40u);
        ctx->pc = 0x153E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E38u;
            // 0x153e3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153E40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153E40u; }
            if (ctx->pc != 0x153E40u) { return; }
        }
        }
    }
    ctx->pc = 0x153E40u;
    // 0x153e40: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x153e44: 0x544a008f  bnel        $v0, $t2, . + 4 + (0x8F << 2)
    ctx->pc = 0x153E44u;
    {
        const bool branch_taken_0x153e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x153e44) {
            ctx->pc = 0x153E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153E44u;
            // 0x153e48: 0x8e660024  lw          $a2, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154084u;
            goto label_154084;
        }
    }
    ctx->pc = 0x153E4Cu;
    // 0x153e4c: 0x86620024  lh          $v0, 0x24($s3)
    ctx->pc = 0x153e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x153e50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x153e54: 0x26830060  addiu       $v1, $s4, 0x60
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x153e58: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x153e58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153e5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x153e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x153e60: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x153e64: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x153e68: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x153e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x153e6c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x153E6Cu;
    {
        const bool branch_taken_0x153e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E6Cu;
            // 0x153e70: 0x26c2e848  addiu       $v0, $s6, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e6c) {
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153E74u;
    // 0x153e74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e78: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x153e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x153e7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153e80: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x153e84: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x153e88: 0x40f809  jalr        $v0
    ctx->pc = 0x153E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153E90u);
        ctx->pc = 0x153E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E88u;
            // 0x153e8c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153E90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153E90u; }
            if (ctx->pc != 0x153E90u) { return; }
        }
        }
    }
    ctx->pc = 0x153E90u;
    // 0x153e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x153e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e94: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x153E94u;
    SET_GPR_U32(ctx, 31, 0x153E9Cu);
    ctx->pc = 0x153E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153E94u;
            // 0x153e98: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153E9Cu; }
        if (ctx->pc != 0x153E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153E9Cu; }
        if (ctx->pc != 0x153E9Cu) { return; }
    }
    ctx->pc = 0x153E9Cu;
    // 0x153e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ea0: 0xc08e210  jal         func_238840
    ctx->pc = 0x153EA0u;
    SET_GPR_U32(ctx, 31, 0x153EA8u);
    ctx->pc = 0x153EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153EA0u;
            // 0x153ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238840u;
    if (runtime->hasFunction(0x238840u)) {
        auto targetFn = runtime->lookupFunction(0x238840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EA8u; }
        if (ctx->pc != 0x153EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238840_0x238848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EA8u; }
        if (ctx->pc != 0x153EA8u) { return; }
    }
    ctx->pc = 0x153EA8u;
    // 0x153ea8: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x153ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x153eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153eb0: 0xc08e214  jal         func_238850
    ctx->pc = 0x153EB0u;
    SET_GPR_U32(ctx, 31, 0x153EB8u);
    ctx->pc = 0x153EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153EB0u;
            // 0x153eb4: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238850u;
    if (runtime->hasFunction(0x238850u)) {
        auto targetFn = runtime->lookupFunction(0x238850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EB8u; }
        if (ctx->pc != 0x153EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238850_0x238858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EB8u; }
        if (ctx->pc != 0x153EB8u) { return; }
    }
    ctx->pc = 0x153EB8u;
    // 0x153eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ebc: 0xc08e212  jal         func_238848
    ctx->pc = 0x153EBCu;
    SET_GPR_U32(ctx, 31, 0x153EC4u);
    ctx->pc = 0x153EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153EBCu;
            // 0x153ec0: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238848u;
    if (runtime->hasFunction(0x238848u)) {
        auto targetFn = runtime->lookupFunction(0x238848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EC4u; }
        if (ctx->pc != 0x153EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238848_0x238850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153EC4u; }
        if (ctx->pc != 0x153EC4u) { return; }
    }
    ctx->pc = 0x153EC4u;
    // 0x153ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ec8: 0xc08e216  jal         func_238858
    ctx->pc = 0x153EC8u;
    SET_GPR_U32(ctx, 31, 0x153ED0u);
    ctx->pc = 0x153ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153EC8u;
            // 0x153ecc: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238858u;
    if (runtime->hasFunction(0x238858u)) {
        auto targetFn = runtime->lookupFunction(0x238858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ED0u; }
        if (ctx->pc != 0x153ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238858_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ED0u; }
        if (ctx->pc != 0x153ED0u) { return; }
    }
    ctx->pc = 0x153ED0u;
    // 0x153ed0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x153ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x153ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ed8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x153ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x153edc: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x153edcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x153ee0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x153ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x153ee4: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x153ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x153ee8: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x153ee8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x153eec: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x153eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x153ef0: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x153ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x153ef4: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x153ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x153ef8: 0x96420016  lhu         $v0, 0x16($s2)
    ctx->pc = 0x153ef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x153efc: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x153efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f00: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x153f00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x153f04: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x153f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f08: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x153f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x153f0c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x153f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f10: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x153f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x153f14: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x153f14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f18: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x153f18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x153f1c: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x153f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f20: 0x96420020  lhu         $v0, 0x20($s2)
    ctx->pc = 0x153f20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x153f24: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x153f24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x153f28: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x153f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f2c: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x153f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x153f30: 0x96420026  lhu         $v0, 0x26($s2)
    ctx->pc = 0x153f30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x153f34: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x153f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f38: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x153f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x153f3c: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x153f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f40: 0x92420029  lbu         $v0, 0x29($s2)
    ctx->pc = 0x153f40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x153f44: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x153f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f48: 0x9242002a  lbu         $v0, 0x2A($s2)
    ctx->pc = 0x153f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x153f4c: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x153f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f50: 0x9242002b  lbu         $v0, 0x2B($s2)
    ctx->pc = 0x153f50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 43)));
    // 0x153f54: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x153f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f58: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x153f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x153f5c: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x153f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f60: 0x9642002e  lhu         $v0, 0x2E($s2)
    ctx->pc = 0x153f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x153f64: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x153f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x153f68: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x153f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x153f6c: 0x92420031  lbu         $v0, 0x31($s2)
    ctx->pc = 0x153f6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x153f70: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x153f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x153f74: 0xa2020031  sb          $v0, 0x31($s0)
    ctx->pc = 0x153f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x153f78: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x153f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x153f7c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x153f80: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x153f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x153f84: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x153f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x153f88: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x153f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x153f8c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x153f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x153f90: 0xa6000040  sh          $zero, 0x40($s0)
    ctx->pc = 0x153f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x153f94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x153f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f98: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x153f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x153f9c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x153f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x153fa0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x153fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x153fa4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x153fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x153fa8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x153fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x153fac: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x153fb0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x153fb4: 0x40f809  jalr        $v0
    ctx->pc = 0x153FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153FBCu);
        ctx->pc = 0x153FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153FB4u;
            // 0x153fb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153FBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153FBCu; }
            if (ctx->pc != 0x153FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x153FBCu;
    // 0x153fbc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x153fc0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x153fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x153fc4: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x153fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_153fc8:
    // 0x153fc8: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x153fcc: 0x26460022  addiu       $a2, $s2, 0x22
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
    // 0x153fd0: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x153fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x153fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153fd8: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x153fdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x153fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153fe0: 0x95020012  lhu         $v0, 0x12($t0)
    ctx->pc = 0x153fe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x153fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153fe8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x153fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x153fec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153FECu;
    {
        const bool branch_taken_0x153fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153FECu;
            // 0x153ff0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fec) {
            ctx->pc = 0x154050u;
            goto label_154050;
        }
    }
    ctx->pc = 0x153FF4u;
    // 0x153ff4: 0x0  nop
    ctx->pc = 0x153ff4u;
    // NOP
label_153ff8:
    // 0x153ff8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x153ffc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154000: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x154004: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154008: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15400c: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x15400cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154010: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x154010u;
    {
        const bool branch_taken_0x154010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154010) {
            ctx->pc = 0x154014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154010u;
            // 0x154014: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154040u;
            goto label_154040;
        }
    }
    ctx->pc = 0x154018u;
    // 0x154018: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15401c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15401cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x154020: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x154020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x154024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154028: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154028u;
    {
        const bool branch_taken_0x154028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154028u;
            // 0x15402c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154028) {
            ctx->pc = 0x154050u;
            goto label_154050;
        }
    }
    ctx->pc = 0x154030u;
    // 0x154030: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x154034: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x154038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154038u;
    {
        const bool branch_taken_0x154038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154038u;
            // 0x15403c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154038) {
            ctx->pc = 0x154058u;
            goto label_154058;
        }
    }
    ctx->pc = 0x154040u;
label_154040:
    // 0x154040: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x154044: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x154044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154048: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x154048u;
    {
        const bool branch_taken_0x154048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154048u;
            // 0x15404c: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154048) {
            ctx->pc = 0x153FF8u;
            runtime->cooperativeGuestYield();
            goto label_153ff8;
        }
    }
    ctx->pc = 0x154050u;
label_154050:
    // 0x154050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154054: 0x0  nop
    ctx->pc = 0x154054u;
    // NOP
label_154058:
    // 0x154058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15405c: 0xc041d66  jal         func_107598
    ctx->pc = 0x15405Cu;
    SET_GPR_U32(ctx, 31, 0x154064u);
    ctx->pc = 0x154060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15405Cu;
            // 0x154060: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154064u; }
        if (ctx->pc != 0x154064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154064u; }
        if (ctx->pc != 0x154064u) { return; }
    }
    ctx->pc = 0x154064u;
    // 0x154064: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x154068: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x154068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x15406c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x15406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x154070: 0x60f809  jalr        $v1
    ctx->pc = 0x154070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154078u);
        ctx->pc = 0x154074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154070u;
            // 0x154074: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x154078u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x154078u; }
            if (ctx->pc != 0x154078u) { return; }
        }
        }
    }
    ctx->pc = 0x154078u;
    // 0x154078: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x154078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x15407c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x15407Cu;
    {
        const bool branch_taken_0x15407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15407Cu;
            // 0x154080: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15407c) {
            ctx->pc = 0x154290u;
            goto label_154290;
        }
    }
    ctx->pc = 0x154084u;
label_154084:
    // 0x154084: 0x14c0001c  bnez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x154084u;
    {
        const bool branch_taken_0x154084 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x154088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154084u;
            // 0x154088: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154084) {
            ctx->pc = 0x1540F8u;
            goto label_1540f8;
        }
    }
    ctx->pc = 0x15408Cu;
    // 0x15408c: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x154090: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x154090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x154094: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x154098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x154098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15409c: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x15409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1540a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1540a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540a4: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x1540a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x1540a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1540a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1540ac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1540acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1540b0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1540B0u;
    {
        const bool branch_taken_0x1540b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540B0u;
            // 0x1540b4: 0xac6a0000  sw          $t2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540b0) {
            ctx->pc = 0x1541A0u;
            goto label_1541a0;
        }
    }
    ctx->pc = 0x1540B8u;
label_1540b8:
    // 0x1540b8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1540b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1540bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1540bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1540c0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1540c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1540c4: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1540c8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1540c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1540cc: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x1540ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1540d0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1540D0u;
    {
        const bool branch_taken_0x1540d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540d0) {
            ctx->pc = 0x1540D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1540D0u;
            // 0x1540d4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154168u;
            goto label_154168;
        }
    }
    ctx->pc = 0x1540D8u;
    // 0x1540d8: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x1540d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x1540dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1540e0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1540e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1540e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1540E4u;
    {
        const bool branch_taken_0x1540e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540E4u;
            // 0x1540e8: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540e4) {
            ctx->pc = 0x1540B8u;
            runtime->cooperativeGuestYield();
            goto label_1540b8;
        }
    }
    ctx->pc = 0x1540ECu;
    // 0x1540ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1540ECu;
    {
        const bool branch_taken_0x1540ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540ECu;
            // 0x1540f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540ec) {
            ctx->pc = 0x1541A8u;
            goto label_1541a8;
        }
    }
    ctx->pc = 0x1540F4u;
    // 0x1540f4: 0x0  nop
    ctx->pc = 0x1540f4u;
    // NOP
label_1540f8:
    // 0x1540f8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1540F8u;
    {
        const bool branch_taken_0x1540f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1540F8u;
            // 0x1540fc: 0x30c2ff7f  andi        $v0, $a2, 0xFF7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65407);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540f8) {
            ctx->pc = 0x1541D4u;
            goto label_1541d4;
        }
    }
    ctx->pc = 0x154100u;
    // 0x154100: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x154100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x154104: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x154108: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x15410c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x154110: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x154114: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x154118: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x154118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15411c: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x154120: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154124: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x154128: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x154128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x15412c: 0x95030012  lhu         $v1, 0x12($t0)
    ctx->pc = 0x15412cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x154130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154134: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x154134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x154138: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x154138u;
    {
        const bool branch_taken_0x154138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154138u;
            // 0x15413c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154138) {
            ctx->pc = 0x1541A0u;
            goto label_1541a0;
        }
    }
    ctx->pc = 0x154140u;
label_154140:
    // 0x154140: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x154144: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x154144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154148: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x154148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15414c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x15414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154150: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x154154: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x154154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154158: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x154158u;
    {
        const bool branch_taken_0x154158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154158) {
            ctx->pc = 0x15415Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154158u;
            // 0x15415c: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154190u;
            goto label_154190;
        }
    }
    ctx->pc = 0x154160u;
    // 0x154160: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x154164: 0x0  nop
    ctx->pc = 0x154164u;
    // NOP
label_154168:
    // 0x154168: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x15416c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x154170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154174: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x154174u;
    {
        const bool branch_taken_0x154174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154174u;
            // 0x154178: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154174) {
            ctx->pc = 0x1541A0u;
            goto label_1541a0;
        }
    }
    ctx->pc = 0x15417Cu;
    // 0x15417c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x154180: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x154184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x154184u;
    {
        const bool branch_taken_0x154184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154184u;
            // 0x154188: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154184) {
            ctx->pc = 0x1541A8u;
            goto label_1541a8;
        }
    }
    ctx->pc = 0x15418Cu;
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
label_154190:
    // 0x154190: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x154194: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x154194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154198: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x154198u;
    {
        const bool branch_taken_0x154198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154198u;
            // 0x15419c: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154198) {
            ctx->pc = 0x154140u;
            runtime->cooperativeGuestYield();
            goto label_154140;
        }
    }
    ctx->pc = 0x1541A0u;
label_1541a0:
    // 0x1541a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1541a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541a4: 0x0  nop
    ctx->pc = 0x1541a4u;
    // NOP
label_1541a8:
    // 0x1541a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1541a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541ac: 0xc041d66  jal         func_107598
    ctx->pc = 0x1541ACu;
    SET_GPR_U32(ctx, 31, 0x1541B4u);
    ctx->pc = 0x1541B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1541ACu;
            // 0x1541b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541B4u; }
        if (ctx->pc != 0x1541B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541B4u; }
        if (ctx->pc != 0x1541B4u) { return; }
    }
    ctx->pc = 0x1541B4u;
    // 0x1541b4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1541b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1541b8: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1541bc: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1541c0: 0x60f809  jalr        $v1
    ctx->pc = 0x1541C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1541C8u);
        ctx->pc = 0x1541C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541C0u;
            // 0x1541c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1541C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1541C8u; }
            if (ctx->pc != 0x1541C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1541C8u;
    // 0x1541c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1541cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1541CCu;
    {
        const bool branch_taken_0x1541cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541CCu;
            // 0x1541d0: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541cc) {
            ctx->pc = 0x154290u;
            goto label_154290;
        }
    }
    ctx->pc = 0x1541D4u;
label_1541d4:
    // 0x1541d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1541d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1541d8: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1541dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1541e0: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1541e4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1541e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1541e8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1541e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1541ec: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1541f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1541f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541f4: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x1541f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1541f8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1541f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1541fc: 0x95030012  lhu         $v1, 0x12($t0)
    ctx->pc = 0x1541fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x154200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154204: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x154204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x154208: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x154208u;
    {
        const bool branch_taken_0x154208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154208u;
            // 0x15420c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154208) {
            ctx->pc = 0x154268u;
            goto label_154268;
        }
    }
    ctx->pc = 0x154210u;
label_154210:
    // 0x154210: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x154214: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x154214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154218: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15421c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x154220: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x154224: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x154224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154228: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x154228u;
    {
        const bool branch_taken_0x154228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154228) {
            ctx->pc = 0x15422Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154228u;
            // 0x15422c: 0x95020012  lhu         $v0, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            goto label_154258;
        }
    }
    ctx->pc = 0x154230u;
    // 0x154230: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x154234: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x154234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x154238: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x154238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15423c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154240u;
    {
        const bool branch_taken_0x154240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154240u;
            // 0x154244: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154240) {
            ctx->pc = 0x154268u;
            goto label_154268;
        }
    }
    ctx->pc = 0x154248u;
    // 0x154248: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15424c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x154250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154250u;
    {
        const bool branch_taken_0x154250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154250u;
            // 0x154254: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154250) {
            ctx->pc = 0x154270u;
            goto label_154270;
        }
    }
    ctx->pc = 0x154258u;
label_154258:
    // 0x154258: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15425c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x15425cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x154260: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x154260u;
    {
        const bool branch_taken_0x154260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154260u;
            // 0x154264: 0x1234823  subu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154260) {
            ctx->pc = 0x154210u;
            runtime->cooperativeGuestYield();
            goto label_154210;
        }
    }
    ctx->pc = 0x154268u;
label_154268:
    // 0x154268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15426c: 0x0  nop
    ctx->pc = 0x15426cu;
    // NOP
label_154270:
    // 0x154270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154274: 0xc041d66  jal         func_107598
    ctx->pc = 0x154274u;
    SET_GPR_U32(ctx, 31, 0x15427Cu);
    ctx->pc = 0x154278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154274u;
            // 0x154278: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15427Cu; }
        if (ctx->pc != 0x15427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15427Cu; }
        if (ctx->pc != 0x15427Cu) { return; }
    }
    ctx->pc = 0x15427Cu;
    // 0x15427c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x154280: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x154284: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x154284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x154288: 0x60f809  jalr        $v1
    ctx->pc = 0x154288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154290u);
        ctx->pc = 0x15428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154288u;
            // 0x15428c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x154290u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x154290u; }
            if (ctx->pc != 0x154290u) { return; }
        }
        }
    }
    ctx->pc = 0x154290u;
label_154290:
    // 0x154290: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x154294: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154298: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15429c: 0x5662fee4  bnel        $s3, $v0, . + 4 + (-0x11C << 2)
    ctx->pc = 0x15429Cu;
    {
        const bool branch_taken_0x15429c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15429c) {
            ctx->pc = 0x1542A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15429Cu;
            // 0x1542a0: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153E30u;
            runtime->cooperativeGuestYield();
            goto label_153e30;
        }
    }
    ctx->pc = 0x1542A4u;
label_1542a4:
    // 0x1542a4: 0x92820042  lbu         $v0, 0x42($s4)
    ctx->pc = 0x1542a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 66)));
label_1542a8:
    // 0x1542a8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1542A8u;
    {
        const bool branch_taken_0x1542a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542A8u;
            // 0x1542ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542a8) {
            ctx->pc = 0x154348u;
            goto label_154348;
        }
    }
    ctx->pc = 0x1542B0u;
    // 0x1542b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1542b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542b4: 0x0  nop
    ctx->pc = 0x1542b4u;
    // NOP
label_1542b8:
    // 0x1542b8: 0x2682004c  addiu       $v0, $s4, 0x4C
    ctx->pc = 0x1542b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x1542bc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1542c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1542c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1542c4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1542C4u;
    {
        const bool branch_taken_0x1542c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1542c4) {
            ctx->pc = 0x1542C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1542C4u;
            // 0x1542c8: 0x92820042  lbu         $v0, 0x42($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 66)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154338u;
            goto label_154338;
        }
    }
    ctx->pc = 0x1542CCu;
    // 0x1542cc: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1542d0: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1542d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1542d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1542d8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1542d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1542dc: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1542e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1542e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1542e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1542e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1542e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1542ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1542ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1542f0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1542f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1542f4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1542f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1542F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154300u);
        ctx->pc = 0x1542FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542F8u;
            // 0x1542fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x154300u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x154300u; }
            if (ctx->pc != 0x154300u) { return; }
        }
        }
    }
    ctx->pc = 0x154300u;
    // 0x154300: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x154300u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154304: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x154304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x154308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15430c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154314: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154318: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x154318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15431c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15431cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x154320: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x154320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x154324: 0x40f809  jalr        $v0
    ctx->pc = 0x154324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15432Cu);
        ctx->pc = 0x154328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154324u;
            // 0x154328: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15432Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15432Cu; }
            if (ctx->pc != 0x15432Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15432Cu;
    // 0x15432c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154330: 0xac540060  sw          $s4, 0x60($v0)
    ctx->pc = 0x154330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 20));
    // 0x154334: 0x92820042  lbu         $v0, 0x42($s4)
    ctx->pc = 0x154334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 66)));
label_154338:
    // 0x154338: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15433c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15433cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x154340: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x154340u;
    {
        const bool branch_taken_0x154340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154340u;
            // 0x154344: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154340) {
            ctx->pc = 0x1542B8u;
            runtime->cooperativeGuestYield();
            goto label_1542b8;
        }
    }
    ctx->pc = 0x154348u;
label_154348:
    // 0x154348: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x154348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15434c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15434cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154350: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x154350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154354: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x154354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154358: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x154358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15435c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x15435cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154360: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x154360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154368: 0x3e00008  jr          $ra
    ctx->pc = 0x154368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154368u;
            // 0x15436c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153E30u: goto label_153e30;
            case 0x153FC8u: goto label_153fc8;
            case 0x153FF8u: goto label_153ff8;
            case 0x154040u: goto label_154040;
            case 0x154050u: goto label_154050;
            case 0x154058u: goto label_154058;
            case 0x154084u: goto label_154084;
            case 0x1540B8u: goto label_1540b8;
            case 0x1540F8u: goto label_1540f8;
            case 0x154140u: goto label_154140;
            case 0x154168u: goto label_154168;
            case 0x154190u: goto label_154190;
            case 0x1541A0u: goto label_1541a0;
            case 0x1541A8u: goto label_1541a8;
            case 0x1541D4u: goto label_1541d4;
            case 0x154210u: goto label_154210;
            case 0x154258u: goto label_154258;
            case 0x154268u: goto label_154268;
            case 0x154270u: goto label_154270;
            case 0x154290u: goto label_154290;
            case 0x1542A4u: goto label_1542a4;
            case 0x1542A8u: goto label_1542a8;
            case 0x1542B8u: goto label_1542b8;
            case 0x154338u: goto label_154338;
            case 0x154348u: goto label_154348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154370u;
}

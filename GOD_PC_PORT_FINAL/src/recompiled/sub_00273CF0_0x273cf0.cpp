#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273CF0
// Address: 0x273cf0 - 0x2740d0
void sub_00273CF0_0x273cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273CF0_0x273cf0");
#endif

    ctx->pc = 0x273cf0u;

    // 0x273cf0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x273cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x273cf4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x273cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x273cf8: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x273cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x273cfc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x273cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d00: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x273d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x273d04: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d08: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x273d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x273d0c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x273d0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d10: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x273d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x273d14: 0x6b0c0  sll         $s6, $a2, 3
    ctx->pc = 0x273d14u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x273d18: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x273d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x273d1c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x273d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273d20: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x273d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x273d24: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x273d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273d28: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x273d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x273d2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x273d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d30: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x273d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x273d34: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x273d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x273d38: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x273d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x273d3c: 0x8ef40040  lw          $s4, 0x40($s7)
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x273d40: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x273d44: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x273d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x273d48: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x273d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x273d4c: 0x24080038  addiu       $t0, $zero, 0x38
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x273d50: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x273d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x273d54: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x273d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x273d58: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x273d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x273d5c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x273d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x273d60: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x273d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x273d64: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x273d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x273d68: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x273d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x273d6c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x273d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x273d70: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x273d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x273d74: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x273d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_273d78:
    // 0x273d78: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x273d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x273d7c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x273d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x273d80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x273d80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273d84: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x273d84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x273d88: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x273d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x273d8c: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x273d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x273d90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273d94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273d98: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x273d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x273d9c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x273d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x273da0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273DA0u;
    {
        const bool branch_taken_0x273da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DA0u;
            // 0x273da4: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273da0) {
            ctx->pc = 0x273DB0u;
            goto label_273db0;
        }
    }
    ctx->pc = 0x273DA8u;
    // 0x273da8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x273da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x273dac: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x273dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_273db0:
    // 0x273db0: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x273db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x273db4: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x273db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x273db8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x273DB8u;
    {
        const bool branch_taken_0x273db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DB8u;
            // 0x273dbc: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273db8) {
            ctx->pc = 0x273D78u;
            runtime->cooperativeGuestYield();
            goto label_273d78;
        }
    }
    ctx->pc = 0x273DC0u;
    // 0x273dc0: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x273dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x273dc4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dc8: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x273dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x273dcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273dd0: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x273DD0u;
    {
        const bool branch_taken_0x273dd0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DD0u;
            // 0x273dd4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dd0) {
            ctx->pc = 0x273E2Cu;
            goto label_273e2c;
        }
    }
    ctx->pc = 0x273DD8u;
    // 0x273dd8: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x273dd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273ddc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_273de0:
    // 0x273de0: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x273de4: 0x3404bdff  ori         $a0, $zero, 0xBDFF
    ctx->pc = 0x273de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48639);
    // 0x273de8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x273de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x273dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273df0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x273df0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273df4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273DF4u;
    {
        const bool branch_taken_0x273df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x273df4) {
            ctx->pc = 0x273E10u;
            goto label_273e10;
        }
    }
    ctx->pc = 0x273DFCu;
    // 0x273dfc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x273e00: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x273e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x273e04: 0x8c5e0010  lw          $fp, 0x10($v0)
    ctx->pc = 0x273e04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x273e08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x273e0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x273e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_273e10:
    // 0x273e10: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x273E10u;
    {
        const bool branch_taken_0x273e10 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E10u;
            // 0x273e14: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e10) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273E18u;
    // 0x273e18: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x273e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x273e1c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x273E1Cu;
    {
        const bool branch_taken_0x273e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E1Cu;
            // 0x273e20: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e1c) {
            ctx->pc = 0x273DE0u;
            runtime->cooperativeGuestYield();
            goto label_273de0;
        }
    }
    ctx->pc = 0x273E24u;
    // 0x273e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273E24u;
    {
        const bool branch_taken_0x273e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273e24) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273E2Cu;
label_273e2c:
    // 0x273e2c: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x273e2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273e30:
    // 0x273e30: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x273e30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x273e34: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x273e38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E38u;
    {
        const bool branch_taken_0x273e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E38u;
            // 0x273e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e38) {
            ctx->pc = 0x273E4Cu;
            goto label_273e4c;
        }
    }
    ctx->pc = 0x273E40u;
label_273e40:
    // 0x273e40: 0xc09c628  jal         func_2718A0
    ctx->pc = 0x273E40u;
    SET_GPR_U32(ctx, 31, 0x273E48u);
    ctx->pc = 0x273E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273E40u;
            // 0x273e44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2718A0u;
    if (runtime->hasFunction(0x2718A0u)) {
        auto targetFn = runtime->lookupFunction(0x2718A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E48u; }
        if (ctx->pc != 0x273E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002718A0_0x2718a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E48u; }
        if (ctx->pc != 0x273E48u) { return; }
    }
    ctx->pc = 0x273E48u;
    // 0x273e48: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x273e48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_273e4c:
    // 0x273e4c: 0x51a3e  dsrl32      $v1, $a1, 8
    ctx->pc = 0x273e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x273e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273e54: 0x5462008b  bnel        $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273e54) {
            ctx->pc = 0x273E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273E54u;
            // 0x273e58: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274084u;
            goto label_274084;
        }
    }
    ctx->pc = 0x273E5Cu;
    // 0x273e5c: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x273e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x273e60: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x273e64: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x273E64u;
    {
        const bool branch_taken_0x273e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E64u;
            // 0x273e68: 0x240201b9  addiu       $v0, $zero, 0x1B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e64) {
            ctx->pc = 0x274080u;
            goto label_274080;
        }
    }
    ctx->pc = 0x273E6Cu;
    // 0x273e6c: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x273E6Cu;
    {
        const bool branch_taken_0x273e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E6Cu;
            // 0x273e70: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e6c) {
            ctx->pc = 0x274084u;
            goto label_274084;
        }
    }
    ctx->pc = 0x273E74u;
    // 0x273e74: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x273e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_273e78:
    // 0x273e78: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x273E78u;
    {
        const bool branch_taken_0x273e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E78u;
            // 0x273e7c: 0x2c4102a  slt         $v0, $s6, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e78) {
            ctx->pc = 0x274088u;
            goto label_274088;
        }
    }
    ctx->pc = 0x273E80u;
    // 0x273e80: 0x12a00081  beqz        $s5, . + 4 + (0x81 << 2)
    ctx->pc = 0x273E80u;
    {
        const bool branch_taken_0x273e80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E80u;
            // 0x273e84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e80) {
            ctx->pc = 0x274088u;
            goto label_274088;
        }
    }
    ctx->pc = 0x273E88u;
    // 0x273e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273e8c: 0xc09c7d2  jal         func_271F48
    ctx->pc = 0x273E8Cu;
    SET_GPR_U32(ctx, 31, 0x273E94u);
    ctx->pc = 0x273E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273E8Cu;
            // 0x273e90: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271F48u;
    if (runtime->hasFunction(0x271F48u)) {
        auto targetFn = runtime->lookupFunction(0x271F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E94u; }
        if (ctx->pc != 0x273E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271F48_0x271f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E94u; }
        if (ctx->pc != 0x273E94u) { return; }
    }
    ctx->pc = 0x273E94u;
    // 0x273e94: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x273e98: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x273e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x273e9c: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x273E9Cu;
    {
        const bool branch_taken_0x273e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e9c) {
            ctx->pc = 0x273EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273E9Cu;
            // 0x273ea0: 0xde250000  ld          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274054u;
            goto label_274054;
        }
    }
    ctx->pc = 0x273EA4u;
    // 0x273ea4: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x273ea8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x273ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273eac: 0x18800038  blez        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x273EACu;
    {
        const bool branch_taken_0x273eac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x273EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273EACu;
            // 0x273eb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273eac) {
            ctx->pc = 0x273F90u;
            goto label_273f90;
        }
    }
    ctx->pc = 0x273EB4u;
    // 0x273eb4: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x273eb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x273eb8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x273ebc: 0x0  nop
    ctx->pc = 0x273ebcu;
    // NOP
label_273ec0:
    // 0x273ec0: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x273ec4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273ec8: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x273ec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x273ecc: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x273eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x273ed0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x273ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x273ed4: 0x5443002b  bnel        $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x273ED4u;
    {
        const bool branch_taken_0x273ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ed4) {
            ctx->pc = 0x273ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273ED4u;
            // 0x273ed8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273F84u;
            goto label_273f84;
        }
    }
    ctx->pc = 0x273EDCu;
    // 0x273edc: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x273edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x273ee0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x273ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273ee4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x273ee8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x273ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273eec: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x273eecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x273ef0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273ef4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x273ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x273ef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273EF8u;
    {
        const bool branch_taken_0x273ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273EF8u;
            // 0x273efc: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ef8) {
            ctx->pc = 0x273F08u;
            goto label_273f08;
        }
    }
    ctx->pc = 0x273F00u;
    // 0x273f00: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x273f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x273f04: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_273f08:
    // 0x273f08: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x273f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x273f0c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x273f10: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x273f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x273f14: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x273f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x273f18: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x273f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273f1c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x273f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273f20: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x273f20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x273f24: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x273F24u;
    {
        const bool branch_taken_0x273f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f24) {
            ctx->pc = 0x273F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273F24u;
            // 0x273f28: 0xde420028  ld          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273F38u;
            goto label_273f38;
        }
    }
    ctx->pc = 0x273F2Cu;
    // 0x273f2c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x273f30: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x273f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x273f34: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_273f38:
    // 0x273f38: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x273f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x273f3c: 0xffa20090  sd          $v0, 0x90($sp)
    ctx->pc = 0x273f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x273f40: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x273f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x273f44: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x273f44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x273f48: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x273f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
    // 0x273f4c: 0xffa30098  sd          $v1, 0x98($sp)
    ctx->pc = 0x273f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
    // 0x273f50: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x273f54: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x273f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f58: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x273f58u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f5c: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x273f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x273f60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f64: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x273f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x273f68: 0x40f809  jalr        $v0
    ctx->pc = 0x273F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273F70u);
        ctx->pc = 0x273F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F68u;
            // 0x273f6c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x273F70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273D78u: goto label_273d78;
            case 0x273DB0u: goto label_273db0;
            case 0x273DE0u: goto label_273de0;
            case 0x273E10u: goto label_273e10;
            case 0x273E2Cu: goto label_273e2c;
            case 0x273E30u: goto label_273e30;
            case 0x273E40u: goto label_273e40;
            case 0x273E4Cu: goto label_273e4c;
            case 0x273E78u: goto label_273e78;
            case 0x273EC0u: goto label_273ec0;
            case 0x273F08u: goto label_273f08;
            case 0x273F38u: goto label_273f38;
            case 0x273F84u: goto label_273f84;
            case 0x273F90u: goto label_273f90;
            case 0x273FC8u: goto label_273fc8;
            case 0x273FF8u: goto label_273ff8;
            case 0x274038u: goto label_274038;
            case 0x274050u: goto label_274050;
            case 0x274054u: goto label_274054;
            case 0x274080u: goto label_274080;
            case 0x274084u: goto label_274084;
            case 0x274088u: goto label_274088;
            case 0x27409Cu: goto label_27409c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x273F70u; }
            if (ctx->pc != 0x273F70u) { return; }
        }
        }
    }
    ctx->pc = 0x273F70u;
    // 0x273f70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x273f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f74: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x273f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f78: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x273f78u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273F7Cu;
    {
        const bool branch_taken_0x273f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F7Cu;
            // 0x273f80: 0x8e840064  lw          $a0, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f7c) {
            ctx->pc = 0x273F90u;
            goto label_273f90;
        }
    }
    ctx->pc = 0x273F84u;
label_273f84:
    // 0x273f84: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x273f88: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x273F88u;
    {
        const bool branch_taken_0x273f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F88u;
            // 0x273f8c: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f88) {
            ctx->pc = 0x273EC0u;
            runtime->cooperativeGuestYield();
            goto label_273ec0;
        }
    }
    ctx->pc = 0x273F90u;
label_273f90:
    // 0x273f90: 0x16640029  bne         $s3, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x273F90u;
    {
        const bool branch_taken_0x273f90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        if (branch_taken_0x273f90) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273F98u;
    // 0x273f98: 0x13c00027  beqz        $fp, . + 4 + (0x27 << 2)
    ctx->pc = 0x273F98u;
    {
        const bool branch_taken_0x273f98 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F98u;
            // 0x273f9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f98) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FA0u;
    // 0x273fa0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x273fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x273fa4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x273fa8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x273fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273fac: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x273facu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x273fb0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273fb4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x273fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x273fb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273FB8u;
    {
        const bool branch_taken_0x273fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273FB8u;
            // 0x273fbc: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fb8) {
            ctx->pc = 0x273FC8u;
            goto label_273fc8;
        }
    }
    ctx->pc = 0x273FC0u;
    // 0x273fc0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x273fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x273fc4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x273fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_273fc8:
    // 0x273fc8: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x273fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x273fcc: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x273fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x273fd0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x273fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x273fd4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x273fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x273fd8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x273fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x273fdc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273fe0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x273fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x273fe4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x273FE4u;
    {
        const bool branch_taken_0x273fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273fe4) {
            ctx->pc = 0x273FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273FE4u;
            // 0x273fe8: 0xde420028  ld          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273FF8u;
            goto label_273ff8;
        }
    }
    ctx->pc = 0x273FECu;
    // 0x273fec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x273ff0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x273ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x273ff4: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x273ff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_273ff8:
    // 0x273ff8: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x273ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x273ffc: 0xffa20090  sd          $v0, 0x90($sp)
    ctx->pc = 0x273ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x274000: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x274000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x274004: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x274004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x274008: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x274008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x27400c: 0xffa20098  sd          $v0, 0x98($sp)
    ctx->pc = 0x27400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
    // 0x274010: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x274010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x274014: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x274014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274018: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x274018u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27401c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274020: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x274020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274024: 0x3c0f809  jalr        $fp
    ctx->pc = 0x274024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x27402Cu);
        ctx->pc = 0x274028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274024u;
            // 0x274028: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27402Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273D78u: goto label_273d78;
            case 0x273DB0u: goto label_273db0;
            case 0x273DE0u: goto label_273de0;
            case 0x273E10u: goto label_273e10;
            case 0x273E2Cu: goto label_273e2c;
            case 0x273E30u: goto label_273e30;
            case 0x273E40u: goto label_273e40;
            case 0x273E4Cu: goto label_273e4c;
            case 0x273E78u: goto label_273e78;
            case 0x273EC0u: goto label_273ec0;
            case 0x273F08u: goto label_273f08;
            case 0x273F38u: goto label_273f38;
            case 0x273F84u: goto label_273f84;
            case 0x273F90u: goto label_273f90;
            case 0x273FC8u: goto label_273fc8;
            case 0x273FF8u: goto label_273ff8;
            case 0x274038u: goto label_274038;
            case 0x274050u: goto label_274050;
            case 0x274054u: goto label_274054;
            case 0x274080u: goto label_274080;
            case 0x274084u: goto label_274084;
            case 0x274088u: goto label_274088;
            case 0x27409Cu: goto label_27409c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27402Cu; }
            if (ctx->pc != 0x27402Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27402Cu;
    // 0x27402c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27402cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274030: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x274030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274034: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x274034u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274038:
    // 0x274038: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x274038u;
    {
        const bool branch_taken_0x274038 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274038u;
            // 0x27403c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274038) {
            ctx->pc = 0x274050u;
            goto label_274050;
        }
    }
    ctx->pc = 0x274040u;
    // 0x274040: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x274040u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x274044: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x274044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x274048: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x274048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27404c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x27404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_274050:
    // 0x274050: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x274050u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_274054:
    // 0x274054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274058: 0x5123e  dsrl32      $v0, $a1, 8
    ctx->pc = 0x274058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x27405c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27405Cu;
    {
        const bool branch_taken_0x27405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x274060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27405Cu;
            // 0x274060: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27405c) {
            ctx->pc = 0x274084u;
            goto label_274084;
        }
    }
    ctx->pc = 0x274064u;
    // 0x274064: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x274064u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x274068: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274068u;
    {
        const bool branch_taken_0x274068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274068u;
            // 0x27406c: 0x240201b9  addiu       $v0, $zero, 0x1B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274068) {
            ctx->pc = 0x274084u;
            goto label_274084;
        }
    }
    ctx->pc = 0x274070u;
    // 0x274070: 0x1462ff81  bne         $v1, $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x274070u;
    {
        const bool branch_taken_0x274070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274070u;
            // 0x274074: 0x96102a  slt         $v0, $a0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274070) {
            ctx->pc = 0x273E78u;
            runtime->cooperativeGuestYield();
            goto label_273e78;
        }
    }
    ctx->pc = 0x274078u;
    // 0x274078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274078u;
    {
        const bool branch_taken_0x274078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274078u;
            // 0x27407c: 0x2c4102a  slt         $v0, $s6, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274078) {
            ctx->pc = 0x274088u;
            goto label_274088;
        }
    }
    ctx->pc = 0x274080u;
label_274080:
    // 0x274080: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x274080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_274084:
    // 0x274084: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_274088:
    // 0x274088: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274088u;
    {
        const bool branch_taken_0x274088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274088u;
            // 0x27408c: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274088) {
            ctx->pc = 0x27409Cu;
            goto label_27409c;
        }
    }
    ctx->pc = 0x274090u;
    // 0x274090: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x274090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x274094: 0x1062ff6a  beq         $v1, $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x274094u;
    {
        const bool branch_taken_0x274094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274094u;
            // 0x274098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274094) {
            ctx->pc = 0x273E40u;
            runtime->cooperativeGuestYield();
            goto label_273e40;
        }
    }
    ctx->pc = 0x27409Cu;
label_27409c:
    // 0x27409c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2740a0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2740a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2740a4: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2740a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2740a8: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x2740a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2740ac: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2740acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2740b0: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x2740b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2740b4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2740b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2740b8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x2740b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2740bc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2740bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2740c0: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x2740c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2740c4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2740c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2740c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2740C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2740CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2740C8u;
            // 0x2740cc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273D78u: goto label_273d78;
            case 0x273DB0u: goto label_273db0;
            case 0x273DE0u: goto label_273de0;
            case 0x273E10u: goto label_273e10;
            case 0x273E2Cu: goto label_273e2c;
            case 0x273E30u: goto label_273e30;
            case 0x273E40u: goto label_273e40;
            case 0x273E4Cu: goto label_273e4c;
            case 0x273E78u: goto label_273e78;
            case 0x273EC0u: goto label_273ec0;
            case 0x273F08u: goto label_273f08;
            case 0x273F38u: goto label_273f38;
            case 0x273F84u: goto label_273f84;
            case 0x273F90u: goto label_273f90;
            case 0x273FC8u: goto label_273fc8;
            case 0x273FF8u: goto label_273ff8;
            case 0x274038u: goto label_274038;
            case 0x274050u: goto label_274050;
            case 0x274054u: goto label_274054;
            case 0x274080u: goto label_274080;
            case 0x274084u: goto label_274084;
            case 0x274088u: goto label_274088;
            case 0x27409Cu: goto label_27409c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2740D0u;
}

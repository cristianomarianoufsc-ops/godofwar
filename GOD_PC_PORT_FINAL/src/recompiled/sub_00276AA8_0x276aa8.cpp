#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276AA8
// Address: 0x276aa8 - 0x276b90
void sub_00276AA8_0x276aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276AA8_0x276aa8");
#endif

    ctx->pc = 0x276aa8u;

    // 0x276aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276ab0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276abc: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x276ABCu;
    SET_GPR_U32(ctx, 31, 0x276AC4u);
    ctx->pc = 0x276AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276ABCu;
            // 0x276ac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AC4u; }
        if (ctx->pc != 0x276AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AC4u; }
        if (ctx->pc != 0x276AC4u) { return; }
    }
    ctx->pc = 0x276AC4u;
    // 0x276ac4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x276ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x276ac8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276AC8u;
    {
        const bool branch_taken_0x276ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276AC8u;
            // 0x276acc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ac8) {
            ctx->pc = 0x276AE0u;
            goto label_276ae0;
        }
    }
    ctx->pc = 0x276AD0u;
    // 0x276ad0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x276ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x276ad4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x276ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x276ad8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x276AD8u;
    {
        const bool branch_taken_0x276ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276AD8u;
            // 0x276adc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ad8) {
            ctx->pc = 0x276B08u;
            goto label_276b08;
        }
    }
    ctx->pc = 0x276AE0u;
label_276ae0:
    // 0x276ae0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x276ae4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276aec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x276af0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x276af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x276af4: 0xc09da4a  jal         func_276928
    ctx->pc = 0x276AF4u;
    SET_GPR_U32(ctx, 31, 0x276AFCu);
    ctx->pc = 0x276AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276AF4u;
            // 0x276af8: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AFCu; }
        if (ctx->pc != 0x276AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AFCu; }
        if (ctx->pc != 0x276AFCu) { return; }
    }
    ctx->pc = 0x276AFCu;
    // 0x276afc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x276afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x276b00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x276b00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x276b04: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x276b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_276b08:
    // 0x276b08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x276b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x276b0c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x276b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x276b10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x276b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x276b14: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x276b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x276b18: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x276b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x276b1c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x276b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x276b20: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x276b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x276b24: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x276b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x276b28: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x276b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x276b2c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x276b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x276b30: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x276b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x276b34: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x276b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x276b38: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x276b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x276b3c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276B3Cu;
    {
        const bool branch_taken_0x276b3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x276B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B3Cu;
            // 0x276b40: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b3c) {
            ctx->pc = 0x276B58u;
            goto label_276b58;
        }
    }
    ctx->pc = 0x276B44u;
    // 0x276b44: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x276b48: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276B48u;
    {
        const bool branch_taken_0x276b48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x276b48) {
            ctx->pc = 0x276B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276B48u;
            // 0x276b4c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276B64u;
            goto label_276b64;
        }
    }
    ctx->pc = 0x276B50u;
    // 0x276b50: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276B50u;
    {
        const bool branch_taken_0x276b50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x276B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B50u;
            // 0x276b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b50) {
            ctx->pc = 0x276B60u;
            goto label_276b60;
        }
    }
    ctx->pc = 0x276B58u;
label_276b58:
    // 0x276b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276B58u;
    {
        const bool branch_taken_0x276b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B58u;
            // 0x276b5c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b58) {
            ctx->pc = 0x276B64u;
            goto label_276b64;
        }
    }
    ctx->pc = 0x276B60u;
label_276b60:
    // 0x276b60: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x276b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_276b64:
    // 0x276b64: 0xc09da4a  jal         func_276928
    ctx->pc = 0x276B64u;
    SET_GPR_U32(ctx, 31, 0x276B6Cu);
    ctx->pc = 0x276B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B64u;
            // 0x276b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B6Cu; }
        if (ctx->pc != 0x276B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B6Cu; }
        if (ctx->pc != 0x276B6Cu) { return; }
    }
    ctx->pc = 0x276B6Cu;
    // 0x276b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x276b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x276b70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x276b70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x276b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276b78: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x276b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x276b7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x276b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276b84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x276b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276b88: 0x3e00008  jr          $ra
    ctx->pc = 0x276B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B88u;
            // 0x276b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276AE0u: goto label_276ae0;
            case 0x276B08u: goto label_276b08;
            case 0x276B58u: goto label_276b58;
            case 0x276B60u: goto label_276b60;
            case 0x276B64u: goto label_276b64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276B90u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185A20
// Address: 0x185a20 - 0x185e78
void sub_00185A20_0x185a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185A20_0x185a20");
#endif

    ctx->pc = 0x185a20u;

    // 0x185a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x185a24: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185a28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x185a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x185a2c: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x185a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a34: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x185a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x185a38: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x185a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x185a3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x185a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x185a40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x185a44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x185a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x185a48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x185a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x185a4c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x185a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x185a50: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x185A50u;
    {
        const bool branch_taken_0x185a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A50u;
            // 0x185a54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a50) {
            ctx->pc = 0x185E48u;
            goto label_185e48;
        }
    }
    ctx->pc = 0x185A58u;
    // 0x185a58: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x185a5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185A5Cu;
    {
        const bool branch_taken_0x185a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A5Cu;
            // 0x185a60: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a5c) {
            ctx->pc = 0x185A80u;
            goto label_185a80;
        }
    }
    ctx->pc = 0x185A64u;
    // 0x185a64: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x185a68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185a6c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x185a70: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x185a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x185a74: 0x40f809  jalr        $v0
    ctx->pc = 0x185A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185A7Cu);
        ctx->pc = 0x185A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A74u;
            // 0x185a78: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185A7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A80u: goto label_185a80;
            case 0x185AA8u: goto label_185aa8;
            case 0x185AD0u: goto label_185ad0;
            case 0x185B00u: goto label_185b00;
            case 0x185B30u: goto label_185b30;
            case 0x185B58u: goto label_185b58;
            case 0x185B78u: goto label_185b78;
            case 0x185BC0u: goto label_185bc0;
            case 0x185BD4u: goto label_185bd4;
            case 0x185BF8u: goto label_185bf8;
            case 0x185C20u: goto label_185c20;
            case 0x185C58u: goto label_185c58;
            case 0x185C80u: goto label_185c80;
            case 0x185C94u: goto label_185c94;
            case 0x185CB8u: goto label_185cb8;
            case 0x185D30u: goto label_185d30;
            case 0x185D34u: goto label_185d34;
            case 0x185D38u: goto label_185d38;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D40u: goto label_185d40;
            case 0x185D78u: goto label_185d78;
            case 0x185D7Cu: goto label_185d7c;
            case 0x185D80u: goto label_185d80;
            case 0x185DA8u: goto label_185da8;
            case 0x185DE0u: goto label_185de0;
            case 0x185E00u: goto label_185e00;
            case 0x185E14u: goto label_185e14;
            case 0x185E48u: goto label_185e48;
            case 0x185E4Cu: goto label_185e4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185A7Cu; }
            if (ctx->pc != 0x185A7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x185A7Cu;
    // 0x185a7c: 0x0  nop
    ctx->pc = 0x185a7cu;
    // NOP
label_185a80:
    // 0x185a80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x185a84: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x185a88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x185A88u;
    {
        const bool branch_taken_0x185a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A88u;
            // 0x185a8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a88) {
            ctx->pc = 0x185AA8u;
            goto label_185aa8;
        }
    }
    ctx->pc = 0x185A90u;
    // 0x185a90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185a94: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x185a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x185a98: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x185a9c: 0x40f809  jalr        $v0
    ctx->pc = 0x185A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185AA4u);
        ctx->pc = 0x185AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A9Cu;
            // 0x185aa0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185AA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A80u: goto label_185a80;
            case 0x185AA8u: goto label_185aa8;
            case 0x185AD0u: goto label_185ad0;
            case 0x185B00u: goto label_185b00;
            case 0x185B30u: goto label_185b30;
            case 0x185B58u: goto label_185b58;
            case 0x185B78u: goto label_185b78;
            case 0x185BC0u: goto label_185bc0;
            case 0x185BD4u: goto label_185bd4;
            case 0x185BF8u: goto label_185bf8;
            case 0x185C20u: goto label_185c20;
            case 0x185C58u: goto label_185c58;
            case 0x185C80u: goto label_185c80;
            case 0x185C94u: goto label_185c94;
            case 0x185CB8u: goto label_185cb8;
            case 0x185D30u: goto label_185d30;
            case 0x185D34u: goto label_185d34;
            case 0x185D38u: goto label_185d38;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D40u: goto label_185d40;
            case 0x185D78u: goto label_185d78;
            case 0x185D7Cu: goto label_185d7c;
            case 0x185D80u: goto label_185d80;
            case 0x185DA8u: goto label_185da8;
            case 0x185DE0u: goto label_185de0;
            case 0x185E00u: goto label_185e00;
            case 0x185E14u: goto label_185e14;
            case 0x185E48u: goto label_185e48;
            case 0x185E4Cu: goto label_185e4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185AA4u; }
            if (ctx->pc != 0x185AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x185AA4u;
    // 0x185aa4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185aa8:
    // 0x185aa8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x185aa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185aac: 0x40054800  mfc0        $a1, Count
    ctx->pc = 0x185aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_count);
    // 0x185ab0: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x185ab4: 0x8e82bc04  lw          $v0, -0x43FC($s4)
    ctx->pc = 0x185ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949892)));
    // 0x185ab8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x185ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x185abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185ABCu;
    {
        const bool branch_taken_0x185abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185ABCu;
            // 0x185ac0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185abc) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185AC4u;
    // 0x185ac4: 0x8c62bc00  lw          $v0, -0x4400($v1)
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949888)));
    // 0x185ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185acc: 0xac62bc00  sw          $v0, -0x4400($v1)
    ctx->pc = 0x185accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949888), GPR_U32(ctx, 2));
label_185ad0:
    // 0x185ad0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185ad4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x185ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x185ad8: 0x9c42bc00  lwu         $v0, -0x4400($v0)
    ctx->pc = 0x185ad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949888)));
    // 0x185adc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x185adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x185ae0: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x185ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x185ae4: 0x348481ec  ori         $a0, $a0, 0x81EC
    ctx->pc = 0x185ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33260);
    // 0x185ae8: 0xae85bc04  sw          $a1, -0x43FC($s4)
    ctx->pc = 0x185ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949892), GPR_U32(ctx, 5));
    // 0x185aec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x185aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x185af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185af4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185af8: 0x44b82d  daddu       $s7, $v0, $a0
    ctx->pc = 0x185af8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x185afc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x185afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185b00:
    // 0x185b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185b04: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185B04u;
    {
        const bool branch_taken_0x185b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B04u;
            // 0x185b08: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b04) {
            ctx->pc = 0x185B30u;
            goto label_185b30;
        }
    }
    ctx->pc = 0x185B0Cu;
    // 0x185b0c: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x185B0Cu;
    {
        const bool branch_taken_0x185b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B0Cu;
            // 0x185b10: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b0c) {
            ctx->pc = 0x185D7Cu;
            goto label_185d7c;
        }
    }
    ctx->pc = 0x185B14u;
    // 0x185b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b18: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x185B18u;
    {
        const bool branch_taken_0x185b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B18u;
            // 0x185b1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b18) {
            ctx->pc = 0x185B58u;
            goto label_185b58;
        }
    }
    ctx->pc = 0x185B20u;
    // 0x185b20: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B20u;
            // 0x185b24: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185C94u;
            goto label_185c94;
        }
    }
    ctx->pc = 0x185B28u;
    // 0x185b28: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x185B28u;
    {
        const bool branch_taken_0x185b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B28u;
            // 0x185b2c: 0x8c42c818  lw          $v0, -0x37E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b28) {
            ctx->pc = 0x185D80u;
            goto label_185d80;
        }
    }
    ctx->pc = 0x185B30u;
label_185b30:
    // 0x185b30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x185b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x185b34: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x185b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x185b38: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x185B38u;
    {
        const bool branch_taken_0x185b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B38u;
            // 0x185b3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b38) {
            ctx->pc = 0x185D7Cu;
            goto label_185d7c;
        }
    }
    ctx->pc = 0x185B40u;
    // 0x185b40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x185b44: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x185b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x185b48: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x185b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x185b4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185b50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x185b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x185b54: 0x0  nop
    ctx->pc = 0x185b54u;
    // NOP
label_185b58:
    // 0x185b58: 0xc06163a  jal         func_1858E8
    ctx->pc = 0x185B58u;
    SET_GPR_U32(ctx, 31, 0x185B60u);
    ctx->pc = 0x185B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B58u;
            // 0x185b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1858E8u;
    if (runtime->hasFunction(0x1858E8u)) {
        auto targetFn = runtime->lookupFunction(0x1858E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B60u; }
        if (ctx->pc != 0x185B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1858e8_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B60u; }
        if (ctx->pc != 0x185B60u) { return; }
    }
    ctx->pc = 0x185B60u;
    // 0x185b60: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x185b64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185B64u;
    {
        const bool branch_taken_0x185b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B64u;
            // 0x185b68: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b64) {
            ctx->pc = 0x185B78u;
            goto label_185b78;
        }
    }
    ctx->pc = 0x185B6Cu;
    // 0x185b6c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x185B6Cu;
    SET_GPR_U32(ctx, 31, 0x185B74u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B74u; }
        if (ctx->pc != 0x185B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B74u; }
        if (ctx->pc != 0x185B74u) { return; }
    }
    ctx->pc = 0x185B74u;
    // 0x185b74: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x185b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_185b78:
    // 0x185b78: 0x8e64c810  lw          $a0, -0x37F0($s3)
    ctx->pc = 0x185b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952976)));
    // 0x185b7c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x185b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185b80: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x185b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x185b84: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x185B84u;
    {
        const bool branch_taken_0x185b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185b84) {
            ctx->pc = 0x185B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185B84u;
            // 0x185b88: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185D3Cu;
            goto label_185d3c;
        }
    }
    ctx->pc = 0x185B8Cu;
    // 0x185b8c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x185b90: 0xc05ac48  jal         func_16B120
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B90u;
            // 0x185b94: 0x2626001c  addiu       $a2, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B120u;
    if (runtime->hasFunction(0x16B120u)) {
        auto targetFn = runtime->lookupFunction(0x16B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B98u; }
        if (ctx->pc != 0x185B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B120_0x16b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B98u; }
        if (ctx->pc != 0x185B98u) { return; }
    }
    ctx->pc = 0x185B98u;
    // 0x185b98: 0x2632001c  addiu       $s2, $s1, 0x1C
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x185b9c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x185ba0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x185ba4: 0x9625001c  lhu         $a1, 0x1C($s1)
    ctx->pc = 0x185ba4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x185ba8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x185bac: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x185bb0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x185BB0u;
    {
        const bool branch_taken_0x185bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x185BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BB0u;
            // 0x185bb4: 0x448024  and         $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bb0) {
            ctx->pc = 0x185BC0u;
            goto label_185bc0;
        }
    }
    ctx->pc = 0x185BB8u;
    // 0x185bb8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185BB8u;
    {
        const bool branch_taken_0x185bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BB8u;
            // 0x185bbc: 0x8e64c810  lw          $a0, -0x37F0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bb8) {
            ctx->pc = 0x185BD4u;
            goto label_185bd4;
        }
    }
    ctx->pc = 0x185BC0u;
label_185bc0:
    // 0x185bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x185bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bc4: 0xc061846  jal         func_186118
    ctx->pc = 0x185BC4u;
    SET_GPR_U32(ctx, 31, 0x185BCCu);
    ctx->pc = 0x185BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185BC4u;
            // 0x185bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186118u;
    if (runtime->hasFunction(0x186118u)) {
        auto targetFn = runtime->lookupFunction(0x186118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BCCu; }
        if (ctx->pc != 0x185BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186118_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BCCu; }
        if (ctx->pc != 0x185BCCu) { return; }
    }
    ctx->pc = 0x185BCCu;
    // 0x185bcc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185BCCu;
    {
        const bool branch_taken_0x185bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BCCu;
            // 0x185bd0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bcc) {
            ctx->pc = 0x185C58u;
            goto label_185c58;
        }
    }
    ctx->pc = 0x185BD4u;
label_185bd4:
    // 0x185bd4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x185bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185bd8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x185bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x185bdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BDCu;
            // 0x185be0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185BF8u;
            goto label_185bf8;
        }
    }
    ctx->pc = 0x185BE4u;
    // 0x185be4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x185be8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x185bec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x185bf0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x185bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x185bf4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x185bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_185bf8:
    // 0x185bf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x185C20u;
            goto label_185c20;
        }
    }
    ctx->pc = 0x185C00u;
    // 0x185c00: 0xc05abe8  jal         func_16AFA0
    ctx->pc = 0x185C00u;
    SET_GPR_U32(ctx, 31, 0x185C08u);
    ctx->pc = 0x185C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C00u;
            // 0x185c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFA0u;
    if (runtime->hasFunction(0x16AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C08u; }
        if (ctx->pc != 0x185C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16afa0_0x16afd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C08u; }
        if (ctx->pc != 0x185C08u) { return; }
    }
    ctx->pc = 0x185C08u;
    // 0x185c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x185c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x185c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c10: 0xc06182e  jal         func_1860B8
    ctx->pc = 0x185C10u;
    SET_GPR_U32(ctx, 31, 0x185C18u);
    ctx->pc = 0x185C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C10u;
            // 0x185c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1860B8u;
    if (runtime->hasFunction(0x1860B8u)) {
        auto targetFn = runtime->lookupFunction(0x1860B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C18u; }
        if (ctx->pc != 0x185C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001860B8_0x1860b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C18u; }
        if (ctx->pc != 0x185C18u) { return; }
    }
    ctx->pc = 0x185C18u;
    // 0x185c18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x185C18u;
    {
        const bool branch_taken_0x185c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C18u;
            // 0x185c1c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c18) {
            ctx->pc = 0x185C58u;
            goto label_185c58;
        }
    }
    ctx->pc = 0x185C20u;
label_185c20:
    // 0x185c20: 0xc04f824  jal         func_13E090
    ctx->pc = 0x185C20u;
    SET_GPR_U32(ctx, 31, 0x185C28u);
    ctx->pc = 0x185C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C20u;
            // 0x185c24: 0xae300044  sw          $s0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C28u; }
        if (ctx->pc != 0x185C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C28u; }
        if (ctx->pc != 0x185C28u) { return; }
    }
    ctx->pc = 0x185C28u;
    // 0x185c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c30: 0xc04f78a  jal         func_13DE28
    ctx->pc = 0x185C30u;
    SET_GPR_U32(ctx, 31, 0x185C38u);
    ctx->pc = 0x185C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C30u;
            // 0x185c34: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DE28u;
    if (runtime->hasFunction(0x13DE28u)) {
        auto targetFn = runtime->lookupFunction(0x13DE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C38u; }
        if (ctx->pc != 0x185C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE28_0x13de28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C38u; }
        if (ctx->pc != 0x185C38u) { return; }
    }
    ctx->pc = 0x185C38u;
    // 0x185c38: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x185c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x185c3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x185c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185c40: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x185c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x185c44: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x185c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x185c48: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x185c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x185c4c: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x185c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x185c50: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x185c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x185c54: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_185c58:
    // 0x185c58: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x185c5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x185C5Cu;
    {
        const bool branch_taken_0x185c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C5Cu;
            // 0x185c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c5c) {
            ctx->pc = 0x185C80u;
            goto label_185c80;
        }
    }
    ctx->pc = 0x185C64u;
    // 0x185c64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185c68: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x185c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x185c6c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x185c70: 0x40f809  jalr        $v0
    ctx->pc = 0x185C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185C78u);
        ctx->pc = 0x185C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C70u;
            // 0x185c74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185C78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A80u: goto label_185a80;
            case 0x185AA8u: goto label_185aa8;
            case 0x185AD0u: goto label_185ad0;
            case 0x185B00u: goto label_185b00;
            case 0x185B30u: goto label_185b30;
            case 0x185B58u: goto label_185b58;
            case 0x185B78u: goto label_185b78;
            case 0x185BC0u: goto label_185bc0;
            case 0x185BD4u: goto label_185bd4;
            case 0x185BF8u: goto label_185bf8;
            case 0x185C20u: goto label_185c20;
            case 0x185C58u: goto label_185c58;
            case 0x185C80u: goto label_185c80;
            case 0x185C94u: goto label_185c94;
            case 0x185CB8u: goto label_185cb8;
            case 0x185D30u: goto label_185d30;
            case 0x185D34u: goto label_185d34;
            case 0x185D38u: goto label_185d38;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D40u: goto label_185d40;
            case 0x185D78u: goto label_185d78;
            case 0x185D7Cu: goto label_185d7c;
            case 0x185D80u: goto label_185d80;
            case 0x185DA8u: goto label_185da8;
            case 0x185DE0u: goto label_185de0;
            case 0x185E00u: goto label_185e00;
            case 0x185E14u: goto label_185e14;
            case 0x185E48u: goto label_185e48;
            case 0x185E4Cu: goto label_185e4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185C78u; }
            if (ctx->pc != 0x185C78u) { return; }
        }
        }
    }
    ctx->pc = 0x185C78u;
    // 0x185c78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c7c: 0x0  nop
    ctx->pc = 0x185c7cu;
    // NOP
label_185c80:
    // 0x185c80: 0x50b5002f  beql        $a1, $s5, . + 4 + (0x2F << 2)
    ctx->pc = 0x185C80u;
    {
        const bool branch_taken_0x185c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x185c80) {
            ctx->pc = 0x185C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185C80u;
            // 0x185c84: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185D40u;
            goto label_185d40;
        }
    }
    ctx->pc = 0x185C88u;
    // 0x185c88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x185c88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c8c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x185C8Cu;
    {
        const bool branch_taken_0x185c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C8Cu;
            // 0x185c90: 0xae350054  sw          $s5, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c8c) {
            ctx->pc = 0x185D3Cu;
            goto label_185d3c;
        }
    }
    ctx->pc = 0x185C94u;
label_185c94:
    // 0x185c94: 0xc06163a  jal         func_1858E8
    ctx->pc = 0x185C94u;
    SET_GPR_U32(ctx, 31, 0x185C9Cu);
    ctx->pc = 0x185C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C94u;
            // 0x185c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1858E8u;
    if (runtime->hasFunction(0x1858E8u)) {
        auto targetFn = runtime->lookupFunction(0x1858E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C9Cu; }
        if (ctx->pc != 0x185C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1858e8_0x185a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C9Cu; }
        if (ctx->pc != 0x185C9Cu) { return; }
    }
    ctx->pc = 0x185C9Cu;
    // 0x185c9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185ca0: 0x8c44c810  lw          $a0, -0x37F0($v0)
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952976)));
    // 0x185ca4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x185ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185ca8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185CA8u;
    {
        const bool branch_taken_0x185ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185ca8) {
            ctx->pc = 0x185CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185CA8u;
            // 0x185cac: 0x8e300044  lw          $s0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185CB8u;
            goto label_185cb8;
        }
    }
    ctx->pc = 0x185CB0u;
    // 0x185cb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185CB0u;
    {
        const bool branch_taken_0x185cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CB0u;
            // 0x185cb4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cb0) {
            ctx->pc = 0x185D3Cu;
            goto label_185d3c;
        }
    }
    ctx->pc = 0x185CB8u;
label_185cb8:
    // 0x185cb8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x185cbc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x185cbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x185cc0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x185cc4: 0xc05ac48  jal         func_16B120
    ctx->pc = 0x185CC4u;
    SET_GPR_U32(ctx, 31, 0x185CCCu);
    ctx->pc = 0x185CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CC4u;
            // 0x185cc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B120u;
    if (runtime->hasFunction(0x16B120u)) {
        auto targetFn = runtime->lookupFunction(0x16B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CCCu; }
        if (ctx->pc != 0x185CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B120_0x16b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CCCu; }
        if (ctx->pc != 0x185CCCu) { return; }
    }
    ctx->pc = 0x185CCCu;
    // 0x185ccc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x185cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x185cd0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x185cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x185cd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x185cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x185cd8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x185cdc: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x185cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x185ce0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x185CE0u;
    {
        const bool branch_taken_0x185ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CE0u;
            // 0x185ce4: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce0) {
            ctx->pc = 0x185D3Cu;
            goto label_185d3c;
        }
    }
    ctx->pc = 0x185CE8u;
    // 0x185ce8: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x185ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x185cec: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x185cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x185cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cf4: 0xc06182e  jal         func_1860B8
    ctx->pc = 0x185CF4u;
    SET_GPR_U32(ctx, 31, 0x185CFCu);
    ctx->pc = 0x185CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CF4u;
            // 0x185cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1860B8u;
    if (runtime->hasFunction(0x1860B8u)) {
        auto targetFn = runtime->lookupFunction(0x1860B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CFCu; }
        if (ctx->pc != 0x185CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001860B8_0x1860b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CFCu; }
        if (ctx->pc != 0x185CFCu) { return; }
    }
    ctx->pc = 0x185CFCu;
    // 0x185cfc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x185cfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x185d00: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x185d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x185d04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185D04u;
    {
        const bool branch_taken_0x185d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D04u;
            // 0x185d08: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d04) {
            ctx->pc = 0x185D30u;
            goto label_185d30;
        }
    }
    ctx->pc = 0x185D0Cu;
    // 0x185d0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x185D0Cu;
    {
        const bool branch_taken_0x185d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185d0c) {
            ctx->pc = 0x185D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185D0Cu;
            // 0x185d10: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185D34u;
            goto label_185d34;
        }
    }
    ctx->pc = 0x185D14u;
    // 0x185d14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185d18: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x185d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x185d1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185D1Cu;
    {
        const bool branch_taken_0x185d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D1Cu;
            // 0x185d20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d1c) {
            ctx->pc = 0x185D38u;
            goto label_185d38;
        }
    }
    ctx->pc = 0x185D24u;
    // 0x185d24: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x185D24u;
    SET_GPR_U32(ctx, 31, 0x185D2Cu);
    ctx->pc = 0x185D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185D24u;
            // 0x185d28: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D2Cu; }
        if (ctx->pc != 0x185D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185D2Cu; }
        if (ctx->pc != 0x185D2Cu) { return; }
    }
    ctx->pc = 0x185D2Cu;
    // 0x185d2c: 0x0  nop
    ctx->pc = 0x185d2cu;
    // NOP
label_185d30:
    // 0x185d30: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x185d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_185d34:
    // 0x185d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_185d38:
    // 0x185d38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x185d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_185d3c:
    // 0x185d3c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_185d40:
    // 0x185d40: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x185D40u;
    {
        const bool branch_taken_0x185d40 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x185D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D40u;
            // 0x185d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d40) {
            ctx->pc = 0x185D78u;
            goto label_185d78;
        }
    }
    ctx->pc = 0x185D48u;
    // 0x185d48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185d4c: 0x8c42c810  lw          $v0, -0x37F0($v0)
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952976)));
    // 0x185d50: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x185d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185d54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x185D54u;
    {
        const bool branch_taken_0x185d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D54u;
            // 0x185d58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d54) {
            ctx->pc = 0x185D7Cu;
            goto label_185d7c;
        }
    }
    ctx->pc = 0x185D5Cu;
    // 0x185d5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x185d60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x185d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185d64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x185D64u;
    {
        const bool branch_taken_0x185d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D64u;
            // 0x185d68: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d64) {
            ctx->pc = 0x185D7Cu;
            goto label_185d7c;
        }
    }
    ctx->pc = 0x185D6Cu;
    // 0x185d6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185d70: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x185d74: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x185d74u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_185d78:
    // 0x185d78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_185d7c:
    // 0x185d7c: 0x8c42c818  lw          $v0, -0x37E8($v0)
    ctx->pc = 0x185d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952984)));
label_185d80:
    // 0x185d80: 0x5440ff5f  bnel        $v0, $zero, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x185D80u;
    {
        const bool branch_taken_0x185d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185d80) {
            ctx->pc = 0x185D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185D80u;
            // 0x185d84: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185B00u;
            runtime->cooperativeGuestYield();
            goto label_185b00;
        }
    }
    ctx->pc = 0x185D88u;
    // 0x185d88: 0x40044800  mfc0        $a0, Count
    ctx->pc = 0x185d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_count);
    // 0x185d8c: 0x8e82bc04  lw          $v0, -0x43FC($s4)
    ctx->pc = 0x185d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949892)));
    // 0x185d90: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x185d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x185d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185D94u;
    {
        const bool branch_taken_0x185d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185D94u;
            // 0x185d98: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d94) {
            ctx->pc = 0x185DA8u;
            goto label_185da8;
        }
    }
    ctx->pc = 0x185D9Cu;
    // 0x185d9c: 0x8c62bc00  lw          $v0, -0x4400($v1)
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949888)));
    // 0x185da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185da4: 0xac62bc00  sw          $v0, -0x4400($v1)
    ctx->pc = 0x185da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949888), GPR_U32(ctx, 2));
label_185da8:
    // 0x185da8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185dac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x185dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x185db0: 0x9c42bc00  lwu         $v0, -0x4400($v0)
    ctx->pc = 0x185db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949888)));
    // 0x185db4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x185db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x185db8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x185db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x185dbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185dc0: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x185dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x185dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185DC4u;
    {
        const bool branch_taken_0x185dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DC4u;
            // 0x185dc8: 0xae84bc04  sw          $a0, -0x43FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294949892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc4) {
            ctx->pc = 0x185DE0u;
            goto label_185de0;
        }
    }
    ctx->pc = 0x185DCCu;
    // 0x185dcc: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x185DCCu;
    {
        const bool branch_taken_0x185dcc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x185DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185DCCu;
            // 0x185dd0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dcc) {
            ctx->pc = 0x185DE0u;
            goto label_185de0;
        }
    }
    ctx->pc = 0x185DD4u;
    // 0x185dd4: 0x8c42c804  lw          $v0, -0x37FC($v0)
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952964)));
    // 0x185dd8: 0x5040ff49  beql        $v0, $zero, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x185DD8u;
    {
        const bool branch_taken_0x185dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185dd8) {
            ctx->pc = 0x185DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185DD8u;
            // 0x185ddc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185B00u;
            runtime->cooperativeGuestYield();
            goto label_185b00;
        }
    }
    ctx->pc = 0x185DE0u;
label_185de0:
    // 0x185de0: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x185DE0u;
    {
        const bool branch_taken_0x185de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x185de0) {
            ctx->pc = 0x185DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185DE0u;
            // 0x185de4: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185E14u;
            goto label_185e14;
        }
    }
    ctx->pc = 0x185DE8u;
    // 0x185de8: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x185dec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185DECu;
    {
        const bool branch_taken_0x185dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185dec) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DF4u;
    // 0x185df4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x185DF4u;
    SET_GPR_U32(ctx, 31, 0x185DFCu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DFCu; }
        if (ctx->pc != 0x185DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DFCu; }
        if (ctx->pc != 0x185DFCu) { return; }
    }
    ctx->pc = 0x185DFCu;
    // 0x185dfc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x185dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_185e00:
    // 0x185e00: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x185E00u;
    SET_GPR_U32(ctx, 31, 0x185E08u);
    ctx->pc = 0x185E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185E00u;
            // 0x185e04: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E08u; }
        if (ctx->pc != 0x185E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185E08u; }
        if (ctx->pc != 0x185E08u) { return; }
    }
    ctx->pc = 0x185E08u;
    // 0x185e08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x185e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x185e0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x185E0Cu;
    {
        const bool branch_taken_0x185e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E0Cu;
            // 0x185e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e0c) {
            ctx->pc = 0x185E4Cu;
            goto label_185e4c;
        }
    }
    ctx->pc = 0x185E14u;
label_185e14:
    // 0x185e14: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x185E14u;
    {
        const bool branch_taken_0x185e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E14u;
            // 0x185e18: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e14) {
            ctx->pc = 0x185E48u;
            goto label_185e48;
        }
    }
    ctx->pc = 0x185E1Cu;
    // 0x185e1c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x185e1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185e20: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x185e24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185e2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185e30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x185e34: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x185e38: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x185e3c: 0x40f809  jalr        $v0
    ctx->pc = 0x185E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185E44u);
        ctx->pc = 0x185E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E3Cu;
            // 0x185e40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185E44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A80u: goto label_185a80;
            case 0x185AA8u: goto label_185aa8;
            case 0x185AD0u: goto label_185ad0;
            case 0x185B00u: goto label_185b00;
            case 0x185B30u: goto label_185b30;
            case 0x185B58u: goto label_185b58;
            case 0x185B78u: goto label_185b78;
            case 0x185BC0u: goto label_185bc0;
            case 0x185BD4u: goto label_185bd4;
            case 0x185BF8u: goto label_185bf8;
            case 0x185C20u: goto label_185c20;
            case 0x185C58u: goto label_185c58;
            case 0x185C80u: goto label_185c80;
            case 0x185C94u: goto label_185c94;
            case 0x185CB8u: goto label_185cb8;
            case 0x185D30u: goto label_185d30;
            case 0x185D34u: goto label_185d34;
            case 0x185D38u: goto label_185d38;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D40u: goto label_185d40;
            case 0x185D78u: goto label_185d78;
            case 0x185D7Cu: goto label_185d7c;
            case 0x185D80u: goto label_185d80;
            case 0x185DA8u: goto label_185da8;
            case 0x185DE0u: goto label_185de0;
            case 0x185E00u: goto label_185e00;
            case 0x185E14u: goto label_185e14;
            case 0x185E48u: goto label_185e48;
            case 0x185E4Cu: goto label_185e4c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185E44u; }
            if (ctx->pc != 0x185E44u) { return; }
        }
        }
    }
    ctx->pc = 0x185E44u;
    // 0x185e44: 0x0  nop
    ctx->pc = 0x185e44u;
    // NOP
label_185e48:
    // 0x185e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185e4c:
    // 0x185e4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x185e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185e50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x185e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185e54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x185e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185e58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x185e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185e5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185e5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185e60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x185e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185e64: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x185e64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185e68: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x185e68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185e70: 0x3e00008  jr          $ra
    ctx->pc = 0x185E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185E70u;
            // 0x185e74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A80u: goto label_185a80;
            case 0x185AA8u: goto label_185aa8;
            case 0x185AD0u: goto label_185ad0;
            case 0x185B00u: goto label_185b00;
            case 0x185B30u: goto label_185b30;
            case 0x185B58u: goto label_185b58;
            case 0x185B78u: goto label_185b78;
            case 0x185BC0u: goto label_185bc0;
            case 0x185BD4u: goto label_185bd4;
            case 0x185BF8u: goto label_185bf8;
            case 0x185C20u: goto label_185c20;
            case 0x185C58u: goto label_185c58;
            case 0x185C80u: goto label_185c80;
            case 0x185C94u: goto label_185c94;
            case 0x185CB8u: goto label_185cb8;
            case 0x185D30u: goto label_185d30;
            case 0x185D34u: goto label_185d34;
            case 0x185D38u: goto label_185d38;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D40u: goto label_185d40;
            case 0x185D78u: goto label_185d78;
            case 0x185D7Cu: goto label_185d7c;
            case 0x185D80u: goto label_185d80;
            case 0x185DA8u: goto label_185da8;
            case 0x185DE0u: goto label_185de0;
            case 0x185E00u: goto label_185e00;
            case 0x185E14u: goto label_185e14;
            case 0x185E48u: goto label_185e48;
            case 0x185E4Cu: goto label_185e4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185E78u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231A28
// Address: 0x231a28 - 0x231e30
void sub_00231A28_0x231a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A28_0x231a28");
#endif

    ctx->pc = 0x231a28u;

    // 0x231a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x231a34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x231a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a40: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x231a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231a44: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x231a48: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x231a4c: 0x40f809  jalr        $v0
    ctx->pc = 0x231A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231A54u);
        ctx->pc = 0x231A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A4Cu;
            // 0x231a50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231A54u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231A54u; }
            if (ctx->pc != 0x231A54u) { return; }
        }
        }
    }
    ctx->pc = 0x231A54u;
    // 0x231a54: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x231A54u;
    {
        const bool branch_taken_0x231a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A54u;
            // 0x231a58: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a54) {
            ctx->pc = 0x231B0Cu;
            goto label_231b0c;
        }
    }
    ctx->pc = 0x231A5Cu;
    // 0x231a5c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231A5Cu;
    {
        const bool branch_taken_0x231a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A5Cu;
            // 0x231a60: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a5c) {
            ctx->pc = 0x231A78u;
            goto label_231a78;
        }
    }
    ctx->pc = 0x231A64u;
    // 0x231a64: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x231a68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231A68u;
    {
        const bool branch_taken_0x231a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A68u;
            // 0x231a6c: 0x10100a  movz        $v0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a68) {
            ctx->pc = 0x231A80u;
            goto label_231a80;
        }
    }
    ctx->pc = 0x231A70u;
    // 0x231a70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x231A70u;
    {
        const bool branch_taken_0x231a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A70u;
            // 0x231a74: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a70) {
            ctx->pc = 0x231AA0u;
            goto label_231aa0;
        }
    }
    ctx->pc = 0x231A78u;
label_231a78:
    // 0x231a78: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x231A78u;
    {
        const bool branch_taken_0x231a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231A78u;
            // 0x231a7c: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a78) {
            ctx->pc = 0x231A94u;
            goto label_231a94;
        }
    }
    ctx->pc = 0x231A80u;
label_231a80:
    // 0x231a80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231a84: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x231A84u;
    {
        const bool branch_taken_0x231a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x231a84) {
            ctx->pc = 0x231A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231A84u;
            // 0x231a88: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231A8Cu;
            goto label_231a8c;
        }
    }
    ctx->pc = 0x231A8Cu;
label_231a8c:
    // 0x231a8c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x231a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x231a90: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x231a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_231a94:
    // 0x231a94: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x231a94u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x231a98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x231a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231a9c: 0x0  nop
    ctx->pc = 0x231a9cu;
    // NOP
label_231aa0:
    // 0x231aa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231aa4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x231aa8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x231aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x231aac: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x231aacu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x231ab0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x231ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x231ab4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231ab8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x231ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231abc: 0x30e60002  andi        $a2, $a3, 0x2
    ctx->pc = 0x231abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x231ac0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x231ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x231ac4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x231ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x231ac8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x231acc: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x231ACCu;
    {
        const bool branch_taken_0x231acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231ACCu;
            // 0x231ad0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231acc) {
            ctx->pc = 0x231AFCu;
            goto label_231afc;
        }
    }
    ctx->pc = 0x231AD4u;
    // 0x231ad4: 0x30e2fffa  andi        $v0, $a3, 0xFFFA
    ctx->pc = 0x231ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65530);
    // 0x231ad8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x231ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231adc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x231adcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x231ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ae4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x231ae8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x231ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x231aec: 0x40f809  jalr        $v0
    ctx->pc = 0x231AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231AF4u);
        ctx->pc = 0x231AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AECu;
            // 0x231af0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231AF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231AF4u; }
            if (ctx->pc != 0x231AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x231AF4u;
    // 0x231af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x231AF4u;
    {
        const bool branch_taken_0x231af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231AF4u;
            // 0x231af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231af4) {
            ctx->pc = 0x231B10u;
            goto label_231b10;
        }
    }
    ctx->pc = 0x231AFCu;
label_231afc:
    // 0x231afc: 0x30e2fffa  andi        $v0, $a3, 0xFFFA
    ctx->pc = 0x231afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65530);
    // 0x231b00: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x231b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x231b04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231B04u;
    {
        const bool branch_taken_0x231b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B04u;
            // 0x231b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b04) {
            ctx->pc = 0x231B10u;
            goto label_231b10;
        }
    }
    ctx->pc = 0x231B0Cu;
label_231b0c:
    // 0x231b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231b10:
    // 0x231b10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x231B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B1Cu;
            // 0x231b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231B24u;
    // 0x231b24: 0x0  nop
    ctx->pc = 0x231b24u;
    // NOP
    // 0x231b28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231b2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x231b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x231b30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x231b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x231b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x231b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x231b3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x231b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231b44: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x231b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231b48: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x231b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x231b4c: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x231b50: 0x40f809  jalr        $v0
    ctx->pc = 0x231B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231B58u);
        ctx->pc = 0x231B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B50u;
            // 0x231b54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231B58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231B58u; }
            if (ctx->pc != 0x231B58u) { return; }
        }
        }
    }
    ctx->pc = 0x231B58u;
    // 0x231b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b5c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231B5Cu;
    {
        const bool branch_taken_0x231b5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x231B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B5Cu;
            // 0x231b60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b5c) {
            ctx->pc = 0x231BA0u;
            goto label_231ba0;
        }
    }
    ctx->pc = 0x231B64u;
    // 0x231b64: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x231b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231b68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x231b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b6c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x231b70: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x231b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x231b74: 0x40f809  jalr        $v0
    ctx->pc = 0x231B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231B7Cu);
        ctx->pc = 0x231B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B74u;
            // 0x231b78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231B7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231B7Cu; }
            if (ctx->pc != 0x231B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x231B7Cu;
    // 0x231b7c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x231b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b8c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x231b90: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x231b94: 0x40f809  jalr        $v0
    ctx->pc = 0x231B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231B9Cu);
        ctx->pc = 0x231B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B94u;
            // 0x231b98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231B9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231B9Cu; }
            if (ctx->pc != 0x231B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x231B9Cu;
    // 0x231b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_231ba0:
    // 0x231ba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x231ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231ba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x231ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231ba8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x231ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x231BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BB0u;
            // 0x231bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231BB8u;
    // 0x231bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231bbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x231bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bd0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x231bd4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x231bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x231bd8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x231bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x231bdc: 0x40f809  jalr        $v0
    ctx->pc = 0x231BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231BE4u);
        ctx->pc = 0x231BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BDCu;
            // 0x231be0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231BE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231BE4u; }
            if (ctx->pc != 0x231BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x231BE4u;
    // 0x231be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231BE4u;
    {
        const bool branch_taken_0x231be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BE4u;
            // 0x231be8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231be4) {
            ctx->pc = 0x231C00u;
            goto label_231c00;
        }
    }
    ctx->pc = 0x231BECu;
    // 0x231bec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x231becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x231bf0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x231bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x231bf4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x231bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x231bf8: 0x40f809  jalr        $v0
    ctx->pc = 0x231BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231C00u);
        ctx->pc = 0x231BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BF8u;
            // 0x231bfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231C00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231C00u; }
            if (ctx->pc != 0x231C00u) { return; }
        }
        }
    }
    ctx->pc = 0x231C00u;
label_231c00:
    // 0x231c00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x231C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C0Cu;
            // 0x231c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231C14u;
    // 0x231c14: 0x0  nop
    ctx->pc = 0x231c14u;
    // NOP
    // 0x231c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231c1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x231c24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x231c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c30: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x231c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231c34: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x231c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x231c38: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x231c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x231c3c: 0x40f809  jalr        $v0
    ctx->pc = 0x231C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231C44u);
        ctx->pc = 0x231C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C3Cu;
            // 0x231c40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231C44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231C44u; }
            if (ctx->pc != 0x231C44u) { return; }
        }
        }
    }
    ctx->pc = 0x231C44u;
    // 0x231c44: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x231C44u;
    {
        const bool branch_taken_0x231c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C44u;
            // 0x231c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c44) {
            ctx->pc = 0x231CF0u;
            goto label_231cf0;
        }
    }
    ctx->pc = 0x231C4Cu;
    // 0x231c4c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x231c4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x231c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231c54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x231c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x231c58: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x231c5c: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x231C5Cu;
    {
        const bool branch_taken_0x231c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C5Cu;
            // 0x231c60: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c5c) {
            ctx->pc = 0x231CA4u;
            goto label_231ca4;
        }
    }
    ctx->pc = 0x231C64u;
    // 0x231c64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x231c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c68: 0x50180b  movn        $v1, $v0, $s0
    ctx->pc = 0x231c68u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x231c6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x231c70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231C70u;
    {
        const bool branch_taken_0x231c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C70u;
            // 0x231c74: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c70) {
            ctx->pc = 0x231C80u;
            goto label_231c80;
        }
    }
    ctx->pc = 0x231C78u;
    // 0x231c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231C78u;
    {
        const bool branch_taken_0x231c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C78u;
            // 0x231c7c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c78) {
            ctx->pc = 0x231C84u;
            goto label_231c84;
        }
    }
    ctx->pc = 0x231C80u;
label_231c80:
    // 0x231c80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x231c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_231c84:
    // 0x231c84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231C88u;
    {
        const bool branch_taken_0x231c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C88u;
            // 0x231c8c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c88) {
            ctx->pc = 0x231C98u;
            goto label_231c98;
        }
    }
    ctx->pc = 0x231C90u;
    // 0x231c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231C90u;
    {
        const bool branch_taken_0x231c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C90u;
            // 0x231c94: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c90) {
            ctx->pc = 0x231C9Cu;
            goto label_231c9c;
        }
    }
    ctx->pc = 0x231C98u;
label_231c98:
    // 0x231c98: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x231c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_231c9c:
    // 0x231c9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x231c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x231ca0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x231ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_231ca4:
    // 0x231ca4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x231ca8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x231ca8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x231cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x231cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x231cb0: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x231cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x231cb4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x231cb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x231CB8u;
    {
        const bool branch_taken_0x231cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CB8u;
            // 0x231cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cb8) {
            ctx->pc = 0x231CE4u;
            goto label_231ce4;
        }
    }
    ctx->pc = 0x231CC0u;
    // 0x231cc0: 0x3062fffa  andi        $v0, $v1, 0xFFFA
    ctx->pc = 0x231cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65530);
    // 0x231cc4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x231cc8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x231cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x231ccc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x231cd0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x231cd4: 0x40f809  jalr        $v0
    ctx->pc = 0x231CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231CDCu);
        ctx->pc = 0x231CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CD4u;
            // 0x231cd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231CDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231CDCu; }
            if (ctx->pc != 0x231CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x231CDCu;
    // 0x231cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231CDCu;
    {
        const bool branch_taken_0x231cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CDCu;
            // 0x231ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cdc) {
            ctx->pc = 0x231CF0u;
            goto label_231cf0;
        }
    }
    ctx->pc = 0x231CE4u;
label_231ce4:
    // 0x231ce4: 0x3062fffa  andi        $v0, $v1, 0xFFFA
    ctx->pc = 0x231ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65530);
    // 0x231ce8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x231ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x231cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231cf0:
    // 0x231cf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x231CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231CFCu;
            // 0x231d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231D04u;
    // 0x231d04: 0x0  nop
    ctx->pc = 0x231d04u;
    // NOP
    // 0x231d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x231d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x231d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231d18: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x231d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x231d1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x231d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x231d20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x231d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x231d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_231d28:
    // 0x231d28: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x231d2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231d30: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x231d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x231d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231d38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x231D3Cu;
    {
        const bool branch_taken_0x231d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d3c) {
            ctx->pc = 0x231D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231D3Cu;
            // 0x231d40: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D58u;
            goto label_231d58;
        }
    }
    ctx->pc = 0x231D44u;
    // 0x231d44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d48: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x231D48u;
    {
        const bool branch_taken_0x231d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d48) {
            ctx->pc = 0x231D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231D48u;
            // 0x231d4c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D58u;
            goto label_231d58;
        }
    }
    ctx->pc = 0x231D50u;
    // 0x231d50: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x231D50u;
    {
        const bool branch_taken_0x231d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D50u;
            // 0x231d54: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d50) {
            ctx->pc = 0x231E10u;
            goto label_231e10;
        }
    }
    ctx->pc = 0x231D58u;
label_231d58:
    // 0x231d58: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x231d58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x231d5c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x231D5Cu;
    {
        const bool branch_taken_0x231d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D5Cu;
            // 0x231d60: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d5c) {
            ctx->pc = 0x231D28u;
            runtime->cooperativeGuestYield();
            goto label_231d28;
        }
    }
    ctx->pc = 0x231D64u;
    // 0x231d64: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x231D64u;
    {
        const bool branch_taken_0x231d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D64u;
            // 0x231d68: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d64) {
            ctx->pc = 0x231E14u;
            goto label_231e14;
        }
    }
    ctx->pc = 0x231D6Cu;
    // 0x231d6c: 0x0  nop
    ctx->pc = 0x231d6cu;
    // NOP
label_231d70:
    // 0x231d70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x231d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d7c: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x231d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x231d80: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x231d80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x231d84: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231D84u;
    {
        const bool branch_taken_0x231d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D84u;
            // 0x231d88: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d84) {
            ctx->pc = 0x231DC8u;
            goto label_231dc8;
        }
    }
    ctx->pc = 0x231D8Cu;
    // 0x231d8c: 0x0  nop
    ctx->pc = 0x231d8cu;
    // NOP
label_231d90:
    // 0x231d90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_231d94:
    // 0x231d94: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x231d98: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231d9c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x231D9Cu;
    {
        const bool branch_taken_0x231d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x231DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231D9Cu;
            // 0x231da0: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d9c) {
            ctx->pc = 0x231DC8u;
            goto label_231dc8;
        }
    }
    ctx->pc = 0x231DA4u;
    // 0x231da4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x231da8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231db4: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x231DB4u;
    {
        const bool branch_taken_0x231db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231db4) {
            ctx->pc = 0x231DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231DB4u;
            // 0x231db8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D94u;
            runtime->cooperativeGuestYield();
            goto label_231d94;
        }
    }
    ctx->pc = 0x231DBCu;
    // 0x231dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231dc0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x231DC0u;
    {
        const bool branch_taken_0x231dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DC0u;
            // 0x231dc4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dc0) {
            ctx->pc = 0x231D90u;
            runtime->cooperativeGuestYield();
            goto label_231d90;
        }
    }
    ctx->pc = 0x231DC8u;
label_231dc8:
    // 0x231dc8: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x231dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x231dcc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x231dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x231dd0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231DD0u;
    {
        const bool branch_taken_0x231dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DD0u;
            // 0x231dd4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dd0) {
            ctx->pc = 0x231E14u;
            goto label_231e14;
        }
    }
    ctx->pc = 0x231DD8u;
    // 0x231dd8: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x231dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x231ddc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231DDCu;
    {
        const bool branch_taken_0x231ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DDCu;
            // 0x231de0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ddc) {
            ctx->pc = 0x231E00u;
            goto label_231e00;
        }
    }
    ctx->pc = 0x231DE4u;
    // 0x231de4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x231de8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x231dec: 0x40f809  jalr        $v0
    ctx->pc = 0x231DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231DF4u);
        ctx->pc = 0x231DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DECu;
            // 0x231df0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231DF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231DF4u; }
            if (ctx->pc != 0x231DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x231DF4u;
    // 0x231df4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231DF4u;
    {
        const bool branch_taken_0x231df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231DF4u;
            // 0x231df8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231df4) {
            ctx->pc = 0x231E14u;
            goto label_231e14;
        }
    }
    ctx->pc = 0x231DFCu;
    // 0x231dfc: 0x0  nop
    ctx->pc = 0x231dfcu;
    // NOP
label_231e00:
    // 0x231e00: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x231e04: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x231e08: 0x40f809  jalr        $v0
    ctx->pc = 0x231E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231E10u);
        ctx->pc = 0x231E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E08u;
            // 0x231e0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231E10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231E10u; }
            if (ctx->pc != 0x231E10u) { return; }
        }
        }
    }
    ctx->pc = 0x231E10u;
label_231e10:
    // 0x231e10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_231e14:
    // 0x231e14: 0x2842000e  slti        $v0, $v0, 0xE
    ctx->pc = 0x231e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x231e18: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x231E18u;
    {
        const bool branch_taken_0x231e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e18) {
            ctx->pc = 0x231E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231E18u;
            // 0x231e1c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231D70u;
            runtime->cooperativeGuestYield();
            goto label_231d70;
        }
    }
    ctx->pc = 0x231E20u;
    // 0x231e20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x231e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e28: 0x3e00008  jr          $ra
    ctx->pc = 0x231E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231E28u;
            // 0x231e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231A78u: goto label_231a78;
            case 0x231A80u: goto label_231a80;
            case 0x231A8Cu: goto label_231a8c;
            case 0x231A94u: goto label_231a94;
            case 0x231AA0u: goto label_231aa0;
            case 0x231AFCu: goto label_231afc;
            case 0x231B0Cu: goto label_231b0c;
            case 0x231B10u: goto label_231b10;
            case 0x231BA0u: goto label_231ba0;
            case 0x231C00u: goto label_231c00;
            case 0x231C80u: goto label_231c80;
            case 0x231C84u: goto label_231c84;
            case 0x231C98u: goto label_231c98;
            case 0x231C9Cu: goto label_231c9c;
            case 0x231CA4u: goto label_231ca4;
            case 0x231CE4u: goto label_231ce4;
            case 0x231CF0u: goto label_231cf0;
            case 0x231D28u: goto label_231d28;
            case 0x231D58u: goto label_231d58;
            case 0x231D70u: goto label_231d70;
            case 0x231D90u: goto label_231d90;
            case 0x231D94u: goto label_231d94;
            case 0x231DC8u: goto label_231dc8;
            case 0x231E00u: goto label_231e00;
            case 0x231E10u: goto label_231e10;
            case 0x231E14u: goto label_231e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231E30u;
}

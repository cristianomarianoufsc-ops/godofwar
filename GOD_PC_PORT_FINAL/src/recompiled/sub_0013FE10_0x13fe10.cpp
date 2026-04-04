#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FE10
// Address: 0x13fe10 - 0x1401a0
void sub_0013FE10_0x13fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FE10_0x13fe10");
#endif

    ctx->pc = 0x13fe10u;

    // 0x13fe10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13fe14: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x13fe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x13fe18: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x13fe18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x13fe1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13fe20: 0x8e90bbb0  lw          $s0, -0x4450($s4)
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949808)));
    // 0x13fe24: 0x2682bbb0  addiu       $v0, $s4, -0x4450
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949808));
    // 0x13fe28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13fe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x13fe2c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x13fe30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13fe34: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x13fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x13fe38: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x13fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x13fe3c: 0x1202004c  beq         $s0, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x13FE3Cu;
    {
        const bool branch_taken_0x13fe3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE3Cu;
            // 0x13fe40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe3c) {
            ctx->pc = 0x13FF70u;
            goto label_13ff70;
        }
    }
    ctx->pc = 0x13FE44u;
    // 0x13fe44: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13fe48:
    // 0x13fe48: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fe4c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x13FE4Cu;
    {
        const bool branch_taken_0x13fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE4Cu;
            // 0x13fe50: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe4c) {
            ctx->pc = 0x13FF60u;
            goto label_13ff60;
        }
    }
    ctx->pc = 0x13FE54u;
    // 0x13fe54: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x13fe58: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x13fe58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x13fe5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13fe60: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13FE60u;
    {
        const bool branch_taken_0x13fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE60u;
            // 0x13fe64: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe60) {
            ctx->pc = 0x13FE90u;
            goto label_13fe90;
        }
    }
    ctx->pc = 0x13FE68u;
    // 0x13fe68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13fe6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fe70: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x13fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x13fe74: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x13fe78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13fe7c: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x13fe80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe84: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x13fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x13fe88: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x13fe8c: 0x0  nop
    ctx->pc = 0x13fe8cu;
    // NOP
label_13fe90:
    // 0x13fe90: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x13fe94: 0x26a5ed68  addiu       $a1, $s5, -0x1298
    ctx->pc = 0x13fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962536));
    // 0x13fe98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13fea0: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x13fea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fea8: 0xae63ed60  sw          $v1, -0x12A0($s3)
    ctx->pc = 0x13fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 3));
    // 0x13feac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13feb0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x13FEB0u;
    SET_GPR_U32(ctx, 31, 0x13FEB8u);
    ctx->pc = 0x13FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEB0u;
            // 0x13feb4: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FEB8u; }
        if (ctx->pc != 0x13FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FEB8u; }
        if (ctx->pc != 0x13FEB8u) { return; }
    }
    ctx->pc = 0x13FEB8u;
    // 0x13feb8: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x13feb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x13febc: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x13fec0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13fec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13fec8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fecc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13feccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fed0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x13fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x13fed4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13fed8: 0xa0f809  jalr        $a1
    ctx->pc = 0x13FED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13FEE0u);
        ctx->pc = 0x13FEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FED8u;
            // 0x13fedc: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13FEE0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FFC8u: goto label_13ffc8;
            case 0x13FFFCu: goto label_13fffc;
            case 0x140000u: goto label_140000;
            case 0x140010u: goto label_140010;
            case 0x140058u: goto label_140058;
            case 0x1400C0u: goto label_1400c0;
            case 0x1400DCu: goto label_1400dc;
            case 0x140100u: goto label_140100;
            case 0x140120u: goto label_140120;
            case 0x140158u: goto label_140158;
            case 0x140168u: goto label_140168;
            case 0x14017Cu: goto label_14017c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FEE0u; }
            if (ctx->pc != 0x13FEE0u) { return; }
        }
        }
    }
    ctx->pc = 0x13FEE0u;
    // 0x13fee0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13fee4: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x13fee8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x13fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x13feec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13FEECu;
    {
        const bool branch_taken_0x13feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEECu;
            // 0x13fef0: 0x8e62ed60  lw          $v0, -0x12A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13feec) {
            ctx->pc = 0x13FF18u;
            goto label_13ff18;
        }
    }
    ctx->pc = 0x13FEF4u;
    // 0x13fef4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_13fef8:
    // 0x13fef8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x13fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13fefc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x13fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x13ff00: 0x0  nop
    ctx->pc = 0x13ff00u;
    // NOP
    // 0x13ff04: 0x0  nop
    ctx->pc = 0x13ff04u;
    // NOP
    // 0x13ff08: 0x0  nop
    ctx->pc = 0x13ff08u;
    // NOP
    // 0x13ff0c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13FF0Cu;
    {
        const bool branch_taken_0x13ff0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff0c) {
            ctx->pc = 0x13FF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF0Cu;
            // 0x13ff10: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FEF8u;
            runtime->cooperativeGuestYield();
            goto label_13fef8;
        }
    }
    ctx->pc = 0x13FF14u;
    // 0x13ff14: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_13ff18:
    // 0x13ff18: 0x26a5ed68  addiu       $a1, $s5, -0x1298
    ctx->pc = 0x13ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962536));
    // 0x13ff1c: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x13ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x13ff20: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ff24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ff28: 0xae66ed60  sw          $a2, -0x12A0($s3)
    ctx->pc = 0x13ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 6));
    // 0x13ff2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ff30: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x13ff30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x13ff34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ff38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FF38u;
    {
        const bool branch_taken_0x13ff38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF38u;
            // 0x13ff3c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff38) {
            ctx->pc = 0x13FF50u;
            goto label_13ff50;
        }
    }
    ctx->pc = 0x13FF40u;
    // 0x13ff40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ff44: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ff48: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x13FF48u;
    SET_GPR_U32(ctx, 31, 0x13FF50u);
    ctx->pc = 0x13FF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF48u;
            // 0x13ff4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF50u; }
        if (ctx->pc != 0x13FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF50u; }
        if (ctx->pc != 0x13FF50u) { return; }
    }
    ctx->pc = 0x13FF50u;
label_13ff50:
    // 0x13ff50: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x13ff54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13ff58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ff5c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x13ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_13ff60:
    // 0x13ff60: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13ff60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ff64: 0x2682bbb0  addiu       $v0, $s4, -0x4450
    ctx->pc = 0x13ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949808));
    // 0x13ff68: 0x5602ffb7  bnel        $s0, $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x13FF68u;
    {
        const bool branch_taken_0x13ff68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ff68) {
            ctx->pc = 0x13FF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF68u;
            // 0x13ff6c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FE48u;
            runtime->cooperativeGuestYield();
            goto label_13fe48;
        }
    }
    ctx->pc = 0x13FF70u;
label_13ff70:
    // 0x13ff70: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x13ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x13ff74: 0x8c50bbb0  lw          $s0, -0x4450($v0)
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949808)));
    // 0x13ff78: 0x2442bbb0  addiu       $v0, $v0, -0x4450
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
    // 0x13ff7c: 0x5202007f  beql        $s0, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x13FF7Cu;
    {
        const bool branch_taken_0x13ff7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff7c) {
            ctx->pc = 0x13FF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF7Cu;
            // 0x13ff80: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14017Cu;
            goto label_14017c;
        }
    }
    ctx->pc = 0x13FF84u;
    // 0x13ff84: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13ff88:
    // 0x13ff88: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x13ff88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13ff8c: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x13ff8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x13ff90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ff94: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x13FF94u;
    {
        const bool branch_taken_0x13ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff94) {
            ctx->pc = 0x13FF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF94u;
            // 0x13ff98: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140168u;
            goto label_140168;
        }
    }
    ctx->pc = 0x13FF9Cu;
    // 0x13ff9c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x13ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x13ffa0: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x13FFA0u;
    {
        const bool branch_taken_0x13ffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ffa0) {
            ctx->pc = 0x13FFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFA0u;
            // 0x13ffa4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140168u;
            goto label_140168;
        }
    }
    ctx->pc = 0x13FFA8u;
    // 0x13ffa8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ffac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13ffb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ffb4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13FFB4u;
    {
        const bool branch_taken_0x13ffb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFB4u;
            // 0x13ffb8: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffb4) {
            ctx->pc = 0x13FFFCu;
            goto label_13fffc;
        }
    }
    ctx->pc = 0x13FFBCu;
    // 0x13ffbc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x13FFBCu;
    {
        const bool branch_taken_0x13ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFBCu;
            // 0x13ffc0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffbc) {
            ctx->pc = 0x140168u;
            goto label_140168;
        }
    }
    ctx->pc = 0x13FFC4u;
    // 0x13ffc4: 0x0  nop
    ctx->pc = 0x13ffc4u;
    // NOP
label_13ffc8:
    // 0x13ffc8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13ffcc: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x13ffccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13ffd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ffd4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13FFD4u;
    {
        const bool branch_taken_0x13ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ffd4) {
            ctx->pc = 0x13FFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFD4u;
            // 0x13ffd8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140000u;
            goto label_140000;
        }
    }
    ctx->pc = 0x13FFDCu;
    // 0x13ffdc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x13ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13ffe0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FFE0u;
    {
        const bool branch_taken_0x13ffe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ffe0) {
            ctx->pc = 0x13FFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFE0u;
            // 0x13ffe4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140000u;
            goto label_140000;
        }
    }
    ctx->pc = 0x13FFE8u;
    // 0x13ffe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ffec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13fff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fff4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FFF4u;
    {
        const bool branch_taken_0x13fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFF4u;
            // 0x13fff8: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fff4) {
            ctx->pc = 0x140010u;
            goto label_140010;
        }
    }
    ctx->pc = 0x13FFFCu;
label_13fffc:
    // 0x13fffc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140000:
    // 0x140000: 0x24a2bbb0  addiu       $v0, $a1, -0x4450
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x140004: 0x5602fff0  bnel        $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x140004u;
    {
        const bool branch_taken_0x140004 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x140004) {
            ctx->pc = 0x140008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140004u;
            // 0x140008: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FFC8u;
            runtime->cooperativeGuestYield();
            goto label_13ffc8;
        }
    }
    ctx->pc = 0x14000Cu;
    // 0x14000c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_140010:
    // 0x140010: 0x2442bbb0  addiu       $v0, $v0, -0x4450
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
    // 0x140014: 0x12020054  beq         $s0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x140014u;
    {
        const bool branch_taken_0x140014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x140018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140014u;
            // 0x140018: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140014) {
            ctx->pc = 0x140168u;
            goto label_140168;
        }
    }
    ctx->pc = 0x14001Cu;
    // 0x14001c: 0x8e43ed60  lw          $v1, -0x12A0($s2)
    ctx->pc = 0x14001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962528)));
    // 0x140020: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x140020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140024: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140028: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140028u;
    {
        const bool branch_taken_0x140028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140028u;
            // 0x14002c: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140028) {
            ctx->pc = 0x140058u;
            goto label_140058;
        }
    }
    ctx->pc = 0x140030u;
    // 0x140030: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140038: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x140038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x14003c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14003cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x140040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140044: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x140048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14004c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14004cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x140050: 0x8e43ed60  lw          $v1, -0x12A0($s2)
    ctx->pc = 0x140050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962528)));
    // 0x140054: 0x0  nop
    ctx->pc = 0x140054u;
    // NOP
label_140058:
    // 0x140058: 0x2665ed68  addiu       $a1, $s3, -0x1298
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962536));
    // 0x14005c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140060: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140064: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x140068: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14006c: 0xae43ed60  sw          $v1, -0x12A0($s2)
    ctx->pc = 0x14006cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962528), GPR_U32(ctx, 3));
    // 0x140070: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140074: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140074u;
    SET_GPR_U32(ctx, 31, 0x14007Cu);
    ctx->pc = 0x140078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140074u;
            // 0x140078: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14007Cu; }
        if (ctx->pc != 0x14007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14007Cu; }
        if (ctx->pc != 0x14007Cu) { return; }
    }
    ctx->pc = 0x14007Cu;
    // 0x14007c: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x140080: 0x2684bb98  addiu       $a0, $s4, -0x4468
    ctx->pc = 0x140080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949784));
    // 0x140084: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140088: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14008c: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x140090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140094: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x140094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x140098: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14009c: 0x8d07f168  lw          $a3, -0xE98($t0)
    ctx->pc = 0x14009cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294963560)));
    // 0x1400a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1400a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1400a8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1400a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1400ac: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x1400acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1400b0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1400b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1400b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1400B4u;
    {
        const bool branch_taken_0x1400b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1400B4u;
            // 0x1400b8: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400b4) {
            ctx->pc = 0x1400DCu;
            goto label_1400dc;
        }
    }
    ctx->pc = 0x1400BCu;
    // 0x1400bc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1400bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1400c0:
    // 0x1400c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1400c4: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x1400c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1400c8: 0x0  nop
    ctx->pc = 0x1400c8u;
    // NOP
    // 0x1400cc: 0x0  nop
    ctx->pc = 0x1400ccu;
    // NOP
    // 0x1400d0: 0x0  nop
    ctx->pc = 0x1400d0u;
    // NOP
    // 0x1400d4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1400D4u;
    {
        const bool branch_taken_0x1400d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1400d4) {
            ctx->pc = 0x1400D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1400D4u;
            // 0x1400d8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1400C0u;
            runtime->cooperativeGuestYield();
            goto label_1400c0;
        }
    }
    ctx->pc = 0x1400DCu;
label_1400dc:
    // 0x1400dc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1400dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1400e0: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x1400e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x1400e4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1400e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1400e8: 0xad02f168  sw          $v0, -0xE98($t0)
    ctx->pc = 0x1400e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963560), GPR_U32(ctx, 2));
    // 0x1400ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1400ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400f0: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1400f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1400f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1400F4u;
    {
        const bool branch_taken_0x1400f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1400F4u;
            // 0x1400f8: 0x8e42ed60  lw          $v0, -0x12A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400f4) {
            ctx->pc = 0x140120u;
            goto label_140120;
        }
    }
    ctx->pc = 0x1400FCu;
    // 0x1400fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1400fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_140100:
    // 0x140100: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x140104: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x140104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x140108: 0x0  nop
    ctx->pc = 0x140108u;
    // NOP
    // 0x14010c: 0x0  nop
    ctx->pc = 0x14010cu;
    // NOP
    // 0x140110: 0x0  nop
    ctx->pc = 0x140110u;
    // NOP
    // 0x140114: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140114u;
    {
        const bool branch_taken_0x140114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140114) {
            ctx->pc = 0x140118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140114u;
            // 0x140118: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140100u;
            runtime->cooperativeGuestYield();
            goto label_140100;
        }
    }
    ctx->pc = 0x14011Cu;
    // 0x14011c: 0x8e42ed60  lw          $v0, -0x12A0($s2)
    ctx->pc = 0x14011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962528)));
label_140120:
    // 0x140120: 0x2665ed68  addiu       $a1, $s3, -0x1298
    ctx->pc = 0x140120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962536));
    // 0x140124: 0xad04f168  sw          $a0, -0xE98($t0)
    ctx->pc = 0x140124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963560), GPR_U32(ctx, 4));
    // 0x140128: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14012c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140130: 0xae46ed60  sw          $a2, -0x12A0($s2)
    ctx->pc = 0x140130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962528), GPR_U32(ctx, 6));
    // 0x140134: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x140134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140138: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14013c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140140: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140140u;
    {
        const bool branch_taken_0x140140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140140u;
            // 0x140144: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140140) {
            ctx->pc = 0x140158u;
            goto label_140158;
        }
    }
    ctx->pc = 0x140148u;
    // 0x140148: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14014c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140150: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140150u;
    SET_GPR_U32(ctx, 31, 0x140158u);
    ctx->pc = 0x140154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140150u;
            // 0x140154: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140158u; }
        if (ctx->pc != 0x140158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140158u; }
        if (ctx->pc != 0x140158u) { return; }
    }
    ctx->pc = 0x140158u;
label_140158:
    // 0x140158: 0x2683bb98  addiu       $v1, $s4, -0x4468
    ctx->pc = 0x140158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949784));
    // 0x14015c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x14015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140164: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x140164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_140168:
    // 0x140168: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x140168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x14016c: 0x2442bbb0  addiu       $v0, $v0, -0x4450
    ctx->pc = 0x14016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
    // 0x140170: 0x5602ff85  bnel        $s0, $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x140170u;
    {
        const bool branch_taken_0x140170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x140170) {
            ctx->pc = 0x140174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140170u;
            // 0x140174: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FF88u;
            runtime->cooperativeGuestYield();
            goto label_13ff88;
        }
    }
    ctx->pc = 0x140178u;
    // 0x140178: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x140178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14017c:
    // 0x14017c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14017cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140180: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x140180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140184: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x140184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140188: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x140188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14018c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14018cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140190: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x140190u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140198: 0x3e00008  jr          $ra
    ctx->pc = 0x140198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140198u;
            // 0x14019c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FE48u: goto label_13fe48;
            case 0x13FE90u: goto label_13fe90;
            case 0x13FEF8u: goto label_13fef8;
            case 0x13FF18u: goto label_13ff18;
            case 0x13FF50u: goto label_13ff50;
            case 0x13FF60u: goto label_13ff60;
            case 0x13FF70u: goto label_13ff70;
            case 0x13FF88u: goto label_13ff88;
            case 0x13FFC8u: goto label_13ffc8;
            case 0x13FFFCu: goto label_13fffc;
            case 0x140000u: goto label_140000;
            case 0x140010u: goto label_140010;
            case 0x140058u: goto label_140058;
            case 0x1400C0u: goto label_1400c0;
            case 0x1400DCu: goto label_1400dc;
            case 0x140100u: goto label_140100;
            case 0x140120u: goto label_140120;
            case 0x140158u: goto label_140158;
            case 0x140168u: goto label_140168;
            case 0x14017Cu: goto label_14017c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1401A0u;
}

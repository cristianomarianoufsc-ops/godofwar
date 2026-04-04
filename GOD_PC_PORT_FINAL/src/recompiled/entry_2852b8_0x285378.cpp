#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2852b8
// Address: 0x2852b8 - 0x285378
void entry_2852b8_0x285378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2852b8_0x285378");
#endif

    ctx->pc = 0x2852b8u;

    // 0x2852b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2852bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2852bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2852c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2852c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2852c4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2852c8: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x2852c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2852cc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2852ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2852d0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2852d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2852d4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2852D4u;
    {
        const bool branch_taken_0x2852d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2852D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852D4u;
            // 0x2852d8: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852d4) {
            ctx->pc = 0x2852E8u;
            goto label_2852e8;
        }
    }
    ctx->pc = 0x2852DCu;
    // 0x2852dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2852dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2852e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2852E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2852E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852E0u;
            // 0x2852e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2852E8u: goto label_2852e8;
            case 0x285308u: goto label_285308;
            case 0x28531Cu: goto label_28531c;
            case 0x285320u: goto label_285320;
            case 0x285328u: goto label_285328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2852E8u;
label_2852e8:
    // 0x2852e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2852ec: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2852ECu;
    {
        const bool branch_taken_0x2852ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2852F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852ECu;
            // 0x2852f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852ec) {
            ctx->pc = 0x285328u;
            goto label_285328;
        }
    }
    ctx->pc = 0x2852F4u;
    // 0x2852f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2852F4u;
    {
        const bool branch_taken_0x2852f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2852F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2852F4u;
            // 0x2852f8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852f4) {
            ctx->pc = 0x285308u;
            goto label_285308;
        }
    }
    ctx->pc = 0x2852FCu;
    // 0x2852fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2852fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285300: 0x3e00008  jr          $ra
    ctx->pc = 0x285300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285300u;
            // 0x285304: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2852E8u: goto label_2852e8;
            case 0x285308u: goto label_285308;
            case 0x28531Cu: goto label_28531c;
            case 0x285320u: goto label_285320;
            case 0x285328u: goto label_285328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285308u;
label_285308:
    // 0x285308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x285308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28530c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28530Cu;
    {
        const bool branch_taken_0x28530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28530Cu;
            // 0x285310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28530c) {
            ctx->pc = 0x28531Cu;
            goto label_28531c;
        }
    }
    ctx->pc = 0x285314u;
    // 0x285314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285314u;
    {
        const bool branch_taken_0x285314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285314u;
            // 0x285318: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285314) {
            ctx->pc = 0x285320u;
            goto label_285320;
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28531cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_285320:
    // 0x285320: 0x3e00008  jr          $ra
    ctx->pc = 0x285320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285320u;
            // 0x285324: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2852E8u: goto label_2852e8;
            case 0x285308u: goto label_285308;
            case 0x28531Cu: goto label_28531c;
            case 0x285320u: goto label_285320;
            case 0x285328u: goto label_285328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285328u;
label_285328:
    // 0x285328: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x28532c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285330: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x285330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x285334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x285334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x285338: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x285338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x28533c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x28533cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x285340: 0x3e00008  jr          $ra
    ctx->pc = 0x285340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285340u;
            // 0x285344: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2852E8u: goto label_2852e8;
            case 0x285308u: goto label_285308;
            case 0x28531Cu: goto label_28531c;
            case 0x285320u: goto label_285320;
            case 0x285328u: goto label_285328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285348u;
    // 0x285348: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x285348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28534c: 0x0  nop
    ctx->pc = 0x28534cu;
    // NOP
    // 0x285350: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x285350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x285354: 0x0  nop
    ctx->pc = 0x285354u;
    // NOP
    // 0x285358: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x285358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28535c: 0x0  nop
    ctx->pc = 0x28535cu;
    // NOP
    // 0x285360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285364: 0x0  nop
    ctx->pc = 0x285364u;
    // NOP
    // 0x285368: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x285368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28536c: 0x0  nop
    ctx->pc = 0x28536cu;
    // NOP
    // 0x285370: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285374: 0x0  nop
    ctx->pc = 0x285374u;
    // NOP
}

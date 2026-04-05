#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26cc80
// Address: 0x26cc80 - 0x26cdb8
void entry_26cc80_0x26cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26cc80_0x26cdb8");
#endif

    ctx->pc = 0x26cc80u;

    // 0x26cc80: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cc84: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26cc88: 0x8c4aa318  lw          $t2, -0x5CE8($v0)
    ctx->pc = 0x26cc88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943512)));
    // 0x26cc8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26cc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26cc90: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26cc94: 0xac60a450  sw          $zero, -0x5BB0($v1)
    ctx->pc = 0x26cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943824), GPR_U32(ctx, 0));
    // 0x26cc98: 0xac40a440  sw          $zero, -0x5BC0($v0)
    ctx->pc = 0x26cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943808), GPR_U32(ctx, 0));
    // 0x26cc9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x26cc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26cca4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x26cca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cca8: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x26cca8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ccb0: 0x11420004  beq         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26CCB0u;
    {
        const bool branch_taken_0x26ccb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCB0u;
            // 0x26ccb4: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccb0) {
            ctx->pc = 0x26CCC4u;
            goto label_26ccc4;
        }
    }
    ctx->pc = 0x26CCB8u;
    // 0x26ccb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ccbc: 0x1142000c  beq         $t2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26CCBCu;
    {
        const bool branch_taken_0x26ccbc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCBCu;
            // 0x26ccc0: 0x3c040031  lui         $a0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccbc) {
            ctx->pc = 0x26CCF0u;
            goto label_26ccf0;
        }
    }
    ctx->pc = 0x26CCC4u;
label_26ccc4:
    // 0x26ccc4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26ccc8: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x26cccc: 0x8445a320  lh          $a1, -0x5CE0($v0)
    ctx->pc = 0x26ccccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294943520)));
    // 0x26ccd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ccd4: 0xacc3a464  sw          $v1, -0x5B9C($a2)
    ctx->pc = 0x26ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943844), GPR_U32(ctx, 3));
    // 0x26ccd8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x26ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x26ccdc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x26ccdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x26cce0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26cce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cce4: 0x8487a322  lh          $a3, -0x5CDE($a0)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294943522)));
    // 0x26cce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26CCE8u;
    {
        const bool branch_taken_0x26cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCE8u;
            // 0x26ccec: 0x102300a  movz        $a2, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cce8) {
            ctx->pc = 0x26CD08u;
            goto label_26cd08;
        }
    }
    ctx->pc = 0x26CCF0u;
label_26ccf0:
    // 0x26ccf0: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26ccf4: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26ccf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ccfc: 0xac62a464  sw          $v0, -0x5B9C($v1)
    ctx->pc = 0x26ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943844), GPR_U32(ctx, 2));
    // 0x26cd00: 0x8486a320  lh          $a2, -0x5CE0($a0)
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294943520)));
    // 0x26cd04: 0x84a7a322  lh          $a3, -0x5CDE($a1)
    ctx->pc = 0x26cd04u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294943522)));
label_26cd08:
    // 0x26cd08: 0x2d820005  sltiu       $v0, $t4, 0x5
    ctx->pc = 0x26cd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26cd0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26CD0Cu;
    {
        const bool branch_taken_0x26cd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD0Cu;
            // 0x26cd10: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd0c) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CD14u;
    // 0x26cd14: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x26cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x26cd18: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
    // 0x26cd1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26cd20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26cd24: 0x400008  jr          $v0
    ctx->pc = 0x26CD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CD2Cu: goto label_26cd2c;
            case 0x26CD4Cu: goto label_26cd4c;
            case 0x26CD5Cu: goto label_26cd5c;
            case 0x26CD7Cu: goto label_26cd7c;
            case 0x26CD88u: goto label_26cd88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CD2Cu;
label_26cd2c:
    // 0x26cd2c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x26cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26cd30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cd34: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26cd34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x26cd38: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26CD38u;
    {
        const bool branch_taken_0x26cd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd38) {
            ctx->pc = 0x26CD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD38u;
            // 0x26cd3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CD40u;
            goto label_26cd40;
        }
    }
    ctx->pc = 0x26CD40u;
label_26cd40:
    // 0x26cd40: 0x1012  mflo        $v0
    ctx->pc = 0x26cd40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x26cd44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26CD44u;
    {
        const bool branch_taken_0x26cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD44u;
            // 0x26cd48: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd44) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CD4Cu;
label_26cd4c:
    // 0x26cd4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x26cd50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26cd54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26CD54u;
    {
        const bool branch_taken_0x26cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD54u;
            // 0x26cd58: 0x23082  srl         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd54) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CD5Cu;
label_26cd5c:
    // 0x26cd5c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x26cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26cd60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26cd64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26cd64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x26cd68: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26CD68u;
    {
        const bool branch_taken_0x26cd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd68) {
            ctx->pc = 0x26CD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD68u;
            // 0x26cd6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26CD70u;
            goto label_26cd70;
        }
    }
    ctx->pc = 0x26CD70u;
label_26cd70:
    // 0x26cd70: 0x1012  mflo        $v0
    ctx->pc = 0x26cd70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x26cd74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26CD74u;
    {
        const bool branch_taken_0x26cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD74u;
            // 0x26cd78: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd74) {
            ctx->pc = 0x26CD88u;
            goto label_26cd88;
        }
    }
    ctx->pc = 0x26CD7Cu;
label_26cd7c:
    // 0x26cd7c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x26cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26cd80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26cd84: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x26cd84u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_26cd88:
    // 0x26cd88: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x26cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x26cd8c: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x26cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x26cd90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26cd94: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x26cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x26cd98: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x26cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26cd9c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x26cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26cda0: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x26cda0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26cda4: 0xc09b45c  jal         func_26D170
    ctx->pc = 0x26CDA4u;
    SET_GPR_U32(ctx, 31, 0x26CDACu);
    ctx->pc = 0x26CDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDA4u;
            // 0x26cda8: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D170u;
    if (runtime->hasFunction(0x26D170u)) {
        auto targetFn = runtime->lookupFunction(0x26D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDACu; }
        if (ctx->pc != 0x26CDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26d170_0x26d318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDACu; }
        if (ctx->pc != 0x26CDACu) { return; }
    }
    ctx->pc = 0x26CDACu;
    // 0x26cdac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26cdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDB0u;
            // 0x26cdb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26CCC4u: goto label_26ccc4;
            case 0x26CCF0u: goto label_26ccf0;
            case 0x26CD08u: goto label_26cd08;
            case 0x26CD2Cu: goto label_26cd2c;
            case 0x26CD40u: goto label_26cd40;
            case 0x26CD4Cu: goto label_26cd4c;
            case 0x26CD5Cu: goto label_26cd5c;
            case 0x26CD70u: goto label_26cd70;
            case 0x26CD7Cu: goto label_26cd7c;
            case 0x26CD88u: goto label_26cd88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26CDB8u;
}

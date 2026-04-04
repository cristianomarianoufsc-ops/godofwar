#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131300
// Address: 0x131300 - 0x1313b0
void sub_00131300_0x131300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131300_0x131300");
#endif

    ctx->pc = 0x131300u;

    // 0x131300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131304: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x131308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13130c: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x131310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131314: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x131314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x131318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13131c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x131320: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13132c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x13132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x131330: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x131330u;
    {
        const bool branch_taken_0x131330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131330u;
            // 0x131334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131330) {
            ctx->pc = 0x131398u;
            goto label_131398;
        }
    }
    ctx->pc = 0x131338u;
    // 0x131338: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x131338u;
    {
        const bool branch_taken_0x131338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131338) {
            ctx->pc = 0x13133Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131338u;
            // 0x13133c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13139Cu;
            goto label_13139c;
        }
    }
    ctx->pc = 0x131340u;
    // 0x131340: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x131344: 0x0  nop
    ctx->pc = 0x131344u;
    // NOP
label_131348:
    // 0x131348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13134c: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x13134cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x131350: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131354: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x131354u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131358: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x131358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13135c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13135Cu;
    {
        const bool branch_taken_0x13135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13135Cu;
            // 0x131360: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13135c) {
            ctx->pc = 0x131390u;
            goto label_131390;
        }
    }
    ctx->pc = 0x131364u;
    // 0x131364: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x131364u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131368: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13136c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x13136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x131370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13137c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131380: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x131384: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x131388: 0x40f809  jalr        $v0
    ctx->pc = 0x131388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131390u);
        ctx->pc = 0x13138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131388u;
            // 0x13138c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x131390u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131348u: goto label_131348;
            case 0x131390u: goto label_131390;
            case 0x131398u: goto label_131398;
            case 0x13139Cu: goto label_13139c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131390u; }
            if (ctx->pc != 0x131390u) { return; }
        }
        }
    }
    ctx->pc = 0x131390u;
label_131390:
    // 0x131390: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x131390u;
    {
        const bool branch_taken_0x131390 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x131394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131390u;
            // 0x131394: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131390) {
            ctx->pc = 0x131348u;
            runtime->cooperativeGuestYield();
            goto label_131348;
        }
    }
    ctx->pc = 0x131398u;
label_131398:
    // 0x131398: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x131398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13139c:
    // 0x13139c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13139cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1313a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1313a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1313A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1313A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1313A4u;
            // 0x1313a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131348u: goto label_131348;
            case 0x131390u: goto label_131390;
            case 0x131398u: goto label_131398;
            case 0x13139Cu: goto label_13139c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1313ACu;
    // 0x1313ac: 0x0  nop
    ctx->pc = 0x1313acu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F260
// Address: 0x17f260 - 0x17f378
void sub_0017F260_0x17f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F260_0x17f260");
#endif

    ctx->pc = 0x17f260u;

    // 0x17f260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f264: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f26c: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x17f26cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x17f270: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F270u;
    {
        const bool branch_taken_0x17f270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F270u;
            // 0x17f274: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f270) {
            ctx->pc = 0x17F290u;
            goto label_17f290;
        }
    }
    ctx->pc = 0x17F278u;
    // 0x17f278: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f27c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f280: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F280u;
    SET_GPR_U32(ctx, 31, 0x17F288u);
    ctx->pc = 0x17F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F280u;
            // 0x17f284: 0x8c44c79c  lw          $a0, -0x3864($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F288u; }
        if (ctx->pc != 0x17F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F288u; }
        if (ctx->pc != 0x17F288u) { return; }
    }
    ctx->pc = 0x17F288u;
    // 0x17f288: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17F288u;
    {
        const bool branch_taken_0x17f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F288u;
            // 0x17f28c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f288) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F290u;
label_17f290:
    // 0x17f290: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F290u;
    {
        const bool branch_taken_0x17f290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F290u;
            // 0x17f294: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f290) {
            ctx->pc = 0x17F2B0u;
            goto label_17f2b0;
        }
    }
    ctx->pc = 0x17F298u;
    // 0x17f298: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f29c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f2a0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F2A0u;
    SET_GPR_U32(ctx, 31, 0x17F2A8u);
    ctx->pc = 0x17F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2A0u;
            // 0x17f2a4: 0x8c44c7a0  lw          $a0, -0x3860($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    }
    ctx->pc = 0x17F2A8u;
    // 0x17f2a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17F2A8u;
    {
        const bool branch_taken_0x17f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2A8u;
            // 0x17f2ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2a8) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F2B0u;
label_17f2b0:
    // 0x17f2b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F2B0u;
    {
        const bool branch_taken_0x17f2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2B0u;
            // 0x17f2b4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2b0) {
            ctx->pc = 0x17F2D0u;
            goto label_17f2d0;
        }
    }
    ctx->pc = 0x17F2B8u;
    // 0x17f2b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f2bc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f2c0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F2C0u;
    SET_GPR_U32(ctx, 31, 0x17F2C8u);
    ctx->pc = 0x17F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2C0u;
            // 0x17f2c4: 0x8c44c7a4  lw          $a0, -0x385C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2C8u; }
        if (ctx->pc != 0x17F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2C8u; }
        if (ctx->pc != 0x17F2C8u) { return; }
    }
    ctx->pc = 0x17F2C8u;
    // 0x17f2c8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17F2C8u;
    {
        const bool branch_taken_0x17f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2C8u;
            // 0x17f2cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c8) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F2D0u;
label_17f2d0:
    // 0x17f2d0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F2D0u;
    {
        const bool branch_taken_0x17f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2D0u;
            // 0x17f2d4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2d0) {
            ctx->pc = 0x17F2F0u;
            goto label_17f2f0;
        }
    }
    ctx->pc = 0x17F2D8u;
    // 0x17f2d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f2dc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f2e0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F2E0u;
    SET_GPR_U32(ctx, 31, 0x17F2E8u);
    ctx->pc = 0x17F2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2E0u;
            // 0x17f2e4: 0x8c44c7a8  lw          $a0, -0x3858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952872)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2E8u; }
        if (ctx->pc != 0x17F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2E8u; }
        if (ctx->pc != 0x17F2E8u) { return; }
    }
    ctx->pc = 0x17F2E8u;
    // 0x17f2e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17F2E8u;
    {
        const bool branch_taken_0x17f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2E8u;
            // 0x17f2ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2e8) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F2F0u;
label_17f2f0:
    // 0x17f2f0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F2F0u;
    {
        const bool branch_taken_0x17f2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2F0u;
            // 0x17f2f4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2f0) {
            ctx->pc = 0x17F310u;
            goto label_17f310;
        }
    }
    ctx->pc = 0x17F2F8u;
    // 0x17f2f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f2fc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f300: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F300u;
    SET_GPR_U32(ctx, 31, 0x17F308u);
    ctx->pc = 0x17F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F300u;
            // 0x17f304: 0x8c44c7ac  lw          $a0, -0x3854($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F308u; }
        if (ctx->pc != 0x17F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F308u; }
        if (ctx->pc != 0x17F308u) { return; }
    }
    ctx->pc = 0x17F308u;
    // 0x17f308: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17F308u;
    {
        const bool branch_taken_0x17f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F308u;
            // 0x17f30c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f308) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F310u;
label_17f310:
    // 0x17f310: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F310u;
    {
        const bool branch_taken_0x17f310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F310u;
            // 0x17f314: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f310) {
            ctx->pc = 0x17F330u;
            goto label_17f330;
        }
    }
    ctx->pc = 0x17F318u;
    // 0x17f318: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f31c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f320: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F320u;
    SET_GPR_U32(ctx, 31, 0x17F328u);
    ctx->pc = 0x17F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F320u;
            // 0x17f324: 0x8c44c7b0  lw          $a0, -0x3850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F328u; }
        if (ctx->pc != 0x17F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F328u; }
        if (ctx->pc != 0x17F328u) { return; }
    }
    ctx->pc = 0x17F328u;
    // 0x17f328: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17F328u;
    {
        const bool branch_taken_0x17f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F328u;
            // 0x17f32c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f328) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F330u;
label_17f330:
    // 0x17f330: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F330u;
    {
        const bool branch_taken_0x17f330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F330u;
            // 0x17f334: 0x2402028a  addiu       $v0, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f330) {
            ctx->pc = 0x17F350u;
            goto label_17f350;
        }
    }
    ctx->pc = 0x17F338u;
    // 0x17f338: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f33c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f340: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F340u;
    SET_GPR_U32(ctx, 31, 0x17F348u);
    ctx->pc = 0x17F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F340u;
            // 0x17f344: 0x8c44c7b4  lw          $a0, -0x384C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F348u; }
        if (ctx->pc != 0x17F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F348u; }
        if (ctx->pc != 0x17F348u) { return; }
    }
    ctx->pc = 0x17F348u;
    // 0x17f348: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F348u;
    {
        const bool branch_taken_0x17f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F348u;
            // 0x17f34c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f348) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F350u;
label_17f350:
    // 0x17f350: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F350u;
    {
        const bool branch_taken_0x17f350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F350u;
            // 0x17f354: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f350) {
            ctx->pc = 0x17F36Cu;
            goto label_17f36c;
        }
    }
    ctx->pc = 0x17F358u;
    // 0x17f358: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f35c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17f360: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F360u;
    SET_GPR_U32(ctx, 31, 0x17F368u);
    ctx->pc = 0x17F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F360u;
            // 0x17f364: 0x8c44c7b8  lw          $a0, -0x3848($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F368u; }
        if (ctx->pc != 0x17F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F368u; }
        if (ctx->pc != 0x17F368u) { return; }
    }
    ctx->pc = 0x17F368u;
    // 0x17f368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f36c:
    // 0x17f36c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F36Cu;
            // 0x17f370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F290u: goto label_17f290;
            case 0x17F2B0u: goto label_17f2b0;
            case 0x17F2D0u: goto label_17f2d0;
            case 0x17F2F0u: goto label_17f2f0;
            case 0x17F310u: goto label_17f310;
            case 0x17F330u: goto label_17f330;
            case 0x17F350u: goto label_17f350;
            case 0x17F36Cu: goto label_17f36c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F374u;
    // 0x17f374: 0x0  nop
    ctx->pc = 0x17f374u;
    // NOP
}

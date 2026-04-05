#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296F08
// Address: 0x296f08 - 0x297130
void sub_00296F08_0x296f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F08_0x296f08");
#endif

    ctx->pc = 0x296f08u;

label_296f08:
    // 0x296f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296f0c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296F0Cu;
    {
        const bool branch_taken_0x296f0c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x296F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F0Cu;
            // 0x296f10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f0c) {
            ctx->pc = 0x296F24u;
            goto label_296f24;
        }
    }
    ctx->pc = 0x296F14u;
    // 0x296f14: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x296f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x296f18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x296f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x296f1c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x296F1Cu;
    {
        const bool branch_taken_0x296f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296f1c) {
            ctx->pc = 0x296F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296F1Cu;
            // 0x296f20: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296F34u;
            goto label_296f34;
        }
    }
    ctx->pc = 0x296F24u;
label_296f24:
    // 0x296f24: 0xc0a5bb6  jal         func_296ED8
    ctx->pc = 0x296F24u;
    SET_GPR_U32(ctx, 31, 0x296F2Cu);
    ctx->pc = 0x296ED8u;
    if (runtime->hasFunction(0x296ED8u)) {
        auto targetFn = runtime->lookupFunction(0x296ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F2Cu; }
        if (ctx->pc != 0x296F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00296ed8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F2Cu; }
        if (ctx->pc != 0x296F2Cu) { return; }
    }
    ctx->pc = 0x296F2Cu;
    // 0x296f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296F2Cu;
    {
        const bool branch_taken_0x296f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F2Cu;
            // 0x296f30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f2c) {
            ctx->pc = 0x296F40u;
            goto label_296f40;
        }
    }
    ctx->pc = 0x296F34u;
label_296f34:
    // 0x296f34: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x296f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x296f38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296f40:
    // 0x296f40: 0x3e00008  jr          $ra
    ctx->pc = 0x296F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F40u;
            // 0x296f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F08u: goto label_296f08;
            case 0x296F24u: goto label_296f24;
            case 0x296F34u: goto label_296f34;
            case 0x296F40u: goto label_296f40;
            case 0x296F94u: goto label_296f94;
            case 0x296FCCu: goto label_296fcc;
            case 0x296FDCu: goto label_296fdc;
            case 0x296FE0u: goto label_296fe0;
            case 0x296FF0u: goto label_296ff0;
            case 0x297088u: goto label_297088;
            case 0x297090u: goto label_297090;
            case 0x29709Cu: goto label_29709c;
            case 0x297118u: goto label_297118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296F48u;
    // 0x296f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296f4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296f50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x296f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296f54: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x296f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x296f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x296f5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x296f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296f68: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x296f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x296f6c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296F6Cu;
    {
        const bool branch_taken_0x296f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F6Cu;
            // 0x296f70: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f6c) {
            ctx->pc = 0x296F94u;
            goto label_296f94;
        }
    }
    ctx->pc = 0x296F74u;
    // 0x296f74: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x296F74u;
    {
        const bool branch_taken_0x296f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F74u;
            // 0x296f78: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f74) {
            ctx->pc = 0x296FDCu;
            goto label_296fdc;
        }
    }
    ctx->pc = 0x296F7Cu;
    // 0x296f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296f80: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x296f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x296f84: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x296F84u;
    {
        const bool branch_taken_0x296f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x296f84) {
            ctx->pc = 0x296FCCu;
            goto label_296fcc;
        }
    }
    ctx->pc = 0x296F8Cu;
    // 0x296f8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x296F8Cu;
    {
        const bool branch_taken_0x296f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296F8Cu;
            // 0x296f90: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f8c) {
            ctx->pc = 0x296FE0u;
            goto label_296fe0;
        }
    }
    ctx->pc = 0x296F94u;
label_296f94:
    // 0x296f94: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x296f98: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x296f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x296f9c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x296F9Cu;
    {
        const bool branch_taken_0x296f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296f9c) {
            ctx->pc = 0x296FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296F9Cu;
            // 0x296fa0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296FE0u;
            goto label_296fe0;
        }
    }
    ctx->pc = 0x296FA4u;
    // 0x296fa4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x296fa8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x296fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fac: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x296facu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fb0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x296fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x296fb4: 0x40f809  jalr        $v0
    ctx->pc = 0x296FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296FBCu);
        ctx->pc = 0x296FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296FB4u;
            // 0x296fb8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296FBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F08u: goto label_296f08;
            case 0x296F24u: goto label_296f24;
            case 0x296F34u: goto label_296f34;
            case 0x296F40u: goto label_296f40;
            case 0x296F94u: goto label_296f94;
            case 0x296FCCu: goto label_296fcc;
            case 0x296FDCu: goto label_296fdc;
            case 0x296FE0u: goto label_296fe0;
            case 0x296FF0u: goto label_296ff0;
            case 0x297088u: goto label_297088;
            case 0x297090u: goto label_297090;
            case 0x29709Cu: goto label_29709c;
            case 0x297118u: goto label_297118;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296FBCu; }
            if (ctx->pc != 0x296FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x296FBCu;
    // 0x296fbc: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x296fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fc0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x296fc0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296FC4u;
    {
        const bool branch_taken_0x296fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296FC4u;
            // 0x296fc8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fc4) {
            ctx->pc = 0x296FDCu;
            goto label_296fdc;
        }
    }
    ctx->pc = 0x296FCCu;
label_296fcc:
    // 0x296fcc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x296fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x296fd0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x296fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x296fd4: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x296fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x296fd8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x296fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_296fdc:
    // 0x296fdc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x296fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_296fe0:
    // 0x296fe0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296FE0u;
    {
        const bool branch_taken_0x296fe0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x296fe0) {
            ctx->pc = 0x296FF0u;
            goto label_296ff0;
        }
    }
    ctx->pc = 0x296FE8u;
    // 0x296fe8: 0xc0a4f14  jal         func_293C50
    ctx->pc = 0x296FE8u;
    SET_GPR_U32(ctx, 31, 0x296FF0u);
    ctx->pc = 0x293C50u;
    if (runtime->hasFunction(0x293C50u)) {
        auto targetFn = runtime->lookupFunction(0x293C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296FF0u; }
        if (ctx->pc != 0x296FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c50_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296FF0u; }
        if (ctx->pc != 0x296FF0u) { return; }
    }
    ctx->pc = 0x296FF0u;
label_296ff0:
    // 0x296ff0: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x296FF0u;
    SET_GPR_U32(ctx, 31, 0x296FF8u);
    ctx->pc = 0x296FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296FF0u;
            // 0x296ff4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296FF8u; }
        if (ctx->pc != 0x296FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296eb8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296FF8u; }
        if (ctx->pc != 0x296FF8u) { return; }
    }
    ctx->pc = 0x296FF8u;
    // 0x296ff8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x296ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x296ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29700c: 0x3e00008  jr          $ra
    ctx->pc = 0x29700Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29700Cu;
            // 0x297010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F08u: goto label_296f08;
            case 0x296F24u: goto label_296f24;
            case 0x296F34u: goto label_296f34;
            case 0x296F40u: goto label_296f40;
            case 0x296F94u: goto label_296f94;
            case 0x296FCCu: goto label_296fcc;
            case 0x296FDCu: goto label_296fdc;
            case 0x296FE0u: goto label_296fe0;
            case 0x296FF0u: goto label_296ff0;
            case 0x297088u: goto label_297088;
            case 0x297090u: goto label_297090;
            case 0x29709Cu: goto label_29709c;
            case 0x297118u: goto label_297118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297014u;
    // 0x297014: 0x0  nop
    ctx->pc = 0x297014u;
    // NOP
    // 0x297018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29701c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x29701cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297024: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297028: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x297028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x29702c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x29702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x297030: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x297030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x297034: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x297038: 0xc0a5a84  jal         func_296A10
    ctx->pc = 0x297038u;
    SET_GPR_U32(ctx, 31, 0x297040u);
    ctx->pc = 0x29703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297038u;
            // 0x29703c: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296A10u;
    if (runtime->hasFunction(0x296A10u)) {
        auto targetFn = runtime->lookupFunction(0x296A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297040u; }
        if (ctx->pc != 0x297040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296a10_0x296a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297040u; }
        if (ctx->pc != 0x297040u) { return; }
    }
    ctx->pc = 0x297040u;
    // 0x297040: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x297040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x297044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297048: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x297048u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x29704c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29704cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297050: 0x3e00008  jr          $ra
    ctx->pc = 0x297050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297050u;
            // 0x297054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F08u: goto label_296f08;
            case 0x296F24u: goto label_296f24;
            case 0x296F34u: goto label_296f34;
            case 0x296F40u: goto label_296f40;
            case 0x296F94u: goto label_296f94;
            case 0x296FCCu: goto label_296fcc;
            case 0x296FDCu: goto label_296fdc;
            case 0x296FE0u: goto label_296fe0;
            case 0x296FF0u: goto label_296ff0;
            case 0x297088u: goto label_297088;
            case 0x297090u: goto label_297090;
            case 0x29709Cu: goto label_29709c;
            case 0x297118u: goto label_297118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297058u;
    // 0x297058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29705c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29706c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297070: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x297070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x297074: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x297074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x297078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297078u;
    {
        const bool branch_taken_0x297078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297078) {
            ctx->pc = 0x297090u;
            goto label_297090;
        }
    }
    ctx->pc = 0x297080u;
    // 0x297080: 0xc0a5bc2  jal         func_296F08
    ctx->pc = 0x297080u;
    SET_GPR_U32(ctx, 31, 0x297088u);
    ctx->pc = 0x297084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297080u;
            // 0x297084: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296F08u;
    runtime->cooperativeGuestYield();
    goto label_296f08;
    ctx->pc = 0x297088u;
label_297088:
    // 0x297088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297088u;
    {
        const bool branch_taken_0x297088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297088u;
            // 0x29708c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297088) {
            ctx->pc = 0x29709Cu;
            goto label_29709c;
        }
    }
    ctx->pc = 0x297090u;
label_297090:
    // 0x297090: 0xc0a5bb6  jal         func_296ED8
    ctx->pc = 0x297090u;
    SET_GPR_U32(ctx, 31, 0x297098u);
    ctx->pc = 0x296ED8u;
    if (runtime->hasFunction(0x296ED8u)) {
        auto targetFn = runtime->lookupFunction(0x296ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297098u; }
        if (ctx->pc != 0x297098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00296ed8_0x296ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297098u; }
        if (ctx->pc != 0x297098u) { return; }
    }
    ctx->pc = 0x297098u;
    // 0x297098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29709c:
    // 0x29709c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x29709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2970a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2970a4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2970a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2970a8: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2970a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2970ac: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2970acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2970b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2970b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2970b4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x2970b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x2970b8: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2970b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2970bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2970bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2970c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2970c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970c4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2970c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2970c8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2970c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2970cc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2970ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2970d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2970d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2970d4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2970d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2970d8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2970d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2970dc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2970dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2970e0: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2970e4: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2970e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2970e8: 0xc0a5a84  jal         func_296A10
    ctx->pc = 0x2970E8u;
    SET_GPR_U32(ctx, 31, 0x2970F0u);
    ctx->pc = 0x2970ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2970E8u;
            // 0x2970ec: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296A10u;
    if (runtime->hasFunction(0x296A10u)) {
        auto targetFn = runtime->lookupFunction(0x296A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2970F0u; }
        if (ctx->pc != 0x2970F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296a10_0x296a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2970F0u; }
        if (ctx->pc != 0x2970F0u) { return; }
    }
    ctx->pc = 0x2970F0u;
    // 0x2970f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2970F0u;
    {
        const bool branch_taken_0x2970f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2970F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2970F0u;
            // 0x2970f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970f0) {
            ctx->pc = 0x297118u;
            goto label_297118;
        }
    }
    ctx->pc = 0x2970F8u;
    // 0x2970f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2970f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970fc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2970fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x297100: 0x24a57018  addiu       $a1, $a1, 0x7018
    ctx->pc = 0x297100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28696));
    // 0x297104: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297108: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x297108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29710c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29710cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297110: 0x80a6976  j           func_29A5D8
    ctx->pc = 0x297110u;
    ctx->pc = 0x297114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297110u;
            // 0x297114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A5D8u;
    if (runtime->hasFunction(0x29A5D8u)) {
        auto targetFn = runtime->lookupFunction(0x29A5D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_0029a5d8_0x29a5d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297118u;
label_297118:
    // 0x297118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29711c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29711cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297120: 0x3e00008  jr          $ra
    ctx->pc = 0x297120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297120u;
            // 0x297124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F08u: goto label_296f08;
            case 0x296F24u: goto label_296f24;
            case 0x296F34u: goto label_296f34;
            case 0x296F40u: goto label_296f40;
            case 0x296F94u: goto label_296f94;
            case 0x296FCCu: goto label_296fcc;
            case 0x296FDCu: goto label_296fdc;
            case 0x296FE0u: goto label_296fe0;
            case 0x296FF0u: goto label_296ff0;
            case 0x297088u: goto label_297088;
            case 0x297090u: goto label_297090;
            case 0x29709Cu: goto label_29709c;
            case 0x297118u: goto label_297118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297128u;
    // 0x297128: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x297128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29712c: 0x0  nop
    ctx->pc = 0x29712cu;
    // NOP
}

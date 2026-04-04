#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218EF0
// Address: 0x218ef0 - 0x2191e8
void sub_00218EF0_0x218ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218EF0_0x218ef0");
#endif

    ctx->pc = 0x218ef0u;

label_218ef0:
    // 0x218ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x218ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x218ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f00: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x218f04: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x218f04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218f08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x218f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x218f0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x218F0Cu;
    {
        const bool branch_taken_0x218f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F0Cu;
            // 0x218f10: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f0c) {
            ctx->pc = 0x218F40u;
            goto label_218f40;
        }
    }
    ctx->pc = 0x218F14u;
    // 0x218f14: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218f14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218f18: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218f1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218f20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218f24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218f28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218f2c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x218f30: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x218f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x218f34: 0x40f809  jalr        $v0
    ctx->pc = 0x218F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218F3Cu);
        ctx->pc = 0x218F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F34u;
            // 0x218f38: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218F3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218F3Cu; }
            if (ctx->pc != 0x218F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x218F3Cu;
    // 0x218f3c: 0x0  nop
    ctx->pc = 0x218f3cu;
    // NOP
label_218f40:
    // 0x218f40: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x218f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x218f44: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x218F44u;
    {
        const bool branch_taken_0x218f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F44u;
            // 0x218f48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f44) {
            ctx->pc = 0x218F88u;
            goto label_218f88;
        }
    }
    ctx->pc = 0x218F4Cu;
    // 0x218f4c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x218f4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218f50: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x218f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x218f54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x218F54u;
    {
        const bool branch_taken_0x218f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F54u;
            // 0x218f58: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f54) {
            ctx->pc = 0x218F88u;
            goto label_218f88;
        }
    }
    ctx->pc = 0x218F5Cu;
    // 0x218f5c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x218f5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218f60: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x218f64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218f6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218f70: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218f74: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x218f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x218f78: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x218f7c: 0x40f809  jalr        $v0
    ctx->pc = 0x218F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218F84u);
        ctx->pc = 0x218F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F7Cu;
            // 0x218f80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218F84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218F84u; }
            if (ctx->pc != 0x218F84u) { return; }
        }
        }
    }
    ctx->pc = 0x218F84u;
    // 0x218f84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x218f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218f88:
    // 0x218f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x218F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F8Cu;
            // 0x218f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218F94u;
    // 0x218f94: 0x0  nop
    ctx->pc = 0x218f94u;
    // NOP
    // 0x218f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218fa0: 0xc086390  jal         func_218E40
    ctx->pc = 0x218FA0u;
    SET_GPR_U32(ctx, 31, 0x218FA8u);
    ctx->pc = 0x218FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FA0u;
            // 0x218fa4: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218E40u;
    if (runtime->hasFunction(0x218E40u)) {
        auto targetFn = runtime->lookupFunction(0x218E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FA8u; }
        if (ctx->pc != 0x218FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218E40_0x218e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218FA8u; }
        if (ctx->pc != 0x218FA8u) { return; }
    }
    ctx->pc = 0x218FA8u;
    // 0x218fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218fac: 0x3e00008  jr          $ra
    ctx->pc = 0x218FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FACu;
            // 0x218fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218FB4u;
    // 0x218fb4: 0x0  nop
    ctx->pc = 0x218fb4u;
    // NOP
    // 0x218fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218fc0: 0xc0863bc  jal         func_218EF0
    ctx->pc = 0x218FC0u;
    SET_GPR_U32(ctx, 31, 0x218FC8u);
    ctx->pc = 0x218FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218FC0u;
            // 0x218fc4: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218EF0u;
    runtime->cooperativeGuestYield();
    goto label_218ef0;
    ctx->pc = 0x218FC8u;
label_218fc8:
    // 0x218fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x218FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FCCu;
            // 0x218fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218FD4u;
    // 0x218fd4: 0x0  nop
    ctx->pc = 0x218fd4u;
    // NOP
    // 0x218fd8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x218fdc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x218fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x218fe0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x218fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x218fe4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x218fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x218fe8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x218fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x218fec: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x218fecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x218ff0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x218ff0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218ff4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x218ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x218ff8: 0x8c4277b4  lw          $v0, 0x77B4($v0)
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x218ffc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x218ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x219000: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x219000u;
    {
        const bool branch_taken_0x219000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219000u;
            // 0x219004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219000) {
            ctx->pc = 0x219040u;
            goto label_219040;
        }
    }
    ctx->pc = 0x219008u;
    // 0x219008: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x219008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x21900c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219010: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x219010u;
    {
        const bool branch_taken_0x219010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x219014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219010u;
            // 0x219014: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219010) {
            ctx->pc = 0x219040u;
            goto label_219040;
        }
    }
    ctx->pc = 0x219018u;
label_219018:
    // 0x219018: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x219018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21901c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x219020: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x219020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x219024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219024u;
    {
        const bool branch_taken_0x219024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219024u;
            // 0x219028: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219024) {
            ctx->pc = 0x219040u;
            goto label_219040;
        }
    }
    ctx->pc = 0x21902Cu;
    // 0x21902c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219030: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x219030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219034: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x219034u;
    {
        const bool branch_taken_0x219034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x219038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219034u;
            // 0x219038: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219034) {
            ctx->pc = 0x219018u;
            runtime->cooperativeGuestYield();
            goto label_219018;
        }
    }
    ctx->pc = 0x21903Cu;
    // 0x21903c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219040:
    // 0x219040: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x219040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x219044: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219044u;
    {
        const bool branch_taken_0x219044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219044u;
            // 0x219048: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219044) {
            ctx->pc = 0x21907Cu;
            goto label_21907c;
        }
    }
    ctx->pc = 0x21904Cu;
    // 0x21904c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x219050: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x219054: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x219054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x219058: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21905c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x219060: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x219060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x219064: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x219064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21906c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21906Cu;
    {
        const bool branch_taken_0x21906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x219070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21906Cu;
            // 0x219070: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21906c) {
            ctx->pc = 0x219078u;
            goto label_219078;
        }
    }
    ctx->pc = 0x219074u;
    // 0x219074: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x219074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_219078:
    // 0x219078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21907c:
    // 0x21907c: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x21907Cu;
    {
        const bool branch_taken_0x21907c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x219080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21907Cu;
            // 0x219080: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21907c) {
            ctx->pc = 0x2191C0u;
            goto label_2191c0;
        }
    }
    ctx->pc = 0x219084u;
    // 0x219084: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x219084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x219088: 0x8c51f190  lw          $s1, -0xE70($v0)
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x21908c: 0xc08647a  jal         func_2191E8
    ctx->pc = 0x21908Cu;
    SET_GPR_U32(ctx, 31, 0x219094u);
    ctx->pc = 0x219090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21908Cu;
            // 0x219090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2191E8u;
    if (runtime->hasFunction(0x2191E8u)) {
        auto targetFn = runtime->lookupFunction(0x2191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219094u; }
        if (ctx->pc != 0x219094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002191E8_0x2191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219094u; }
        if (ctx->pc != 0x219094u) { return; }
    }
    ctx->pc = 0x219094u;
    // 0x219094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x219094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x219098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21909c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x21909Cu;
    SET_GPR_U32(ctx, 31, 0x2190A4u);
    ctx->pc = 0x2190A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21909Cu;
            // 0x2190a0: 0xfba10060  sqc2        $vf1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190A4u; }
        if (ctx->pc != 0x2190A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190A4u; }
        if (ctx->pc != 0x2190A4u) { return; }
    }
    ctx->pc = 0x2190A4u;
    // 0x2190a4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2190a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2190a8: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2190a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2190ac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2190acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2190b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2190b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2190b4: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x2190b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2190b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2190b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2190bc: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x2190bcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2190c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2190c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2190c4: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x2190c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2190c8: 0x0  nop
    ctx->pc = 0x2190c8u;
    // NOP
    // 0x2190cc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2190CCu;
    {
        const bool branch_taken_0x2190cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2190D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190CCu;
            // 0x2190d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190cc) {
            ctx->pc = 0x2191C0u;
            goto label_2191c0;
        }
    }
    ctx->pc = 0x2190D4u;
    // 0x2190d4: 0x7a020120  lq          $v0, 0x120($s0)
    ctx->pc = 0x2190d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2190d8: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x2190d8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2190dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2190dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2190e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2190e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2190e4: 0x0  nop
    ctx->pc = 0x2190e4u;
    // NOP
    // 0x2190e8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2190E8u;
    {
        const bool branch_taken_0x2190e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2190e8) {
            ctx->pc = 0x2190ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2190E8u;
            // 0x2190ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2190F0u;
            goto label_2190f0;
        }
    }
    ctx->pc = 0x2190F0u;
label_2190f0:
    // 0x2190f0: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2190F0u;
    {
        const bool branch_taken_0x2190f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2190f0) {
            ctx->pc = 0x2190F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2190F0u;
            // 0x2190f4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2191C4u;
            goto label_2191c4;
        }
    }
    ctx->pc = 0x2190F8u;
    // 0x2190f8: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x2190f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2190fc: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x2190fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219100: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x219100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219104: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x219104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219108: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21910c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21910cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219110: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x219110u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x219114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219118: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x21911c: 0x46000504  c1          0x504
    ctx->pc = 0x21911cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x219120: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x219120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x219124: 0x40f809  jalr        $v0
    ctx->pc = 0x219124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21912Cu);
        ctx->pc = 0x219128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219124u;
            // 0x219128: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21912Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21912Cu; }
            if (ctx->pc != 0x21912Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21912Cu;
    // 0x21912c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21912cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219130: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x219130u;
    {
        const bool branch_taken_0x219130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219130) {
            ctx->pc = 0x219180u;
            goto label_219180;
        }
    }
    ctx->pc = 0x219138u;
    // 0x219138: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x219138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21913c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x219140: 0x78620060  lq          $v0, 0x60($v1)
    ctx->pc = 0x219140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x219144: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x219144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x219148: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x219148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x21914c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x21914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x219150: 0xd8610080  lqc2        $vf1, 0x80($v1)
    ctx->pc = 0x219150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x219154: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x219154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x219158: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x219158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21915c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x21915cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219160: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x219160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x219164: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x219168: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x219168u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21916c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x21916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219170: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219174: 0x46000004  c1          0x4
    ctx->pc = 0x219174u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x219178: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x219178u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x21917c: 0x0  nop
    ctx->pc = 0x21917cu;
    // NOP
label_219180:
    // 0x219180: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x219180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x219184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x219184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x219188: 0x4614ad28  max.s       $f20, $f21, $f20
    ctx->pc = 0x219188u;
    ctx->f[20] = std::max(ctx->f[21], ctx->f[20]);
    // 0x21918c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x219190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219194: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x219194u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x219198: 0x46166328  max.s       $f12, $f12, $f22
    ctx->pc = 0x219198u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[22]);
    // 0x21919c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x21919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2191a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2191a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2191a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2191a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2191a8: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x2191a8u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x2191ac: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x2191acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2191b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2191b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191b4: 0xc08669a  jal         func_219A68
    ctx->pc = 0x2191B4u;
    SET_GPR_U32(ctx, 31, 0x2191BCu);
    ctx->pc = 0x2191B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191B4u;
            // 0x2191b8: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x219A68u;
    if (runtime->hasFunction(0x219A68u)) {
        auto targetFn = runtime->lookupFunction(0x219A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191BCu; }
        if (ctx->pc != 0x2191BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219A68_0x219a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191BCu; }
        if (ctx->pc != 0x2191BCu) { return; }
    }
    ctx->pc = 0x2191BCu;
    // 0x2191bc: 0x0  nop
    ctx->pc = 0x2191bcu;
    // NOP
label_2191c0:
    // 0x2191c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2191c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2191c4:
    // 0x2191c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2191c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2191c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2191cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2191ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2191d0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2191d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2191d4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2191d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2191d8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2191d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2191dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2191DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2191E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191DCu;
            // 0x2191e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218EF0u: goto label_218ef0;
            case 0x218F40u: goto label_218f40;
            case 0x218F88u: goto label_218f88;
            case 0x218FC8u: goto label_218fc8;
            case 0x219018u: goto label_219018;
            case 0x219040u: goto label_219040;
            case 0x219078u: goto label_219078;
            case 0x21907Cu: goto label_21907c;
            case 0x2190F0u: goto label_2190f0;
            case 0x219180u: goto label_219180;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2191E4u;
    // 0x2191e4: 0x0  nop
    ctx->pc = 0x2191e4u;
    // NOP
}

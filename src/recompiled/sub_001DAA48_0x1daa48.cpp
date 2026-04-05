#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DAA48
// Address: 0x1daa48 - 0x1dabc8
void sub_001DAA48_0x1daa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAA48_0x1daa48");
#endif

    ctx->pc = 0x1daa48u;

    // 0x1daa48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1daa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1daa4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1daa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1daa50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1daa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1daa54: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1DAA54u;
    SET_GPR_U32(ctx, 31, 0x1DAA5Cu);
    ctx->pc = 0x1DAA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA54u;
            // 0x1daa58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA5Cu; }
        if (ctx->pc != 0x1DAA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA5Cu; }
        if (ctx->pc != 0x1DAA5Cu) { return; }
    }
    ctx->pc = 0x1DAA5Cu;
    // 0x1daa5c: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1DAA5Cu;
    {
        const bool branch_taken_0x1daa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa5c) {
            ctx->pc = 0x1DAA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA5Cu;
            // 0x1daa60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DABBCu;
            goto label_1dabbc;
        }
    }
    ctx->pc = 0x1DAA64u;
    // 0x1daa64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1daa68: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1DAA68u;
    {
        const bool branch_taken_0x1daa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa68) {
            ctx->pc = 0x1DAA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA68u;
            // 0x1daa6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DABBCu;
            goto label_1dabbc;
        }
    }
    ctx->pc = 0x1DAA70u;
    // 0x1daa70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1daa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1daa74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1daa78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1daa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1daa7c: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1daa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1daa80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daa84: 0x0  nop
    ctx->pc = 0x1daa84u;
    // NOP
    // 0x1daa88: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
    ctx->pc = 0x1DAA88u;
    {
        const bool branch_taken_0x1daa88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daa88) {
            ctx->pc = 0x1DAA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA88u;
            // 0x1daa8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DABBCu;
            goto label_1dabbc;
        }
    }
    ctx->pc = 0x1DAA90u;
    // 0x1daa90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1daa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1daa94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1daa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1daa98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAA98u;
    {
        const bool branch_taken_0x1daa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA98u;
            // 0x1daa9c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa98) {
            ctx->pc = 0x1DAAB8u;
            goto label_1daab8;
        }
    }
    ctx->pc = 0x1DAAA0u;
    // 0x1daaa0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1daaa4: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x1daaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daaa8: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1daaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daaac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1daaacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1daab0: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1daab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1daab4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1daab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_1daab8:
    // 0x1daab8: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x1daab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daabc: 0x244528e0  addiu       $a1, $v0, 0x28E0
    ctx->pc = 0x1daabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1daac0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1daac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1daac4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x1daac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daac8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1daacc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1daaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1daad0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1daad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daad4: 0x0  nop
    ctx->pc = 0x1daad4u;
    // NOP
    // 0x1daad8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAD8u;
            // 0x1daadc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAAE8u;
            goto label_1daae8;
        }
    }
    ctx->pc = 0x1DAAE0u;
    // 0x1daae0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DAAE0u;
    {
        const bool branch_taken_0x1daae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAE0u;
            // 0x1daae4: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daae0) {
            ctx->pc = 0x1DAB70u;
            goto label_1dab70;
        }
    }
    ctx->pc = 0x1DAAE8u;
label_1daae8:
    // 0x1daae8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1daae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1daaec: 0x8e070068  lw          $a3, 0x68($s0)
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1daaf0: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x1daaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1daaf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DAAF4u;
    {
        const bool branch_taken_0x1daaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAF4u;
            // 0x1daaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daaf4) {
            ctx->pc = 0x1DAB70u;
            goto label_1dab70;
        }
    }
    ctx->pc = 0x1DAAFCu;
    // 0x1daafc: 0x84a30354  lh          $v1, 0x354($a1)
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x1dab00: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1dab00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dab04: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DAB04u;
    {
        const bool branch_taken_0x1dab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB04u;
            // 0x1dab08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab04) {
            ctx->pc = 0x1DAB54u;
            goto label_1dab54;
        }
    }
    ctx->pc = 0x1DAB0Cu;
    // 0x1dab0c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1dab0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dab10:
    // 0x1dab10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAB10u;
    {
        const bool branch_taken_0x1dab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB10u;
            // 0x1dab14: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab10) {
            ctx->pc = 0x1DAB28u;
            goto label_1dab28;
        }
    }
    ctx->pc = 0x1DAB18u;
    // 0x1dab18: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1dab1c: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x1dab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1dab20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dab24: 0x84450356  lh          $a1, 0x356($v0)
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 854)));
label_1dab28:
    // 0x1dab28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1dab2c: 0x28c20014  slti        $v0, $a2, 0x14
    ctx->pc = 0x1dab2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1dab30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAB30u;
    {
        const bool branch_taken_0x1dab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB30u;
            // 0x1dab34: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab30) {
            ctx->pc = 0x1DAB54u;
            goto label_1dab54;
        }
    }
    ctx->pc = 0x1DAB38u;
    // 0x1dab38: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1dab3c: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1dab40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dab44: 0x84430354  lh          $v1, 0x354($v0)
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x1dab48: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1dab48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dab4c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DAB4Cu;
    {
        const bool branch_taken_0x1dab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB4Cu;
            // 0x1dab50: 0xe3102a  slt         $v0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab4c) {
            ctx->pc = 0x1DAB10u;
            runtime->cooperativeGuestYield();
            goto label_1dab10;
        }
    }
    ctx->pc = 0x1DAB54u;
label_1dab54:
    // 0x1dab54: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAB54u;
    {
        const bool branch_taken_0x1dab54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1DAB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB54u;
            // 0x1dab58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab54) {
            ctx->pc = 0x1DAB70u;
            goto label_1dab70;
        }
    }
    ctx->pc = 0x1DAB5Cu;
    // 0x1dab5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dab60: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1DAB60u;
    SET_GPR_U32(ctx, 31, 0x1DAB68u);
    ctx->pc = 0x1DAB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB60u;
            // 0x1dab64: 0x8c44cd64  lw          $a0, -0x329C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB68u; }
        if (ctx->pc != 0x1DAB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB68u; }
        if (ctx->pc != 0x1DAB68u) { return; }
    }
    ctx->pc = 0x1DAB68u;
    // 0x1dab68: 0xc07507e  jal         func_1D41F8
    ctx->pc = 0x1DAB68u;
    SET_GPR_U32(ctx, 31, 0x1DAB70u);
    ctx->pc = 0x1DAB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB68u;
            // 0x1dab6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F8u;
    if (runtime->hasFunction(0x1D41F8u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB70u; }
        if (ctx->pc != 0x1DAB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F8_0x1d41f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB70u; }
        if (ctx->pc != 0x1DAB70u) { return; }
    }
    ctx->pc = 0x1DAB70u;
label_1dab70:
    // 0x1dab70: 0x8e0701cc  lw          $a3, 0x1CC($s0)
    ctx->pc = 0x1dab70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1dab74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dab78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dab7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dab80: 0x47280b  movn        $a1, $v0, $a3
    ctx->pc = 0x1dab80u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1dab84: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAB84u;
    {
        const bool branch_taken_0x1dab84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DAB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB84u;
            // 0x1dab88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab84) {
            ctx->pc = 0x1DAB98u;
            goto label_1dab98;
        }
    }
    ctx->pc = 0x1DAB8Cu;
    // 0x1dab8c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1dab90: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAB90u;
    {
        const bool branch_taken_0x1dab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB90u;
            // 0x1dab94: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab90) {
            ctx->pc = 0x1DABA8u;
            goto label_1daba8;
        }
    }
    ctx->pc = 0x1DAB98u;
label_1dab98:
    // 0x1dab98: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1dab98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1dab9c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1daba0: 0xc06e60a  jal         func_1B9828
    ctx->pc = 0x1DABA0u;
    SET_GPR_U32(ctx, 31, 0x1DABA8u);
    ctx->pc = 0x1DABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABA0u;
            // 0x1daba4: 0x8e0801d0  lw          $t0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9828u;
    if (runtime->hasFunction(0x1B9828u)) {
        auto targetFn = runtime->lookupFunction(0x1B9828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABA8u; }
        if (ctx->pc != 0x1DABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9828_0x1b9828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABA8u; }
        if (ctx->pc != 0x1DABA8u) { return; }
    }
    ctx->pc = 0x1DABA8u;
label_1daba8:
    // 0x1daba8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1dabac: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x1dabacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x1dabb0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1dabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1dabb4: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x1dabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x1dabb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dabb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dabbc:
    // 0x1dabbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dabbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABC0u;
            // 0x1dabc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DAAB8u: goto label_1daab8;
            case 0x1DAAE8u: goto label_1daae8;
            case 0x1DAB10u: goto label_1dab10;
            case 0x1DAB28u: goto label_1dab28;
            case 0x1DAB54u: goto label_1dab54;
            case 0x1DAB70u: goto label_1dab70;
            case 0x1DAB98u: goto label_1dab98;
            case 0x1DABA8u: goto label_1daba8;
            case 0x1DABBCu: goto label_1dabbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DABC8u;
}

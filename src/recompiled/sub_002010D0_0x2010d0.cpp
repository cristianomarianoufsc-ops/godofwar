#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002010D0
// Address: 0x2010d0 - 0x201230
void sub_002010D0_0x2010d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002010D0_0x2010d0");
#endif

    ctx->pc = 0x2010d0u;

    // 0x2010d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2010d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2010d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2010d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2010d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2010d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2010dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2010dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2010e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2010e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2010e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2010e8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2010E8u;
    {
        const bool branch_taken_0x2010e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2010ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2010E8u;
            // 0x2010ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010e8) {
            ctx->pc = 0x20121Cu;
            goto label_20121c;
        }
    }
    ctx->pc = 0x2010F0u;
    // 0x2010f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2010f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2010f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2010f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2010f8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2010fc: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2010FCu;
    {
        const bool branch_taken_0x2010fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2010FCu;
            // 0x201100: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010fc) {
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x201104u;
    // 0x201104: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x201104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x201108: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x201108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20110c: 0x10440044  beq         $v0, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x20110Cu;
    {
        const bool branch_taken_0x20110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x201110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20110Cu;
            // 0x201110: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20110c) {
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x201114u;
    // 0x201114: 0x0  nop
    ctx->pc = 0x201114u;
    // NOP
label_201118:
    // 0x201118: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20111c: 0x16220022  bne         $s1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20111Cu;
    {
        const bool branch_taken_0x20111c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20111Cu;
            // 0x201120: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20111c) {
            ctx->pc = 0x2011A8u;
            goto label_2011a8;
        }
    }
    ctx->pc = 0x201124u;
    // 0x201124: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x201124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x201128: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x201128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20112c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x201130: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x201130u;
    {
        const bool branch_taken_0x201130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201130u;
            // 0x201134: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201130) {
            ctx->pc = 0x201170u;
            goto label_201170;
        }
    }
    ctx->pc = 0x201138u;
    // 0x201138: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x201138u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20113c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x201140: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x201144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20114c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x201150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201154: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x201154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201158: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20115c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x20115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x201160: 0x40f809  jalr        $v0
    ctx->pc = 0x201160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201168u);
        ctx->pc = 0x201164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201160u;
            // 0x201164: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201168u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201118u: goto label_201118;
            case 0x201170u: goto label_201170;
            case 0x2011A8u: goto label_2011a8;
            case 0x2011CCu: goto label_2011cc;
            case 0x201208u: goto label_201208;
            case 0x20120Cu: goto label_20120c;
            case 0x20121Cu: goto label_20121c;
            case 0x201220u: goto label_201220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201168u; }
            if (ctx->pc != 0x201168u) { return; }
        }
        }
    }
    ctx->pc = 0x201168u;
    // 0x201168: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20116c: 0x0  nop
    ctx->pc = 0x20116cu;
    // NOP
label_201170:
    // 0x201170: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x201170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x201174: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x201174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201178: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x201178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20117c: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x20117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201180: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x201180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x201184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x201184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x201188: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x201188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20118c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20118cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x201190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x201190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x201194: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x201194u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x201198: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x201198u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x20119c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20119Cu;
    {
        const bool branch_taken_0x20119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20119Cu;
            // 0x2011a0: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20119c) {
            ctx->pc = 0x201208u;
            goto label_201208;
        }
    }
    ctx->pc = 0x2011A4u;
    // 0x2011a4: 0x0  nop
    ctx->pc = 0x2011a4u;
    // NOP
label_2011a8:
    // 0x2011a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2011a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2011ac: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2011b0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2011b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2011b4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2011B4u;
    {
        const bool branch_taken_0x2011b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2011b4) {
            ctx->pc = 0x2011B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2011B4u;
            // 0x2011b8: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2011CCu;
            goto label_2011cc;
        }
    }
    ctx->pc = 0x2011BCu;
    // 0x2011bc: 0xc04b932  jal         func_12E4C8
    ctx->pc = 0x2011BCu;
    SET_GPR_U32(ctx, 31, 0x2011C4u);
    ctx->pc = 0x2011C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2011BCu;
            // 0x2011c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4C8u;
    if (runtime->hasFunction(0x12E4C8u)) {
        auto targetFn = runtime->lookupFunction(0x12E4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011C4u; }
        if (ctx->pc != 0x2011C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12e4c8_0x12e4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011C4u; }
        if (ctx->pc != 0x2011C4u) { return; }
    }
    ctx->pc = 0x2011C4u;
    // 0x2011c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2011C4u;
    {
        const bool branch_taken_0x2011c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011C4u;
            // 0x2011c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011c4) {
            ctx->pc = 0x20120Cu;
            goto label_20120c;
        }
    }
    ctx->pc = 0x2011CCu;
label_2011cc:
    // 0x2011cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2011ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2011d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2011D0u;
    {
        const bool branch_taken_0x2011d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2011D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011D0u;
            // 0x2011d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011d0) {
            ctx->pc = 0x20120Cu;
            goto label_20120c;
        }
    }
    ctx->pc = 0x2011D8u;
    // 0x2011d8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2011d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2011dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2011e0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2011e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2011e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2011e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2011ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2011ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2011f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2011f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2011f8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2011fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x201200: 0x40f809  jalr        $v0
    ctx->pc = 0x201200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201208u);
        ctx->pc = 0x201204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201200u;
            // 0x201204: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201118u: goto label_201118;
            case 0x201170u: goto label_201170;
            case 0x2011A8u: goto label_2011a8;
            case 0x2011CCu: goto label_2011cc;
            case 0x201208u: goto label_201208;
            case 0x20120Cu: goto label_20120c;
            case 0x20121Cu: goto label_20121c;
            case 0x201220u: goto label_201220;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201208u; }
            if (ctx->pc != 0x201208u) { return; }
        }
        }
    }
    ctx->pc = 0x201208u;
label_201208:
    // 0x201208: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x201208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20120c:
    // 0x20120c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201214: 0x1443ffc0  bne         $v0, $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x201214u;
    {
        const bool branch_taken_0x201214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201214u;
            // 0x201218: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201214) {
            ctx->pc = 0x201118u;
            runtime->cooperativeGuestYield();
            goto label_201118;
        }
    }
    ctx->pc = 0x20121Cu;
label_20121c:
    // 0x20121c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20121cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201220:
    // 0x201220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x201220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201228: 0x3e00008  jr          $ra
    ctx->pc = 0x201228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201228u;
            // 0x20122c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201118u: goto label_201118;
            case 0x201170u: goto label_201170;
            case 0x2011A8u: goto label_2011a8;
            case 0x2011CCu: goto label_2011cc;
            case 0x201208u: goto label_201208;
            case 0x20120Cu: goto label_20120c;
            case 0x20121Cu: goto label_20121c;
            case 0x201220u: goto label_201220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201230u;
}

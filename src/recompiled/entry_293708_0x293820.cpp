#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293708
// Address: 0x293708 - 0x293820
void entry_293708_0x293820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293708_0x293820");
#endif

    ctx->pc = 0x293708u;

    // 0x293708: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x293708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29370c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29370cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x293710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x293714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293718: 0x2812  mflo        $a1
    ctx->pc = 0x293718u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x29371c: 0xc0a40ac  jal         func_2902B0
    ctx->pc = 0x29371Cu;
    SET_GPR_U32(ctx, 31, 0x293724u);
    ctx->pc = 0x2902B0u;
    if (runtime->hasFunction(0x2902B0u)) {
        auto targetFn = runtime->lookupFunction(0x2902B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293724u; }
        if (ctx->pc != 0x293724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002902B0_0x2902b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293724u; }
        if (ctx->pc != 0x293724u) { return; }
    }
    ctx->pc = 0x293724u;
    // 0x293724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293728: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x293728u;
    {
        const bool branch_taken_0x293728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x293728) {
            ctx->pc = 0x29372Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x293728u;
            // 0x29372c: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x293738u;
            goto label_293738;
        }
    }
    ctx->pc = 0x293730u;
    // 0x293730: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x293730u;
    {
        const bool branch_taken_0x293730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293730u;
            // 0x293734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293730) {
            ctx->pc = 0x2937B4u;
            goto label_2937b4;
        }
    }
    ctx->pc = 0x293738u;
label_293738:
    // 0x293738: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x293738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29373c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x29373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x293740: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x293740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x293744: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x293744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x293748: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x293748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x29374c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29374Cu;
    {
        const bool branch_taken_0x29374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29374Cu;
            // 0x293750: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29374c) {
            ctx->pc = 0x2937A4u;
            goto label_2937a4;
        }
    }
    ctx->pc = 0x293754u;
    // 0x293754: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x293754u;
    {
        const bool branch_taken_0x293754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293754u;
            // 0x293758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293754) {
            ctx->pc = 0x293790u;
            goto label_293790;
        }
    }
    ctx->pc = 0x29375Cu;
    // 0x29375c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29375cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x293760: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x293760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x293764: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x293764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x293768: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x293768u;
    {
        const bool branch_taken_0x293768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293768u;
            // 0x29376c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293768) {
            ctx->pc = 0x293790u;
            goto label_293790;
        }
    }
    ctx->pc = 0x293770u;
    // 0x293770: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x293770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x293774: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x293774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293778: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x293778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29377c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29377Cu;
    {
        const bool branch_taken_0x29377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29377Cu;
            // 0x293780: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29377c) {
            ctx->pc = 0x293790u;
            goto label_293790;
        }
    }
    ctx->pc = 0x293784u;
    // 0x293784: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x293784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x293788: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x293788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29378c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29378cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_293790:
    // 0x293790: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x293790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x293794: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x293794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x293798: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x293798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29379c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29379Cu;
    {
        const bool branch_taken_0x29379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29379Cu;
            // 0x2937a0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29379c) {
            ctx->pc = 0x2937B0u;
            goto label_2937b0;
        }
    }
    ctx->pc = 0x2937A4u;
label_2937a4:
    // 0x2937a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2937a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937a8: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x2937A8u;
    SET_GPR_U32(ctx, 31, 0x2937B0u);
    ctx->pc = 0x2937ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2937A8u;
            // 0x2937ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937B0u; }
        if (ctx->pc != 0x2937B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937B0u; }
        if (ctx->pc != 0x2937B0u) { return; }
    }
    ctx->pc = 0x2937B0u;
label_2937b0:
    // 0x2937b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2937b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2937b4:
    // 0x2937b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2937b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2937b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2937b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2937bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2937BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2937C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2937BCu;
            // 0x2937c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293738u: goto label_293738;
            case 0x293790u: goto label_293790;
            case 0x2937A4u: goto label_2937a4;
            case 0x2937B0u: goto label_2937b0;
            case 0x2937B4u: goto label_2937b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2937C4u;
    // 0x2937c4: 0x0  nop
    ctx->pc = 0x2937c4u;
    // NOP
    // 0x2937c8: 0x0  nop
    ctx->pc = 0x2937c8u;
    // NOP
    // 0x2937cc: 0x0  nop
    ctx->pc = 0x2937ccu;
    // NOP
    // 0x2937d0: 0x0  nop
    ctx->pc = 0x2937d0u;
    // NOP
    // 0x2937d4: 0x0  nop
    ctx->pc = 0x2937d4u;
    // NOP
    // 0x2937d8: 0x0  nop
    ctx->pc = 0x2937d8u;
    // NOP
    // 0x2937dc: 0x0  nop
    ctx->pc = 0x2937dcu;
    // NOP
    // 0x2937e0: 0x0  nop
    ctx->pc = 0x2937e0u;
    // NOP
    // 0x2937e4: 0x0  nop
    ctx->pc = 0x2937e4u;
    // NOP
    // 0x2937e8: 0x0  nop
    ctx->pc = 0x2937e8u;
    // NOP
    // 0x2937ec: 0x0  nop
    ctx->pc = 0x2937ecu;
    // NOP
    // 0x2937f0: 0x0  nop
    ctx->pc = 0x2937f0u;
    // NOP
    // 0x2937f4: 0x0  nop
    ctx->pc = 0x2937f4u;
    // NOP
    // 0x2937f8: 0x0  nop
    ctx->pc = 0x2937f8u;
    // NOP
    // 0x2937fc: 0x0  nop
    ctx->pc = 0x2937fcu;
    // NOP
    // 0x293800: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x293800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x293804: 0xc  syscall     0
    ctx->pc = 0x293804u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293808: 0x3e00008  jr          $ra
    ctx->pc = 0x293808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293738u: goto label_293738;
            case 0x293790u: goto label_293790;
            case 0x2937A4u: goto label_2937a4;
            case 0x2937B0u: goto label_2937b0;
            case 0x2937B4u: goto label_2937b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293810u;
    // 0x293810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293814: 0xc  syscall     0
    ctx->pc = 0x293814u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x293818: 0x3e00008  jr          $ra
    ctx->pc = 0x293818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293738u: goto label_293738;
            case 0x293790u: goto label_293790;
            case 0x2937A4u: goto label_2937a4;
            case 0x2937B0u: goto label_2937b0;
            case 0x2937B4u: goto label_2937b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293820u;
}

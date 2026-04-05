#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025B340
// Address: 0x25b340 - 0x25b3c0
void sub_0025B340_0x25b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B340_0x25b340");
#endif

    ctx->pc = 0x25b340u;

    // 0x25b340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b354: 0xc096402  jal         func_259008
    ctx->pc = 0x25B354u;
    SET_GPR_U32(ctx, 31, 0x25B35Cu);
    ctx->pc = 0x25B358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B354u;
            // 0x25b358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B35Cu; }
        if (ctx->pc != 0x25B35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B35Cu; }
        if (ctx->pc != 0x25B35Cu) { return; }
    }
    ctx->pc = 0x25B35Cu;
    // 0x25b35c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25b360: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x25b360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x25b364: 0x24633558  addiu       $v1, $v1, 0x3558
    ctx->pc = 0x25b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13656));
    // 0x25b368: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b36c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25b370: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B37Cu;
            // 0x25b380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B3ACu: goto label_25b3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B384u;
    // 0x25b384: 0x0  nop
    ctx->pc = 0x25b384u;
    // NOP
    // 0x25b388: 0x3e00008  jr          $ra
    ctx->pc = 0x25B388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B3ACu: goto label_25b3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B390u;
    // 0x25b390: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x25b394: 0x24030415  addiu       $v1, $zero, 0x415
    ctx->pc = 0x25b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x25b398: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x25b398u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25b39c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B39Cu;
    {
        const bool branch_taken_0x25b39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25B3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B39Cu;
            // 0x25b3a0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b39c) {
            ctx->pc = 0x25B3ACu;
            goto label_25b3ac;
        }
    }
    ctx->pc = 0x25B3A4u;
    // 0x25b3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3A4u;
            // 0x25b3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B3ACu: goto label_25b3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B3ACu;
label_25b3ac:
    // 0x25b3ac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x25b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x25b3b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3B4u;
            // 0x25b3b8: 0xaca30030  sw          $v1, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B3ACu: goto label_25b3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B3BCu;
    // 0x25b3bc: 0x0  nop
    ctx->pc = 0x25b3bcu;
    // NOP
}

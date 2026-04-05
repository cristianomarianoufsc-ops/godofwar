#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002439A0
// Address: 0x2439a0 - 0x243a50
void sub_002439A0_0x2439a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002439A0_0x2439a0");
#endif

    ctx->pc = 0x2439a0u;

    // 0x2439a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2439a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2439a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2439a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2439a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2439a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2439ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2439acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2439b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2439b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2439b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2439b8: 0x26300074  addiu       $s0, $s1, 0x74
    ctx->pc = 0x2439b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x2439bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2439bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439c0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2439c4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2439c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2439c8: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2439C8u;
    {
        const bool branch_taken_0x2439c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2439CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439C8u;
            // 0x2439cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439c8) {
            ctx->pc = 0x2439FCu;
            goto label_2439fc;
        }
    }
    ctx->pc = 0x2439D0u;
    // 0x2439d0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2439d4: 0x0  nop
    ctx->pc = 0x2439d4u;
    // NOP
label_2439d8:
    // 0x2439d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2439dc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x2439dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x2439e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2439e4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2439E4u;
    SET_GPR_U32(ctx, 31, 0x2439ECu);
    ctx->pc = 0x2439E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2439E4u;
            // 0x2439e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439ECu; }
        if (ctx->pc != 0x2439ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2439ECu; }
        if (ctx->pc != 0x2439ECu) { return; }
    }
    ctx->pc = 0x2439ECu;
    // 0x2439ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2439ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2439f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2439f4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2439F4u;
    {
        const bool branch_taken_0x2439f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2439F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439F4u;
            // 0x2439f8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439f4) {
            ctx->pc = 0x2439D8u;
            runtime->cooperativeGuestYield();
            goto label_2439d8;
        }
    }
    ctx->pc = 0x2439FCu;
label_2439fc:
    // 0x2439fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2439fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243a00: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x243a04: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x243a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x243a08: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x243a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x243a0c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x243a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x243a10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x243A10u;
    {
        const bool branch_taken_0x243a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A10u;
            // 0x243a14: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a10) {
            ctx->pc = 0x243A20u;
            goto label_243a20;
        }
    }
    ctx->pc = 0x243A18u;
    // 0x243a18: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x243A18u;
    SET_GPR_U32(ctx, 31, 0x243A20u);
    ctx->pc = 0x243A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A18u;
            // 0x243a1c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A20u; }
        if (ctx->pc != 0x243A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A20u; }
        if (ctx->pc != 0x243A20u) { return; }
    }
    ctx->pc = 0x243A20u;
label_243a20:
    // 0x243a20: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x243a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x243a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243A24u;
    {
        const bool branch_taken_0x243a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A24u;
            // 0x243a28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a24) {
            ctx->pc = 0x243A38u;
            goto label_243a38;
        }
    }
    ctx->pc = 0x243A2Cu;
    // 0x243a2c: 0xc06655e  jal         func_199578
    ctx->pc = 0x243A2Cu;
    SET_GPR_U32(ctx, 31, 0x243A34u);
    ctx->pc = 0x243A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243A2Cu;
            // 0x243a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199578u;
    if (runtime->hasFunction(0x199578u)) {
        auto targetFn = runtime->lookupFunction(0x199578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A34u; }
        if (ctx->pc != 0x243A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_199578_0x1995a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243A34u; }
        if (ctx->pc != 0x243A34u) { return; }
    }
    ctx->pc = 0x243A34u;
    // 0x243a34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x243a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_243a38:
    // 0x243a38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x243a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a44: 0x3e00008  jr          $ra
    ctx->pc = 0x243A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A44u;
            // 0x243a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2439D8u: goto label_2439d8;
            case 0x2439FCu: goto label_2439fc;
            case 0x243A20u: goto label_243a20;
            case 0x243A38u: goto label_243a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243A4Cu;
    // 0x243a4c: 0x0  nop
    ctx->pc = 0x243a4cu;
    // NOP
}

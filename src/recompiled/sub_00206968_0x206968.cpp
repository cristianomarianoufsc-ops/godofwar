#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206968
// Address: 0x206968 - 0x2069e8
void sub_00206968_0x206968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206968_0x206968");
#endif

    ctx->pc = 0x206968u;

    // 0x206968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20696c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206970: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x206970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x206974: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x206974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x206978: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x206978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20697c: 0x10440017  beq         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20697Cu;
    {
        const bool branch_taken_0x20697c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x206980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20697Cu;
            // 0x206980: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20697c) {
            ctx->pc = 0x2069DCu;
            goto label_2069dc;
        }
    }
    ctx->pc = 0x206984u;
    // 0x206984: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x206984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_206988:
    // 0x206988: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20698c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x206990: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x206990u;
    {
        const bool branch_taken_0x206990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x206994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206990u;
            // 0x206994: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206990) {
            ctx->pc = 0x2069D0u;
            goto label_2069d0;
        }
    }
    ctx->pc = 0x206998u;
    // 0x206998: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x206998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20699c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2069a0: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x2069a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2069a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069a8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2069a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2069ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2069b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2069b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2069b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2069b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2069b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2069bc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2069BCu;
    SET_GPR_U32(ctx, 31, 0x2069C4u);
    ctx->pc = 0x2069C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2069BCu;
            // 0x2069c0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069C4u; }
        if (ctx->pc != 0x2069C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069C4u; }
        if (ctx->pc != 0x2069C4u) { return; }
    }
    ctx->pc = 0x2069C4u;
    // 0x2069c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2069C4u;
    {
        const bool branch_taken_0x2069c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069C4u;
            // 0x2069c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069c4) {
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069CCu;
    // 0x2069cc: 0x0  nop
    ctx->pc = 0x2069ccu;
    // NOP
label_2069d0:
    // 0x2069d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2069d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2069d4: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2069D4u;
    {
        const bool branch_taken_0x2069d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2069D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069D4u;
            // 0x2069d8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069d4) {
            ctx->pc = 0x206988u;
            runtime->cooperativeGuestYield();
            goto label_206988;
        }
    }
    ctx->pc = 0x2069DCu;
label_2069dc:
    // 0x2069dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2069dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2069e0:
    // 0x2069e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2069E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2069E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069E0u;
            // 0x2069e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206988u: goto label_206988;
            case 0x2069D0u: goto label_2069d0;
            case 0x2069DCu: goto label_2069dc;
            case 0x2069E0u: goto label_2069e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2069E8u;
}

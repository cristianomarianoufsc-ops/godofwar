#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_285378
// Address: 0x285378 - 0x285410
void entry_285378_0x285410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_285378_0x285410");
#endif

    ctx->pc = 0x285378u;

    // 0x285378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28537c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285380: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x285380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x285384: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x285384u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x285388: 0xc0a14ae  jal         func_2852B8
    ctx->pc = 0x285388u;
    SET_GPR_U32(ctx, 31, 0x285390u);
    ctx->pc = 0x28538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285388u;
            // 0x28538c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852B8u;
    if (runtime->hasFunction(0x2852B8u)) {
        auto targetFn = runtime->lookupFunction(0x2852B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285390u; }
        if (ctx->pc != 0x285390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2852b8_0x285378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285390u; }
        if (ctx->pc != 0x285390u) { return; }
    }
    ctx->pc = 0x285390u;
    // 0x285390: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x285390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285394: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x285394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x285398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285398u;
    {
        const bool branch_taken_0x285398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285398u;
            // 0x28539c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285398) {
            ctx->pc = 0x2853A8u;
            goto label_2853a8;
        }
    }
    ctx->pc = 0x2853A0u;
    // 0x2853a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2853A0u;
    {
        const bool branch_taken_0x2853a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853A0u;
            // 0x2853a4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853a0) {
            ctx->pc = 0x2853B0u;
            goto label_2853b0;
        }
    }
    ctx->pc = 0x2853A8u;
label_2853a8:
    // 0x2853a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2853A8u;
    {
        const bool branch_taken_0x2853a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853A8u;
            // 0x2853ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853a8) {
            ctx->pc = 0x285404u;
            goto label_285404;
        }
    }
    ctx->pc = 0x2853B0u;
label_2853b0:
    // 0x2853b0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2853B0u;
    {
        const bool branch_taken_0x2853b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2853B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853B0u;
            // 0x2853b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853b0) {
            ctx->pc = 0x285404u;
            goto label_285404;
        }
    }
    ctx->pc = 0x2853B8u;
    // 0x2853b8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2853b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2853bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2853BCu;
    {
        const bool branch_taken_0x2853bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853BCu;
            // 0x2853c0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853bc) {
            ctx->pc = 0x2853D4u;
            goto label_2853d4;
        }
    }
    ctx->pc = 0x2853C4u;
    // 0x2853c4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2853C4u;
    {
        const bool branch_taken_0x2853c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2853C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853C4u;
            // 0x2853c8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853c4) {
            ctx->pc = 0x2853A8u;
            runtime->cooperativeGuestYield();
            goto label_2853a8;
        }
    }
    ctx->pc = 0x2853CCu;
    // 0x2853cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2853CCu;
    {
        const bool branch_taken_0x2853cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2853cc) {
            ctx->pc = 0x2853D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2853CCu;
            // 0x2853d0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2853E0u;
            goto label_2853e0;
        }
    }
    ctx->pc = 0x2853D4u;
label_2853d4:
    // 0x2853d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2853d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2853d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2853D8u;
    {
        const bool branch_taken_0x2853d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853D8u;
            // 0x2853dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853d8) {
            ctx->pc = 0x285404u;
            goto label_285404;
        }
    }
    ctx->pc = 0x2853E0u;
label_2853e0:
    // 0x2853e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2853E0u;
    {
        const bool branch_taken_0x2853e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2853e0) {
            ctx->pc = 0x2853E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2853E0u;
            // 0x2853e4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2853F8u;
            goto label_2853f8;
        }
    }
    ctx->pc = 0x2853E8u;
    // 0x2853e8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2853e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2853ec: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2853f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2853F0u;
    {
        const bool branch_taken_0x2853f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853F0u;
            // 0x2853f4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853f0) {
            ctx->pc = 0x285404u;
            goto label_285404;
        }
    }
    ctx->pc = 0x2853F8u;
label_2853f8:
    // 0x2853f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2853fc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2853fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x285400: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_285404:
    // 0x285404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285408: 0x3e00008  jr          $ra
    ctx->pc = 0x285408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285408u;
            // 0x28540c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2853A8u: goto label_2853a8;
            case 0x2853B0u: goto label_2853b0;
            case 0x2853D4u: goto label_2853d4;
            case 0x2853E0u: goto label_2853e0;
            case 0x2853F8u: goto label_2853f8;
            case 0x285404u: goto label_285404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285410u;
}

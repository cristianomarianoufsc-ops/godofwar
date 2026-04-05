#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D43D0
// Address: 0x1d43d0 - 0x1d5108
void sub_001D43D0_0x1d43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D43D0_0x1d43d0");
#endif

    ctx->pc = 0x1d43d0u;

    // 0x1d43d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d43d4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d43d8: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1d43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1d43dc: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1d43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1d43e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d43e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e4: 0x24546350  addiu       $s4, $v0, 0x6350
    ctx->pc = 0x1d43e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x1d43e8: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1d43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1d43ec: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1d43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1d43f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43f4: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1d43f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1d43f8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1d43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1d43fc: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x1D43FCu;
    SET_GPR_U32(ctx, 31, 0x1D4404u);
    ctx->pc = 0x1D4400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43FCu;
            // 0x1d4400: 0x3c10001d  lui         $s0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4404u; }
        if (ctx->pc != 0x1D4404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4404u; }
        if (ctx->pc != 0x1D4404u) { return; }
    }
    ctx->pc = 0x1D4404u;
    // 0x1d4404: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d440c: 0x24a56358  addiu       $a1, $a1, 0x6358
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25432));
    // 0x1d4410: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4410u;
    SET_GPR_U32(ctx, 31, 0x1D4418u);
    ctx->pc = 0x1D4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4410u;
            // 0x1d4414: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4418u; }
        if (ctx->pc != 0x1D4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4418u; }
        if (ctx->pc != 0x1D4418u) { return; }
    }
    ctx->pc = 0x1D4418u;
    // 0x1d4418: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d441c: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4420: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4424: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4428: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4428u;
    {
        const bool branch_taken_0x1d4428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4428u;
            // 0x1d442c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4428) {
            ctx->pc = 0x1D4480u;
            goto label_1d4480;
        }
    }
    ctx->pc = 0x1D4430u;
    // 0x1d4430: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d4434: 0x0  nop
    ctx->pc = 0x1d4434u;
    // NOP
label_1d4438:
    // 0x1d4438: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d443c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4448: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4448u;
    {
        const bool branch_taken_0x1d4448 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4448u;
            // 0x1d444c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4448) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4450u;
    // 0x1d4450: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4454: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4458: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d445c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d445cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4464: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4468: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4468u;
    {
        const bool branch_taken_0x1d4468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4468u;
            // 0x1d446c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4468) {
            ctx->pc = 0x1D44C8u;
            goto label_1d44c8;
        }
    }
    ctx->pc = 0x1D4470u;
label_1d4470:
    // 0x1d4470: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4474: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4478: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4478u;
    {
        const bool branch_taken_0x1d4478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4478u;
            // 0x1d447c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4478) {
            ctx->pc = 0x1D4438u;
            runtime->cooperativeGuestYield();
            goto label_1d4438;
        }
    }
    ctx->pc = 0x1D4480u;
label_1d4480:
    // 0x1d4480: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4484: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4488: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d448c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4490: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4494: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4498: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d449c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d44a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d44a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d44a4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d44a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d44ac: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d44b0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d44b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d44b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d44b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d44bc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d44c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d44c4: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d44c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d44c8:
    // 0x1d44c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d44cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d44ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44d0: 0x24a56370  addiu       $a1, $a1, 0x6370
    ctx->pc = 0x1d44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25456));
    // 0x1d44d4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D44D4u;
    SET_GPR_U32(ctx, 31, 0x1D44DCu);
    ctx->pc = 0x1D44D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44D4u;
            // 0x1d44d8: 0x26660004  addiu       $a2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44DCu; }
        if (ctx->pc != 0x1D44DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44DCu; }
        if (ctx->pc != 0x1D44DCu) { return; }
    }
    ctx->pc = 0x1D44DCu;
    // 0x1d44dc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d44e0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d44e4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d44e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d44e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d44e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D44ECu;
    {
        const bool branch_taken_0x1d44ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44ECu;
            // 0x1d44f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44ec) {
            ctx->pc = 0x1D4540u;
            goto label_1d4540;
        }
    }
    ctx->pc = 0x1D44F4u;
    // 0x1d44f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d44f8:
    // 0x1d44f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d44fc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4508: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4508u;
    {
        const bool branch_taken_0x1d4508 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4508u;
            // 0x1d450c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4508) {
            ctx->pc = 0x1D4530u;
            goto label_1d4530;
        }
    }
    ctx->pc = 0x1D4510u;
    // 0x1d4510: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4514: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d451c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d451cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4524: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4528: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4528u;
    {
        const bool branch_taken_0x1d4528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4528u;
            // 0x1d452c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4528) {
            ctx->pc = 0x1D4588u;
            goto label_1d4588;
        }
    }
    ctx->pc = 0x1D4530u;
label_1d4530:
    // 0x1d4530: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4534: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4538: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4538u;
    {
        const bool branch_taken_0x1d4538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4538u;
            // 0x1d453c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4538) {
            ctx->pc = 0x1D44F8u;
            runtime->cooperativeGuestYield();
            goto label_1d44f8;
        }
    }
    ctx->pc = 0x1D4540u;
label_1d4540:
    // 0x1d4540: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4544: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4548: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4548u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d454c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4550: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4554: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d455c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4560: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4564: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4568: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4568u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d456c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4570: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4578: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d457c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d457cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4580: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4584: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4584u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4588:
    // 0x1d4588: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d458c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4590: 0x24a56388  addiu       $a1, $a1, 0x6388
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
    // 0x1d4594: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4594u;
    SET_GPR_U32(ctx, 31, 0x1D459Cu);
    ctx->pc = 0x1D4598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4594u;
            // 0x1d4598: 0x26660008  addiu       $a2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D459Cu; }
        if (ctx->pc != 0x1D459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D459Cu; }
        if (ctx->pc != 0x1D459Cu) { return; }
    }
    ctx->pc = 0x1D459Cu;
    // 0x1d459c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d459cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d45a0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d45a4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d45a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d45a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d45a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D45ACu;
    {
        const bool branch_taken_0x1d45ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45ACu;
            // 0x1d45b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45ac) {
            ctx->pc = 0x1D4600u;
            goto label_1d4600;
        }
    }
    ctx->pc = 0x1D45B4u;
    // 0x1d45b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d45b8:
    // 0x1d45b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d45bc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d45c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d45c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d45c8: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D45C8u;
    {
        const bool branch_taken_0x1d45c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D45CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45C8u;
            // 0x1d45cc: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45c8) {
            ctx->pc = 0x1D45F0u;
            goto label_1d45f0;
        }
    }
    ctx->pc = 0x1D45D0u;
    // 0x1d45d0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d45d4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d45d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d45d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d45dc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d45e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d45e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d45e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d45e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d45e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D45E8u;
    {
        const bool branch_taken_0x1d45e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45E8u;
            // 0x1d45ec: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45e8) {
            ctx->pc = 0x1D4648u;
            goto label_1d4648;
        }
    }
    ctx->pc = 0x1D45F0u;
label_1d45f0:
    // 0x1d45f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d45f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d45f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d45f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D45F8u;
    {
        const bool branch_taken_0x1d45f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D45FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45F8u;
            // 0x1d45fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45f8) {
            ctx->pc = 0x1D45B8u;
            runtime->cooperativeGuestYield();
            goto label_1d45b8;
        }
    }
    ctx->pc = 0x1D4600u;
label_1d4600:
    // 0x1d4600: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4604: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4608: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4608u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d460c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4614: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d461c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4620: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4624: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4628: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d462c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4630: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4638: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d463c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d463cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4644: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4644u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4648:
    // 0x1d4648: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d464c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4650: 0x24a563a0  addiu       $a1, $a1, 0x63A0
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
    // 0x1d4654: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4654u;
    SET_GPR_U32(ctx, 31, 0x1D465Cu);
    ctx->pc = 0x1D4658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4654u;
            // 0x1d4658: 0x2666000c  addiu       $a2, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D465Cu; }
        if (ctx->pc != 0x1D465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D465Cu; }
        if (ctx->pc != 0x1D465Cu) { return; }
    }
    ctx->pc = 0x1D465Cu;
    // 0x1d465c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4660: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4664: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4668: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d466c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D466Cu;
    {
        const bool branch_taken_0x1d466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D466Cu;
            // 0x1d4670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d466c) {
            ctx->pc = 0x1D46C0u;
            goto label_1d46c0;
        }
    }
    ctx->pc = 0x1D4674u;
    // 0x1d4674: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4678:
    // 0x1d4678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d467c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4688: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4688u;
    {
        const bool branch_taken_0x1d4688 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4688u;
            // 0x1d468c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4688) {
            ctx->pc = 0x1D46B0u;
            goto label_1d46b0;
        }
    }
    ctx->pc = 0x1D4690u;
    // 0x1d4690: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4694: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4698: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d469c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d46a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d46a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d46a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d46a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d46a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D46A8u;
    {
        const bool branch_taken_0x1d46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46A8u;
            // 0x1d46ac: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a8) {
            ctx->pc = 0x1D4708u;
            goto label_1d4708;
        }
    }
    ctx->pc = 0x1D46B0u;
label_1d46b0:
    // 0x1d46b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d46b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d46b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d46b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d46b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D46B8u;
    {
        const bool branch_taken_0x1d46b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D46BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46B8u;
            // 0x1d46bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b8) {
            ctx->pc = 0x1D4678u;
            runtime->cooperativeGuestYield();
            goto label_1d4678;
        }
    }
    ctx->pc = 0x1D46C0u;
label_1d46c0:
    // 0x1d46c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d46c4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d46c8: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d46c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d46cc: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d46d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d46d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d46d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d46d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d46dc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d46e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d46e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d46e4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d46e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d46ec: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d46f0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d46f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d46f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d46f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d46fc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4704: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4704u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4708:
    // 0x1d4708: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d470c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4710: 0x24a563b8  addiu       $a1, $a1, 0x63B8
    ctx->pc = 0x1d4710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
    // 0x1d4714: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4714u;
    SET_GPR_U32(ctx, 31, 0x1D471Cu);
    ctx->pc = 0x1D4718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4714u;
            // 0x1d4718: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D471Cu; }
        if (ctx->pc != 0x1D471Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D471Cu; }
        if (ctx->pc != 0x1D471Cu) { return; }
    }
    ctx->pc = 0x1D471Cu;
    // 0x1d471c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d471cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4720: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4724: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4728: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d472c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D472Cu;
    {
        const bool branch_taken_0x1d472c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D472Cu;
            // 0x1d4730: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d472c) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D4734u;
    // 0x1d4734: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4738:
    // 0x1d4738: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d473c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4748: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4748u;
    {
        const bool branch_taken_0x1d4748 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4748u;
            // 0x1d474c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4748) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D4750u;
    // 0x1d4750: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4754: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d475c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4764: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4768: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4768u;
    {
        const bool branch_taken_0x1d4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4768u;
            // 0x1d476c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4768) {
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4774: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4778: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4778u;
    {
        const bool branch_taken_0x1d4778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4778u;
            // 0x1d477c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4778) {
            ctx->pc = 0x1D4738u;
            runtime->cooperativeGuestYield();
            goto label_1d4738;
        }
    }
    ctx->pc = 0x1D4780u;
label_1d4780:
    // 0x1d4780: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4784: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4788: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4788u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d478c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4790: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4794: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4798: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d479c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d479cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d47a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d47a4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d47a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d47ac: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d47b0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d47b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d47b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d47b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d47bc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d47c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d47c4: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d47c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d47c8:
    // 0x1d47c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d47cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d47ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d0: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    // 0x1d47d4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D47D4u;
    SET_GPR_U32(ctx, 31, 0x1D47DCu);
    ctx->pc = 0x1D47D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47D4u;
            // 0x1d47d8: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47DCu; }
        if (ctx->pc != 0x1D47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47DCu; }
        if (ctx->pc != 0x1D47DCu) { return; }
    }
    ctx->pc = 0x1D47DCu;
    // 0x1d47dc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d47e0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d47e4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d47e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d47e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d47e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D47ECu;
    {
        const bool branch_taken_0x1d47ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47ECu;
            // 0x1d47f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ec) {
            ctx->pc = 0x1D4840u;
            goto label_1d4840;
        }
    }
    ctx->pc = 0x1D47F4u;
    // 0x1d47f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d47f8:
    // 0x1d47f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d47fc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4808: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4808u;
    {
        const bool branch_taken_0x1d4808 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4808u;
            // 0x1d480c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4808) {
            ctx->pc = 0x1D4830u;
            goto label_1d4830;
        }
    }
    ctx->pc = 0x1D4810u;
    // 0x1d4810: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4814: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4818: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d481c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4824: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4828: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4828u;
    {
        const bool branch_taken_0x1d4828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4828u;
            // 0x1d482c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4828) {
            ctx->pc = 0x1D4888u;
            goto label_1d4888;
        }
    }
    ctx->pc = 0x1D4830u;
label_1d4830:
    // 0x1d4830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4834: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4838: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4838u;
    {
        const bool branch_taken_0x1d4838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4838u;
            // 0x1d483c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4838) {
            ctx->pc = 0x1D47F8u;
            runtime->cooperativeGuestYield();
            goto label_1d47f8;
        }
    }
    ctx->pc = 0x1D4840u;
label_1d4840:
    // 0x1d4840: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4844: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4848: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4848u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d484c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4854: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4858: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d485c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d485cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4860: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4864: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4868: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d486c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4870: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4870u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4878: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d487c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d487cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4880: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4884: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4884u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4888:
    // 0x1d4888: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d488c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4890: 0x24a563e8  addiu       $a1, $a1, 0x63E8
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25576));
    // 0x1d4894: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4894u;
    SET_GPR_U32(ctx, 31, 0x1D489Cu);
    ctx->pc = 0x1D4898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4894u;
            // 0x1d4898: 0x26660018  addiu       $a2, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D489Cu; }
        if (ctx->pc != 0x1D489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D489Cu; }
        if (ctx->pc != 0x1D489Cu) { return; }
    }
    ctx->pc = 0x1D489Cu;
    // 0x1d489c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d48a0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d48a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d48a4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d48a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d48a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d48a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D48ACu;
    {
        const bool branch_taken_0x1d48ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48ACu;
            // 0x1d48b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48ac) {
            ctx->pc = 0x1D4900u;
            goto label_1d4900;
        }
    }
    ctx->pc = 0x1D48B4u;
    // 0x1d48b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d48b8:
    // 0x1d48b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d48bc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d48c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d48c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d48c8: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D48C8u;
    {
        const bool branch_taken_0x1d48c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48C8u;
            // 0x1d48cc: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c8) {
            ctx->pc = 0x1D48F0u;
            goto label_1d48f0;
        }
    }
    ctx->pc = 0x1D48D0u;
    // 0x1d48d0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d48d4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d48d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d48d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d48dc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d48dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d48e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d48e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d48e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d48e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D48E8u;
    {
        const bool branch_taken_0x1d48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48E8u;
            // 0x1d48ec: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48e8) {
            ctx->pc = 0x1D4948u;
            goto label_1d4948;
        }
    }
    ctx->pc = 0x1D48F0u;
label_1d48f0:
    // 0x1d48f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d48f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d48f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d48f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D48F8u;
    {
        const bool branch_taken_0x1d48f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48F8u;
            // 0x1d48fc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48f8) {
            ctx->pc = 0x1D48B8u;
            runtime->cooperativeGuestYield();
            goto label_1d48b8;
        }
    }
    ctx->pc = 0x1D4900u;
label_1d4900:
    // 0x1d4900: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4904: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4908: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d490c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4910: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4914: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d491c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4920: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4924: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4928: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d492c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4930: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4938: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d493c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d493cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4944: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4944u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4948:
    // 0x1d4948: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d494c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4950: 0x24a56400  addiu       $a1, $a1, 0x6400
    ctx->pc = 0x1d4950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25600));
    // 0x1d4954: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4954u;
    SET_GPR_U32(ctx, 31, 0x1D495Cu);
    ctx->pc = 0x1D4958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4954u;
            // 0x1d4958: 0x2666001c  addiu       $a2, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D495Cu; }
        if (ctx->pc != 0x1D495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D495Cu; }
        if (ctx->pc != 0x1D495Cu) { return; }
    }
    ctx->pc = 0x1D495Cu;
    // 0x1d495c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4960: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4964: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4968: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d496c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D496Cu;
    {
        const bool branch_taken_0x1d496c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D496Cu;
            // 0x1d4970: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d496c) {
            ctx->pc = 0x1D49C0u;
            goto label_1d49c0;
        }
    }
    ctx->pc = 0x1D4974u;
    // 0x1d4974: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4978:
    // 0x1d4978: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d497c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4984: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4988: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4988u;
    {
        const bool branch_taken_0x1d4988 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4988u;
            // 0x1d498c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4988) {
            ctx->pc = 0x1D49B0u;
            goto label_1d49b0;
        }
    }
    ctx->pc = 0x1D4990u;
    // 0x1d4990: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4994: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4998: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d499c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d499cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d49a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d49a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d49a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D49A8u;
    {
        const bool branch_taken_0x1d49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49A8u;
            // 0x1d49ac: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49a8) {
            ctx->pc = 0x1D4A08u;
            goto label_1d4a08;
        }
    }
    ctx->pc = 0x1D49B0u;
label_1d49b0:
    // 0x1d49b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d49b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d49b8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D49B8u;
    {
        const bool branch_taken_0x1d49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49B8u;
            // 0x1d49bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49b8) {
            ctx->pc = 0x1D4978u;
            runtime->cooperativeGuestYield();
            goto label_1d4978;
        }
    }
    ctx->pc = 0x1D49C0u;
label_1d49c0:
    // 0x1d49c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d49c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d49c4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d49c8: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d49c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d49cc: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d49d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d49d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d49d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d49d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d49d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d49dc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d49dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d49e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d49e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d49e4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d49e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d49e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d49ec: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d49f0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d49f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d49f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d49f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d49fc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4a04: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4a04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4a08:
    // 0x1d4a08: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a10: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x1d4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x1d4a14: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4A14u;
    SET_GPR_U32(ctx, 31, 0x1D4A1Cu);
    ctx->pc = 0x1D4A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A14u;
            // 0x1d4a18: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A1Cu; }
        if (ctx->pc != 0x1D4A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A1Cu; }
        if (ctx->pc != 0x1D4A1Cu) { return; }
    }
    ctx->pc = 0x1D4A1Cu;
    // 0x1d4a1c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4a20: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4a24: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4a28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a2c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4A2Cu;
    {
        const bool branch_taken_0x1d4a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A2Cu;
            // 0x1d4a30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a2c) {
            ctx->pc = 0x1D4A80u;
            goto label_1d4a80;
        }
    }
    ctx->pc = 0x1D4A34u;
    // 0x1d4a34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4a38:
    // 0x1d4a38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d4a3c: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4a44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4a48: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4A48u;
    {
        const bool branch_taken_0x1d4a48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A48u;
            // 0x1d4a4c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a48) {
            ctx->pc = 0x1D4A70u;
            goto label_1d4a70;
        }
    }
    ctx->pc = 0x1D4A50u;
    // 0x1d4a50: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4a54: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4a58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4a5c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4a60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4a64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4a68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A68u;
            // 0x1d4a6c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4AC8u;
            goto label_1d4ac8;
        }
    }
    ctx->pc = 0x1D4A70u;
label_1d4a70:
    // 0x1d4a70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4a74: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4a78: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4A78u;
    {
        const bool branch_taken_0x1d4a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A78u;
            // 0x1d4a7c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a78) {
            ctx->pc = 0x1D4A38u;
            runtime->cooperativeGuestYield();
            goto label_1d4a38;
        }
    }
    ctx->pc = 0x1D4A80u;
label_1d4a80:
    // 0x1d4a80: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4a84: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4a88: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4a88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4a8c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4a90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4a94: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4a98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4a9c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4aa0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4aa4: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4aa8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d4aac: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4ab0: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4ab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4ab8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4abc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4ac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4ac4: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4ac8:
    // 0x1d4ac8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4acc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ad0: 0x24a56430  addiu       $a1, $a1, 0x6430
    ctx->pc = 0x1d4ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
    // 0x1d4ad4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4AD4u;
    SET_GPR_U32(ctx, 31, 0x1D4ADCu);
    ctx->pc = 0x1D4AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AD4u;
            // 0x1d4ad8: 0x26660024  addiu       $a2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ADCu; }
        if (ctx->pc != 0x1D4ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ADCu; }
        if (ctx->pc != 0x1D4ADCu) { return; }
    }
    ctx->pc = 0x1D4ADCu;
    // 0x1d4adc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4ae0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4ae4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4ae8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4aec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4AECu;
    {
        const bool branch_taken_0x1d4aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AECu;
            // 0x1d4af0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aec) {
            ctx->pc = 0x1D4B40u;
            goto label_1d4b40;
        }
    }
    ctx->pc = 0x1D4AF4u;
    // 0x1d4af4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4af8:
    // 0x1d4af8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d4afc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4b04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4b08: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4B08u;
    {
        const bool branch_taken_0x1d4b08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B08u;
            // 0x1d4b0c: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b08) {
            ctx->pc = 0x1D4B30u;
            goto label_1d4b30;
        }
    }
    ctx->pc = 0x1D4B10u;
    // 0x1d4b10: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4b14: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4b18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4b1c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4b24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4b28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4B28u;
    {
        const bool branch_taken_0x1d4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B28u;
            // 0x1d4b2c: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b28) {
            ctx->pc = 0x1D4B88u;
            goto label_1d4b88;
        }
    }
    ctx->pc = 0x1D4B30u;
label_1d4b30:
    // 0x1d4b30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4b34: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4b38: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4B38u;
    {
        const bool branch_taken_0x1d4b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B38u;
            // 0x1d4b3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b38) {
            ctx->pc = 0x1D4AF8u;
            runtime->cooperativeGuestYield();
            goto label_1d4af8;
        }
    }
    ctx->pc = 0x1D4B40u;
label_1d4b40:
    // 0x1d4b40: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4b44: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4b48: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4b48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4b4c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4b50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4b54: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4b5c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4b60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4b64: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4b68: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d4b6c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4b70: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4b70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4b78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4b7c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4b84: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4b84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4b88:
    // 0x1d4b88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b90: 0x24a56448  addiu       $a1, $a1, 0x6448
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25672));
    // 0x1d4b94: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4B94u;
    SET_GPR_U32(ctx, 31, 0x1D4B9Cu);
    ctx->pc = 0x1D4B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B94u;
            // 0x1d4b98: 0x26660028  addiu       $a2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B9Cu; }
        if (ctx->pc != 0x1D4B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B9Cu; }
        if (ctx->pc != 0x1D4B9Cu) { return; }
    }
    ctx->pc = 0x1D4B9Cu;
    // 0x1d4b9c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4ba0: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4ba4: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4ba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4ba8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4BACu;
    {
        const bool branch_taken_0x1d4bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BACu;
            // 0x1d4bb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bac) {
            ctx->pc = 0x1D4C00u;
            goto label_1d4c00;
        }
    }
    ctx->pc = 0x1D4BB4u;
    // 0x1d4bb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4bb8:
    // 0x1d4bb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d4bbc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4bc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4bc8: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4BC8u;
    {
        const bool branch_taken_0x1d4bc8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BC8u;
            // 0x1d4bcc: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bc8) {
            ctx->pc = 0x1D4BF0u;
            goto label_1d4bf0;
        }
    }
    ctx->pc = 0x1D4BD0u;
    // 0x1d4bd0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4bd4: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4bdc: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4be4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4be8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4BE8u;
    {
        const bool branch_taken_0x1d4be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BE8u;
            // 0x1d4bec: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4be8) {
            ctx->pc = 0x1D4C48u;
            goto label_1d4c48;
        }
    }
    ctx->pc = 0x1D4BF0u;
label_1d4bf0:
    // 0x1d4bf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4bf4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4bf8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4BF8u;
    {
        const bool branch_taken_0x1d4bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BF8u;
            // 0x1d4bfc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bf8) {
            ctx->pc = 0x1D4BB8u;
            runtime->cooperativeGuestYield();
            goto label_1d4bb8;
        }
    }
    ctx->pc = 0x1D4C00u;
label_1d4c00:
    // 0x1d4c00: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4c04: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4c08: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4c08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4c0c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4c10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4c14: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4c18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4c1c: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4c20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4c24: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4c28: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d4c2c: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4c30: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4c30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4c34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4c38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4c3c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4c44: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4c44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4c48:
    // 0x1d4c48: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4c4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c50: 0x24a56460  addiu       $a1, $a1, 0x6460
    ctx->pc = 0x1d4c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25696));
    // 0x1d4c54: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4C54u;
    SET_GPR_U32(ctx, 31, 0x1D4C5Cu);
    ctx->pc = 0x1D4C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C54u;
            // 0x1d4c58: 0x2666002c  addiu       $a2, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C5Cu; }
        if (ctx->pc != 0x1D4C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C5Cu; }
        if (ctx->pc != 0x1D4C5Cu) { return; }
    }
    ctx->pc = 0x1D4C5Cu;
    // 0x1d4c5c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4c60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c64: 0x24a56470  addiu       $a1, $a1, 0x6470
    ctx->pc = 0x1d4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
    // 0x1d4c68: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4C68u;
    SET_GPR_U32(ctx, 31, 0x1D4C70u);
    ctx->pc = 0x1D4C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C68u;
            // 0x1d4c6c: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C70u; }
        if (ctx->pc != 0x1D4C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C70u; }
        if (ctx->pc != 0x1D4C70u) { return; }
    }
    ctx->pc = 0x1D4C70u;
    // 0x1d4c70: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4c74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c78: 0x24a56488  addiu       $a1, $a1, 0x6488
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25736));
    // 0x1d4c7c: 0xc05f744  jal         func_17DD10
    ctx->pc = 0x1D4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C84u);
    ctx->pc = 0x1D4C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C7Cu;
            // 0x1d4c80: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DD10u;
    if (runtime->hasFunction(0x17DD10u)) {
        auto targetFn = runtime->lookupFunction(0x17DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C84u; }
        if (ctx->pc != 0x1D4C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DD10_0x17dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C84u; }
        if (ctx->pc != 0x1D4C84u) { return; }
    }
    ctx->pc = 0x1D4C84u;
    // 0x1d4c84: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4c88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c8c: 0x24a564a8  addiu       $a1, $a1, 0x64A8
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25768));
    // 0x1d4c90: 0xc05f744  jal         func_17DD10
    ctx->pc = 0x1D4C90u;
    SET_GPR_U32(ctx, 31, 0x1D4C98u);
    ctx->pc = 0x1D4C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C90u;
            // 0x1d4c94: 0x26660044  addiu       $a2, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DD10u;
    if (runtime->hasFunction(0x17DD10u)) {
        auto targetFn = runtime->lookupFunction(0x17DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C98u; }
        if (ctx->pc != 0x1D4C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DD10_0x17dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C98u; }
        if (ctx->pc != 0x1D4C98u) { return; }
    }
    ctx->pc = 0x1D4C98u;
    // 0x1d4c98: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ca0: 0x24a564c0  addiu       $a1, $a1, 0x64C0
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
    // 0x1d4ca4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4CA4u;
    SET_GPR_U32(ctx, 31, 0x1D4CACu);
    ctx->pc = 0x1D4CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CA4u;
            // 0x1d4ca8: 0x26660034  addiu       $a2, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CACu; }
        if (ctx->pc != 0x1D4CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CACu; }
        if (ctx->pc != 0x1D4CACu) { return; }
    }
    ctx->pc = 0x1D4CACu;
    // 0x1d4cac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cb4: 0x24a564d0  addiu       $a1, $a1, 0x64D0
    ctx->pc = 0x1d4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25808));
    // 0x1d4cb8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4CB8u;
    SET_GPR_U32(ctx, 31, 0x1D4CC0u);
    ctx->pc = 0x1D4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CB8u;
            // 0x1d4cbc: 0x26660038  addiu       $a2, $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CC0u; }
        if (ctx->pc != 0x1D4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CC0u; }
        if (ctx->pc != 0x1D4CC0u) { return; }
    }
    ctx->pc = 0x1D4CC0u;
    // 0x1d4cc0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4cc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cc8: 0x24a564e8  addiu       $a1, $a1, 0x64E8
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25832));
    // 0x1d4ccc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4CCCu;
    SET_GPR_U32(ctx, 31, 0x1D4CD4u);
    ctx->pc = 0x1D4CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CCCu;
            // 0x1d4cd0: 0x2666003c  addiu       $a2, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD4u; }
        if (ctx->pc != 0x1D4CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD4u; }
        if (ctx->pc != 0x1D4CD4u) { return; }
    }
    ctx->pc = 0x1D4CD4u;
    // 0x1d4cd4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cdc: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x1d4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    // 0x1d4ce0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4CE0u;
    SET_GPR_U32(ctx, 31, 0x1D4CE8u);
    ctx->pc = 0x1D4CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CE0u;
            // 0x1d4ce4: 0x2666004c  addiu       $a2, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CE8u; }
        if (ctx->pc != 0x1D4CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CE8u; }
        if (ctx->pc != 0x1D4CE8u) { return; }
    }
    ctx->pc = 0x1D4CE8u;
    // 0x1d4ce8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4cf0: 0x24a56518  addiu       $a1, $a1, 0x6518
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25880));
    // 0x1d4cf4: 0xc05f794  jal         func_17DE50
    ctx->pc = 0x1D4CF4u;
    SET_GPR_U32(ctx, 31, 0x1D4CFCu);
    ctx->pc = 0x1D4CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CF4u;
            // 0x1d4cf8: 0x266603d4  addiu       $a2, $s3, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 980));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DE50u;
    if (runtime->hasFunction(0x17DE50u)) {
        auto targetFn = runtime->lookupFunction(0x17DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CFCu; }
        if (ctx->pc != 0x1D4CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DE50_0x17de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CFCu; }
        if (ctx->pc != 0x1D4CFCu) { return; }
    }
    ctx->pc = 0x1D4CFCu;
    // 0x1d4cfc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d04: 0x24a56538  addiu       $a1, $a1, 0x6538
    ctx->pc = 0x1d4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25912));
    // 0x1d4d08: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4D08u;
    SET_GPR_U32(ctx, 31, 0x1D4D10u);
    ctx->pc = 0x1D4D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D08u;
            // 0x1d4d0c: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D10u; }
        if (ctx->pc != 0x1D4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D10u; }
        if (ctx->pc != 0x1D4D10u) { return; }
    }
    ctx->pc = 0x1D4D10u;
    // 0x1d4d10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4d14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d18: 0x24a56558  addiu       $a1, $a1, 0x6558
    ctx->pc = 0x1d4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25944));
    // 0x1d4d1c: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1D4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D24u);
    ctx->pc = 0x1D4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D1Cu;
            // 0x1d4d20: 0x26660048  addiu       $a2, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D24u; }
        if (ctx->pc != 0x1D4D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D24u; }
        if (ctx->pc != 0x1D4D24u) { return; }
    }
    ctx->pc = 0x1D4D24u;
    // 0x1d4d24: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4d28: 0x260843c0  addiu       $t0, $s0, 0x43C0
    ctx->pc = 0x1d4d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x1d4d2c: 0x90a3c678  lbu         $v1, -0x3988($a1)
    ctx->pc = 0x1d4d2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d4d30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d34: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4D34u;
    {
        const bool branch_taken_0x1d4d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D34u;
            // 0x1d4d38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d34) {
            ctx->pc = 0x1D4D88u;
            goto label_1d4d88;
        }
    }
    ctx->pc = 0x1D4D3Cu;
    // 0x1d4d3c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d4d40:
    // 0x1d4d40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d4d44: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x1d4d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4d4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4d50: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4D50u;
    {
        const bool branch_taken_0x1d4d50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D50u;
            // 0x1d4d54: 0x90a2c678  lbu         $v0, -0x3988($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294952568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d50) {
            ctx->pc = 0x1D4D78u;
            goto label_1d4d78;
        }
    }
    ctx->pc = 0x1D4D58u;
    // 0x1d4d58: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4d5c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4d60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4d64: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4d68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4d6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4d70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4D70u;
    {
        const bool branch_taken_0x1d4d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D70u;
            // 0x1d4d74: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d70) {
            ctx->pc = 0x1D4DD0u;
            goto label_1d4dd0;
        }
    }
    ctx->pc = 0x1D4D78u;
label_1d4d78:
    // 0x1d4d78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4d7c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d4d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4d80: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4D80u;
    {
        const bool branch_taken_0x1d4d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D80u;
            // 0x1d4d84: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d80) {
            ctx->pc = 0x1D4D40u;
            runtime->cooperativeGuestYield();
            goto label_1d4d40;
        }
    }
    ctx->pc = 0x1D4D88u;
label_1d4d88:
    // 0x1d4d88: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4d8c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d4d90: 0x90c4c678  lbu         $a0, -0x3988($a2)
    ctx->pc = 0x1d4d90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4d94: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1d4d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d4d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d4d9c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d4d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d4da0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4da4: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x1d4da8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d4da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d4dac: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x1d4db0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1d4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1d4db4: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1d4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1d4db8: 0x90c3c678  lbu         $v1, -0x3988($a2)
    ctx->pc = 0x1d4db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294952568)));
    // 0x1d4dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4dc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4dc4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4dcc: 0xa0c3c678  sb          $v1, -0x3988($a2)
    ctx->pc = 0x1d4dccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294952568), (uint8_t)GPR_U32(ctx, 3));
label_1d4dd0:
    // 0x1d4dd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dd4: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4DD4u;
    SET_GPR_U32(ctx, 31, 0x1D4DDCu);
    ctx->pc = 0x1D4DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DD4u;
            // 0x1d4dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DDCu; }
        if (ctx->pc != 0x1D4DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DDCu; }
        if (ctx->pc != 0x1D4DDCu) { return; }
    }
    ctx->pc = 0x1D4DDCu;
    // 0x1d4ddc: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4DDCu;
    SET_GPR_U32(ctx, 31, 0x1D4DE4u);
    ctx->pc = 0x1D4DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DDCu;
            // 0x1d4de0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DE4u; }
        if (ctx->pc != 0x1D4DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DE4u; }
        if (ctx->pc != 0x1D4DE4u) { return; }
    }
    ctx->pc = 0x1D4DE4u;
    // 0x1d4de4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1d4de8:
    // 0x1d4de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4dec: 0x24a56568  addiu       $a1, $a1, 0x6568
    ctx->pc = 0x1d4decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25960));
    // 0x1d4df0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d4df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4df4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D4DF4u;
    SET_GPR_U32(ctx, 31, 0x1D4DFCu);
    ctx->pc = 0x1D4DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DF4u;
            // 0x1d4df8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DFCu; }
        if (ctx->pc != 0x1D4DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DFCu; }
        if (ctx->pc != 0x1D4DFCu) { return; }
    }
    ctx->pc = 0x1D4DFCu;
    // 0x1d4dfc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d4e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e04: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x1d4e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d4e08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4e0c: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1d4e10: 0xc075442  jal         func_1D5108
    ctx->pc = 0x1D4E10u;
    SET_GPR_U32(ctx, 31, 0x1D4E18u);
    ctx->pc = 0x1D4E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E10u;
            // 0x1d4e14: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5108u;
    if (runtime->hasFunction(0x1D5108u)) {
        auto targetFn = runtime->lookupFunction(0x1D5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E18u; }
        if (ctx->pc != 0x1D4E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5108_0x1d5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E18u; }
        if (ctx->pc != 0x1D4E18u) { return; }
    }
    ctx->pc = 0x1D4E18u;
    // 0x1d4e18: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1d4e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d4e1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D4E1Cu;
    {
        const bool branch_taken_0x1d4e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E1Cu;
            // 0x1d4e20: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e1c) {
            ctx->pc = 0x1D4DE8u;
            runtime->cooperativeGuestYield();
            goto label_1d4de8;
        }
    }
    ctx->pc = 0x1D4E24u;
    // 0x1d4e24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e28: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4E28u;
    SET_GPR_U32(ctx, 31, 0x1D4E30u);
    ctx->pc = 0x1D4E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E28u;
            // 0x1d4e2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E30u; }
        if (ctx->pc != 0x1D4E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E30u; }
        if (ctx->pc != 0x1D4E30u) { return; }
    }
    ctx->pc = 0x1D4E30u;
    // 0x1d4e30: 0x26710240  addiu       $s1, $s3, 0x240
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x1d4e34: 0x0  nop
    ctx->pc = 0x1d4e34u;
    // NOP
label_1d4e38:
    // 0x1d4e38: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d4e3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4e40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d4e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e44: 0x24a56580  addiu       $a1, $a1, 0x6580
    ctx->pc = 0x1d4e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
    // 0x1d4e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e4c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E54u);
    ctx->pc = 0x1D4E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E4Cu;
            // 0x1d4e50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E54u; }
        if (ctx->pc != 0x1D4E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E54u; }
        if (ctx->pc != 0x1D4E54u) { return; }
    }
    ctx->pc = 0x1D4E54u;
    // 0x1d4e54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d4e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d4e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d4e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e5c: 0xc0754c2  jal         func_1D5308
    ctx->pc = 0x1D4E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E64u);
    ctx->pc = 0x1D4E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E5Cu;
            // 0x1d4e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5308u;
    if (runtime->hasFunction(0x1D5308u)) {
        auto targetFn = runtime->lookupFunction(0x1D5308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E64u; }
        if (ctx->pc != 0x1D4E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5308_0x1d5308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E64u; }
        if (ctx->pc != 0x1D4E64u) { return; }
    }
    ctx->pc = 0x1D4E64u;
    // 0x1d4e64: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x1d4e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d4e68: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D4E68u;
    {
        const bool branch_taken_0x1d4e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E68u;
            // 0x1d4e6c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e68) {
            ctx->pc = 0x1D4E38u;
            runtime->cooperativeGuestYield();
            goto label_1d4e38;
        }
    }
    ctx->pc = 0x1D4E70u;
    // 0x1d4e70: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4E70u;
    SET_GPR_U32(ctx, 31, 0x1D4E78u);
    ctx->pc = 0x1D4E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E70u;
            // 0x1d4e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E78u; }
        if (ctx->pc != 0x1D4E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E78u; }
        if (ctx->pc != 0x1D4E78u) { return; }
    }
    ctx->pc = 0x1D4E78u;
    // 0x1d4e78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e80: 0x24a56590  addiu       $a1, $a1, 0x6590
    ctx->pc = 0x1d4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26000));
    // 0x1d4e84: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4E84u;
    SET_GPR_U32(ctx, 31, 0x1D4E8Cu);
    ctx->pc = 0x1D4E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E84u;
            // 0x1d4e88: 0x26660300  addiu       $a2, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E8Cu; }
        if (ctx->pc != 0x1D4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E8Cu; }
        if (ctx->pc != 0x1D4E8Cu) { return; }
    }
    ctx->pc = 0x1D4E8Cu;
    // 0x1d4e8c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e94: 0x24a565a8  addiu       $a1, $a1, 0x65A8
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26024));
    // 0x1d4e98: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4E98u;
    SET_GPR_U32(ctx, 31, 0x1D4EA0u);
    ctx->pc = 0x1D4E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E98u;
            // 0x1d4e9c: 0x26660304  addiu       $a2, $s3, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EA0u; }
        if (ctx->pc != 0x1D4EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EA0u; }
        if (ctx->pc != 0x1D4EA0u) { return; }
    }
    ctx->pc = 0x1D4EA0u;
    // 0x1d4ea0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4ea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ea8: 0x24a565c0  addiu       $a1, $a1, 0x65C0
    ctx->pc = 0x1d4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    // 0x1d4eac: 0x26660308  addiu       $a2, $s3, 0x308
    ctx->pc = 0x1d4eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 776));
    // 0x1d4eb0: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1D4EB0u;
    SET_GPR_U32(ctx, 31, 0x1D4EB8u);
    ctx->pc = 0x1D4EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EB0u;
            // 0x1d4eb4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EB8u; }
        if (ctx->pc != 0x1D4EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EB8u; }
        if (ctx->pc != 0x1D4EB8u) { return; }
    }
    ctx->pc = 0x1D4EB8u;
    // 0x1d4eb8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4ebc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d4ec0: 0x24a565d8  addiu       $a1, $a1, 0x65D8
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26072));
    // 0x1d4ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ec8: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1D4EC8u;
    SET_GPR_U32(ctx, 31, 0x1D4ED0u);
    ctx->pc = 0x1D4ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EC8u;
            // 0x1d4ecc: 0x26660320  addiu       $a2, $s3, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ED0u; }
        if (ctx->pc != 0x1D4ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ED0u; }
        if (ctx->pc != 0x1D4ED0u) { return; }
    }
    ctx->pc = 0x1D4ED0u;
    // 0x1d4ed0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4ed4: 0x26660338  addiu       $a2, $s3, 0x338
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 824));
    // 0x1d4ed8: 0x24a565f0  addiu       $a1, $a1, 0x65F0
    ctx->pc = 0x1d4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26096));
    // 0x1d4edc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4EDCu;
    SET_GPR_U32(ctx, 31, 0x1D4EE4u);
    ctx->pc = 0x1D4EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EDCu;
            // 0x1d4ee0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EE4u; }
        if (ctx->pc != 0x1D4EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EE4u; }
        if (ctx->pc != 0x1D4EE4u) { return; }
    }
    ctx->pc = 0x1D4EE4u;
    // 0x1d4ee4: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4EE4u;
    SET_GPR_U32(ctx, 31, 0x1D4EECu);
    ctx->pc = 0x1D4EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EE4u;
            // 0x1d4ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EECu; }
        if (ctx->pc != 0x1D4EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EECu; }
        if (ctx->pc != 0x1D4EECu) { return; }
    }
    ctx->pc = 0x1D4EECu;
    // 0x1d4eec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4ef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ef4: 0x24a56608  addiu       $a1, $a1, 0x6608
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26120));
    // 0x1d4ef8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4EF8u;
    SET_GPR_U32(ctx, 31, 0x1D4F00u);
    ctx->pc = 0x1D4EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EF8u;
            // 0x1d4efc: 0x2666033c  addiu       $a2, $s3, 0x33C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 828));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F00u; }
        if (ctx->pc != 0x1D4F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F00u; }
        if (ctx->pc != 0x1D4F00u) { return; }
    }
    ctx->pc = 0x1D4F00u;
    // 0x1d4f00: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f08: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
    // 0x1d4f0c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F14u);
    ctx->pc = 0x1D4F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F0Cu;
            // 0x1d4f10: 0x26660340  addiu       $a2, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F14u; }
        if (ctx->pc != 0x1D4F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F14u; }
        if (ctx->pc != 0x1D4F14u) { return; }
    }
    ctx->pc = 0x1D4F14u;
    // 0x1d4f14: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f1c: 0x24a56638  addiu       $a1, $a1, 0x6638
    ctx->pc = 0x1d4f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26168));
    // 0x1d4f20: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4F20u;
    SET_GPR_U32(ctx, 31, 0x1D4F28u);
    ctx->pc = 0x1D4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F20u;
            // 0x1d4f24: 0x26660344  addiu       $a2, $s3, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 836));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F28u; }
        if (ctx->pc != 0x1D4F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F28u; }
        if (ctx->pc != 0x1D4F28u) { return; }
    }
    ctx->pc = 0x1D4F28u;
    // 0x1d4f28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f30: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x1d4f34: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4F34u;
    SET_GPR_U32(ctx, 31, 0x1D4F3Cu);
    ctx->pc = 0x1D4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F34u;
            // 0x1d4f38: 0x26660348  addiu       $a2, $s3, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F3Cu; }
        if (ctx->pc != 0x1D4F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F3Cu; }
        if (ctx->pc != 0x1D4F3Cu) { return; }
    }
    ctx->pc = 0x1D4F3Cu;
    // 0x1d4f3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f44: 0x24a56668  addiu       $a1, $a1, 0x6668
    ctx->pc = 0x1d4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26216));
    // 0x1d4f48: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4F48u;
    SET_GPR_U32(ctx, 31, 0x1D4F50u);
    ctx->pc = 0x1D4F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F48u;
            // 0x1d4f4c: 0x2666034c  addiu       $a2, $s3, 0x34C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F50u; }
        if (ctx->pc != 0x1D4F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F50u; }
        if (ctx->pc != 0x1D4F50u) { return; }
    }
    ctx->pc = 0x1D4F50u;
    // 0x1d4f50: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f54: 0x26660350  addiu       $a2, $s3, 0x350
    ctx->pc = 0x1d4f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x1d4f58: 0x24a56680  addiu       $a1, $a1, 0x6680
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
    // 0x1d4f5c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F64u);
    ctx->pc = 0x1D4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F5Cu;
            // 0x1d4f60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F64u; }
        if (ctx->pc != 0x1D4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F64u; }
        if (ctx->pc != 0x1D4F64u) { return; }
    }
    ctx->pc = 0x1D4F64u;
    // 0x1d4f64: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4F64u;
    SET_GPR_U32(ctx, 31, 0x1D4F6Cu);
    ctx->pc = 0x1D4F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F64u;
            // 0x1d4f68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F6Cu; }
        if (ctx->pc != 0x1D4F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F6Cu; }
        if (ctx->pc != 0x1D4F6Cu) { return; }
    }
    ctx->pc = 0x1D4F6Cu;
    // 0x1d4f6c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1d4f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4f70: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4f74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f7c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D4F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F84u);
    ctx->pc = 0x1D4F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F7Cu;
            // 0x1d4f80: 0x24a56698  addiu       $a1, $a1, 0x6698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F84u; }
        if (ctx->pc != 0x1D4F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F84u; }
        if (ctx->pc != 0x1D4F84u) { return; }
    }
    ctx->pc = 0x1D4F84u;
    // 0x1d4f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f88: 0xc07550a  jal         func_1D5428
    ctx->pc = 0x1D4F88u;
    SET_GPR_U32(ctx, 31, 0x1D4F90u);
    ctx->pc = 0x1D4F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F88u;
            // 0x1d4f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5428u;
    if (runtime->hasFunction(0x1D5428u)) {
        auto targetFn = runtime->lookupFunction(0x1D5428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F90u; }
        if (ctx->pc != 0x1D4F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5428_0x1d5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F90u; }
        if (ctx->pc != 0x1D4F90u) { return; }
    }
    ctx->pc = 0x1D4F90u;
    // 0x1d4f90: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4F90u;
    SET_GPR_U32(ctx, 31, 0x1D4F98u);
    ctx->pc = 0x1D4F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F90u;
            // 0x1d4f94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F98u; }
        if (ctx->pc != 0x1D4F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F98u; }
        if (ctx->pc != 0x1D4F98u) { return; }
    }
    ctx->pc = 0x1D4F98u;
    // 0x1d4f98: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d4f9c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4fa0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fa8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D4FA8u;
    SET_GPR_U32(ctx, 31, 0x1D4FB0u);
    ctx->pc = 0x1D4FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FA8u;
            // 0x1d4fac: 0x24a566a8  addiu       $a1, $a1, 0x66A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FB0u; }
        if (ctx->pc != 0x1D4FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FB0u; }
        if (ctx->pc != 0x1D4FB0u) { return; }
    }
    ctx->pc = 0x1D4FB0u;
    // 0x1d4fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fb4: 0xc075552  jal         func_1D5548
    ctx->pc = 0x1D4FB4u;
    SET_GPR_U32(ctx, 31, 0x1D4FBCu);
    ctx->pc = 0x1D4FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FB4u;
            // 0x1d4fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5548u;
    if (runtime->hasFunction(0x1D5548u)) {
        auto targetFn = runtime->lookupFunction(0x1D5548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FBCu; }
        if (ctx->pc != 0x1D4FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5548_0x1d5548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FBCu; }
        if (ctx->pc != 0x1D4FBCu) { return; }
    }
    ctx->pc = 0x1D4FBCu;
    // 0x1d4fbc: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D4FBCu;
    SET_GPR_U32(ctx, 31, 0x1D4FC4u);
    ctx->pc = 0x1D4FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FBCu;
            // 0x1d4fc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FC4u; }
        if (ctx->pc != 0x1D4FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FC4u; }
        if (ctx->pc != 0x1D4FC4u) { return; }
    }
    ctx->pc = 0x1D4FC4u;
    // 0x1d4fc4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4fc8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4fcc: 0x24a566b8  addiu       $a1, $a1, 0x66B8
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26296));
    // 0x1d4fd0: 0x24c6e3cc  addiu       $a2, $a2, -0x1C34
    ctx->pc = 0x1d4fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960076));
    // 0x1d4fd4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4FD4u;
    SET_GPR_U32(ctx, 31, 0x1D4FDCu);
    ctx->pc = 0x1D4FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FD4u;
            // 0x1d4fd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FDCu; }
        if (ctx->pc != 0x1D4FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FDCu; }
        if (ctx->pc != 0x1D4FDCu) { return; }
    }
    ctx->pc = 0x1D4FDCu;
    // 0x1d4fdc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4fe0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4fe4: 0x24a566c8  addiu       $a1, $a1, 0x66C8
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26312));
    // 0x1d4fe8: 0x24c6e3d0  addiu       $a2, $a2, -0x1C30
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960080));
    // 0x1d4fec: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D4FECu;
    SET_GPR_U32(ctx, 31, 0x1D4FF4u);
    ctx->pc = 0x1D4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FECu;
            // 0x1d4ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FF4u; }
        if (ctx->pc != 0x1D4FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FF4u; }
        if (ctx->pc != 0x1D4FF4u) { return; }
    }
    ctx->pc = 0x1D4FF4u;
    // 0x1d4ff4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d4ff8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d4ffc: 0x24a566e0  addiu       $a1, $a1, 0x66E0
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26336));
    // 0x1d5000: 0x24c6e3d4  addiu       $a2, $a2, -0x1C2C
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960084));
    // 0x1d5004: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5004u;
    SET_GPR_U32(ctx, 31, 0x1D500Cu);
    ctx->pc = 0x1D5008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5004u;
            // 0x1d5008: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D500Cu; }
        if (ctx->pc != 0x1D500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D500Cu; }
        if (ctx->pc != 0x1D500Cu) { return; }
    }
    ctx->pc = 0x1D500Cu;
    // 0x1d500c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d500cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5010: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d5014: 0x24a566f8  addiu       $a1, $a1, 0x66F8
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26360));
    // 0x1d5018: 0x24c6e3d8  addiu       $a2, $a2, -0x1C28
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960088));
    // 0x1d501c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D501Cu;
    SET_GPR_U32(ctx, 31, 0x1D5024u);
    ctx->pc = 0x1D5020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D501Cu;
            // 0x1d5020: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5024u; }
        if (ctx->pc != 0x1D5024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5024u; }
        if (ctx->pc != 0x1D5024u) { return; }
    }
    ctx->pc = 0x1D5024u;
    // 0x1d5024: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5028: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d502c: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x1d5030: 0x24c6e3dc  addiu       $a2, $a2, -0x1C24
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960092));
    // 0x1d5034: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5034u;
    SET_GPR_U32(ctx, 31, 0x1D503Cu);
    ctx->pc = 0x1D5038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5034u;
            // 0x1d5038: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D503Cu; }
        if (ctx->pc != 0x1D503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D503Cu; }
        if (ctx->pc != 0x1D503Cu) { return; }
    }
    ctx->pc = 0x1D503Cu;
    // 0x1d503c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d503cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5040: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d5044: 0x24a56730  addiu       $a1, $a1, 0x6730
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26416));
    // 0x1d5048: 0x24c6e3e0  addiu       $a2, $a2, -0x1C20
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960096));
    // 0x1d504c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D504Cu;
    SET_GPR_U32(ctx, 31, 0x1D5054u);
    ctx->pc = 0x1D5050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D504Cu;
            // 0x1d5050: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5054u; }
        if (ctx->pc != 0x1D5054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5054u; }
        if (ctx->pc != 0x1D5054u) { return; }
    }
    ctx->pc = 0x1D5054u;
    // 0x1d5054: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5058: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d505c: 0x24a56740  addiu       $a1, $a1, 0x6740
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26432));
    // 0x1d5060: 0x24c6e3e4  addiu       $a2, $a2, -0x1C1C
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960100));
    // 0x1d5064: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5064u;
    SET_GPR_U32(ctx, 31, 0x1D506Cu);
    ctx->pc = 0x1D5068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5064u;
            // 0x1d5068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D506Cu; }
        if (ctx->pc != 0x1D506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D506Cu; }
        if (ctx->pc != 0x1D506Cu) { return; }
    }
    ctx->pc = 0x1D506Cu;
    // 0x1d506c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5070: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d5074: 0x24a56750  addiu       $a1, $a1, 0x6750
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26448));
    // 0x1d5078: 0x24c6e3e8  addiu       $a2, $a2, -0x1C18
    ctx->pc = 0x1d5078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960104));
    // 0x1d507c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D507Cu;
    SET_GPR_U32(ctx, 31, 0x1D5084u);
    ctx->pc = 0x1D5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D507Cu;
            // 0x1d5080: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5084u; }
        if (ctx->pc != 0x1D5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5084u; }
        if (ctx->pc != 0x1D5084u) { return; }
    }
    ctx->pc = 0x1D5084u;
    // 0x1d5084: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d5088: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d508c: 0x24a56760  addiu       $a1, $a1, 0x6760
    ctx->pc = 0x1d508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26464));
    // 0x1d5090: 0x24c6e3ec  addiu       $a2, $a2, -0x1C14
    ctx->pc = 0x1d5090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960108));
    // 0x1d5094: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D5094u;
    SET_GPR_U32(ctx, 31, 0x1D509Cu);
    ctx->pc = 0x1D5098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5094u;
            // 0x1d5098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D509Cu; }
        if (ctx->pc != 0x1D509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D509Cu; }
        if (ctx->pc != 0x1D509Cu) { return; }
    }
    ctx->pc = 0x1D509Cu;
    // 0x1d509c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D509Cu;
    SET_GPR_U32(ctx, 31, 0x1D50A4u);
    ctx->pc = 0x1D50A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D509Cu;
            // 0x1d50a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50A4u; }
        if (ctx->pc != 0x1D50A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50A4u; }
        if (ctx->pc != 0x1D50A4u) { return; }
    }
    ctx->pc = 0x1D50A4u;
    // 0x1d50a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d50a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d50ac: 0x24a56770  addiu       $a1, $a1, 0x6770
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    // 0x1d50b0: 0x24c6e42c  addiu       $a2, $a2, -0x1BD4
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960172));
    // 0x1d50b4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1D50B4u;
    SET_GPR_U32(ctx, 31, 0x1D50BCu);
    ctx->pc = 0x1D50B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50B4u;
            // 0x1d50b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50BCu; }
        if (ctx->pc != 0x1D50BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50BCu; }
        if (ctx->pc != 0x1D50BCu) { return; }
    }
    ctx->pc = 0x1D50BCu;
    // 0x1d50bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d50bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50c4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d50c8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d50c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d50cc: 0xc077090  jal         func_1DC240
    ctx->pc = 0x1D50CCu;
    SET_GPR_U32(ctx, 31, 0x1D50D4u);
    ctx->pc = 0x1D50D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50CCu;
            // 0x1d50d0: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC240u;
    if (runtime->hasFunction(0x1DC240u)) {
        auto targetFn = runtime->lookupFunction(0x1DC240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50D4u; }
        if (ctx->pc != 0x1D50D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC240_0x1dc240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50D4u; }
        if (ctx->pc != 0x1D50D4u) { return; }
    }
    ctx->pc = 0x1D50D4u;
    // 0x1d50d4: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D50D4u;
    SET_GPR_U32(ctx, 31, 0x1D50DCu);
    ctx->pc = 0x1D50D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50D4u;
            // 0x1d50d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50DCu; }
        if (ctx->pc != 0x1D50DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50DCu; }
        if (ctx->pc != 0x1D50DCu) { return; }
    }
    ctx->pc = 0x1D50DCu;
    // 0x1d50dc: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1D50DCu;
    SET_GPR_U32(ctx, 31, 0x1D50E4u);
    ctx->pc = 0x1D50E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50DCu;
            // 0x1d50e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E4u; }
        if (ctx->pc != 0x1D50E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E4u; }
        if (ctx->pc != 0x1D50E4u) { return; }
    }
    ctx->pc = 0x1D50E4u;
    // 0x1d50e4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1d50e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d50e8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1d50e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d50ec: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1d50ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d50f0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1d50f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d50f4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1d50f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d50f8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1d50f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d50fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D50FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50FCu;
            // 0x1d5100: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4438u: goto label_1d4438;
            case 0x1D4470u: goto label_1d4470;
            case 0x1D4480u: goto label_1d4480;
            case 0x1D44C8u: goto label_1d44c8;
            case 0x1D44F8u: goto label_1d44f8;
            case 0x1D4530u: goto label_1d4530;
            case 0x1D4540u: goto label_1d4540;
            case 0x1D4588u: goto label_1d4588;
            case 0x1D45B8u: goto label_1d45b8;
            case 0x1D45F0u: goto label_1d45f0;
            case 0x1D4600u: goto label_1d4600;
            case 0x1D4648u: goto label_1d4648;
            case 0x1D4678u: goto label_1d4678;
            case 0x1D46B0u: goto label_1d46b0;
            case 0x1D46C0u: goto label_1d46c0;
            case 0x1D4708u: goto label_1d4708;
            case 0x1D4738u: goto label_1d4738;
            case 0x1D4770u: goto label_1d4770;
            case 0x1D4780u: goto label_1d4780;
            case 0x1D47C8u: goto label_1d47c8;
            case 0x1D47F8u: goto label_1d47f8;
            case 0x1D4830u: goto label_1d4830;
            case 0x1D4840u: goto label_1d4840;
            case 0x1D4888u: goto label_1d4888;
            case 0x1D48B8u: goto label_1d48b8;
            case 0x1D48F0u: goto label_1d48f0;
            case 0x1D4900u: goto label_1d4900;
            case 0x1D4948u: goto label_1d4948;
            case 0x1D4978u: goto label_1d4978;
            case 0x1D49B0u: goto label_1d49b0;
            case 0x1D49C0u: goto label_1d49c0;
            case 0x1D4A08u: goto label_1d4a08;
            case 0x1D4A38u: goto label_1d4a38;
            case 0x1D4A70u: goto label_1d4a70;
            case 0x1D4A80u: goto label_1d4a80;
            case 0x1D4AC8u: goto label_1d4ac8;
            case 0x1D4AF8u: goto label_1d4af8;
            case 0x1D4B30u: goto label_1d4b30;
            case 0x1D4B40u: goto label_1d4b40;
            case 0x1D4B88u: goto label_1d4b88;
            case 0x1D4BB8u: goto label_1d4bb8;
            case 0x1D4BF0u: goto label_1d4bf0;
            case 0x1D4C00u: goto label_1d4c00;
            case 0x1D4C48u: goto label_1d4c48;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4D78u: goto label_1d4d78;
            case 0x1D4D88u: goto label_1d4d88;
            case 0x1D4DD0u: goto label_1d4dd0;
            case 0x1D4DE8u: goto label_1d4de8;
            case 0x1D4E38u: goto label_1d4e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5104u;
    // 0x1d5104: 0x0  nop
    ctx->pc = 0x1d5104u;
    // NOP
}

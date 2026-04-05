#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D4C0
// Address: 0x22d4c0 - 0x22d608
void sub_0022D4C0_0x22d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D4C0_0x22d4c0");
#endif

    ctx->pc = 0x22d4c0u;

    // 0x22d4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d4c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22d4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d4c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22d4cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22d4d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22d4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d4d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d4dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22d4e0: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22D4E0u;
    {
        const bool branch_taken_0x22d4e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x22D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D4E0u;
            // 0x22d4e4: 0xac471270  sw          $a3, 0x1270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4720), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4e0) {
            ctx->pc = 0x22D518u;
            goto label_22d518;
        }
    }
    ctx->pc = 0x22D4E8u;
    // 0x22d4e8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22d4ec: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22d4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d4f0: 0x8ca31268  lw          $v1, 0x1268($a1)
    ctx->pc = 0x22d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4712)));
    // 0x22d4f4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x22d4f8: 0x2484b6c0  addiu       $a0, $a0, -0x4940
    ctx->pc = 0x22d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948544));
    // 0x22d4fc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x22d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x22d500: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22d504: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22d508: 0xaca31268  sw          $v1, 0x1268($a1)
    ctx->pc = 0x22d508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4712), GPR_U32(ctx, 3));
    // 0x22d50c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x22d50cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22d510: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x22D510u;
    {
        const bool branch_taken_0x22d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D510u;
            // 0x22d514: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d510) {
            ctx->pc = 0x22D5CCu;
            goto label_22d5cc;
        }
    }
    ctx->pc = 0x22D518u;
label_22d518:
    // 0x22d518: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d51c: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x22d51cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
    // 0x22d520: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x22d520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22d524: 0x2644b6c0  addiu       $a0, $s2, -0x4940
    ctx->pc = 0x22d524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948544));
    // 0x22d528: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22d528u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22d52c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d530: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
    // 0x22d534: 0x8e25126c  lw          $a1, 0x126C($s1)
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4716)));
    // 0x22d538: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x22d538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22d53c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d540: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d544: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22d548: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x22d548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d54c: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22d550: 0x50c0001b  beql        $a2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x22D550u;
    {
        const bool branch_taken_0x22d550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d550) {
            ctx->pc = 0x22D554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D550u;
            // 0x22d554: 0x8e22126c  lw          $v0, 0x126C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4716)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D5C0u;
            goto label_22d5c0;
        }
    }
    ctx->pc = 0x22D558u;
    // 0x22d558: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x22D558u;
    SET_GPR_U32(ctx, 31, 0x22D560u);
    ctx->pc = 0x22D55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D558u;
            // 0x22d55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D560u; }
        if (ctx->pc != 0x22D560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D560u; }
        if (ctx->pc != 0x22D560u) { return; }
    }
    ctx->pc = 0x22D560u;
    // 0x22d560: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x22d560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x22d564: 0x8ce21268  lw          $v0, 0x1268($a3)
    ctx->pc = 0x22d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4712)));
    // 0x22d568: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22D568u;
    {
        const bool branch_taken_0x22d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D568u;
            // 0x22d56c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d568) {
            ctx->pc = 0x22D5BCu;
            goto label_22d5bc;
        }
    }
    ctx->pc = 0x22D570u;
    // 0x22d570: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d574: 0x0  nop
    ctx->pc = 0x22d574u;
    // NOP
label_22d578:
    // 0x22d578: 0x2644b6c0  addiu       $a0, $s2, -0x4940
    ctx->pc = 0x22d578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948544));
    // 0x22d57c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x22d57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22d580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d584: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x22d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22d588: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x22d588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d58c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x22d58cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x22d590: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22D590u;
    {
        const bool branch_taken_0x22d590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D590u;
            // 0x22d594: 0x8ce21268  lw          $v0, 0x1268($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d590) {
            ctx->pc = 0x22D5ACu;
            goto label_22d5ac;
        }
    }
    ctx->pc = 0x22D598u;
    // 0x22d598: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d59c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x22d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d5a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x22d5a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22d5a8: 0x8ce21268  lw          $v0, 0x1268($a3)
    ctx->pc = 0x22d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4712)));
label_22d5ac:
    // 0x22d5ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22d5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22d5b0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x22d5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22d5b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22D5B4u;
    {
        const bool branch_taken_0x22d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5B4u;
            // 0x22d5b8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5b4) {
            ctx->pc = 0x22D578u;
            runtime->cooperativeGuestYield();
            goto label_22d578;
        }
    }
    ctx->pc = 0x22D5BCu;
label_22d5bc:
    // 0x22d5bc: 0x8e22126c  lw          $v0, 0x126C($s1)
    ctx->pc = 0x22d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4716)));
label_22d5c0:
    // 0x22d5c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22d5c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d5c8: 0xae22126c  sw          $v0, 0x126C($s1)
    ctx->pc = 0x22d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4716), GPR_U32(ctx, 2));
label_22d5cc:
    // 0x22d5cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d5d0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x22d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x22d5d4: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x22d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
    // 0x22d5d8: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x22d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
    // 0x22d5dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x22d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x22d5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22d5e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22d5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d5e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x22d5ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22d5f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22d5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d5f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22d5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x22D5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D5FCu;
            // 0x22d600: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D518u: goto label_22d518;
            case 0x22D578u: goto label_22d578;
            case 0x22D5ACu: goto label_22d5ac;
            case 0x22D5BCu: goto label_22d5bc;
            case 0x22D5C0u: goto label_22d5c0;
            case 0x22D5CCu: goto label_22d5cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D604u;
    // 0x22d604: 0x0  nop
    ctx->pc = 0x22d604u;
    // NOP
}

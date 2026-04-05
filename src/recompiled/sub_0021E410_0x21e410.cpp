#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E410
// Address: 0x21e410 - 0x21e750
void sub_0021E410_0x21e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E410_0x21e410");
#endif

    ctx->pc = 0x21e410u;

    // 0x21e410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21e418: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21e418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21e41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e420: 0x8e02e580  lw          $v0, -0x1A80($s0)
    ctx->pc = 0x21e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960512)));
    // 0x21e424: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21E424u;
    {
        const bool branch_taken_0x21e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E424u;
            // 0x21e428: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e424) {
            ctx->pc = 0x21E4A4u;
            goto label_21e4a4;
        }
    }
    ctx->pc = 0x21E42Cu;
    // 0x21e42c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21e430: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21e434: 0x8c445a2c  lw          $a0, 0x5A2C($v0)
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23084)));
    // 0x21e438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e43c: 0x8c63cb94  lw          $v1, -0x346C($v1)
    ctx->pc = 0x21e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x21e440: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21e444: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21e444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21e448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E448u;
    {
        const bool branch_taken_0x21e448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E448u;
            // 0x21e44c: 0x8c6301c4  lw          $v1, 0x1C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e448) {
            ctx->pc = 0x21E45Cu;
            goto label_21e45c;
        }
    }
    ctx->pc = 0x21E450u;
    // 0x21e450: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21e454: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21e454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21e458: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x21e458u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21e45c:
    // 0x21e45c: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21E45Cu;
    {
        const bool branch_taken_0x21e45c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E45Cu;
            // 0x21e460: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e45c) {
            ctx->pc = 0x21E51Cu;
            goto label_21e51c;
        }
    }
    ctx->pc = 0x21E464u;
    // 0x21e464: 0xc06ef9e  jal         func_1BBE78
    ctx->pc = 0x21E464u;
    SET_GPR_U32(ctx, 31, 0x21E46Cu);
    ctx->pc = 0x1BBE78u;
    if (runtime->hasFunction(0x1BBE78u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E46Cu; }
        if (ctx->pc != 0x21E46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE78_0x1bbe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E46Cu; }
        if (ctx->pc != 0x21E46Cu) { return; }
    }
    ctx->pc = 0x21E46Cu;
    // 0x21e46c: 0xc06aec0  jal         func_1ABB00
    ctx->pc = 0x21E46Cu;
    SET_GPR_U32(ctx, 31, 0x21E474u);
    ctx->pc = 0x1ABB00u;
    if (runtime->hasFunction(0x1ABB00u)) {
        auto targetFn = runtime->lookupFunction(0x1ABB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E474u; }
        if (ctx->pc != 0x21E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB00_0x1abb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E474u; }
        if (ctx->pc != 0x21E474u) { return; }
    }
    ctx->pc = 0x21E474u;
    // 0x21e474: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x21e478: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21e478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x21e47c: 0xdc468010  ld          $a2, -0x7FF0($v0)
    ctx->pc = 0x21e47cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294934544)));
    // 0x21e480: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21e484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e488: 0xac60e584  sw          $zero, -0x1A7C($v1)
    ctx->pc = 0x21e488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960516), GPR_U32(ctx, 0));
    // 0x21e48c: 0xae02e580  sw          $v0, -0x1A80($s0)
    ctx->pc = 0x21e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960512), GPR_U32(ctx, 2));
    // 0x21e490: 0x24a4e550  addiu       $a0, $a1, -0x1AB0
    ctx->pc = 0x21e490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x21e494: 0xc06efba  jal         func_1BBEE8
    ctx->pc = 0x21E494u;
    SET_GPR_U32(ctx, 31, 0x21E49Cu);
    ctx->pc = 0x21E498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E494u;
            // 0x21e498: 0xfca6e550  sd          $a2, -0x1AB0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 4294960464), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEE8u;
    if (runtime->hasFunction(0x1BBEE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E49Cu; }
        if (ctx->pc != 0x21E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBEE8_0x1bbee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E49Cu; }
        if (ctx->pc != 0x21E49Cu) { return; }
    }
    ctx->pc = 0x21E49Cu;
    // 0x21e49c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21E49Cu;
    {
        const bool branch_taken_0x21e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E49Cu;
            // 0x21e4a0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e49c) {
            ctx->pc = 0x21E51Cu;
            goto label_21e51c;
        }
    }
    ctx->pc = 0x21E4A4u;
label_21e4a4:
    // 0x21e4a4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21e4a8: 0x8e02e584  lw          $v0, -0x1A7C($s0)
    ctx->pc = 0x21e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960516)));
    // 0x21e4ac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21E4ACu;
    {
        const bool branch_taken_0x21e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4ACu;
            // 0x21e4b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4ac) {
            ctx->pc = 0x21E51Cu;
            goto label_21e51c;
        }
    }
    ctx->pc = 0x21E4B4u;
    // 0x21e4b4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21e4b8: 0xc06ec78  jal         func_1BB1E0
    ctx->pc = 0x21E4B8u;
    SET_GPR_U32(ctx, 31, 0x21E4C0u);
    ctx->pc = 0x21E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4B8u;
            // 0x21e4bc: 0x2484e550  addiu       $a0, $a0, -0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1E0u;
    if (runtime->hasFunction(0x1BB1E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4C0u; }
        if (ctx->pc != 0x21E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB1E0_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4C0u; }
        if (ctx->pc != 0x21E4C0u) { return; }
    }
    ctx->pc = 0x21E4C0u;
    // 0x21e4c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21e4c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4c4: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21E4C4u;
    {
        const bool branch_taken_0x21e4c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4C4u;
            // 0x21e4c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4c4) {
            ctx->pc = 0x21E518u;
            goto label_21e518;
        }
    }
    ctx->pc = 0x21E4CCu;
    // 0x21e4cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e4d0: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x21e4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e4dc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x21e4e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21e4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21e4e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E4E4u;
    {
        const bool branch_taken_0x21e4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4E4u;
            // 0x21e4e8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4e4) {
            ctx->pc = 0x21E518u;
            goto label_21e518;
        }
    }
    ctx->pc = 0x21E4ECu;
    // 0x21e4ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21e4f0: 0x8c47cc90  lw          $a3, -0x3370($v0)
    ctx->pc = 0x21e4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954128)));
    // 0x21e4f4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x21e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x21e4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e4fc: 0x8c65cc6c  lw          $a1, -0x3394($v1)
    ctx->pc = 0x21e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954092)));
    // 0x21e500: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x21e500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x21e504: 0xae02e584  sw          $v0, -0x1A7C($s0)
    ctx->pc = 0x21e504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960516), GPR_U32(ctx, 2));
    // 0x21e508: 0x24845890  addiu       $a0, $a0, 0x5890
    ctx->pc = 0x21e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22672));
    // 0x21e50c: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x21e50cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21e510: 0xc062328  jal         func_188CA0
    ctx->pc = 0x21E510u;
    SET_GPR_U32(ctx, 31, 0x21E518u);
    ctx->pc = 0x21E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E510u;
            // 0x21e514: 0x24067eff  addiu       $a2, $zero, 0x7EFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188CA0u;
    if (runtime->hasFunction(0x188CA0u)) {
        auto targetFn = runtime->lookupFunction(0x188CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E518u; }
        if (ctx->pc != 0x21E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188CA0_0x188ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E518u; }
        if (ctx->pc != 0x21E518u) { return; }
    }
    ctx->pc = 0x21E518u;
label_21e518:
    // 0x21e518: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21e51c:
    // 0x21e51c: 0x8c44e5d8  lw          $a0, -0x1A28($v0)
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960600)));
    // 0x21e520: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x21E520u;
    {
        const bool branch_taken_0x21e520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E520u;
            // 0x21e524: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e520) {
            ctx->pc = 0x21E6FCu;
            goto label_21e6fc;
        }
    }
    ctx->pc = 0x21E528u;
    // 0x21e528: 0x8e03e5dc  lw          $v1, -0x1A24($s0)
    ctx->pc = 0x21e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960604)));
    // 0x21e52c: 0x2862001f  slti        $v0, $v1, 0x1F
    ctx->pc = 0x21e52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x21e530: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E530u;
    {
        const bool branch_taken_0x21e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E530u;
            // 0x21e534: 0x2862003d  slti        $v0, $v1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e530) {
            ctx->pc = 0x21E580u;
            goto label_21e580;
        }
    }
    ctx->pc = 0x21E538u;
    // 0x21e538: 0x2462ffe2  addiu       $v0, $v1, -0x1E
    ctx->pc = 0x21e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x21e53c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x21e540: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21e540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21e544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21e548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21e54c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21e550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21e554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e558: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x21e558u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21e55c: 0x460c0029  min.s       $f0, $f0, $f12
    ctx->pc = 0x21e55cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[12]);
    // 0x21e560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21e560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e564: 0x0  nop
    ctx->pc = 0x21e564u;
    // NOP
    // 0x21e568: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21E568u;
    {
        const bool branch_taken_0x21e568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E568u;
            // 0x21e56c: 0x2862003d  slti        $v0, $v1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e568) {
            ctx->pc = 0x21E580u;
            goto label_21e580;
        }
    }
    ctx->pc = 0x21E570u;
    // 0x21e570: 0xc054104  jal         func_150410
    ctx->pc = 0x21E570u;
    SET_GPR_U32(ctx, 31, 0x21E578u);
    ctx->pc = 0x21E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E570u;
            // 0x21e574: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E578u; }
        if (ctx->pc != 0x21E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E578u; }
        if (ctx->pc != 0x21E578u) { return; }
    }
    ctx->pc = 0x21E578u;
    // 0x21e578: 0x8e03e5dc  lw          $v1, -0x1A24($s0)
    ctx->pc = 0x21e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960604)));
    // 0x21e57c: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x21e57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_21e580:
    // 0x21e580: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21E580u;
    {
        const bool branch_taken_0x21e580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E580u;
            // 0x21e584: 0x8e02e5dc  lw          $v0, -0x1A24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e580) {
            ctx->pc = 0x21E6F4u;
            goto label_21e6f4;
        }
    }
    ctx->pc = 0x21E588u;
    // 0x21e588: 0x2462ffc4  addiu       $v0, $v1, -0x3C
    ctx->pc = 0x21e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x21e58c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x21e590: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21e590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21e594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21e598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21e59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e5a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21e5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e5a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x21e5a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21e5a8: 0x46010069  min.s       $f1, $f0, $f1
    ctx->pc = 0x21e5a8u;
    ctx->f[1] = std::min(ctx->f[0], ctx->f[1]);
    // 0x21e5ac: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x21e5acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x21e5b0: 0x2522e848  addiu       $v0, $t1, -0x17B8
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961224));
    // 0x21e5b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x21e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e5b8: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x21e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x21e5bc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21e5c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x21e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e5c4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x21e5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21e5c8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e5cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21e5d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e5d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e5d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21e5dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e5e0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x21e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e5e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E5E4u;
    {
        const bool branch_taken_0x21e5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5E4u;
            // 0x21e5e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5e4) {
            ctx->pc = 0x21E60Cu;
            goto label_21e60c;
        }
    }
    ctx->pc = 0x21E5ECu;
    // 0x21e5ec: 0x0  nop
    ctx->pc = 0x21e5ecu;
    // NOP
label_21e5f0:
    // 0x21e5f0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x21e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21e5f4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x21e5f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21e5f8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21e5fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e600: 0x0  nop
    ctx->pc = 0x21e600u;
    // NOP
    // 0x21e604: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21E604u;
    {
        const bool branch_taken_0x21e604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E604u;
            // 0x21e608: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e604) {
            ctx->pc = 0x21E5F0u;
            runtime->cooperativeGuestYield();
            goto label_21e5f0;
        }
    }
    ctx->pc = 0x21E60Cu;
label_21e60c:
    // 0x21e60c: 0x19000038  blez        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x21E60Cu;
    {
        const bool branch_taken_0x21e60c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x21E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E60Cu;
            // 0x21e610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e60c) {
            ctx->pc = 0x21E6F0u;
            goto label_21e6f0;
        }
    }
    ctx->pc = 0x21E614u;
    // 0x21e614: 0x0  nop
    ctx->pc = 0x21e614u;
    // NOP
label_21e618:
    // 0x21e618: 0x2522e848  addiu       $v0, $t1, -0x17B8
    ctx->pc = 0x21e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961224));
    // 0x21e61c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x21e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e620: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x21e624: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x21e628: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e62c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x21e62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21e630: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21e630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21e634: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x21e638: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e63c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e640: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21e644: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e648: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e64c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E64Cu;
    {
        const bool branch_taken_0x21e64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E64Cu;
            // 0x21e650: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e64c) {
            ctx->pc = 0x21E6C4u;
            goto label_21e6c4;
        }
    }
    ctx->pc = 0x21E654u;
    // 0x21e654: 0x0  nop
    ctx->pc = 0x21e654u;
    // NOP
label_21e658:
    // 0x21e658: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21e65c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e660: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x21e660u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x21e664: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x21e668: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x21e668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21e66c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E66Cu;
    {
        const bool branch_taken_0x21e66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e66c) {
            ctx->pc = 0x21E670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E66Cu;
            // 0x21e670: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E6BCu;
            goto label_21e6bc;
        }
    }
    ctx->pc = 0x21E674u;
    // 0x21e674: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x21e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21e678: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21E678u;
    {
        const bool branch_taken_0x21e678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E678u;
            // 0x21e67c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e678) {
            ctx->pc = 0x21E6A4u;
            goto label_21e6a4;
        }
    }
    ctx->pc = 0x21E680u;
    // 0x21e680: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E680u;
    {
        const bool branch_taken_0x21e680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e680) {
            ctx->pc = 0x21E6A4u;
            goto label_21e6a4;
        }
    }
    ctx->pc = 0x21E688u;
    // 0x21e688: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e68c: 0x0  nop
    ctx->pc = 0x21e68cu;
    // NOP
label_21e690:
    // 0x21e690: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E690u;
    {
        const bool branch_taken_0x21e690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E690u;
            // 0x21e694: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e690) {
            ctx->pc = 0x21E6A4u;
            goto label_21e6a4;
        }
    }
    ctx->pc = 0x21E698u;
    // 0x21e698: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x21e698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21e69c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x21E69Cu;
    {
        const bool branch_taken_0x21e69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e69c) {
            ctx->pc = 0x21E6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E69Cu;
            // 0x21e6a0: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E690u;
            runtime->cooperativeGuestYield();
            goto label_21e690;
        }
    }
    ctx->pc = 0x21E6A4u;
label_21e6a4:
    // 0x21e6a4: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E6A4u;
    {
        const bool branch_taken_0x21e6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x21E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6A4u;
            // 0x21e6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6a4) {
            ctx->pc = 0x21E6B4u;
            goto label_21e6b4;
        }
    }
    ctx->pc = 0x21E6ACu;
    // 0x21e6ac: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E6ACu;
    {
        const bool branch_taken_0x21e6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e6ac) {
            ctx->pc = 0x21E6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6ACu;
            // 0x21e6b0: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E6B4u;
            goto label_21e6b4;
        }
    }
    ctx->pc = 0x21E6B4u;
label_21e6b4:
    // 0x21e6b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E6B4u;
    {
        const bool branch_taken_0x21e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6B4u;
            // 0x21e6b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6b4) {
            ctx->pc = 0x21E6C8u;
            goto label_21e6c8;
        }
    }
    ctx->pc = 0x21E6BCu;
label_21e6bc:
    // 0x21e6bc: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x21E6BCu;
    {
        const bool branch_taken_0x21e6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6BCu;
            // 0x21e6c0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6bc) {
            ctx->pc = 0x21E658u;
            runtime->cooperativeGuestYield();
            goto label_21e658;
        }
    }
    ctx->pc = 0x21E6C4u;
label_21e6c4:
    // 0x21e6c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21e6c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e6c8:
    // 0x21e6c8: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x21e6cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E6CCu;
    {
        const bool branch_taken_0x21e6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e6cc) {
            ctx->pc = 0x21E6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6CCu;
            // 0x21e6d0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E6E0u;
            goto label_21e6e0;
        }
    }
    ctx->pc = 0x21E6D4u;
    // 0x21e6d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e6dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e6dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21e6e0:
    // 0x21e6e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21e6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21e6e4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x21e6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x21e6e8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x21E6E8u;
    {
        const bool branch_taken_0x21e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6E8u;
            // 0x21e6ec: 0xe46000e0  swc1        $f0, 0xE0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6e8) {
            ctx->pc = 0x21E618u;
            runtime->cooperativeGuestYield();
            goto label_21e618;
        }
    }
    ctx->pc = 0x21E6F0u;
label_21e6f0:
    // 0x21e6f0: 0x8e02e5dc  lw          $v0, -0x1A24($s0)
    ctx->pc = 0x21e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960604)));
label_21e6f4:
    // 0x21e6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e6f8: 0xae02e5dc  sw          $v0, -0x1A24($s0)
    ctx->pc = 0x21e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960604), GPR_U32(ctx, 2));
label_21e6fc:
    // 0x21e6fc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21e6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21e700: 0x8e04e5c4  lw          $a0, -0x1A3C($s0)
    ctx->pc = 0x21e700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960580)));
    // 0x21e704: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x21E704u;
    {
        const bool branch_taken_0x21e704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E704u;
            // 0x21e708: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e704) {
            ctx->pc = 0x21E734u;
            goto label_21e734;
        }
    }
    ctx->pc = 0x21E70Cu;
    // 0x21e70c: 0xc040314  jal         func_100C50
    ctx->pc = 0x21E70Cu;
    SET_GPR_U32(ctx, 31, 0x21E714u);
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E714u; }
        if (ctx->pc != 0x21E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E714u; }
        if (ctx->pc != 0x21E714u) { return; }
    }
    ctx->pc = 0x21E714u;
    // 0x21e714: 0x8e04e5c4  lw          $a0, -0x1A3C($s0)
    ctx->pc = 0x21e714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960580)));
    // 0x21e718: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x21E718u;
    SET_GPR_U32(ctx, 31, 0x21E720u);
    ctx->pc = 0x21E71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E718u;
            // 0x21e71c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E720u; }
        if (ctx->pc != 0x21E720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E720u; }
        if (ctx->pc != 0x21E720u) { return; }
    }
    ctx->pc = 0x21E720u;
    // 0x21e720: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21e720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e724: 0x0  nop
    ctx->pc = 0x21e724u;
    // NOP
    // 0x21e728: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x21E728u;
    {
        const bool branch_taken_0x21e728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E728u;
            // 0x21e72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e728) {
            ctx->pc = 0x21E73Cu;
            goto label_21e73c;
        }
    }
    ctx->pc = 0x21E730u;
    // 0x21e730: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21e734:
    // 0x21e734: 0x8c42e584  lw          $v0, -0x1A7C($v0)
    ctx->pc = 0x21e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960516)));
    // 0x21e738: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21e73c:
    // 0x21e73c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21e73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e744: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x21e744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21e748: 0x3e00008  jr          $ra
    ctx->pc = 0x21E748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E748u;
            // 0x21e74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E45Cu: goto label_21e45c;
            case 0x21E4A4u: goto label_21e4a4;
            case 0x21E518u: goto label_21e518;
            case 0x21E51Cu: goto label_21e51c;
            case 0x21E580u: goto label_21e580;
            case 0x21E5F0u: goto label_21e5f0;
            case 0x21E60Cu: goto label_21e60c;
            case 0x21E618u: goto label_21e618;
            case 0x21E658u: goto label_21e658;
            case 0x21E690u: goto label_21e690;
            case 0x21E6A4u: goto label_21e6a4;
            case 0x21E6B4u: goto label_21e6b4;
            case 0x21E6BCu: goto label_21e6bc;
            case 0x21E6C4u: goto label_21e6c4;
            case 0x21E6C8u: goto label_21e6c8;
            case 0x21E6E0u: goto label_21e6e0;
            case 0x21E6F0u: goto label_21e6f0;
            case 0x21E6F4u: goto label_21e6f4;
            case 0x21E6FCu: goto label_21e6fc;
            case 0x21E734u: goto label_21e734;
            case 0x21E73Cu: goto label_21e73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E750u;
}

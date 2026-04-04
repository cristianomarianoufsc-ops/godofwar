#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE570
// Address: 0x1ae570 - 0x1ae6d0
void sub_001AE570_0x1ae570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE570_0x1ae570");
#endif

    ctx->pc = 0x1ae570u;

    // 0x1ae570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ae570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ae574: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ae574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ae578: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ae578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ae57c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae580: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ae580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1ae584: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ae584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1ae588: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ae588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae58c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ae58cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae590: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ae590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ae594: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ae594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ae598: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1ae598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1ae59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae5a0: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1ae5a4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ae5a8: 0x26c4e6b8  addiu       $a0, $s6, -0x1948
    ctx->pc = 0x1ae5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960824));
    // 0x1ae5ac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ae5b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ae5b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae5b8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ae5bc: 0x441003a  bgez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1AE5BCu;
    {
        const bool branch_taken_0x1ae5bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AE5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5BCu;
            // 0x1ae5c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5bc) {
            ctx->pc = 0x1AE6A8u;
            goto label_1ae6a8;
        }
    }
    ctx->pc = 0x1AE5C4u;
    // 0x1ae5c4: 0x24900804  addiu       $s0, $a0, 0x804
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2052));
    // 0x1ae5c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE5C8u;
    {
        const bool branch_taken_0x1ae5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5C8u;
            // 0x1ae5cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5c8) {
            ctx->pc = 0x1AE610u;
            goto label_1ae610;
        }
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ae5d4: 0x2442eebc  addiu       $v0, $v0, -0x1144
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962876));
    // 0x1ae5d8: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1ae5dc: 0x3c03b6db  lui         $v1, 0xB6DB
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46811 << 16));
    // 0x1ae5e0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1ae5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae5e4: 0x34636db7  ori         $v1, $v1, 0x6DB7
    ctx->pc = 0x1ae5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28087);
    // 0x1ae5e8: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x1ae5ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ae5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae5f0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae5f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ae5f8: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x1ae5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ae5fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE5FCu;
    {
        const bool branch_taken_0x1ae5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5FCu;
            // 0x1ae600: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5fc) {
            ctx->pc = 0x1AE610u;
            goto label_1ae610;
        }
    }
    ctx->pc = 0x1AE604u;
    // 0x1ae604: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1ae608: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x1AE608u;
    SET_GPR_U32(ctx, 31, 0x1AE610u);
    ctx->pc = 0x1AE60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE608u;
            // 0x1ae60c: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE610u; }
        if (ctx->pc != 0x1AE610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE610u; }
        if (ctx->pc != 0x1AE610u) { return; }
    }
    ctx->pc = 0x1AE610u;
label_1ae610:
    // 0x1ae610: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ae614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE614u;
    {
        const bool branch_taken_0x1ae614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE614u;
            // 0x1ae618: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae614) {
            ctx->pc = 0x1AE638u;
            goto label_1ae638;
        }
    }
    ctx->pc = 0x1AE61Cu;
    // 0x1ae61c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x1AE61Cu;
    SET_GPR_U32(ctx, 31, 0x1AE624u);
    ctx->pc = 0x1AE620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE61Cu;
            // 0x1ae620: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE624u; }
        if (ctx->pc != 0x1AE624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE624u; }
        if (ctx->pc != 0x1AE624u) { return; }
    }
    ctx->pc = 0x1AE624u;
    // 0x1ae624: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1AE624u;
    {
        const bool branch_taken_0x1ae624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae624) {
            ctx->pc = 0x1AE628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE624u;
            // 0x1ae628: 0x92040018  lbu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE5D0u;
            runtime->cooperativeGuestYield();
            goto label_1ae5d0;
        }
    }
    ctx->pc = 0x1AE62Cu;
    // 0x1ae62c: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x1ae62cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ae630: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE630u;
    {
        const bool branch_taken_0x1ae630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE630u;
            // 0x1ae634: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae630) {
            ctx->pc = 0x1AE678u;
            goto label_1ae678;
        }
    }
    ctx->pc = 0x1AE638u;
label_1ae638:
    // 0x1ae638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ae638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae63c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1AE63Cu;
    SET_GPR_U32(ctx, 31, 0x1AE644u);
    ctx->pc = 0x1AE640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE63Cu;
            // 0x1ae640: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE644u; }
        if (ctx->pc != 0x1AE644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE644u; }
        if (ctx->pc != 0x1AE644u) { return; }
    }
    ctx->pc = 0x1AE644u;
    // 0x1ae644: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1ae644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1ae648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae64c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE64Cu;
    {
        const bool branch_taken_0x1ae64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE64Cu;
            // 0x1ae650: 0xa2130018  sb          $s3, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae64c) {
            ctx->pc = 0x1AE660u;
            goto label_1ae660;
        }
    }
    ctx->pc = 0x1AE654u;
    // 0x1ae654: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1ae658: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ae658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ae65c: 0x0  nop
    ctx->pc = 0x1ae65cu;
    // NOP
label_1ae660:
    // 0x1ae660: 0x26c3e6b8  addiu       $v1, $s6, -0x1948
    ctx->pc = 0x1ae660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960824));
    // 0x1ae664: 0x8c621708  lw          $v0, 0x1708($v1)
    ctx->pc = 0x1ae664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5896)));
    // 0x1ae668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae66c: 0xac621708  sw          $v0, 0x1708($v1)
    ctx->pc = 0x1ae66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5896), GPR_U32(ctx, 2));
    // 0x1ae670: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1ae670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1ae674: 0x0  nop
    ctx->pc = 0x1ae674u;
    // NOP
label_1ae678:
    // 0x1ae678: 0x3c04b6db  lui         $a0, 0xB6DB
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46811 << 16));
    // 0x1ae67c: 0x24a5e6b8  addiu       $a1, $a1, -0x1948
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    // 0x1ae680: 0x34846db7  ori         $a0, $a0, 0x6DB7
    ctx->pc = 0x1ae680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28087);
    // 0x1ae684: 0x24a20804  addiu       $v0, $a1, 0x804
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2052));
    // 0x1ae688: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ae68c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae690: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1ae690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae694: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1ae698: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ae69c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae6a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ae6a4: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x1ae6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_1ae6a8:
    // 0x1ae6a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ae6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae6ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ae6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae6b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ae6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae6b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ae6b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae6b8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ae6b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae6bc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ae6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae6c0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ae6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6C8u;
            // 0x1ae6cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE5D0u: goto label_1ae5d0;
            case 0x1AE610u: goto label_1ae610;
            case 0x1AE638u: goto label_1ae638;
            case 0x1AE660u: goto label_1ae660;
            case 0x1AE678u: goto label_1ae678;
            case 0x1AE6A8u: goto label_1ae6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE6D0u;
}

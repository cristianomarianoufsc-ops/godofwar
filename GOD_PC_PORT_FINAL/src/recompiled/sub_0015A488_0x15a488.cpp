#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A488
// Address: 0x15a488 - 0x15a878
void sub_0015A488_0x15a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A488_0x15a488");
#endif

    ctx->pc = 0x15a488u;

    // 0x15a488: 0x27bdee90  addiu       $sp, $sp, -0x1170
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962832));
    // 0x15a48c: 0x7fb21140  sq          $s2, 0x1140($sp)
    ctx->pc = 0x15a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4416), GPR_VEC(ctx, 18));
    // 0x15a490: 0x7fb51110  sq          $s5, 0x1110($sp)
    ctx->pc = 0x15a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4368), GPR_VEC(ctx, 21));
    // 0x15a494: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15a494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a498: 0x7fb01160  sq          $s0, 0x1160($sp)
    ctx->pc = 0x15a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4448), GPR_VEC(ctx, 16));
    // 0x15a49c: 0x7fb11150  sq          $s1, 0x1150($sp)
    ctx->pc = 0x15a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4432), GPR_VEC(ctx, 17));
    // 0x15a4a0: 0x7fb31130  sq          $s3, 0x1130($sp)
    ctx->pc = 0x15a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4400), GPR_VEC(ctx, 19));
    // 0x15a4a4: 0x7fb41120  sq          $s4, 0x1120($sp)
    ctx->pc = 0x15a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4384), GPR_VEC(ctx, 20));
    // 0x15a4a8: 0x7fb61100  sq          $s6, 0x1100($sp)
    ctx->pc = 0x15a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4352), GPR_VEC(ctx, 22));
    // 0x15a4ac: 0x7fb710f0  sq          $s7, 0x10F0($sp)
    ctx->pc = 0x15a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4336), GPR_VEC(ctx, 23));
    // 0x15a4b0: 0x7fbe10e0  sq          $fp, 0x10E0($sp)
    ctx->pc = 0x15a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4320), GPR_VEC(ctx, 30));
    // 0x15a4b4: 0xffbf10d0  sd          $ra, 0x10D0($sp)
    ctx->pc = 0x15a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4304), GPR_U64(ctx, 31));
    // 0x15a4b8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x15a4bc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A4BCu;
    {
        const bool branch_taken_0x15a4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4BCu;
            // 0x15a4c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4bc) {
            ctx->pc = 0x15A530u;
            goto label_15a530;
        }
    }
    ctx->pc = 0x15A4C4u;
    // 0x15a4c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15a4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4c8: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x15a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x15a4cc: 0x0  nop
    ctx->pc = 0x15a4ccu;
    // NOP
label_15a4d0:
    // 0x15a4d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15a4d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4d4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x15a4d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x15a4d8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15a4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a4dc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x15a4dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15a4e0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x15a4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15a4e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A4E4u;
    {
        const bool branch_taken_0x15a4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4E4u;
            // 0x15a4e8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4e4) {
            ctx->pc = 0x15A528u;
            goto label_15a528;
        }
    }
    ctx->pc = 0x15A4ECu;
    // 0x15a4ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x15a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x15a4f0: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x15a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x15a4f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15a4f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15A4F8u;
    {
        const bool branch_taken_0x15a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4F8u;
            // 0x15a4fc: 0xdc6600c0  ld          $a2, 0xC0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4f8) {
            ctx->pc = 0x15A528u;
            goto label_15a528;
        }
    }
    ctx->pc = 0x15A500u;
    // 0x15a500: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15a504: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x15a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x15a508: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x15a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x15a50c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A50Cu;
    {
        const bool branch_taken_0x15a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A50Cu;
            // 0x15a510: 0x2aa20400  slti        $v0, $s5, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a50c) {
            ctx->pc = 0x15A528u;
            goto label_15a528;
        }
    }
    ctx->pc = 0x15A514u;
    // 0x15a514: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A514u;
    {
        const bool branch_taken_0x15a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a514) {
            ctx->pc = 0x15A530u;
            goto label_15a530;
        }
    }
    ctx->pc = 0x15A51Cu;
    // 0x15a51c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15a520: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x15a524: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_15a528:
    // 0x15a528: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15A528u;
    {
        const bool branch_taken_0x15a528 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A528u;
            // 0x15a52c: 0x2482fff8  addiu       $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a528) {
            ctx->pc = 0x15A4D0u;
            runtime->cooperativeGuestYield();
            goto label_15a4d0;
        }
    }
    ctx->pc = 0x15A530u;
label_15a530:
    // 0x15a530: 0x1aa000c1  blez        $s5, . + 4 + (0xC1 << 2)
    ctx->pc = 0x15A530u;
    {
        const bool branch_taken_0x15a530 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x15A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A530u;
            // 0x15a534: 0xae550054  sw          $s5, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a530) {
            ctx->pc = 0x15A838u;
            goto label_15a838;
        }
    }
    ctx->pc = 0x15A538u;
    // 0x15a538: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x15a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x15a53c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A53Cu;
    {
        const bool branch_taken_0x15a53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a53c) {
            ctx->pc = 0x15A540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A53Cu;
            // 0x15a540: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A550u;
            goto label_15a550;
        }
    }
    ctx->pc = 0x15A544u;
    // 0x15a544: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x15A544u;
    SET_GPR_U32(ctx, 31, 0x15A54Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A54Cu; }
        if (ctx->pc != 0x15A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A54Cu; }
        if (ctx->pc != 0x15A54Cu) { return; }
    }
    ctx->pc = 0x15A54Cu;
    // 0x15a54c: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x15a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_15a550:
    // 0x15a550: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A550u;
    {
        const bool branch_taken_0x15a550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a550) {
            ctx->pc = 0x15A554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A550u;
            // 0x15a554: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A564u;
            goto label_15a564;
        }
    }
    ctx->pc = 0x15A558u;
    // 0x15a558: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x15A558u;
    SET_GPR_U32(ctx, 31, 0x15A560u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A560u; }
        if (ctx->pc != 0x15A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A560u; }
        if (ctx->pc != 0x15A560u) { return; }
    }
    ctx->pc = 0x15A560u;
    // 0x15a560: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_15a564:
    // 0x15a564: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x15a564u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15a568: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x15a568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a56c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15a56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a570: 0xc04f856  jal         func_13E158
    ctx->pc = 0x15A570u;
    SET_GPR_U32(ctx, 31, 0x15A578u);
    ctx->pc = 0x15A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A570u;
            // 0x15a574: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A578u; }
        if (ctx->pc != 0x15A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A578u; }
        if (ctx->pc != 0x15A578u) { return; }
    }
    ctx->pc = 0x15A578u;
    // 0x15a578: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15A578u;
    SET_GPR_U32(ctx, 31, 0x15A580u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A580u; }
        if (ctx->pc != 0x15A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A580u; }
        if (ctx->pc != 0x15A580u) { return; }
    }
    ctx->pc = 0x15A580u;
    // 0x15a580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a584: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x15a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15a588: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15A588u;
    SET_GPR_U32(ctx, 31, 0x15A590u);
    ctx->pc = 0x15A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A588u;
            // 0x15a58c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A590u; }
        if (ctx->pc != 0x15A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A590u; }
        if (ctx->pc != 0x15A590u) { return; }
    }
    ctx->pc = 0x15A590u;
    // 0x15a590: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a594: 0xc056912  jal         func_15A448
    ctx->pc = 0x15A594u;
    SET_GPR_U32(ctx, 31, 0x15A59Cu);
    ctx->pc = 0x15A598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A594u;
            // 0x15a598: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A448u;
    if (runtime->hasFunction(0x15A448u)) {
        auto targetFn = runtime->lookupFunction(0x15A448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A59Cu; }
        if (ctx->pc != 0x15A59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15a448_0x15a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A59Cu; }
        if (ctx->pc != 0x15A59Cu) { return; }
    }
    ctx->pc = 0x15A59Cu;
    // 0x15a59c: 0xafa210c0  sw          $v0, 0x10C0($sp)
    ctx->pc = 0x15a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4288), GPR_U32(ctx, 2));
    // 0x15a5a0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15A5A0u;
    SET_GPR_U32(ctx, 31, 0x15A5A8u);
    ctx->pc = 0x15A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5A0u;
            // 0x15a5a4: 0x518018  mult        $s0, $v0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5A8u; }
        if (ctx->pc != 0x15A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5A8u; }
        if (ctx->pc != 0x15A5A8u) { return; }
    }
    ctx->pc = 0x15A5A8u;
    // 0x15a5a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15a5b0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15A5B0u;
    SET_GPR_U32(ctx, 31, 0x15A5B8u);
    ctx->pc = 0x15A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5B0u;
            // 0x15a5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5B8u; }
        if (ctx->pc != 0x15A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5B8u; }
        if (ctx->pc != 0x15A5B8u) { return; }
    }
    ctx->pc = 0x15A5B8u;
    // 0x15a5b8: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x15a5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x15a5bc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15A5BCu;
    SET_GPR_U32(ctx, 31, 0x15A5C4u);
    ctx->pc = 0x15A5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5BCu;
            // 0x15a5c0: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5C4u; }
        if (ctx->pc != 0x15A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5C4u; }
        if (ctx->pc != 0x15A5C4u) { return; }
    }
    ctx->pc = 0x15A5C4u;
    // 0x15a5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15a5cc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15A5CCu;
    SET_GPR_U32(ctx, 31, 0x15A5D4u);
    ctx->pc = 0x15A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5CCu;
            // 0x15a5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5D4u; }
        if (ctx->pc != 0x15A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5D4u; }
        if (ctx->pc != 0x15A5D4u) { return; }
    }
    ctx->pc = 0x15A5D4u;
    // 0x15a5d4: 0xc04f860  jal         func_13E180
    ctx->pc = 0x15A5D4u;
    SET_GPR_U32(ctx, 31, 0x15A5DCu);
    ctx->pc = 0x15A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5D4u;
            // 0x15a5d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5DCu; }
        if (ctx->pc != 0x15A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A5DCu; }
        if (ctx->pc != 0x15A5DCu) { return; }
    }
    ctx->pc = 0x15A5DCu;
    // 0x15a5dc: 0x1aa0008f  blez        $s5, . + 4 + (0x8F << 2)
    ctx->pc = 0x15A5DCu;
    {
        const bool branch_taken_0x15a5dc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x15A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5DCu;
            // 0x15a5e0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5dc) {
            ctx->pc = 0x15A81Cu;
            goto label_15a81c;
        }
    }
    ctx->pc = 0x15A5E4u;
    // 0x15a5e4: 0x0  nop
    ctx->pc = 0x15a5e4u;
    // NOP
label_15a5e8:
    // 0x15a5e8: 0x3b71021  addu        $v0, $sp, $s7
    ctx->pc = 0x15a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 23)));
    // 0x15a5ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a5f0: 0x8e3e00e0  lw          $fp, 0xE0($s1)
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x15a5f4: 0x13c0006b  beqz        $fp, . + 4 + (0x6B << 2)
    ctx->pc = 0x15A5F4u;
    {
        const bool branch_taken_0x15a5f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5F4u;
            // 0x15a5f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5f4) {
            ctx->pc = 0x15A7A4u;
            goto label_15a7a4;
        }
    }
    ctx->pc = 0x15A5FCu;
    // 0x15a5fc: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_15a600:
    // 0x15a600: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15a604: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x15a604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15a608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a60c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a610: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x15a614: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15a618: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x15a618u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x15a61c: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x15a61cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x15a620: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A620u;
    {
        const bool branch_taken_0x15a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A620u;
            // 0x15a624: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a620) {
            ctx->pc = 0x15A638u;
            goto label_15a638;
        }
    }
    ctx->pc = 0x15A628u;
    // 0x15a628: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x15A628u;
    SET_GPR_U32(ctx, 31, 0x15A630u);
    ctx->pc = 0x15A62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A628u;
            // 0x15a62c: 0x27a41020  addiu       $a0, $sp, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A630u; }
        if (ctx->pc != 0x15A630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A630u; }
        if (ctx->pc != 0x15A630u) { return; }
    }
    ctx->pc = 0x15A630u;
    // 0x15a630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15A630u;
    {
        const bool branch_taken_0x15a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A630u;
            // 0x15a634: 0xdba41020  lqc2        $vf4, 0x1020($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a630) {
            ctx->pc = 0x15A668u;
            goto label_15a668;
        }
    }
    ctx->pc = 0x15A638u;
label_15a638:
    // 0x15a638: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x15a63c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x15a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x15a640: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a644: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x15a644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a648: 0x7fa21020  sq          $v0, 0x1020($sp)
    ctx->pc = 0x15a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 2));
    // 0x15a64c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x15a64cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15a650: 0x7fa21030  sq          $v0, 0x1030($sp)
    ctx->pc = 0x15a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 2));
    // 0x15a654: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15a654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15a658: 0x7fa21040  sq          $v0, 0x1040($sp)
    ctx->pc = 0x15a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 2));
    // 0x15a65c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x15a65cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15a660: 0x7fa21050  sq          $v0, 0x1050($sp)
    ctx->pc = 0x15a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 2));
    // 0x15a664: 0xdba41020  lqc2        $vf4, 0x1020($sp)
    ctx->pc = 0x15a664u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4128)));
label_15a668:
    // 0x15a668: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x15a668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15a66c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x15a66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a670: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15a674: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x15a674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a678: 0xdba51030  lqc2        $vf5, 0x1030($sp)
    ctx->pc = 0x15a678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x15a67c: 0xdba21040  lqc2        $vf2, 0x1040($sp)
    ctx->pc = 0x15a67cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x15a680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a684: 0xdba31050  lqc2        $vf3, 0x1050($sp)
    ctx->pc = 0x15a684u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x15a688: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15a68c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x15a68cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a690: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15a694: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15a694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a698: 0x46010044  c1          0x10044
    ctx->pc = 0x15a698u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x15a69c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x15a69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15a6a0: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15a6a4: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x15a6a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x15a6a8: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x15a6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15a6ac: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x15a6acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x15a6b0: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x15a6b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x15a6b4: 0x706434c8  ppacw       $a2, $v1, $a0
    ctx->pc = 0x15a6b4u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x15a6b8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x15a6bc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x15a6bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x15a6c0: 0x24a5bca0  addiu       $a1, $a1, -0x4360
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950048));
    // 0x15a6c4: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x15a6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15a6c8: 0xfba11060  sqc2        $vf1, 0x1060($sp)
    ctx->pc = 0x15a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a6cc: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x15a6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15a6d0: 0xfba110b0  sqc2        $vf1, 0x10B0($sp)
    ctx->pc = 0x15a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a6d4: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x15a6d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15a6d8: 0x4be118cb  vmaddw.xyzw $vf3, $vf3, $vf1w
    ctx->pc = 0x15a6d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15a6dc: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x15a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15a6e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a6e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a6e8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x15a6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x15a6ec: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x15a6ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x15a6f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15a6f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a6f4: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x15a6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15a6f8: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x15a6f8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x15a6fc: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x15A6FCu;
    {
        const bool branch_taken_0x15a6fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A6FCu;
            // 0x15a700: 0xf8a20000  sqc2        $vf2, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6fc) {
            ctx->pc = 0x15A730u;
            goto label_15a730;
        }
    }
    ctx->pc = 0x15A704u;
    // 0x15a704: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x15a704u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15a708: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x15a708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a70c: 0xafa81008  sw          $t0, 0x1008($sp)
    ctx->pc = 0x15a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4104), GPR_U32(ctx, 8));
    // 0x15a710: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15a710u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a718: 0x70081fc9  prot3w      $v1, $t0
    ctx->pc = 0x15a718u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15a71c: 0xafa3100c  sw          $v1, 0x100C($sp)
    ctx->pc = 0x15a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4108), GPR_U32(ctx, 3));
    // 0x15a720: 0x70081789  pexew       $v0, $t0
    ctx->pc = 0x15a720u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15a724: 0xafa21010  sw          $v0, 0x1010($sp)
    ctx->pc = 0x15a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4112), GPR_U32(ctx, 2));
    // 0x15a728: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15A728u;
    {
        const bool branch_taken_0x15a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A728u;
            // 0x15a72c: 0xe7a01004  swc1        $f0, 0x1004($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a728) {
            ctx->pc = 0x15A794u;
            goto label_15a794;
        }
    }
    ctx->pc = 0x15A730u;
label_15a730:
    // 0x15a730: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15a730u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15a734: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x15a734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15a738: 0xafa31078  sw          $v1, 0x1078($sp)
    ctx->pc = 0x15a738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4216), GPR_U32(ctx, 3));
    // 0x15a73c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x15a73cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15a740: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15a740u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15a744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a748: 0x70031fc9  prot3w      $v1, $v1
    ctx->pc = 0x15a748u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15a74c: 0xafa3107c  sw          $v1, 0x107C($sp)
    ctx->pc = 0x15a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4220), GPR_U32(ctx, 3));
    // 0x15a750: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x15a750u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15a754: 0xafa21080  sw          $v0, 0x1080($sp)
    ctx->pc = 0x15a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4224), GPR_U32(ctx, 2));
    // 0x15a758: 0x27a51070  addiu       $a1, $sp, 0x1070
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4208));
    // 0x15a75c: 0x27a61000  addiu       $a2, $sp, 0x1000
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x15a760: 0xe7a01074  swc1        $f0, 0x1074($sp)
    ctx->pc = 0x15a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4212), bits); }
    // 0x15a764: 0xc05676e  jal         func_159DB8
    ctx->pc = 0x15A764u;
    SET_GPR_U32(ctx, 31, 0x15A76Cu);
    ctx->pc = 0x15A768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A764u;
            // 0x15a768: 0x27a41090  addiu       $a0, $sp, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159DB8u;
    if (runtime->hasFunction(0x159DB8u)) {
        auto targetFn = runtime->lookupFunction(0x159DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A76Cu; }
        if (ctx->pc != 0x15A76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_159db8_0x159f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A76Cu; }
        if (ctx->pc != 0x15A76Cu) { return; }
    }
    ctx->pc = 0x15A76Cu;
    // 0x15a76c: 0x6ba51097  ldl         $a1, 0x1097($sp)
    ctx->pc = 0x15a76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x15a770: 0x6fa51090  ldr         $a1, 0x1090($sp)
    ctx->pc = 0x15a770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x15a774: 0x6ba6109f  ldl         $a2, 0x109F($sp)
    ctx->pc = 0x15a774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15a778: 0x6fa61098  ldr         $a2, 0x1098($sp)
    ctx->pc = 0x15a778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15a77c: 0x8fa710a0  lw          $a3, 0x10A0($sp)
    ctx->pc = 0x15a77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4256)));
    // 0x15a780: 0xb3a51007  sdl         $a1, 0x1007($sp)
    ctx->pc = 0x15a780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a784: 0xb7a51000  sdr         $a1, 0x1000($sp)
    ctx->pc = 0x15a784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a788: 0xb3a6100f  sdl         $a2, 0x100F($sp)
    ctx->pc = 0x15a788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a78c: 0xb7a61008  sdr         $a2, 0x1008($sp)
    ctx->pc = 0x15a78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a790: 0xafa71010  sw          $a3, 0x1010($sp)
    ctx->pc = 0x15a790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4112), GPR_U32(ctx, 7));
label_15a794:
    // 0x15a794: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15a798: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x15a798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x15a79c: 0x5440ff98  bnel        $v0, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x15A79Cu;
    {
        const bool branch_taken_0x15a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a79c) {
            ctx->pc = 0x15A7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A79Cu;
            // 0x15a7a0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A600u;
            runtime->cooperativeGuestYield();
            goto label_15a600;
        }
    }
    ctx->pc = 0x15A7A4u;
label_15a7a4:
    // 0x15a7a4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x15a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15a7a8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x15a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x15a7ac: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x15a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x15a7b0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x15a7b4: 0xa6340122  sh          $s4, 0x122($s1)
    ctx->pc = 0x15a7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 290), (uint16_t)GPR_U32(ctx, 20));
    // 0x15a7b8: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x15a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x15a7bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A7BCu;
    {
        const bool branch_taken_0x15a7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7BCu;
            // 0x15a7c0: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7bc) {
            ctx->pc = 0x15A7D0u;
            goto label_15a7d0;
        }
    }
    ctx->pc = 0x15A7C4u;
    // 0x15a7c4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x15a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15a7c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x15a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x15a7cc: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x15a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_15a7d0:
    // 0x15a7d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a7d4: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x15a7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a7d8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x15a7dc: 0x6ba41007  ldl         $a0, 0x1007($sp)
    ctx->pc = 0x15a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x15a7e0: 0x6fa41000  ldr         $a0, 0x1000($sp)
    ctx->pc = 0x15a7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x15a7e4: 0x6ba5100f  ldl         $a1, 0x100F($sp)
    ctx->pc = 0x15a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x15a7e8: 0x6fa51008  ldr         $a1, 0x1008($sp)
    ctx->pc = 0x15a7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x15a7ec: 0x8fa61010  lw          $a2, 0x1010($sp)
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x15a7f0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x15a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a7f4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x15a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a7f8: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x15a7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a7fc: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x15a7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15a800: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x15a800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x15a804: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x15a804u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x15a808: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15a80c: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x15a80cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a810: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x15a810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x15a814: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x15A814u;
    {
        const bool branch_taken_0x15a814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A814u;
            // 0x15a818: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a814) {
            ctx->pc = 0x15A5E8u;
            runtime->cooperativeGuestYield();
            goto label_15a5e8;
        }
    }
    ctx->pc = 0x15A81Cu;
label_15a81c:
    // 0x15a81c: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x15a820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a824: 0x8fa710c0  lw          $a3, 0x10C0($sp)
    ctx->pc = 0x15a824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4288)));
    // 0x15a828: 0xc0568f2  jal         func_15A3C8
    ctx->pc = 0x15A828u;
    SET_GPR_U32(ctx, 31, 0x15A830u);
    ctx->pc = 0x15A82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A828u;
            // 0x15a82c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A3C8u;
    if (runtime->hasFunction(0x15A3C8u)) {
        auto targetFn = runtime->lookupFunction(0x15A3C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A830u; }
        if (ctx->pc != 0x15A830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A3C8_0x15a3c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A830u; }
        if (ctx->pc != 0x15A830u) { return; }
    }
    ctx->pc = 0x15A830u;
    // 0x15a830: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x15A830u;
    SET_GPR_U32(ctx, 31, 0x15A838u);
    ctx->pc = 0x15A834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A830u;
            // 0x15a834: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A838u; }
        if (ctx->pc != 0x15A838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A838u; }
        if (ctx->pc != 0x15A838u) { return; }
    }
    ctx->pc = 0x15A838u;
label_15a838:
    // 0x15a838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a83c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x15a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x15a840: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x15a840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x15a844: 0x7bb01160  lq          $s0, 0x1160($sp)
    ctx->pc = 0x15a844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4448)));
    // 0x15a848: 0x7bb11150  lq          $s1, 0x1150($sp)
    ctx->pc = 0x15a848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4432)));
    // 0x15a84c: 0x7bb21140  lq          $s2, 0x1140($sp)
    ctx->pc = 0x15a84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4416)));
    // 0x15a850: 0x7bb31130  lq          $s3, 0x1130($sp)
    ctx->pc = 0x15a850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4400)));
    // 0x15a854: 0x7bb41120  lq          $s4, 0x1120($sp)
    ctx->pc = 0x15a854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4384)));
    // 0x15a858: 0x7bb51110  lq          $s5, 0x1110($sp)
    ctx->pc = 0x15a858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4368)));
    // 0x15a85c: 0x7bb61100  lq          $s6, 0x1100($sp)
    ctx->pc = 0x15a85cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4352)));
    // 0x15a860: 0x7bb710f0  lq          $s7, 0x10F0($sp)
    ctx->pc = 0x15a860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4336)));
    // 0x15a864: 0x7bbe10e0  lq          $fp, 0x10E0($sp)
    ctx->pc = 0x15a864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4320)));
    // 0x15a868: 0xdfbf10d0  ld          $ra, 0x10D0($sp)
    ctx->pc = 0x15a868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4304)));
    // 0x15a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A86Cu;
            // 0x15a870: 0x27bd1170  addiu       $sp, $sp, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A4D0u: goto label_15a4d0;
            case 0x15A528u: goto label_15a528;
            case 0x15A530u: goto label_15a530;
            case 0x15A550u: goto label_15a550;
            case 0x15A564u: goto label_15a564;
            case 0x15A5E8u: goto label_15a5e8;
            case 0x15A600u: goto label_15a600;
            case 0x15A638u: goto label_15a638;
            case 0x15A668u: goto label_15a668;
            case 0x15A730u: goto label_15a730;
            case 0x15A794u: goto label_15a794;
            case 0x15A7A4u: goto label_15a7a4;
            case 0x15A7D0u: goto label_15a7d0;
            case 0x15A81Cu: goto label_15a81c;
            case 0x15A838u: goto label_15a838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A874u;
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
}

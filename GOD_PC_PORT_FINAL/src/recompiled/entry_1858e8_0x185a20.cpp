#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1858e8
// Address: 0x1858e8 - 0x185a20
void entry_1858e8_0x185a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1858e8_0x185a20");
#endif

    ctx->pc = 0x1858e8u;

    // 0x1858e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1858ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1858ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1858f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1858f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1858f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1858f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858f8: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1858fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1858fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x185900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x185904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185908: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x185908u;
    SET_GPR_U32(ctx, 31, 0x185910u);
    ctx->pc = 0x18590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185908u;
            // 0x18590c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185910u; }
        if (ctx->pc != 0x185910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185910u; }
        if (ctx->pc != 0x185910u) { return; }
    }
    ctx->pc = 0x185910u;
    // 0x185910: 0x8e25c814  lw          $a1, -0x37EC($s1)
    ctx->pc = 0x185910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952980)));
    // 0x185914: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x185914u;
    {
        const bool branch_taken_0x185914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185914u;
            // 0x185918: 0x3c08002a  lui         $t0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185914) {
            ctx->pc = 0x185950u;
            goto label_185950;
        }
    }
    ctx->pc = 0x18591Cu;
    // 0x18591c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18591Cu;
    {
        const bool branch_taken_0x18591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18591Cu;
            // 0x185920: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18591c) {
            ctx->pc = 0x185940u;
            goto label_185940;
        }
    }
    ctx->pc = 0x185924u;
    // 0x185924: 0xc05ac7c  jal         func_16B1F0
    ctx->pc = 0x185924u;
    SET_GPR_U32(ctx, 31, 0x18592Cu);
    ctx->pc = 0x185928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185924u;
            // 0x185928: 0x8c44c810  lw          $a0, -0x37F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952976)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B1F0u;
    if (runtime->hasFunction(0x16B1F0u)) {
        auto targetFn = runtime->lookupFunction(0x16B1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18592Cu; }
        if (ctx->pc != 0x18592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16b1f0_0x16b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18592Cu; }
        if (ctx->pc != 0x18592Cu) { return; }
    }
    ctx->pc = 0x18592Cu;
    // 0x18592c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x18592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x185930: 0x8e23c814  lw          $v1, -0x37EC($s1)
    ctx->pc = 0x185930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952980)));
    // 0x185934: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x185934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185938: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x185938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x18593c: 0xae20c814  sw          $zero, -0x37EC($s1)
    ctx->pc = 0x18593cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952980), GPR_U32(ctx, 0));
label_185940:
    // 0x185940: 0x8e22c814  lw          $v0, -0x37EC($s1)
    ctx->pc = 0x185940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952980)));
    // 0x185944: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x185944u;
    {
        const bool branch_taken_0x185944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185944) {
            ctx->pc = 0x185948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185944u;
            // 0x185948: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185A08u;
            goto label_185a08;
        }
    }
    ctx->pc = 0x18594Cu;
    // 0x18594c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x18594cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_185950:
    // 0x185950: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x185950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x185954: 0x8d03c810  lw          $v1, -0x37F0($t0)
    ctx->pc = 0x185954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294952976)));
    // 0x185958: 0x28a64000  slti        $a2, $a1, 0x4000
    ctx->pc = 0x185958u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x18595c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x185960: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x185960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x185964: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x185968: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x185968u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18596c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18596cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185970: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x185970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x185974: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x185974u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x185978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x185978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18597c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x18597cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x185980: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x185980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185984: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185984u;
            // 0x185988: 0xa2380a  movz        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185984) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x18598Cu;
    // 0x18598c: 0x28624000  slti        $v0, $v1, 0x4000
    ctx->pc = 0x18598cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x185990: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185990u;
            // 0x185994: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185990) {
            ctx->pc = 0x185A08u;
            goto label_185a08;
        }
    }
    ctx->pc = 0x185998u;
    // 0x185998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185998u;
    {
        const bool branch_taken_0x185998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185998u;
            // 0x18599c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185998) {
            ctx->pc = 0x1859BCu;
            goto label_1859bc;
        }
    }
    ctx->pc = 0x1859A0u;
label_1859a0:
    // 0x1859a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1859a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1859a4: 0x24e23fff  addiu       $v0, $a3, 0x3FFF
    ctx->pc = 0x1859a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16383));
    // 0x1859a8: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x1859a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1859ac: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x1859acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1859b0: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1859b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1859b4: 0x23b80  sll         $a3, $v0, 14
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x1859b8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1859bc:
    // 0x1859bc: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x1859bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1859c0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1859c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1859c4: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1859C4u;
    {
        const bool branch_taken_0x1859c4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1859C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859C4u;
            // 0x1859c8: 0x8d03c810  lw          $v1, -0x37F0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294952976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c4) {
            ctx->pc = 0x185A04u;
            goto label_185a04;
        }
    }
    ctx->pc = 0x1859CCu;
    // 0x1859cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1859d0: 0xac47c814  sw          $a3, -0x37EC($v0)
    ctx->pc = 0x1859d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952980), GPR_U32(ctx, 7));
    // 0x1859d4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1859d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859d8: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1859dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1859e4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1859e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1859e8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x1859e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1859ec: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1859f0: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1859f4: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x1859f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1859f8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1859fc: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x1859FCu;
    SET_GPR_U32(ctx, 31, 0x185A04u);
    ctx->pc = 0x185A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1859FCu;
            // 0x185a00: 0x43380b  movn        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A04u; }
        if (ctx->pc != 0x185A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A04u; }
        if (ctx->pc != 0x185A04u) { return; }
    }
    ctx->pc = 0x185A04u;
label_185a04:
    // 0x185a04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x185a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185a08:
    // 0x185a08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185a0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x185a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185a14: 0x3e00008  jr          $ra
    ctx->pc = 0x185A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A14u;
            // 0x185a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185940u: goto label_185940;
            case 0x185950u: goto label_185950;
            case 0x1859A0u: goto label_1859a0;
            case 0x1859BCu: goto label_1859bc;
            case 0x185A04u: goto label_185a04;
            case 0x185A08u: goto label_185a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185A1Cu;
    // 0x185a1c: 0x0  nop
    ctx->pc = 0x185a1cu;
    // NOP
}

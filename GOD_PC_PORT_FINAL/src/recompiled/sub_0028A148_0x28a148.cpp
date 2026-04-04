#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A148
// Address: 0x28a148 - 0x28a2b0
void sub_0028A148_0x28a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A148_0x28a148");
#endif

    ctx->pc = 0x28a148u;

    // 0x28a148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a14c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a158: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a15c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A15Cu;
    {
        const bool branch_taken_0x28a15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a15c) {
            ctx->pc = 0x28A160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A15Cu;
            // 0x28a160: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A178u;
            goto label_28a178;
        }
    }
    ctx->pc = 0x28A164u;
    // 0x28a164: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28a168: 0x8c434294  lw          $v1, 0x4294($v0)
    ctx->pc = 0x28a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28a16c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x28a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x28a170: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a174: 0x0  nop
    ctx->pc = 0x28a174u;
    // NOP
label_28a178:
    // 0x28a178: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x28a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x28a17c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A17Cu;
    {
        const bool branch_taken_0x28a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a17c) {
            ctx->pc = 0x28A180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A17Cu;
            // 0x28a180: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A190u;
            goto label_28a190;
        }
    }
    ctx->pc = 0x28A184u;
    // 0x28a184: 0xc0a48fe  jal         func_2923F8
    ctx->pc = 0x28A184u;
    SET_GPR_U32(ctx, 31, 0x28A18Cu);
    ctx->pc = 0x2923F8u;
    if (runtime->hasFunction(0x2923F8u)) {
        auto targetFn = runtime->lookupFunction(0x2923F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A18Cu; }
        if (ctx->pc != 0x28A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2923f8_0x292488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A18Cu; }
        if (ctx->pc != 0x28A18Cu) { return; }
    }
    ctx->pc = 0x28A18Cu;
    // 0x28a18c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x28a18cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_28a190:
    // 0x28a190: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x28a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x28a194: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A194u;
    {
        const bool branch_taken_0x28a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A194u;
            // 0x28a198: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a194) {
            ctx->pc = 0x28A1B4u;
            goto label_28a1b4;
        }
    }
    ctx->pc = 0x28A19Cu;
    // 0x28a19c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x28a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28a1a0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x28A1A0u;
    {
        const bool branch_taken_0x28a1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a1a0) {
            ctx->pc = 0x28A1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1A0u;
            // 0x28a1a4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A1F8u;
            goto label_28a1f8;
        }
    }
    ctx->pc = 0x28A1A8u;
    // 0x28a1a8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x28a1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x28a1ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A1ACu;
    {
        const bool branch_taken_0x28a1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1ACu;
            // 0x28a1b0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1ac) {
            ctx->pc = 0x28A1BCu;
            goto label_28a1bc;
        }
    }
    ctx->pc = 0x28A1B4u;
label_28a1b4:
    // 0x28a1b4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x28A1B4u;
    {
        const bool branch_taken_0x28a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1B4u;
            // 0x28a1b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1b4) {
            ctx->pc = 0x28A2A0u;
            goto label_28a2a0;
        }
    }
    ctx->pc = 0x28A1BCu;
label_28a1bc:
    // 0x28a1bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28A1BCu;
    {
        const bool branch_taken_0x28a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1bc) {
            ctx->pc = 0x28A1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1BCu;
            // 0x28a1c0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A1ECu;
            goto label_28a1ec;
        }
    }
    ctx->pc = 0x28A1C4u;
    // 0x28a1c4: 0xc0a48a0  jal         func_292280
    ctx->pc = 0x28A1C4u;
    SET_GPR_U32(ctx, 31, 0x28A1CCu);
    ctx->pc = 0x28A1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1C4u;
            // 0x28a1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292280u;
    if (runtime->hasFunction(0x292280u)) {
        auto targetFn = runtime->lookupFunction(0x292280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A1CCu; }
        if (ctx->pc != 0x28A1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292280_0x292280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A1CCu; }
        if (ctx->pc != 0x28A1CCu) { return; }
    }
    ctx->pc = 0x28A1CCu;
    // 0x28a1cc: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28A1CCu;
    {
        const bool branch_taken_0x28a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1CCu;
            // 0x28a1d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1cc) {
            ctx->pc = 0x28A2A0u;
            goto label_28a2a0;
        }
    }
    ctx->pc = 0x28A1D4u;
    // 0x28a1d4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a1d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a1d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x28a1dc: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x28a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x28a1e0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x28a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x28a1e4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x28a1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a1e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a1e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_28a1ec:
    // 0x28a1ec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x28a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x28a1f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28A1F0u;
    {
        const bool branch_taken_0x28a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1F0u;
            // 0x28a1f4: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1f0) {
            ctx->pc = 0x28A21Cu;
            goto label_28a21c;
        }
    }
    ctx->pc = 0x28A1F8u;
label_28a1f8:
    // 0x28a1f8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A1F8u;
    {
        const bool branch_taken_0x28a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1f8) {
            ctx->pc = 0x28A1FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1F8u;
            // 0x28a1fc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A220u;
            goto label_28a220;
        }
    }
    ctx->pc = 0x28A200u;
    // 0x28a200: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x28a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28a204: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A204u;
    {
        const bool branch_taken_0x28a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A204u;
            // 0x28a208: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a204) {
            ctx->pc = 0x28A21Cu;
            goto label_28a21c;
        }
    }
    ctx->pc = 0x28A20Cu;
    // 0x28a20c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x28a210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a214: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28A214u;
    {
        const bool branch_taken_0x28a214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A214u;
            // 0x28a218: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a214) {
            ctx->pc = 0x28A2A0u;
            goto label_28a2a0;
        }
    }
    ctx->pc = 0x28A21Cu;
label_28a21c:
    // 0x28a21c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28a220:
    // 0x28a220: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A220u;
    {
        const bool branch_taken_0x28a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a220) {
            ctx->pc = 0x28A224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A220u;
            // 0x28a224: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A234u;
            goto label_28a234;
        }
    }
    ctx->pc = 0x28A228u;
    // 0x28a228: 0xc0a27fe  jal         func_289FF8
    ctx->pc = 0x28A228u;
    SET_GPR_U32(ctx, 31, 0x28A230u);
    ctx->pc = 0x28A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A228u;
            // 0x28a22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289FF8u;
    if (runtime->hasFunction(0x289FF8u)) {
        auto targetFn = runtime->lookupFunction(0x289FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A230u; }
        if (ctx->pc != 0x28A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289FF8_0x289ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A230u; }
        if (ctx->pc != 0x28A230u) { return; }
    }
    ctx->pc = 0x28A230u;
    // 0x28a230: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_28a234:
    // 0x28a234: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x28a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x28a238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A238u;
    {
        const bool branch_taken_0x28a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A238u;
            // 0x28a23c: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a238) {
            ctx->pc = 0x28A24Cu;
            goto label_28a24c;
        }
    }
    ctx->pc = 0x28A240u;
    // 0x28a240: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x28a244: 0xc0a27d8  jal         func_289F60
    ctx->pc = 0x28A244u;
    SET_GPR_U32(ctx, 31, 0x28A24Cu);
    ctx->pc = 0x28A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A244u;
            // 0x28a248: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289F60u;
    if (runtime->hasFunction(0x289F60u)) {
        auto targetFn = runtime->lookupFunction(0x289F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A24Cu; }
        if (ctx->pc != 0x28A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289f60_0x289ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A24Cu; }
        if (ctx->pc != 0x28A24Cu) { return; }
    }
    ctx->pc = 0x28A24Cu;
label_28a24c:
    // 0x28a24c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28a250: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28a254: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28a254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28a258: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a25c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x28a25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28a260: 0x40f809  jalr        $v0
    ctx->pc = 0x28A260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28A268u);
        ctx->pc = 0x28A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A260u;
            // 0x28a264: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28A268u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A178u: goto label_28a178;
            case 0x28A190u: goto label_28a190;
            case 0x28A1B4u: goto label_28a1b4;
            case 0x28A1BCu: goto label_28a1bc;
            case 0x28A1ECu: goto label_28a1ec;
            case 0x28A1F8u: goto label_28a1f8;
            case 0x28A21Cu: goto label_28a21c;
            case 0x28A220u: goto label_28a220;
            case 0x28A234u: goto label_28a234;
            case 0x28A24Cu: goto label_28a24c;
            case 0x28A290u: goto label_28a290;
            case 0x28A294u: goto label_28a294;
            case 0x28A29Cu: goto label_28a29c;
            case 0x28A2A0u: goto label_28a2a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28A268u; }
            if (ctx->pc != 0x28A268u) { return; }
        }
        }
    }
    ctx->pc = 0x28A268u;
    // 0x28a268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28a268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a26c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x28a26cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28a270: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28a270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28a274: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x28a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x28a278: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A278u;
    {
        const bool branch_taken_0x28a278 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x28A27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A278u;
            // 0x28a27c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a278) {
            ctx->pc = 0x28A29Cu;
            goto label_28a29c;
        }
    }
    ctx->pc = 0x28A280u;
    // 0x28a280: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A280u;
    {
        const bool branch_taken_0x28a280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a280) {
            ctx->pc = 0x28A284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A280u;
            // 0x28a284: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A290u;
            goto label_28a290;
        }
    }
    ctx->pc = 0x28A288u;
    // 0x28a288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A288u;
    {
        const bool branch_taken_0x28a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A288u;
            // 0x28a28c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a288) {
            ctx->pc = 0x28A294u;
            goto label_28a294;
        }
    }
    ctx->pc = 0x28A290u;
label_28a290:
    // 0x28a290: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x28a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_28a294:
    // 0x28a294: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x28A294u;
    {
        const bool branch_taken_0x28a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A294u;
            // 0x28a298: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a294) {
            ctx->pc = 0x28A1B4u;
            runtime->cooperativeGuestYield();
            goto label_28a1b4;
        }
    }
    ctx->pc = 0x28A29Cu;
label_28a29c:
    // 0x28a29c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28a29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a2a0:
    // 0x28a2a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28A2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A2A8u;
            // 0x28a2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A178u: goto label_28a178;
            case 0x28A190u: goto label_28a190;
            case 0x28A1B4u: goto label_28a1b4;
            case 0x28A1BCu: goto label_28a1bc;
            case 0x28A1ECu: goto label_28a1ec;
            case 0x28A1F8u: goto label_28a1f8;
            case 0x28A21Cu: goto label_28a21c;
            case 0x28A220u: goto label_28a220;
            case 0x28A234u: goto label_28a234;
            case 0x28A24Cu: goto label_28a24c;
            case 0x28A290u: goto label_28a290;
            case 0x28A294u: goto label_28a294;
            case 0x28A29Cu: goto label_28a29c;
            case 0x28A2A0u: goto label_28a2a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A2B0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A170
// Address: 0x18a170 - 0x18a5e0
void sub_0018A170_0x18a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A170_0x18a170");
#endif

    ctx->pc = 0x18a170u;

    // 0x18a170: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18a174: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x18a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x18a178: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x18a17c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18a180: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18a184: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18a188: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18a18c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18a190: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18a194: 0x8ea54f20  lw          $a1, 0x4F20($s5)
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a198: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x18a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x18a19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a1a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A1A0u;
    {
        const bool branch_taken_0x18a1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1A0u;
            // 0x18a1a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1a0) {
            ctx->pc = 0x18A1B0u;
            goto label_18a1b0;
        }
    }
    ctx->pc = 0x18A1A8u;
    // 0x18a1a8: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x18a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x18a1ac: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x18a1acu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18a1b0:
    // 0x18a1b0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x18a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x18a1b4: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x18a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x18a1b8: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x18a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x18a1bc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18a1c0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18a1c4: 0xc09e4f4  jal         func_2793D0
    ctx->pc = 0x18A1C4u;
    SET_GPR_U32(ctx, 31, 0x18A1CCu);
    ctx->pc = 0x18A1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1C4u;
            // 0x18a1c8: 0x629018  mult        $s2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2793D0u;
    if (runtime->hasFunction(0x2793D0u)) {
        auto targetFn = runtime->lookupFunction(0x2793D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1CCu; }
        if (ctx->pc != 0x18A1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002793D0_0x2793d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1CCu; }
        if (ctx->pc != 0x18A1CCu) { return; }
    }
    ctx->pc = 0x18A1CCu;
    // 0x18a1cc: 0x8ea34f20  lw          $v1, 0x4F20($s5)
    ctx->pc = 0x18a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a1d0: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x18a1d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18a1d8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18A1D8u;
    {
        const bool branch_taken_0x18a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1D8u;
            // 0x18a1dc: 0x8ea44f20  lw          $a0, 0x4F20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1d8) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A1E0u;
    // 0x18a1e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x18a1e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18A1E4u;
    {
        const bool branch_taken_0x18a1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1E4u;
            // 0x18a1e8: 0x8ea24f20  lw          $v0, 0x4F20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1e4) {
            ctx->pc = 0x18A22Cu;
            goto label_18a22c;
        }
    }
    ctx->pc = 0x18A1ECu;
    // 0x18a1ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a1f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18a1f4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x18a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x18a1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a200: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18a204: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A204u;
    SET_GPR_U32(ctx, 31, 0x18A20Cu);
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A20Cu; }
        if (ctx->pc != 0x18A20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A20Cu; }
        if (ctx->pc != 0x18A20Cu) { return; }
    }
    ctx->pc = 0x18A20Cu;
    // 0x18a20c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a214: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18a218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a21c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18a220: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A220u;
    SET_GPR_U32(ctx, 31, 0x18A228u);
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A228u; }
        if (ctx->pc != 0x18A228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A228u; }
        if (ctx->pc != 0x18A228u) { return; }
    }
    ctx->pc = 0x18A228u;
    // 0x18a228: 0x8ea24f20  lw          $v0, 0x4F20($s5)
    ctx->pc = 0x18a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
label_18a22c:
    // 0x18a22c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18a230: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x18a234: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18a234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a238: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A238u;
    {
        const bool branch_taken_0x18a238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A238u;
            // 0x18a23c: 0x8ea44f20  lw          $a0, 0x4F20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a238) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A240u;
    // 0x18a240: 0xc0a648c  jal         func_299230
    ctx->pc = 0x18A240u;
    SET_GPR_U32(ctx, 31, 0x18A248u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A248u; }
        if (ctx->pc != 0x18A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A248u; }
        if (ctx->pc != 0x18A248u) { return; }
    }
    ctx->pc = 0x18A248u;
    // 0x18a248: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x18a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x18a24c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18a250: 0x3484f590  ori         $a0, $a0, 0xF590
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62864);
    // 0x18a254: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18a258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18a258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18a25c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x18a25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x18a260: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a264: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18a264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18a268: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x18a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x18a26c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18a270: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18a270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18a274: 0xf  sync
    ctx->pc = 0x18a274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x18a278: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x18A278u;
    SET_GPR_U32(ctx, 31, 0x18A280u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A280u; }
        if (ctx->pc != 0x18A280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A280u; }
        if (ctx->pc != 0x18A280u) { return; }
    }
    ctx->pc = 0x18A280u;
    // 0x18a280: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x18A280u;
    {
        const bool branch_taken_0x18a280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A280u;
            // 0x18a284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a280) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A288u;
label_18a288:
    // 0x18a288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a28c: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x18a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x18a290: 0x14430055  bne         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x18A290u;
    {
        const bool branch_taken_0x18a290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A290u;
            // 0x18a294: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a290) {
            ctx->pc = 0x18A3E8u;
            goto label_18a3e8;
        }
    }
    ctx->pc = 0x18A298u;
    // 0x18a298: 0xc09bfdc  jal         func_26FF70
    ctx->pc = 0x18A298u;
    SET_GPR_U32(ctx, 31, 0x18A2A0u);
    ctx->pc = 0x26FF70u;
    if (runtime->hasFunction(0x26FF70u)) {
        auto targetFn = runtime->lookupFunction(0x26FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2A0u; }
        if (ctx->pc != 0x18A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ff70_0x26ff88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2A0u; }
        if (ctx->pc != 0x18A2A0u) { return; }
    }
    ctx->pc = 0x18A2A0u;
    // 0x18a2a0: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x18A2A0u;
    {
        const bool branch_taken_0x18a2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2A0u;
            // 0x18a2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2a0) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A2A8u;
    // 0x18a2a8: 0x8ea44f20  lw          $a0, 0x4F20($s5)
    ctx->pc = 0x18a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a2ac: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x18a2b0: 0x2442fefe  addiu       $v0, $v0, -0x102
    ctx->pc = 0x18a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967038));
    // 0x18a2b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18a2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18a2b8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x18A2B8u;
    {
        const bool branch_taken_0x18a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2B8u;
            // 0x18a2bc: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2b8) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A2C0u;
    // 0x18a2c0: 0x2482009c  addiu       $v0, $a0, 0x9C
    ctx->pc = 0x18a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    // 0x18a2c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18a2c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18a2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2cc: 0xc09bfaa  jal         func_26FEA8
    ctx->pc = 0x18A2CCu;
    SET_GPR_U32(ctx, 31, 0x18A2D4u);
    ctx->pc = 0x18A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2CCu;
            // 0x18a2d0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FEA8u;
    if (runtime->hasFunction(0x26FEA8u)) {
        auto targetFn = runtime->lookupFunction(0x26FEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2D4u; }
        if (ctx->pc != 0x18A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FEA8_0x26fea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2D4u; }
        if (ctx->pc != 0x18A2D4u) { return; }
    }
    ctx->pc = 0x18A2D4u;
    // 0x18a2d4: 0x44000b7  bltz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x18A2D4u;
    {
        const bool branch_taken_0x18a2d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2D4u;
            // 0x18a2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d4) {
            ctx->pc = 0x18A5B4u;
            goto label_18a5b4;
        }
    }
    ctx->pc = 0x18A2DCu;
    // 0x18a2dc: 0xc09e4ba  jal         func_2792E8
    ctx->pc = 0x18A2DCu;
    SET_GPR_U32(ctx, 31, 0x18A2E4u);
    ctx->pc = 0x18A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2DCu;
            // 0x18a2e0: 0x3c101000  lui         $s0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2792E8u;
    if (runtime->hasFunction(0x2792E8u)) {
        auto targetFn = runtime->lookupFunction(0x2792E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2E4u; }
        if (ctx->pc != 0x18A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002792E8_0x2792e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2E4u; }
        if (ctx->pc != 0x18A2E4u) { return; }
    }
    ctx->pc = 0x18A2E4u;
    // 0x18a2e4: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x18a2e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x18a2e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x18a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18a2ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a2f0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x18a2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18a2f4: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x18a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x18a2f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x18a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x18a2fc: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x18a300: 0x34a5b410  ori         $a1, $a1, 0xB410
    ctx->pc = 0x18a300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46096);
    // 0x18a304: 0x3529b400  ori         $t1, $t1, 0xB400
    ctx->pc = 0x18a304u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)46080);
    // 0x18a308: 0x240c0101  addiu       $t4, $zero, 0x101
    ctx->pc = 0x18a308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x18a30c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x18a30cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x18a310: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18a314: 0x3508b020  ori         $t0, $t0, 0xB020
    ctx->pc = 0x18a314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)45088);
    // 0x18a318: 0x125940  sll         $t3, $s2, 5
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18a31c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x18a320: 0x8ea34f20  lw          $v1, 0x4F20($s5)
    ctx->pc = 0x18a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a324: 0x34e7b010  ori         $a3, $a3, 0xB010
    ctx->pc = 0x18a324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45072);
    // 0x18a328: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x18a328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x18a32c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x18a32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18a330: 0x2462009c  addiu       $v0, $v1, 0x9C
    ctx->pc = 0x18a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x18a334: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x18a334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x18a338: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18a338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18a33c: 0x24630094  addiu       $v1, $v1, 0x94
    ctx->pc = 0x18a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x18a340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a344: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18a348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a34c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a350: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x18a350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18a354: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x18a354u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x18a358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a35c: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x18a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x18a360: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18a360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x18a364: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x18a364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x18a368: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18a368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18a36c: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A36Cu;
    SET_GPR_U32(ctx, 31, 0x18A374u);
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A374u; }
        if (ctx->pc != 0x18A374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A374u; }
        if (ctx->pc != 0x18A374u) { return; }
    }
    ctx->pc = 0x18A374u;
    // 0x18a374: 0x3c027c00  lui         $v0, 0x7C00
    ctx->pc = 0x18a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31744 << 16));
    // 0x18a378: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x18a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x18a37c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18a380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A380u;
    {
        const bool branch_taken_0x18a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A380u;
            // 0x18a384: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a380) {
            ctx->pc = 0x18A394u;
            goto label_18a394;
        }
    }
    ctx->pc = 0x18A388u;
label_18a388:
    // 0x18a388: 0xc09b4cc  jal         func_26D330
    ctx->pc = 0x18A388u;
    SET_GPR_U32(ctx, 31, 0x18A390u);
    ctx->pc = 0x26D330u;
    if (runtime->hasFunction(0x26D330u)) {
        auto targetFn = runtime->lookupFunction(0x26D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A390u; }
        if (ctx->pc != 0x18A390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D330_0x26d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A390u; }
        if (ctx->pc != 0x18A390u) { return; }
    }
    ctx->pc = 0x18A390u;
    // 0x18a390: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a394:
    // 0x18a394: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A394u;
    SET_GPR_U32(ctx, 31, 0x18A39Cu);
    ctx->pc = 0x18A398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A394u;
            // 0x18a398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A39Cu; }
        if (ctx->pc != 0x18A39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A39Cu; }
        if (ctx->pc != 0x18A39Cu) { return; }
    }
    ctx->pc = 0x18A39Cu;
    // 0x18a39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A39Cu;
    {
        const bool branch_taken_0x18a39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a39c) {
            ctx->pc = 0x18A388u;
            runtime->cooperativeGuestYield();
            goto label_18a388;
        }
    }
    ctx->pc = 0x18A3A4u;
    // 0x18a3a4: 0xc09e4f4  jal         func_2793D0
    ctx->pc = 0x18A3A4u;
    SET_GPR_U32(ctx, 31, 0x18A3ACu);
    ctx->pc = 0x18A3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3A4u;
            // 0x18a3a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2793D0u;
    if (runtime->hasFunction(0x2793D0u)) {
        auto targetFn = runtime->lookupFunction(0x2793D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3ACu; }
        if (ctx->pc != 0x18A3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002793D0_0x2793d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3ACu; }
        if (ctx->pc != 0x18A3ACu) { return; }
    }
    ctx->pc = 0x18A3ACu;
    // 0x18a3ac: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3ACu;
            // 0x18a3b0: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A548u;
            goto label_18a548;
        }
    }
    ctx->pc = 0x18A3B4u;
label_18a3b4:
    // 0x18a3b4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x18a3b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18a3bc: 0x8c86005c  lw          $a2, 0x5C($a0)
    ctx->pc = 0x18a3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x18a3c0: 0x24820094  addiu       $v0, $a0, 0x94
    ctx->pc = 0x18a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x18a3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a3c8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x18a3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18a3cc: 0x3012  mflo        $a2
    ctx->pc = 0x18a3ccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x18a3d0: 0xc09bf98  jal         func_26FE60
    ctx->pc = 0x18A3D0u;
    SET_GPR_U32(ctx, 31, 0x18A3D8u);
    ctx->pc = 0x18A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3D0u;
            // 0x18a3d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FE60u;
    if (runtime->hasFunction(0x26FE60u)) {
        auto targetFn = runtime->lookupFunction(0x26FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3D8u; }
        if (ctx->pc != 0x18A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26fe60_0x26fea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3D8u; }
        if (ctx->pc != 0x18A3D8u) { return; }
    }
    ctx->pc = 0x18A3D8u;
    // 0x18a3d8: 0x441005b  bgez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x18A3D8u;
    {
        const bool branch_taken_0x18a3d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3D8u;
            // 0x18a3dc: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3d8) {
            ctx->pc = 0x18A548u;
            goto label_18a548;
        }
    }
    ctx->pc = 0x18A3E0u;
    // 0x18a3e0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x18A3E0u;
    {
        const bool branch_taken_0x18a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3E0u;
            // 0x18a3e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3e0) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A3E8u;
label_18a3e8:
    // 0x18a3e8: 0x8c85014c  lw          $a1, 0x14C($a0)
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x18a3ec: 0x24830094  addiu       $v1, $a0, 0x94
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x18a3f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18a3f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a3f8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x18a3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18a3fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A3FCu;
    {
        const bool branch_taken_0x18a3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3FCu;
            // 0x18a400: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3fc) {
            ctx->pc = 0x18A420u;
            goto label_18a420;
        }
    }
    ctx->pc = 0x18A404u;
    // 0x18a404: 0x28a20102  slti        $v0, $a1, 0x102
    ctx->pc = 0x18a404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x18a408: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A408u;
    {
        const bool branch_taken_0x18a408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a408) {
            ctx->pc = 0x18A40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A408u;
            // 0x18a40c: 0x24140020  addiu       $s4, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A420u;
            goto label_18a420;
        }
    }
    ctx->pc = 0x18A410u;
    // 0x18a410: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x18a414: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x18a414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a418: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x18a418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18a41c: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x18a41cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_18a420:
    // 0x18a420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a424: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18a424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18a428: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18a42c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a430: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18a434: 0xc062978  jal         func_18A5E0
    ctx->pc = 0x18A434u;
    SET_GPR_U32(ctx, 31, 0x18A43Cu);
    ctx->pc = 0x18A5E0u;
    if (runtime->hasFunction(0x18A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A43Cu; }
        if (ctx->pc != 0x18A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A5E0_0x18a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A43Cu; }
        if (ctx->pc != 0x18A43Cu) { return; }
    }
    ctx->pc = 0x18A43Cu;
    // 0x18a43c: 0x8ea24f20  lw          $v0, 0x4F20($s5)
    ctx->pc = 0x18a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a440: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18a444: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x18A444u;
    {
        const bool branch_taken_0x18a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A444u;
            // 0x18a448: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a444) {
            ctx->pc = 0x18A570u;
            goto label_18a570;
        }
    }
    ctx->pc = 0x18A44Cu;
    // 0x18a44c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18a450: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x18a454: 0x8e102000  lw          $s0, 0x2000($s0)
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8192)));
    // 0x18a458: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18a45c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a460: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x18a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x18a464: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x18a464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    // 0x18a468: 0xc062978  jal         func_18A5E0
    ctx->pc = 0x18A468u;
    SET_GPR_U32(ctx, 31, 0x18A470u);
    ctx->pc = 0x18A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A468u;
            // 0x18a46c: 0x108e02  srl         $s1, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A5E0u;
    if (runtime->hasFunction(0x18A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A470u; }
        if (ctx->pc != 0x18A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A5E0_0x18a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A470u; }
        if (ctx->pc != 0x18A470u) { return; }
    }
    ctx->pc = 0x18A470u;
    // 0x18a470: 0x8ea24f20  lw          $v0, 0x4F20($s5)
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a474: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18a478: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x18A478u;
    {
        const bool branch_taken_0x18a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A478u;
            // 0x18a47c: 0x323000ff  andi        $s0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a478) {
            ctx->pc = 0x18A56Cu;
            goto label_18a56c;
        }
    }
    ctx->pc = 0x18A480u;
    // 0x18a480: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x18a484: 0x322400fb  andi        $a0, $s1, 0xFB
    ctx->pc = 0x18a484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)251);
    // 0x18a488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a48c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18a490: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x18a490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18a494: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x18a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x18a498: 0x22e00  sll         $a1, $v0, 24
    ctx->pc = 0x18a498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x18a49c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18a4a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a4a4: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A4A4u;
    {
        const bool branch_taken_0x18a4a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4A4u;
            // 0x18a4a8: 0x3c021401  lui         $v0, 0x1401 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5121 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4a4) {
            ctx->pc = 0x18A4B0u;
            goto label_18a4b0;
        }
    }
    ctx->pc = 0x18A4ACu;
    // 0x18a4ac: 0x3c021c01  lui         $v0, 0x1C01
    ctx->pc = 0x18a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7169 << 16));
label_18a4b0:
    // 0x18a4b0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x18a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x18a4b4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x18a4b8: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x18a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    // 0x18a4bc: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x18A4BCu;
    {
        const bool branch_taken_0x18a4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4BCu;
            // 0x18a4c0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4bc) {
            ctx->pc = 0x18A518u;
            goto label_18a518;
        }
    }
    ctx->pc = 0x18A4C4u;
    // 0x18a4c4: 0x0  nop
    ctx->pc = 0x18a4c4u;
    // NOP
label_18a4c8:
    // 0x18a4c8: 0x2e420400  sltiu       $v0, $s2, 0x400
    ctx->pc = 0x18a4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x18a4cc: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x18a4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x18a4d0: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x18a4d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x18a4d4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18a4d8: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A4D8u;
    {
        const bool branch_taken_0x18a4d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4D8u;
            // 0x18a4dc: 0x103140  sll         $a2, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4d8) {
            ctx->pc = 0x18A4E4u;
            goto label_18a4e4;
        }
    }
    ctx->pc = 0x18A4E0u;
    // 0x18a4e0: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_18a4e4:
    // 0x18a4e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a4e8: 0xc09bb5a  jal         func_26ED68
    ctx->pc = 0x18A4E8u;
    SET_GPR_U32(ctx, 31, 0x18A4F0u);
    ctx->pc = 0x18A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4E8u;
            // 0x18a4ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ED68u;
    if (runtime->hasFunction(0x26ED68u)) {
        auto targetFn = runtime->lookupFunction(0x26ED68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4F0u; }
        if (ctx->pc != 0x18A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ed68_0x26ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4F0u; }
        if (ctx->pc != 0x18A4F0u) { return; }
    }
    ctx->pc = 0x18A4F0u;
    // 0x18a4f0: 0xc062978  jal         func_18A5E0
    ctx->pc = 0x18A4F0u;
    SET_GPR_U32(ctx, 31, 0x18A4F8u);
    ctx->pc = 0x18A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A4F0u;
            // 0x18a4f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A5E0u;
    if (runtime->hasFunction(0x18A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4F8u; }
        if (ctx->pc != 0x18A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A5E0_0x18a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A4F8u; }
        if (ctx->pc != 0x18A4F8u) { return; }
    }
    ctx->pc = 0x18A4F8u;
    // 0x18a4f8: 0x8ea24f20  lw          $v0, 0x4F20($s5)
    ctx->pc = 0x18a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20256)));
    // 0x18a4fc: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18a500: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18A500u;
    {
        const bool branch_taken_0x18a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A500u;
            // 0x18a504: 0x101280  sll         $v0, $s0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a500) {
            ctx->pc = 0x18A56Cu;
            goto label_18a56c;
        }
    }
    ctx->pc = 0x18A508u;
    // 0x18a508: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x18a50c: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18A50Cu;
    {
        const bool branch_taken_0x18a50c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A50Cu;
            // 0x18a510: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a50c) {
            ctx->pc = 0x18A4C8u;
            runtime->cooperativeGuestYield();
            goto label_18a4c8;
        }
    }
    ctx->pc = 0x18A514u;
    // 0x18a514: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18a514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_18a518:
    // 0x18a518: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18a51c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x18a520: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18a520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18a524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18a524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18a528: 0xc062978  jal         func_18A5E0
    ctx->pc = 0x18A528u;
    SET_GPR_U32(ctx, 31, 0x18A530u);
    ctx->pc = 0x18A52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A528u;
            // 0x18a52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A5E0u;
    if (runtime->hasFunction(0x18A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A530u; }
        if (ctx->pc != 0x18A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A5E0_0x18a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A530u; }
        if (ctx->pc != 0x18A530u) { return; }
    }
    ctx->pc = 0x18A530u;
    // 0x18a530: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18a530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18a534: 0x8c424f20  lw          $v0, 0x4F20($v0)
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x18a538: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18a53c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A53Cu;
    {
        const bool branch_taken_0x18a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A53Cu;
            // 0x18a540: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a53c) {
            ctx->pc = 0x18A570u;
            goto label_18a570;
        }
    }
    ctx->pc = 0x18A544u;
    // 0x18a544: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_18a548:
    // 0x18a548: 0x8e044f20  lw          $a0, 0x4F20($s0)
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18a54c: 0xc09e4ba  jal         func_2792E8
    ctx->pc = 0x18A54Cu;
    SET_GPR_U32(ctx, 31, 0x18A554u);
    ctx->pc = 0x18A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A54Cu;
            // 0x18a550: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2792E8u;
    if (runtime->hasFunction(0x2792E8u)) {
        auto targetFn = runtime->lookupFunction(0x2792E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A554u; }
        if (ctx->pc != 0x18A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002792E8_0x2792e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A554u; }
        if (ctx->pc != 0x18A554u) { return; }
    }
    ctx->pc = 0x18A554u;
    // 0x18a554: 0x8e044f20  lw          $a0, 0x4F20($s0)
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18a558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a55c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18a560: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18a564: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18A564u;
    {
        const bool branch_taken_0x18a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A564u;
            // 0x18a568: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a564) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A56Cu;
label_18a56c:
    // 0x18a56c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_18a570:
    // 0x18a570: 0x8c444f20  lw          $a0, 0x4F20($v0)
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x18a574: 0xc09e4ba  jal         func_2792E8
    ctx->pc = 0x18A574u;
    SET_GPR_U32(ctx, 31, 0x18A57Cu);
    ctx->pc = 0x18A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A574u;
            // 0x18a578: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2792E8u;
    if (runtime->hasFunction(0x2792E8u)) {
        auto targetFn = runtime->lookupFunction(0x2792E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A57Cu; }
        if (ctx->pc != 0x18A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002792E8_0x2792e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A57Cu; }
        if (ctx->pc != 0x18A57Cu) { return; }
    }
    ctx->pc = 0x18A57Cu;
    // 0x18a57c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a580: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18a584: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x18a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x18a588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a58c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18a590: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A590u;
    SET_GPR_U32(ctx, 31, 0x18A598u);
    ctx->pc = 0x18A594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A590u;
            // 0x18a594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A598u; }
        if (ctx->pc != 0x18A598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A598u; }
        if (ctx->pc != 0x18A598u) { return; }
    }
    ctx->pc = 0x18A598u;
    // 0x18a598: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18a59c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x18a5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18a5ac: 0xc09e548  jal         func_279520
    ctx->pc = 0x18A5ACu;
    SET_GPR_U32(ctx, 31, 0x18A5B4u);
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5B4u; }
        if (ctx->pc != 0x18A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00279520_0x279520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5B4u; }
        if (ctx->pc != 0x18A5B4u) { return; }
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a5b8:
    // 0x18a5b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18a5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a5bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18a5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a5c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18a5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a5c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18a5c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a5c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a5c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a5cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18a5ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a5d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5D4u;
            // 0x18a5d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A1B0u: goto label_18a1b0;
            case 0x18A22Cu: goto label_18a22c;
            case 0x18A288u: goto label_18a288;
            case 0x18A388u: goto label_18a388;
            case 0x18A394u: goto label_18a394;
            case 0x18A3B4u: goto label_18a3b4;
            case 0x18A3E8u: goto label_18a3e8;
            case 0x18A420u: goto label_18a420;
            case 0x18A4B0u: goto label_18a4b0;
            case 0x18A4C8u: goto label_18a4c8;
            case 0x18A4E4u: goto label_18a4e4;
            case 0x18A518u: goto label_18a518;
            case 0x18A548u: goto label_18a548;
            case 0x18A56Cu: goto label_18a56c;
            case 0x18A570u: goto label_18a570;
            case 0x18A5B4u: goto label_18a5b4;
            case 0x18A5B8u: goto label_18a5b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A5DCu;
    // 0x18a5dc: 0x0  nop
    ctx->pc = 0x18a5dcu;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E090
// Address: 0x11e090 - 0x11e190
void sub_0011E090_0x11e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E090_0x11e090");
#endif

    ctx->pc = 0x11e090u;

    // 0x11e090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11e094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11e098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11e09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11e0a4: 0x70058ca9  por         $s1, $zero, $a1
    ctx->pc = 0x11e0a4u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x11e0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e0ac: 0x8e021058  lw          $v0, 0x1058($s0)
    ctx->pc = 0x11e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4184)));
    // 0x11e0b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E0B0u;
    {
        const bool branch_taken_0x11e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0B0u;
            // 0x11e0b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0b0) {
            ctx->pc = 0x11E0C0u;
            goto label_11e0c0;
        }
    }
    ctx->pc = 0x11E0B8u;
    // 0x11e0b8: 0xc0476d0  jal         func_11DB40
    ctx->pc = 0x11E0B8u;
    SET_GPR_U32(ctx, 31, 0x11E0C0u);
    ctx->pc = 0x11DB40u;
    if (runtime->hasFunction(0x11DB40u)) {
        auto targetFn = runtime->lookupFunction(0x11DB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0C0u; }
        if (ctx->pc != 0x11E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB40_0x11db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0C0u; }
        if (ctx->pc != 0x11E0C0u) { return; }
    }
    ctx->pc = 0x11E0C0u;
label_11e0c0:
    // 0x11e0c0: 0x8e02105c  lw          $v0, 0x105C($s0)
    ctx->pc = 0x11e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4188)));
    // 0x11e0c4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11E0C4u;
    {
        const bool branch_taken_0x11e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0C4u;
            // 0x11e0c8: 0x2602083c  addiu       $v0, $s0, 0x83C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c4) {
            ctx->pc = 0x11E174u;
            goto label_11e174;
        }
    }
    ctx->pc = 0x11E0CCu;
    // 0x11e0cc: 0x8e041054  lw          $a0, 0x1054($s0)
    ctx->pc = 0x11e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4180)));
    // 0x11e0d0: 0x8e02103c  lw          $v0, 0x103C($s0)
    ctx->pc = 0x11e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4156)));
    // 0x11e0d4: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11E0D4u;
    {
        const bool branch_taken_0x11e0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0D4u;
            // 0x11e0d8: 0x8e071050  lw          $a3, 0x1050($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0d4) {
            ctx->pc = 0x11E138u;
            goto label_11e138;
        }
    }
    ctx->pc = 0x11E0DCu;
    // 0x11e0dc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x11e0e0: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x11e0e0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x11e0e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x11e0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0e8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x11e0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e0ec: 0x24c6083c  addiu       $a2, $a2, 0x83C
    ctx->pc = 0x11e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2108));
    // 0x11e0f0: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x11e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11e0f4: 0xc05d53a  jal         func_1754E8
    ctx->pc = 0x11E0F4u;
    SET_GPR_U32(ctx, 31, 0x11E0FCu);
    ctx->pc = 0x11E0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0F4u;
            // 0x11e0f8: 0x2063021  addu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (runtime->hasFunction(0x1754E8u)) {
        auto targetFn = runtime->lookupFunction(0x1754E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0FCu; }
        if (ctx->pc != 0x11E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001754E8_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0FCu; }
        if (ctx->pc != 0x11E0FCu) { return; }
    }
    ctx->pc = 0x11E0FCu;
    // 0x11e0fc: 0x8e031050  lw          $v1, 0x1050($s0)
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11e100: 0x2604083c  addiu       $a0, $s0, 0x83C
    ctx->pc = 0x11e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2108));
    // 0x11e104: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x11e104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11e108: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e10c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e114: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E114u;
    {
        const bool branch_taken_0x11e114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E114u;
            // 0x11e118: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e114) {
            ctx->pc = 0x11E124u;
            goto label_11e124;
        }
    }
    ctx->pc = 0x11E11Cu;
    // 0x11e11c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E11Cu;
    {
        const bool branch_taken_0x11e11c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E11Cu;
            // 0x11e120: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e11c) {
            ctx->pc = 0x11E12Cu;
            goto label_11e12c;
        }
    }
    ctx->pc = 0x11E124u;
label_11e124:
    // 0x11e124: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11E124u;
    {
        const bool branch_taken_0x11e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E124u;
            // 0x11e128: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e124) {
            ctx->pc = 0x11E174u;
            goto label_11e174;
        }
    }
    ctx->pc = 0x11E12Cu;
label_11e12c:
    // 0x11e12c: 0x2442083c  addiu       $v0, $v0, 0x83C
    ctx->pc = 0x11e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2108));
    // 0x11e130: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11E130u;
    {
        const bool branch_taken_0x11e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E130u;
            // 0x11e134: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e130) {
            ctx->pc = 0x11E174u;
            goto label_11e174;
        }
    }
    ctx->pc = 0x11E138u;
label_11e138:
    // 0x11e138: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x11e13c: 0x70112ca9  por         $a1, $zero, $s1
    ctx->pc = 0x11e13cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x11e140: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e144: 0x24c6083c  addiu       $a2, $a2, 0x83C
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2108));
    // 0x11e148: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11e14c: 0xc05d514  jal         func_175450
    ctx->pc = 0x11E14Cu;
    SET_GPR_U32(ctx, 31, 0x11E154u);
    ctx->pc = 0x11E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E14Cu;
            // 0x11e150: 0x2063021  addu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175450u;
    if (runtime->hasFunction(0x175450u)) {
        auto targetFn = runtime->lookupFunction(0x175450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E154u; }
        if (ctx->pc != 0x11E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175450_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E154u; }
        if (ctx->pc != 0x11E154u) { return; }
    }
    ctx->pc = 0x11E154u;
    // 0x11e154: 0x8e031050  lw          $v1, 0x1050($s0)
    ctx->pc = 0x11e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11e158: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x11e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e15c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e164: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x11e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11e168: 0x2463083c  addiu       $v1, $v1, 0x83C
    ctx->pc = 0x11e168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2108));
    // 0x11e16c: 0xac80083c  sw          $zero, 0x83C($a0)
    ctx->pc = 0x11e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2108), GPR_U32(ctx, 0));
    // 0x11e170: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x11e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_11e174:
    // 0x11e174: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11e174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11e178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e17c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11e17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e184: 0x3e00008  jr          $ra
    ctx->pc = 0x11E184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E184u;
            // 0x11e188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E0C0u: goto label_11e0c0;
            case 0x11E124u: goto label_11e124;
            case 0x11E12Cu: goto label_11e12c;
            case 0x11E138u: goto label_11e138;
            case 0x11E174u: goto label_11e174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E18Cu;
    // 0x11e18c: 0x0  nop
    ctx->pc = 0x11e18cu;
    // NOP
}

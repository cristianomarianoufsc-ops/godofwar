#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B120
// Address: 0x16b120 - 0x16b1f0
void sub_0016B120_0x16b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B120_0x16b120");
#endif

    ctx->pc = 0x16b120u;

    // 0x16b120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b124: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16b128: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16b12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b130: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16b134: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16b134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16b138: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16b138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b13c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16b140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b144: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b148: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b14c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x16b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16b150: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16b154: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x16b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x16b158: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16b158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b15c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B15Cu;
    {
        const bool branch_taken_0x16b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B15Cu;
            // 0x16b160: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b15c) {
            ctx->pc = 0x16B190u;
            goto label_16b190;
        }
    }
    ctx->pc = 0x16B164u;
    // 0x16b164: 0x708023  subu        $s0, $v1, $s0
    ctx->pc = 0x16b164u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16b168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b16c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b170: 0xc05abf6  jal         func_16AFD8
    ctx->pc = 0x16B170u;
    SET_GPR_U32(ctx, 31, 0x16B178u);
    ctx->pc = 0x16B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B170u;
            // 0x16b174: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFD8u;
    if (runtime->hasFunction(0x16AFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16AFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B178u; }
        if (ctx->pc != 0x16B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16afd8_0x16b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B178u; }
        if (ctx->pc != 0x16B178u) { return; }
    }
    ctx->pc = 0x16B178u;
    // 0x16b178: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b17c: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x16b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x16b180: 0xc05abf6  jal         func_16AFD8
    ctx->pc = 0x16B180u;
    SET_GPR_U32(ctx, 31, 0x16B188u);
    ctx->pc = 0x16B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B180u;
            // 0x16b184: 0x2903023  subu        $a2, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFD8u;
    if (runtime->hasFunction(0x16AFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16AFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B188u; }
        if (ctx->pc != 0x16B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16afd8_0x16b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B188u; }
        if (ctx->pc != 0x16B188u) { return; }
    }
    ctx->pc = 0x16B188u;
    // 0x16b188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B188u;
    {
        const bool branch_taken_0x16b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B188u;
            // 0x16b18c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b188) {
            ctx->pc = 0x16B1A4u;
            goto label_16b1a4;
        }
    }
    ctx->pc = 0x16B190u;
label_16b190:
    // 0x16b190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16b194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b198: 0xc05abf6  jal         func_16AFD8
    ctx->pc = 0x16B198u;
    SET_GPR_U32(ctx, 31, 0x16B1A0u);
    ctx->pc = 0x16B19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B198u;
            // 0x16b19c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFD8u;
    if (runtime->hasFunction(0x16AFD8u)) {
        auto targetFn = runtime->lookupFunction(0x16AFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A0u; }
        if (ctx->pc != 0x16B1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16afd8_0x16b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A0u; }
        if (ctx->pc != 0x16B1A0u) { return; }
    }
    ctx->pc = 0x16B1A0u;
    // 0x16b1a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x16b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16b1a4:
    // 0x16b1a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x16b1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x16b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16b1ac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x16b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x16b1b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x16b1b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16b1b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B1B4u;
    {
        const bool branch_taken_0x16b1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b1b4) {
            ctx->pc = 0x16B1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1B4u;
            // 0x16b1b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B1BCu;
            goto label_16b1bc;
        }
    }
    ctx->pc = 0x16B1BCu;
label_16b1bc:
    // 0x16b1bc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x16b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16b1c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16b1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b1c4: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x16b1c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16b1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b1cc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x16b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x16b1d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16b1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b1d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16b1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1dc: 0x2010  mfhi        $a0
    ctx->pc = 0x16b1dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16b1e0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x16b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x16b1e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16b1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1E8u;
            // 0x16b1ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B190u: goto label_16b190;
            case 0x16B1A4u: goto label_16b1a4;
            case 0x16B1BCu: goto label_16b1bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B1F0u;
}

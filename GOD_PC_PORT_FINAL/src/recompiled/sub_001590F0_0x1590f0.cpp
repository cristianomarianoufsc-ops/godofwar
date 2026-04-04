#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001590F0
// Address: 0x1590f0 - 0x159a10
void sub_001590F0_0x1590f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001590F0_0x1590f0");
#endif

    ctx->pc = 0x1590f0u;

    // 0x1590f0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1590f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1590f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1590f8: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x1590f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x1590fc: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x1590fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
    // 0x159100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x159100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159104: 0x8c42104c  lw          $v0, 0x104C($v0)
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x159108: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x159108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15910c: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x15910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x159110: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x159110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
    // 0x159114: 0x7fb301a0  sq          $s3, 0x1A0($sp)
    ctx->pc = 0x159114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 19));
    // 0x159118: 0x7fb40190  sq          $s4, 0x190($sp)
    ctx->pc = 0x159118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 20));
    // 0x15911c: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x15911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x159120: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x159120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x159124: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x159124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x159128: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159128u;
    {
        const bool branch_taken_0x159128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159128u;
            // 0x15912c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159128) {
            ctx->pc = 0x159134u;
            goto label_159134;
        }
    }
    ctx->pc = 0x159130u;
    // 0x159130: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_159134:
    // 0x159134: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x159134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x159138: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15913c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15913Cu;
    {
        const bool branch_taken_0x15913c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15913Cu;
            // 0x159140: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15913c) {
            ctx->pc = 0x15914Cu;
            goto label_15914c;
        }
    }
    ctx->pc = 0x159144u;
    // 0x159144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x159144u;
    {
        const bool branch_taken_0x159144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159144u;
            // 0x159148: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159144) {
            ctx->pc = 0x159168u;
            goto label_159168;
        }
    }
    ctx->pc = 0x15914Cu;
label_15914c:
    // 0x15914c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15914cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x159150: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x159150u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x159154: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x159154u;
    {
        const bool branch_taken_0x159154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x159154) {
            ctx->pc = 0x159158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159154u;
            // 0x159158: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15916Cu;
            goto label_15916c;
        }
    }
    ctx->pc = 0x15915Cu;
    // 0x15915c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x15915Cu;
    SET_GPR_U32(ctx, 31, 0x159164u);
    ctx->pc = 0x159160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15915Cu;
            // 0x159160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159164u; }
        if (ctx->pc != 0x159164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159164u; }
        if (ctx->pc != 0x159164u) { return; }
    }
    ctx->pc = 0x159164u;
    // 0x159164: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x159164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_159168:
    // 0x159168: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x159168u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_15916c:
    // 0x15916c: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x15916cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x159170: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x159170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x159174: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159174u;
    {
        const bool branch_taken_0x159174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159174u;
            // 0x159178: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159174) {
            ctx->pc = 0x1591B0u;
            goto label_1591b0;
        }
    }
    ctx->pc = 0x15917Cu;
    // 0x15917c: 0xc0614c6  jal         func_185318
    ctx->pc = 0x15917Cu;
    SET_GPR_U32(ctx, 31, 0x159184u);
    ctx->pc = 0x159180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15917Cu;
            // 0x159180: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159184u; }
        if (ctx->pc != 0x159184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159184u; }
        if (ctx->pc != 0x159184u) { return; }
    }
    ctx->pc = 0x159184u;
    // 0x159184: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x159184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15918c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159190: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x159190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x159194: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x159194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159198: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x159198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x15919c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x15919cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1591a0: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x1591a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x1591a4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1591a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1591a8: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1591A8u;
    SET_GPR_U32(ctx, 31, 0x1591B0u);
    ctx->pc = 0x1591ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591A8u;
            // 0x1591ac: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591B0u; }
        if (ctx->pc != 0x1591B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1591B0u; }
        if (ctx->pc != 0x1591B0u) { return; }
    }
    ctx->pc = 0x1591B0u;
label_1591b0:
    // 0x1591b0: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1591b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1591b4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x1591b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1591b8: 0x86250060  lh          $a1, 0x60($s1)
    ctx->pc = 0x1591b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1591bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1591c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1591c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1591c4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1591c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1591c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1591c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1591cc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1591ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1591d0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1591d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1591d4: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1591d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1591d8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1591d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1591dc: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1591DCu;
    {
        const bool branch_taken_0x1591dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1591E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591DCu;
            // 0x1591e0: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591dc) {
            ctx->pc = 0x159204u;
            goto label_159204;
        }
    }
    ctx->pc = 0x1591E4u;
    // 0x1591e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1591e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1591e8: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1591e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1591ec: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1591ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1591f0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1591F0u;
    {
        const bool branch_taken_0x1591f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1591F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591F0u;
            // 0x1591f4: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1591f0) {
            ctx->pc = 0x159204u;
            goto label_159204;
        }
    }
    ctx->pc = 0x1591F8u;
    // 0x1591f8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1591F8u;
    SET_GPR_U32(ctx, 31, 0x159200u);
    ctx->pc = 0x1591FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1591F8u;
            // 0x1591fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159200u; }
        if (ctx->pc != 0x159200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159200u; }
        if (ctx->pc != 0x159200u) { return; }
    }
    ctx->pc = 0x159200u;
    // 0x159200: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_159204:
    // 0x159204: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x159204u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159208: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x159208u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15920c: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x15920cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159210: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x159210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159214: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x159214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159218: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x159218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15921c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x15921cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x159220: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x159220u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x159224: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x159224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x159228: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x159228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15922c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x15922cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159230: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x159230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x159234: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x159234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x159238: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x159238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15923c: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x15923cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159240: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x159240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159244: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x159244u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x159248: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x159248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15924c: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x15924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159250: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x159250u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159254: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x159254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159258: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x159258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15925c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x15925cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x159260: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x159260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x159264: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x159264u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x159268: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x159268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15926c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x15926cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x159270: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x159270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159274: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x159274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159278: 0x34028300  ori         $v0, $zero, 0x8300
    ctx->pc = 0x159278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x15927c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x15927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x159280: 0xde3400c0  ld          $s4, 0xC0($s1)
    ctx->pc = 0x159280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x159284: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x159284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159288: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x159288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15928c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x15928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x159290: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x159290u;
    {
        const bool branch_taken_0x159290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159290u;
            // 0x159294: 0xfba400b0  sqc2        $vf4, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159290) {
            ctx->pc = 0x1592D0u;
            goto label_1592d0;
        }
    }
    ctx->pc = 0x159298u;
    // 0x159298: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15929c: 0xc055e56  jal         func_157958
    ctx->pc = 0x15929Cu;
    SET_GPR_U32(ctx, 31, 0x1592A4u);
    ctx->pc = 0x1592A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15929Cu;
            // 0x1592a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157958u;
    if (runtime->hasFunction(0x157958u)) {
        auto targetFn = runtime->lookupFunction(0x157958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592A4u; }
        if (ctx->pc != 0x1592A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157958_0x157958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1592A4u; }
        if (ctx->pc != 0x1592A4u) { return; }
    }
    ctx->pc = 0x1592A4u;
    // 0x1592a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1592a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1592a8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1592a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1592ac: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1592acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1592b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1592B0u;
    {
        const bool branch_taken_0x1592b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592b0) {
            ctx->pc = 0x1592B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1592B0u;
            // 0x1592b4: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1592D8u;
            goto label_1592d8;
        }
    }
    ctx->pc = 0x1592B8u;
    // 0x1592b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1592b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1592bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1592bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1592c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1592c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1592c4: 0x4a220840  vaddx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x1592c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1592c8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1592c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1592cc: 0x0  nop
    ctx->pc = 0x1592ccu;
    // NOP
label_1592d0:
    // 0x1592d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1592d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1592d4: 0x0  nop
    ctx->pc = 0x1592d4u;
    // NOP
label_1592d8:
    // 0x1592d8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1592d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1592dc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1592dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1592e0: 0x8cc51060  lw          $a1, 0x1060($a2)
    ctx->pc = 0x1592e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4192)));
    // 0x1592e4: 0x8c63105c  lw          $v1, 0x105C($v1)
    ctx->pc = 0x1592e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4188)));
    // 0x1592e8: 0x8c480104  lw          $t0, 0x104($v0)
    ctx->pc = 0x1592e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1592ec: 0x24a40014  addiu       $a0, $a1, 0x14
    ctx->pc = 0x1592ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1592f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1592f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1592f4: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x1592f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1592f8: 0x24421068  addiu       $v0, $v0, 0x1068
    ctx->pc = 0x1592f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4200));
    // 0x1592fc: 0x95070084  lhu         $a3, 0x84($t0)
    ctx->pc = 0x1592fcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x159300: 0x9509005c  lhu         $t1, 0x5C($t0)
    ctx->pc = 0x159300u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x159304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x159304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159308: 0xacc41060  sw          $a0, 0x1060($a2)
    ctx->pc = 0x159308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4192), GPR_U32(ctx, 4));
    // 0x15930c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15930cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x159310: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x159310u;
    {
        const bool branch_taken_0x159310 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x159314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159310u;
            // 0x159314: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159310) {
            ctx->pc = 0x15933Cu;
            goto label_15933c;
        }
    }
    ctx->pc = 0x159318u;
    // 0x159318: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x159318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15931c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_159320:
    // 0x159320: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x159320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x159324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159328: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x159328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x15932c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x15932cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x159330: 0x0  nop
    ctx->pc = 0x159330u;
    // NOP
    // 0x159334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x159334u;
    {
        const bool branch_taken_0x159334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159334u;
            // 0x159338: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159334) {
            ctx->pc = 0x159320u;
            runtime->cooperativeGuestYield();
            goto label_159320;
        }
    }
    ctx->pc = 0x15933Cu;
label_15933c:
    // 0x15933c: 0x95030086  lhu         $v1, 0x86($t0)
    ctx->pc = 0x15933cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 134)));
    // 0x159340: 0x25040064  addiu       $a0, $t0, 0x64
    ctx->pc = 0x159340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 100));
    // 0x159344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159348: 0x8d060088  lw          $a2, 0x88($t0)
    ctx->pc = 0x159348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x15934c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x159350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159354: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x159354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x159358: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15935c: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x159360: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159364: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x159364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x159368: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x159368u;
    {
        const bool branch_taken_0x159368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159368u;
            // 0x15936c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159368) {
            ctx->pc = 0x1593B0u;
            goto label_1593b0;
        }
    }
    ctx->pc = 0x159370u;
    // 0x159370: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x159374: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x159374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x159378: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159378u;
    {
        const bool branch_taken_0x159378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159378u;
            // 0x15937c: 0x3c0d0033  lui         $t5, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159378) {
            ctx->pc = 0x1593B4u;
            goto label_1593b4;
        }
    }
    ctx->pc = 0x159380u;
    // 0x159380: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x159380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x159384: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x159384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159388: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159388u;
    {
        const bool branch_taken_0x159388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159388u;
            // 0x15938c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159388) {
            ctx->pc = 0x1593B4u;
            goto label_1593b4;
        }
    }
    ctx->pc = 0x159390u;
    // 0x159390: 0x8c44e854  lw          $a0, -0x17AC($v0)
    ctx->pc = 0x159390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x159394: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x159394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x159398: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15939c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1593a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1593a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1593a4: 0xac4600dc  sw          $a2, 0xDC($v0)
    ctx->pc = 0x1593a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 6));
    // 0x1593a8: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x1593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
    // 0x1593ac: 0x0  nop
    ctx->pc = 0x1593acu;
    // NOP
label_1593b0:
    // 0x1593b0: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x1593b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
label_1593b4:
    // 0x1593b4: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x1593b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1593b8: 0x8da41048  lw          $a0, 0x1048($t5)
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4168)));
    // 0x1593bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1593c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1593c4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1593c8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1593c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1593cc: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1593d0: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x1593d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1593d4: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1593D4u;
    {
        const bool branch_taken_0x1593d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593D4u;
            // 0x1593d8: 0xae660008  sw          $a2, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593d4) {
            ctx->pc = 0x15970Cu;
            goto label_15970c;
        }
    }
    ctx->pc = 0x1593DCu;
    // 0x1593dc: 0x3c0c0030  lui         $t4, 0x30
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)48 << 16));
    // 0x1593e0: 0x8d824994  lw          $v0, 0x4994($t4)
    ctx->pc = 0x1593e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18836)));
    // 0x1593e4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1593E4u;
    {
        const bool branch_taken_0x1593e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593E4u;
            // 0x1593e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593e4) {
            ctx->pc = 0x15949Cu;
            goto label_15949c;
        }
    }
    ctx->pc = 0x1593ECu;
    // 0x1593ec: 0x91180  sll         $v0, $t1, 6
    ctx->pc = 0x1593ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1593f0: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1593f4: 0x244a0010  addiu       $t2, $v0, 0x10
    ctx->pc = 0x1593f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1593f8: 0x8ce44990  lw          $a0, 0x4990($a3)
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18832)));
    // 0x1593fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1593fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x159400: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x159404: 0x34423fee  ori         $v0, $v0, 0x3FEE
    ctx->pc = 0x159404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16366);
    // 0x159408: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x159408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15940c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15940Cu;
    {
        const bool branch_taken_0x15940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15940Cu;
            // 0x159410: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15940c) {
            ctx->pc = 0x159448u;
            goto label_159448;
        }
    }
    ctx->pc = 0x159414u;
    // 0x159414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x159418: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x159418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x15941c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x159420: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x159420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159424: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x159424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x159428: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x159428u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x15942c: 0x8ce24990  lw          $v0, 0x4990($a3)
    ctx->pc = 0x15942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18832)));
    // 0x159430: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x159430u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x159434: 0x8ce24990  lw          $v0, 0x4990($a3)
    ctx->pc = 0x159434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18832)));
    // 0x159438: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x159438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x15943c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159440: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x159440u;
    {
        const bool branch_taken_0x159440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159440u;
            // 0x159444: 0xace34990  sw          $v1, 0x4990($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 18832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159440) {
            ctx->pc = 0x15949Cu;
            goto label_15949c;
        }
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x159448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15944c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x15944cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x159450: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x159454: 0xad834994  sw          $v1, 0x4994($t4)
    ctx->pc = 0x159454u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 18836), GPR_U32(ctx, 3));
    // 0x159458: 0x8ce54990  lw          $a1, 0x4990($a3)
    ctx->pc = 0x159458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18832)));
    // 0x15945c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x15945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x159460: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x159460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x159464: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x159464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x159468: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x159468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15946c: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x15946cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x159470: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x159470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x159474: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x159474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x159478: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x159478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x15947c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x15947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x159480: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x159480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x159484: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x159484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x159488: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x159488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x15948c: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x15948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x159490: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x159494: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x159494u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x159498: 0xace44990  sw          $a0, 0x4990($a3)
    ctx->pc = 0x159498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18832), GPR_U32(ctx, 4));
label_15949c:
    // 0x15949c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x15949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1594a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1594a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1594a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1594a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1594a8: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1594A8u;
    {
        const bool branch_taken_0x1594a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594A8u;
            // 0x1594ac: 0x3c0b0030  lui         $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594a8) {
            ctx->pc = 0x1596C8u;
            goto label_1596c8;
        }
    }
    ctx->pc = 0x1594B0u;
    // 0x1594b0: 0xc6210114  lwc1        $f1, 0x114($s1)
    ctx->pc = 0x1594b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1594b4: 0xc5604998  lwc1        $f0, 0x4998($t3)
    ctx->pc = 0x1594b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1594b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594bc: 0x0  nop
    ctx->pc = 0x1594bcu;
    // NOP
    // 0x1594c0: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x1594C0u;
    {
        const bool branch_taken_0x1594c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1594C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594C0u;
            // 0x1594c4: 0x8da41048  lw          $a0, 0x1048($t5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594c0) {
            ctx->pc = 0x1596C8u;
            goto label_1596c8;
        }
    }
    ctx->pc = 0x1594C8u;
    // 0x1594c8: 0x8eb2002c  lw          $s2, 0x2C($s5)
    ctx->pc = 0x1594c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1594cc: 0x1324821  addu        $t1, $t1, $s2
    ctx->pc = 0x1594ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x1594d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1594d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1594d4: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x1594d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1594d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1594dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1594dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1594e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1594e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1594e4: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1594e8: 0x8d834994  lw          $v1, 0x4994($t4)
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18836)));
    // 0x1594ec: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1594f0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1594f4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1594F4u;
    {
        const bool branch_taken_0x1594f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1594F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594F4u;
            // 0x1594f8: 0xae70000c  sw          $s0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594f4) {
            ctx->pc = 0x159558u;
            goto label_159558;
        }
    }
    ctx->pc = 0x1594FCu;
    // 0x1594fc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x159500: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x159500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x159504: 0x8ca74990  lw          $a3, 0x4990($a1)
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18832)));
    // 0x159508: 0x34423fee  ori         $v0, $v0, 0x3FEE
    ctx->pc = 0x159508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16366);
    // 0x15950c: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x15950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x159510: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x159510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x159514: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x159514u;
    {
        const bool branch_taken_0x159514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159514) {
            ctx->pc = 0x159518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159514u;
            // 0x159518: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15955Cu;
            goto label_15955c;
        }
    }
    ctx->pc = 0x15951Cu;
    // 0x15951c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x159520: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x159524: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x159524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x159528: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x159528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x15952c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x159530: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x159534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x159534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x159538: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x159538u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x15953c: 0x8ca24990  lw          $v0, 0x4990($a1)
    ctx->pc = 0x15953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18832)));
    // 0x159540: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x159540u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x159544: 0x8ca24990  lw          $v0, 0x4990($a1)
    ctx->pc = 0x159544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18832)));
    // 0x159548: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x15954c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x15954cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x159550: 0xaca34990  sw          $v1, 0x4990($a1)
    ctx->pc = 0x159550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18832), GPR_U32(ctx, 3));
    // 0x159554: 0x0  nop
    ctx->pc = 0x159554u;
    // NOP
label_159558:
    // 0x159558: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x159558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_15955c:
    // 0x15955c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15955Cu;
    {
        const bool branch_taken_0x15955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15955Cu;
            // 0x159560: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15955c) {
            ctx->pc = 0x159580u;
            goto label_159580;
        }
    }
    ctx->pc = 0x159564u;
    // 0x159564: 0xc56c4998  lwc1        $f12, 0x4998($t3)
    ctx->pc = 0x159564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159568: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x159568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15956c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159570: 0xc04dd42  jal         func_137508
    ctx->pc = 0x159570u;
    SET_GPR_U32(ctx, 31, 0x159578u);
    ctx->pc = 0x159574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159570u;
            // 0x159574: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137508u;
    if (runtime->hasFunction(0x137508u)) {
        auto targetFn = runtime->lookupFunction(0x137508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159578u; }
        if (ctx->pc != 0x159578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137508_0x137508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159578u; }
        if (ctx->pc != 0x159578u) { return; }
    }
    ctx->pc = 0x159578u;
    // 0x159578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159578u;
    {
        const bool branch_taken_0x159578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159578) {
            ctx->pc = 0x159594u;
            goto label_159594;
        }
    }
    ctx->pc = 0x159580u;
label_159580:
    // 0x159580: 0xc56c4998  lwc1        $f12, 0x4998($t3)
    ctx->pc = 0x159580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159584: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x159584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15958c: 0xc04debe  jal         func_137AF8
    ctx->pc = 0x15958Cu;
    SET_GPR_U32(ctx, 31, 0x159594u);
    ctx->pc = 0x159590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15958Cu;
            // 0x159590: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137AF8u;
    if (runtime->hasFunction(0x137AF8u)) {
        auto targetFn = runtime->lookupFunction(0x137AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159594u; }
        if (ctx->pc != 0x159594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137AF8_0x137af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159594u; }
        if (ctx->pc != 0x159594u) { return; }
    }
    ctx->pc = 0x159594u;
label_159594:
    // 0x159594: 0x1240008d  beqz        $s2, . + 4 + (0x8D << 2)
    ctx->pc = 0x159594u;
    {
        const bool branch_taken_0x159594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x159598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159594u;
            // 0x159598: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159594) {
            ctx->pc = 0x1597CCu;
            goto label_1597cc;
        }
    }
    ctx->pc = 0x15959Cu;
    // 0x15959c: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1595a0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1595a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1595a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1595a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1595ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1595acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1595b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1595b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1595b8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1595bc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1595c0: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1595c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1595c4: 0x12400081  beqz        $s2, . + 4 + (0x81 << 2)
    ctx->pc = 0x1595C4u;
    {
        const bool branch_taken_0x1595c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1595C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1595C4u;
            // 0x1595c8: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595c4) {
            ctx->pc = 0x1597CCu;
            goto label_1597cc;
        }
    }
    ctx->pc = 0x1595CCu;
    // 0x1595cc: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1595ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595d0: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1595d4: 0x0  nop
    ctx->pc = 0x1595d4u;
    // NOP
label_1595d8:
    // 0x1595d8: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1595dc: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x1595dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1595e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1595e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1595e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1595ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1595f0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1595f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1595f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1595f8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1595f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1595fc: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1595fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159600: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x159600u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159604: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x159604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159608: 0x11400029  beqz        $t2, . + 4 + (0x29 << 2)
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x15960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159608u;
            // 0x15960c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159608) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x159610u;
    // 0x159610: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x159614: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_159618:
    // 0x159618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x159618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15961c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x159620: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x159620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159624: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x159624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x159628: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x159628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15962c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x159630: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x159630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x159634: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x159634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159638: 0x48ac1800  qmtc2.ni    $t4, $vf3
    ctx->pc = 0x159638u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x15963c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x159640: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x159644: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x159648: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x159648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15964c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x15964cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159650: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x159650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x159654: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x159654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159658: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x159658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15965c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x15965cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159660: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x159660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159664: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x159664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159668: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x159668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15966c: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x15966cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159670: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x159670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x159674: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x159674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x159678: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x159678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15967c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x15967cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159680: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x159680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x159684: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x159684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159688: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x159688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15968c: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x15968cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x159690: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x159690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159694: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x159694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159698: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x159698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15969c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1596a0: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x1596a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1596a4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1596A4u;
    {
        const bool branch_taken_0x1596a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596A4u;
            // 0x1596a8: 0xf8820030  sqc2        $vf2, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596a4) {
            ctx->pc = 0x159618u;
            runtime->cooperativeGuestYield();
            goto label_159618;
        }
    }
    ctx->pc = 0x1596ACu;
    // 0x1596ac: 0x0  nop
    ctx->pc = 0x1596acu;
    // NOP
label_1596b0:
    // 0x1596b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1596b4: 0x112102b  sltu        $v0, $t0, $s2
    ctx->pc = 0x1596b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1596b8: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1596B8u;
    {
        const bool branch_taken_0x1596b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1596b8) {
            ctx->pc = 0x1596BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1596B8u;
            // 0x1596bc: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1595D8u;
            runtime->cooperativeGuestYield();
            goto label_1595d8;
        }
    }
    ctx->pc = 0x1596C0u;
    // 0x1596c0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1596C0u;
    {
        const bool branch_taken_0x1596c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596C0u;
            // 0x1596c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596c0) {
            ctx->pc = 0x1597D0u;
            goto label_1597d0;
        }
    }
    ctx->pc = 0x1596C8u;
label_1596c8:
    // 0x1596c8: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x1596c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x1596cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1596CCu;
    {
        const bool branch_taken_0x1596cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596CCu;
            // 0x1596d0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596cc) {
            ctx->pc = 0x1596F0u;
            goto label_1596f0;
        }
    }
    ctx->pc = 0x1596D4u;
    // 0x1596d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1596d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596d8: 0xc44c4998  lwc1        $f12, 0x4998($v0)
    ctx->pc = 0x1596d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1596dc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1596dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596e0: 0xc04db92  jal         func_136E48
    ctx->pc = 0x1596E0u;
    SET_GPR_U32(ctx, 31, 0x1596E8u);
    ctx->pc = 0x1596E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1596E0u;
            // 0x1596e4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136E48u;
    if (runtime->hasFunction(0x136E48u)) {
        auto targetFn = runtime->lookupFunction(0x136E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596E8u; }
        if (ctx->pc != 0x1596E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136E48_0x136e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596E8u; }
        if (ctx->pc != 0x1596E8u) { return; }
    }
    ctx->pc = 0x1596E8u;
    // 0x1596e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1596E8u;
    {
        const bool branch_taken_0x1596e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596E8u;
            // 0x1596ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596e8) {
            ctx->pc = 0x1597D0u;
            goto label_1597d0;
        }
    }
    ctx->pc = 0x1596F0u;
label_1596f0:
    // 0x1596f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1596f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596f4: 0xc44c4998  lwc1        $f12, 0x4998($v0)
    ctx->pc = 0x1596f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1596f8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1596f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596fc: 0xc04dca4  jal         func_137290
    ctx->pc = 0x1596FCu;
    SET_GPR_U32(ctx, 31, 0x159704u);
    ctx->pc = 0x159700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1596FCu;
            // 0x159700: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137290u;
    if (runtime->hasFunction(0x137290u)) {
        auto targetFn = runtime->lookupFunction(0x137290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159704u; }
        if (ctx->pc != 0x159704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137290_0x137290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159704u; }
        if (ctx->pc != 0x159704u) { return; }
    }
    ctx->pc = 0x159704u;
    // 0x159704: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x159704u;
    {
        const bool branch_taken_0x159704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159704u;
            // 0x159708: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159704) {
            ctx->pc = 0x1597D0u;
            goto label_1597d0;
        }
    }
    ctx->pc = 0x15970Cu;
label_15970c:
    // 0x15970c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x15970cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159710: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x159710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x159714: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x159714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x159718: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x159718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x15971c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x15971cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x159720: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x159720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159724: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x159724u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x159728: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x159728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15972c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x15972cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x159730: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x159730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159734: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x159734u;
    {
        const bool branch_taken_0x159734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159734u;
            // 0x159738: 0x7cc20030  sq          $v0, 0x30($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159734) {
            ctx->pc = 0x1597A8u;
            goto label_1597a8;
        }
    }
    ctx->pc = 0x15973Cu;
    // 0x15973c: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x15973cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159740: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x159740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159744: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x159744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x159748: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x159748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15974c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x15974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x159750: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x159750u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159754: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x159754u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159758: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x159758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15975c: 0x46000004  c1          0x4
    ctx->pc = 0x15975cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x159760: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x159760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x159764: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x159764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x159768: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x159768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x15976c: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x15976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159770: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x159770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159774: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x159774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159778: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x159778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15977c: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x15977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159780: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x159780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159784: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x159784u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159788: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x159788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15978c: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x15978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159790: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x159790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159794: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x159794u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159798: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x159798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15979c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15979Cu;
    {
        const bool branch_taken_0x15979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15979Cu;
            // 0x1597a0: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15979c) {
            ctx->pc = 0x1597CCu;
            goto label_1597cc;
        }
    }
    ctx->pc = 0x1597A4u;
    // 0x1597a4: 0x0  nop
    ctx->pc = 0x1597a4u;
    // NOP
label_1597a8:
    // 0x1597a8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1597a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1597ac: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1597acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1597b0: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x1597b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x1597b4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1597b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1597b8: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x1597b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x1597bc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1597bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1597c0: 0x7c620060  sq          $v0, 0x60($v1)
    ctx->pc = 0x1597c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 2));
    // 0x1597c4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1597c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1597c8: 0x7c620070  sq          $v0, 0x70($v1)
    ctx->pc = 0x1597c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 2));
label_1597cc:
    // 0x1597cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1597ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1597d0:
    // 0x1597d0: 0x32820810  andi        $v0, $s4, 0x810
    ctx->pc = 0x1597d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2064);
    // 0x1597d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1597D4u;
    {
        const bool branch_taken_0x1597d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597D4u;
            // 0x1597d8: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597d4) {
            ctx->pc = 0x159810u;
            goto label_159810;
        }
    }
    ctx->pc = 0x1597DCu;
    // 0x1597dc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1597dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1597e0: 0x2442bca0  addiu       $v0, $v0, -0x4360
    ctx->pc = 0x1597e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950048));
    // 0x1597e4: 0x8c64c084  lw          $a0, -0x3F7C($v1)
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951044)));
    // 0x1597e8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1597e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1597ec: 0x32870008  andi        $a3, $s4, 0x8
    ctx->pc = 0x1597ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
    // 0x1597f0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1597f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1597f4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1597f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1597f8: 0xc054844  jal         func_152110
    ctx->pc = 0x1597F8u;
    SET_GPR_U32(ctx, 31, 0x159800u);
    ctx->pc = 0x1597FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1597F8u;
            // 0x1597fc: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152110u;
    if (runtime->hasFunction(0x152110u)) {
        auto targetFn = runtime->lookupFunction(0x152110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159800u; }
        if (ctx->pc != 0x159800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_152110_0x1528a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159800u; }
        if (ctx->pc != 0x159800u) { return; }
    }
    ctx->pc = 0x159800u;
    // 0x159800: 0x32830800  andi        $v1, $s4, 0x800
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2048);
    // 0x159804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159808: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x159808u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x15980c: 0x0  nop
    ctx->pc = 0x15980cu;
    // NOP
label_159810:
    // 0x159810: 0xde2200c0  ld          $v0, 0xC0($s1)
    ctx->pc = 0x159810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x159814: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x159814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x159818: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x159818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15981c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15981cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x159820: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x159820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x159824: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x159824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x159828: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x159828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15982c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x15982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x159830: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x159834: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x159834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x159838: 0xac7349a8  sw          $s3, 0x49A8($v1)
    ctx->pc = 0x159838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18856), GPR_U32(ctx, 19));
    // 0x15983c: 0xfe2200c0  sd          $v0, 0xC0($s1)
    ctx->pc = 0x15983cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 2));
    // 0x159840: 0xae670004  sw          $a3, 0x4($s3)
    ctx->pc = 0x159840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 7));
    // 0x159844: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x159844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x159848: 0x7bb001d0  lq          $s0, 0x1D0($sp)
    ctx->pc = 0x159848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x15984c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x159850: 0x7bb101c0  lq          $s1, 0x1C0($sp)
    ctx->pc = 0x159850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x159854: 0x7bb201b0  lq          $s2, 0x1B0($sp)
    ctx->pc = 0x159854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x159858: 0x7bb301a0  lq          $s3, 0x1A0($sp)
    ctx->pc = 0x159858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15985c: 0x7bb40190  lq          $s4, 0x190($sp)
    ctx->pc = 0x15985cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x159860: 0x7bb50180  lq          $s5, 0x180($sp)
    ctx->pc = 0x159860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x159864: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x159864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x159868: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x159868u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x15986c: 0x3e00008  jr          $ra
    ctx->pc = 0x15986Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15986Cu;
            // 0x159870: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159134u: goto label_159134;
            case 0x15914Cu: goto label_15914c;
            case 0x159168u: goto label_159168;
            case 0x15916Cu: goto label_15916c;
            case 0x1591B0u: goto label_1591b0;
            case 0x159204u: goto label_159204;
            case 0x1592D0u: goto label_1592d0;
            case 0x1592D8u: goto label_1592d8;
            case 0x159320u: goto label_159320;
            case 0x15933Cu: goto label_15933c;
            case 0x1593B0u: goto label_1593b0;
            case 0x1593B4u: goto label_1593b4;
            case 0x159448u: goto label_159448;
            case 0x15949Cu: goto label_15949c;
            case 0x159558u: goto label_159558;
            case 0x15955Cu: goto label_15955c;
            case 0x159580u: goto label_159580;
            case 0x159594u: goto label_159594;
            case 0x1595D8u: goto label_1595d8;
            case 0x159618u: goto label_159618;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596C8u: goto label_1596c8;
            case 0x1596F0u: goto label_1596f0;
            case 0x15970Cu: goto label_15970c;
            case 0x1597A8u: goto label_1597a8;
            case 0x1597CCu: goto label_1597cc;
            case 0x1597D0u: goto label_1597d0;
            case 0x159810u: goto label_159810;
            case 0x1598B8u: goto label_1598b8;
            case 0x1598D8u: goto label_1598d8;
            case 0x159908u: goto label_159908;
            case 0x159914u: goto label_159914;
            case 0x15991Cu: goto label_15991c;
            case 0x159938u: goto label_159938;
            case 0x159950u: goto label_159950;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159874u;
    // 0x159874: 0x0  nop
    ctx->pc = 0x159874u;
    // NOP
    // 0x159878: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x159878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15987c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x159880: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x159880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x159884: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x159884u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x159888: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x159888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x15988c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15988cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159890: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x159890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x159894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159898: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x159898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x15989c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1598a0: 0x8e83104c  lw          $v1, 0x104C($s4)
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4172)));
    // 0x1598a4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1598a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1598a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598A8u;
            // 0x1598ac: 0x8c7303ac  lw          $s3, 0x3AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598B8u;
            goto label_1598b8;
        }
    }
    ctx->pc = 0x1598B0u;
    // 0x1598b0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1598b4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1598b4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1598b8:
    // 0x1598b8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1598b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1598bc: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1598bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1598c0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1598C0u;
    {
        const bool branch_taken_0x1598c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598C0u;
            // 0x1598c4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598c0) {
            ctx->pc = 0x1599F4u;
            goto label_1599f4;
        }
    }
    ctx->pc = 0x1598C8u;
    // 0x1598c8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1598cc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1598CCu;
    {
        const bool branch_taken_0x1598cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598CCu;
            // 0x1598d0: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598cc) {
            ctx->pc = 0x15991Cu;
            goto label_15991c;
        }
    }
    ctx->pc = 0x1598D4u;
    // 0x1598d4: 0x0  nop
    ctx->pc = 0x1598d4u;
    // NOP
label_1598d8:
    // 0x1598d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1598d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598dc: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x1598dcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1598e0: 0x8ca200d8  lw          $v0, 0xD8($a1)
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x1598e4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1598e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1598e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1598E8u;
    {
        const bool branch_taken_0x1598e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598e8) {
            ctx->pc = 0x1598ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1598E8u;
            // 0x1598ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159914u;
            goto label_159914;
        }
    }
    ctx->pc = 0x1598F0u;
    // 0x1598f0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1598F0u;
    {
        const bool branch_taken_0x1598f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598F0u;
            // 0x1598f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f0) {
            ctx->pc = 0x159908u;
            goto label_159908;
        }
    }
    ctx->pc = 0x1598F8u;
    // 0x1598f8: 0x84a20122  lh          $v0, 0x122($a1)
    ctx->pc = 0x1598f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 290)));
    // 0x1598fc: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1598FCu;
    {
        const bool branch_taken_0x1598fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1598fc) {
            ctx->pc = 0x159900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1598FCu;
            // 0x159900: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159914u;
            goto label_159914;
        }
    }
    ctx->pc = 0x159904u;
    // 0x159904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159908:
    // 0x159908: 0xc055e98  jal         func_157A60
    ctx->pc = 0x159908u;
    SET_GPR_U32(ctx, 31, 0x159910u);
    ctx->pc = 0x15990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159908u;
            // 0x15990c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157A60u;
    if (runtime->hasFunction(0x157A60u)) {
        auto targetFn = runtime->lookupFunction(0x157A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159910u; }
        if (ctx->pc != 0x159910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157A60_0x157a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159910u; }
        if (ctx->pc != 0x159910u) { return; }
    }
    ctx->pc = 0x159910u;
    // 0x159910: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159914:
    // 0x159914: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x159914u;
    {
        const bool branch_taken_0x159914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x159918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159914u;
            // 0x159918: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159914) {
            ctx->pc = 0x1598D8u;
            runtime->cooperativeGuestYield();
            goto label_1598d8;
        }
    }
    ctx->pc = 0x15991Cu;
label_15991c:
    // 0x15991c: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x15991Cu;
    {
        const bool branch_taken_0x15991c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x159920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15991Cu;
            // 0x159920: 0x8e82104c  lw          $v0, 0x104C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15991c) {
            ctx->pc = 0x1599F0u;
            goto label_1599f0;
        }
    }
    ctx->pc = 0x159924u;
    // 0x159924: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x159924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x159928: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x15992c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15992Cu;
    {
        const bool branch_taken_0x15992c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15992Cu;
            // 0x159930: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15992c) {
            ctx->pc = 0x159938u;
            goto label_159938;
        }
    }
    ctx->pc = 0x159934u;
    // 0x159934: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x159934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_159938:
    // 0x159938: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x15993c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159940: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159940u;
    {
        const bool branch_taken_0x159940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159940u;
            // 0x159944: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159940) {
            ctx->pc = 0x159950u;
            goto label_159950;
        }
    }
    ctx->pc = 0x159948u;
    // 0x159948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x159948u;
    {
        const bool branch_taken_0x159948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159948u;
            // 0x15994c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159948) {
            ctx->pc = 0x15996Cu;
            goto label_15996c;
        }
    }
    ctx->pc = 0x159950u;
label_159950:
    // 0x159950: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x159950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x159954: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x159954u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x159958: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x159958u;
    {
        const bool branch_taken_0x159958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x159958) {
            ctx->pc = 0x15995Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159958u;
            // 0x15995c: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159970u;
            goto label_159970;
        }
    }
    ctx->pc = 0x159960u;
    // 0x159960: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x159960u;
    SET_GPR_U32(ctx, 31, 0x159968u);
    ctx->pc = 0x159964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159960u;
            // 0x159964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159968u; }
        if (ctx->pc != 0x159968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159968u; }
        if (ctx->pc != 0x159968u) { return; }
    }
    ctx->pc = 0x159968u;
    // 0x159968: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x159968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15996c:
    // 0x15996c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15996cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_159970:
    // 0x159970: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x159970u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x159974: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x159974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x159978: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159978u;
    {
        const bool branch_taken_0x159978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159978u;
            // 0x15997c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159978) {
            ctx->pc = 0x1599B4u;
            goto label_1599b4;
        }
    }
    ctx->pc = 0x159980u;
    // 0x159980: 0xc0614c6  jal         func_185318
    ctx->pc = 0x159980u;
    SET_GPR_U32(ctx, 31, 0x159988u);
    ctx->pc = 0x159984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159980u;
            // 0x159984: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159988u; }
        if (ctx->pc != 0x159988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159988u; }
        if (ctx->pc != 0x159988u) { return; }
    }
    ctx->pc = 0x159988u;
    // 0x159988: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x159988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159994: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x159994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x159998: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x159998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15999c: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x15999cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x1599a0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1599a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1599a4: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x1599a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x1599a8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1599a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599ac: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1599ACu;
    SET_GPR_U32(ctx, 31, 0x1599B4u);
    ctx->pc = 0x1599B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599ACu;
            // 0x1599b0: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599B4u; }
        if (ctx->pc != 0x1599B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599B4u; }
        if (ctx->pc != 0x1599B4u) { return; }
    }
    ctx->pc = 0x1599B4u;
label_1599b4:
    // 0x1599b4: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1599b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1599b8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x1599b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1599bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1599bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1599c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1599c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1599c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1599cc: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x1599ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1599d0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1599d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1599d4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1599d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1599d8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1599d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1599dc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1599dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1599e0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1599e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1599e4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1599e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1599e8: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x1599E8u;
    SET_GPR_U32(ctx, 31, 0x1599F0u);
    ctx->pc = 0x1599ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1599E8u;
            // 0x1599ec: 0x8c850058  lw          $a1, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (runtime->hasFunction(0x15A878u)) {
        auto targetFn = runtime->lookupFunction(0x15A878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599F0u; }
        if (ctx->pc != 0x1599F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A878_0x15a878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1599F0u; }
        if (ctx->pc != 0x1599F0u) { return; }
    }
    ctx->pc = 0x1599F0u;
label_1599f0:
    // 0x1599f0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1599f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1599f4:
    // 0x1599f4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1599f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1599f8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1599f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1599fc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1599fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x159a00: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x159a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159a04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x159a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159a08: 0x3e00008  jr          $ra
    ctx->pc = 0x159A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A08u;
            // 0x159a0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159134u: goto label_159134;
            case 0x15914Cu: goto label_15914c;
            case 0x159168u: goto label_159168;
            case 0x15916Cu: goto label_15916c;
            case 0x1591B0u: goto label_1591b0;
            case 0x159204u: goto label_159204;
            case 0x1592D0u: goto label_1592d0;
            case 0x1592D8u: goto label_1592d8;
            case 0x159320u: goto label_159320;
            case 0x15933Cu: goto label_15933c;
            case 0x1593B0u: goto label_1593b0;
            case 0x1593B4u: goto label_1593b4;
            case 0x159448u: goto label_159448;
            case 0x15949Cu: goto label_15949c;
            case 0x159558u: goto label_159558;
            case 0x15955Cu: goto label_15955c;
            case 0x159580u: goto label_159580;
            case 0x159594u: goto label_159594;
            case 0x1595D8u: goto label_1595d8;
            case 0x159618u: goto label_159618;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596C8u: goto label_1596c8;
            case 0x1596F0u: goto label_1596f0;
            case 0x15970Cu: goto label_15970c;
            case 0x1597A8u: goto label_1597a8;
            case 0x1597CCu: goto label_1597cc;
            case 0x1597D0u: goto label_1597d0;
            case 0x159810u: goto label_159810;
            case 0x1598B8u: goto label_1598b8;
            case 0x1598D8u: goto label_1598d8;
            case 0x159908u: goto label_159908;
            case 0x159914u: goto label_159914;
            case 0x15991Cu: goto label_15991c;
            case 0x159938u: goto label_159938;
            case 0x159950u: goto label_159950;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159A10u;
}

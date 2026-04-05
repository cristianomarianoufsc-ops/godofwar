#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118798
// Address: 0x118798 - 0x1188f0
void sub_00118798_0x118798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118798_0x118798");
#endif

    ctx->pc = 0x118798u;

    // 0x118798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11879c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1187a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1187a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1187a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1187a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1187a8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1187A8u;
    SET_GPR_U32(ctx, 31, 0x1187B0u);
    ctx->pc = 0x1187ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187A8u;
            // 0x1187ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187B0u; }
        if (ctx->pc != 0x1187B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187B0u; }
        if (ctx->pc != 0x1187B0u) { return; }
    }
    ctx->pc = 0x1187B0u;
    // 0x1187b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1187b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187b4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1187b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1187b8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1187B8u;
    SET_GPR_U32(ctx, 31, 0x1187C0u);
    ctx->pc = 0x1187BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187B8u;
            // 0x1187bc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187C0u; }
        if (ctx->pc != 0x1187C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187C0u; }
        if (ctx->pc != 0x1187C0u) { return; }
    }
    ctx->pc = 0x1187C0u;
    // 0x1187c0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1187c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1187c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187c8: 0xac624638  sw          $v0, 0x4638($v1)
    ctx->pc = 0x1187c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17976), GPR_U32(ctx, 2));
    // 0x1187cc: 0x0  nop
    ctx->pc = 0x1187ccu;
    // NOP
label_1187d0:
    // 0x1187d0: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x1187d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x1187d4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1187d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1187d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1187d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1187dc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1187dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1187e0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1187E0u;
    {
        const bool branch_taken_0x1187e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1187E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187E0u;
            // 0x1187e4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187e0) {
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x1187E8u;
    // 0x1187e8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1187e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1187ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1187ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1187f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1187F0u;
    {
        const bool branch_taken_0x1187f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187F0u;
            // 0x1187f4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187f0) {
            ctx->pc = 0x11880Cu;
            goto label_11880c;
        }
    }
    ctx->pc = 0x1187F8u;
label_1187f8:
    // 0x1187f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1187f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1187fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1187fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118800: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x118800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x118804: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x118804u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x118808: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x118808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_11880c:
    // 0x11880c: 0xc0a1510  jal         func_285440
    ctx->pc = 0x11880Cu;
    SET_GPR_U32(ctx, 31, 0x118814u);
    ctx->pc = 0x118810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11880Cu;
            // 0x118810: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285440u;
    if (runtime->hasFunction(0x285440u)) {
        auto targetFn = runtime->lookupFunction(0x285440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118814u; }
        if (ctx->pc != 0x118814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285440_0x285440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118814u; }
        if (ctx->pc != 0x118814u) { return; }
    }
    ctx->pc = 0x118814u;
    // 0x118814: 0xc0a1cde  jal         func_287378
    ctx->pc = 0x118814u;
    SET_GPR_U32(ctx, 31, 0x11881Cu);
    ctx->pc = 0x118818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118814u;
            // 0x118818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287378u;
    if (runtime->hasFunction(0x287378u)) {
        auto targetFn = runtime->lookupFunction(0x287378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11881Cu; }
        if (ctx->pc != 0x11881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287378_0x287378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11881Cu; }
        if (ctx->pc != 0x11881Cu) { return; }
    }
    ctx->pc = 0x11881Cu;
    // 0x11881c: 0xc0a1454  jal         func_285150
    ctx->pc = 0x11881Cu;
    SET_GPR_U32(ctx, 31, 0x118824u);
    ctx->pc = 0x118820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11881Cu;
            // 0x118820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118824u; }
        if (ctx->pc != 0x118824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285150_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118824u; }
        if (ctx->pc != 0x118824u) { return; }
    }
    ctx->pc = 0x118824u;
    // 0x118824: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x118824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x118828: 0x2e021000  sltiu       $v0, $s0, 0x1000
    ctx->pc = 0x118828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x11882c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11882Cu;
    {
        const bool branch_taken_0x11882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11882Cu;
            // 0x118830: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11882c) {
            ctx->pc = 0x1187D0u;
            runtime->cooperativeGuestYield();
            goto label_1187d0;
        }
    }
    ctx->pc = 0x118834u;
    // 0x118834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x118834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11883c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11883cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118840: 0x3e00008  jr          $ra
    ctx->pc = 0x118840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118840u;
            // 0x118844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1187D0u: goto label_1187d0;
            case 0x1187F8u: goto label_1187f8;
            case 0x11880Cu: goto label_11880c;
            case 0x118870u: goto label_118870;
            case 0x1188B4u: goto label_1188b4;
            case 0x1188CCu: goto label_1188cc;
            case 0x1188D8u: goto label_1188d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118848u;
    // 0x118848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11884c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x118850: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x118850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x118854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11885c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x118860: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x118860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x118864: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x118864u;
    {
        const bool branch_taken_0x118864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118864) {
            ctx->pc = 0x118868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118864u;
            // 0x118868: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1188D8u;
            goto label_1188d8;
        }
    }
    ctx->pc = 0x11886Cu;
    // 0x11886c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x11886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_118870:
    // 0x118870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x118870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118874: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x118874u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x118878: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11887c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x11887cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118880: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x118880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x118884: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x118884u;
    {
        const bool branch_taken_0x118884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118884u;
            // 0x118888: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118884) {
            ctx->pc = 0x1188CCu;
            goto label_1188cc;
        }
    }
    ctx->pc = 0x11888Cu;
    // 0x11888c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x11888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x118890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118890u;
    {
        const bool branch_taken_0x118890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118890u;
            // 0x118894: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118890) {
            ctx->pc = 0x1188B4u;
            goto label_1188b4;
        }
    }
    ctx->pc = 0x118898u;
    // 0x118898: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x118898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11889c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11889cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1188a0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1188a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1188A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1188ACu);
        ctx->pc = 0x1188A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188A4u;
            // 0x1188a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1188ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1187D0u: goto label_1187d0;
            case 0x1187F8u: goto label_1187f8;
            case 0x11880Cu: goto label_11880c;
            case 0x118870u: goto label_118870;
            case 0x1188B4u: goto label_1188b4;
            case 0x1188CCu: goto label_1188cc;
            case 0x1188D8u: goto label_1188d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1188ACu; }
            if (ctx->pc != 0x1188ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1188ACu;
    // 0x1188ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1188ACu;
    {
        const bool branch_taken_0x1188ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1188ac) {
            ctx->pc = 0x1188CCu;
            goto label_1188cc;
        }
    }
    ctx->pc = 0x1188B4u;
label_1188b4:
    // 0x1188b4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1188b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1188b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1188bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1188BCu;
    {
        const bool branch_taken_0x1188bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1188bc) {
            ctx->pc = 0x1188CCu;
            goto label_1188cc;
        }
    }
    ctx->pc = 0x1188C4u;
    // 0x1188c4: 0xc040622  jal         func_101888
    ctx->pc = 0x1188C4u;
    SET_GPR_U32(ctx, 31, 0x1188CCu);
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188CCu; }
        if (ctx->pc != 0x1188CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188CCu; }
        if (ctx->pc != 0x1188CCu) { return; }
    }
    ctx->pc = 0x1188CCu;
label_1188cc:
    // 0x1188cc: 0x1640ffe8  bnez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1188CCu;
    {
        const bool branch_taken_0x1188cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1188D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188CCu;
            // 0x1188d0: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188cc) {
            ctx->pc = 0x118870u;
            runtime->cooperativeGuestYield();
            goto label_118870;
        }
    }
    ctx->pc = 0x1188D4u;
    // 0x1188d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1188d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1188d8:
    // 0x1188d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1188d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1188dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1188dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1188e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1188e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1188e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1188E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1188E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188E4u;
            // 0x1188e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1187D0u: goto label_1187d0;
            case 0x1187F8u: goto label_1187f8;
            case 0x11880Cu: goto label_11880c;
            case 0x118870u: goto label_118870;
            case 0x1188B4u: goto label_1188b4;
            case 0x1188CCu: goto label_1188cc;
            case 0x1188D8u: goto label_1188d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1188ECu;
    // 0x1188ec: 0x0  nop
    ctx->pc = 0x1188ecu;
    // NOP
}

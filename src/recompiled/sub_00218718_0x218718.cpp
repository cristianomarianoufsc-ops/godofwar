#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218718
// Address: 0x218718 - 0x218d60
void sub_00218718_0x218718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218718_0x218718");
#endif

    ctx->pc = 0x218718u;

    // 0x218718: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x218718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21871c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x21871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x218720: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218724: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x218724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x218728: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x218728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x21872c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x21872cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218730: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x218730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x218734: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x218734u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218738: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x218738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x21873c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x21873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x218740: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x218740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x218744: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x218744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x218748: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x218748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x21874c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x21874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x218750: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x218750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x218754: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x218754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x218758: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x218758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21875c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x21875cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x218760: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x218760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x218764: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x218768: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x218768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21876c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x21876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218770: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x218770u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x218774: 0xae7e0008  sw          $fp, 0x8($s3)
    ctx->pc = 0x218774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 30));
    // 0x218778: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x218778u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x21877c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21877cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x218780: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x218780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x218784: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x218784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x218788: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x218788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21878c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x21878cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x218794: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x218794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x218798: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x218798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21879c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2187a0: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x2187a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    // 0x2187a4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2187a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2187a8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x2187A8u;
    SET_GPR_U32(ctx, 31, 0x2187B0u);
    ctx->pc = 0x2187ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2187A8u;
            // 0x2187ac: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187B0u; }
        if (ctx->pc != 0x2187B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2187B0u; }
        if (ctx->pc != 0x2187B0u) { return; }
    }
    ctx->pc = 0x2187B0u;
    // 0x2187b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2187b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187b4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2187b8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2187b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2187bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2187bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187c0: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2187c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2187c4: 0xae650020  sw          $a1, 0x20($s3)
    ctx->pc = 0x2187c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 5));
    // 0x2187c8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2187c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2187cc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2187d0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2187d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2187d4: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2187d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2187d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2187dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2187dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2187e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2187e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2187e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2187e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2187e8: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x2187e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x2187ec: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2187ECu;
    {
        const bool branch_taken_0x2187ec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2187F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2187ECu;
            // 0x2187f0: 0xae63001c  sw          $v1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187ec) {
            ctx->pc = 0x21881Cu;
            goto label_21881c;
        }
    }
    ctx->pc = 0x2187F4u;
    // 0x2187f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2187f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2187fc: 0x0  nop
    ctx->pc = 0x2187fcu;
    // NOP
label_218800:
    // 0x218800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218804: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x218808: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x218808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21880c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x21880cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x218810: 0x0  nop
    ctx->pc = 0x218810u;
    // NOP
    // 0x218814: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x218814u;
    {
        const bool branch_taken_0x218814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218814u;
            // 0x218818: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218814) {
            ctx->pc = 0x218800u;
            runtime->cooperativeGuestYield();
            goto label_218800;
        }
    }
    ctx->pc = 0x21881Cu;
label_21881c:
    // 0x21881c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21881cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x218820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x218820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218824: 0x24a57c88  addiu       $a1, $a1, 0x7C88
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31880));
    // 0x218828: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x218828u;
    SET_GPR_U32(ctx, 31, 0x218830u);
    ctx->pc = 0x21882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218828u;
            // 0x21882c: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218830u; }
        if (ctx->pc != 0x218830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218830u; }
        if (ctx->pc != 0x218830u) { return; }
    }
    ctx->pc = 0x218830u;
    // 0x218830: 0xc05e996  jal         func_17A658
    ctx->pc = 0x218830u;
    SET_GPR_U32(ctx, 31, 0x218838u);
    ctx->pc = 0x218834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218830u;
            // 0x218834: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218838u; }
        if (ctx->pc != 0x218838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218838u; }
        if (ctx->pc != 0x218838u) { return; }
    }
    ctx->pc = 0x218838u;
    // 0x218838: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x218838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21883c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x21883cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x218840: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x218844: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x218844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x218848: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x218848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21884c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x218850: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x218850u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x218854: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x218854u;
    {
        const bool branch_taken_0x218854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218854) {
            ctx->pc = 0x218858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218854u;
            // 0x218858: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21885Cu;
            goto label_21885c;
        }
    }
    ctx->pc = 0x21885Cu;
label_21885c:
    // 0x21885c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x21885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x218860: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x218864: 0x1812  mflo        $v1
    ctx->pc = 0x218864u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x218868: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x218868u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21886c: 0x2812  mflo        $a1
    ctx->pc = 0x21886cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x218870: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x218870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x218874: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x218874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x218878: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x218878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x21887c: 0xae630038  sw          $v1, 0x38($s3)
    ctx->pc = 0x21887cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
    // 0x218880: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x218880u;
    SET_GPR_U32(ctx, 31, 0x218888u);
    ctx->pc = 0x218884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218880u;
            // 0x218884: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218888u; }
        if (ctx->pc != 0x218888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218888u; }
        if (ctx->pc != 0x218888u) { return; }
    }
    ctx->pc = 0x218888u;
    // 0x218888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21888c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x21888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x218890: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x218890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x218894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x218898: 0xc04f824  jal         func_13E090
    ctx->pc = 0x218898u;
    SET_GPR_U32(ctx, 31, 0x2188A0u);
    ctx->pc = 0x21889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218898u;
            // 0x21889c: 0x26110014  addiu       $s1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188A0u; }
        if (ctx->pc != 0x2188A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188A0u; }
        if (ctx->pc != 0x2188A0u) { return; }
    }
    ctx->pc = 0x2188A0u;
    // 0x2188a0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2188a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2188a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2188a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2188a8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2188a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2188ac: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2188b0: 0x2483f970  addiu       $v1, $a0, -0x690
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x2188b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2188b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2188b8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2188b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2188bc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2188bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2188c0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x2188C0u;
    SET_GPR_U32(ctx, 31, 0x2188C8u);
    ctx->pc = 0x2188C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2188C0u;
            // 0x2188c4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188C8u; }
        if (ctx->pc != 0x2188C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188C8u; }
        if (ctx->pc != 0x2188C8u) { return; }
    }
    ctx->pc = 0x2188C8u;
    // 0x2188c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2188c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188cc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2188CCu;
    {
        const bool branch_taken_0x2188cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2188cc) {
            ctx->pc = 0x2188F0u;
            goto label_2188f0;
        }
    }
    ctx->pc = 0x2188D4u;
    // 0x2188d4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2188d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2188D8u;
    {
        const bool branch_taken_0x2188d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2188DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188D8u;
            // 0x2188dc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188d8) {
            ctx->pc = 0x2188E8u;
            goto label_2188e8;
        }
    }
    ctx->pc = 0x2188E0u;
    // 0x2188e0: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x2188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
    // 0x2188e4: 0x0  nop
    ctx->pc = 0x2188e4u;
    // NOP
label_2188e8:
    // 0x2188e8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x2188E8u;
    SET_GPR_U32(ctx, 31, 0x2188F0u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188F0u; }
        if (ctx->pc != 0x2188F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188F0u; }
        if (ctx->pc != 0x2188F0u) { return; }
    }
    ctx->pc = 0x2188F0u;
label_2188f0:
    // 0x2188f0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x2188F0u;
    SET_GPR_U32(ctx, 31, 0x2188F8u);
    ctx->pc = 0x2188F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2188F0u;
            // 0x2188f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188F8u; }
        if (ctx->pc != 0x2188F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2188F8u; }
        if (ctx->pc != 0x2188F8u) { return; }
    }
    ctx->pc = 0x2188F8u;
    // 0x2188f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2188F8u;
    {
        const bool branch_taken_0x2188f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188F8u;
            // 0x2188fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188f8) {
            ctx->pc = 0x218908u;
            goto label_218908;
        }
    }
    ctx->pc = 0x218900u;
    // 0x218900: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x218900u;
    SET_GPR_U32(ctx, 31, 0x218908u);
    ctx->pc = 0x218904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218900u;
            // 0x218904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218908u; }
        if (ctx->pc != 0x218908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218908u; }
        if (ctx->pc != 0x218908u) { return; }
    }
    ctx->pc = 0x218908u;
label_218908:
    // 0x218908: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x218908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x21890c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x218910: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x218910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x218914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218918: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x21891c: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x21891cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x218920: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x218920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x218924: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x218924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218928: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x218928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x21892c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x21892cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x218930: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x218930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x218934: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x218934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x218938: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x21893c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x21893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x218940: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x218944: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x218944u;
    SET_GPR_U32(ctx, 31, 0x21894Cu);
    ctx->pc = 0x218948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218944u;
            // 0x218948: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21894Cu; }
        if (ctx->pc != 0x21894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21894Cu; }
        if (ctx->pc != 0x21894Cu) { return; }
    }
    ctx->pc = 0x21894Cu;
    // 0x21894c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x21894cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218950: 0xae70002c  sw          $s0, 0x2C($s3)
    ctx->pc = 0x218950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 16));
    // 0x218954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218958: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x21895c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218960: 0x2482e848  addiu       $v0, $a0, -0x17B8
    ctx->pc = 0x218960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x218964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218968: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21896c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218970: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x218974: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x218978: 0x40f809  jalr        $v0
    ctx->pc = 0x218978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218980u);
        ctx->pc = 0x21897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218978u;
            // 0x21897c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218980u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218800u: goto label_218800;
            case 0x21881Cu: goto label_21881c;
            case 0x21885Cu: goto label_21885c;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F0u: goto label_2188f0;
            case 0x218908u: goto label_218908;
            case 0x218A18u: goto label_218a18;
            case 0x218A1Cu: goto label_218a1c;
            case 0x218B60u: goto label_218b60;
            case 0x218B68u: goto label_218b68;
            case 0x218B80u: goto label_218b80;
            case 0x218C88u: goto label_218c88;
            case 0x218C90u: goto label_218c90;
            case 0x218D18u: goto label_218d18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218980u; }
            if (ctx->pc != 0x218980u) { return; }
        }
        }
    }
    ctx->pc = 0x218980u;
    // 0x218980: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x218980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x218984: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x218984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x218988: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x218988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x21898c: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x21898cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x218990: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x218990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x218994: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x218994u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x218998: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x218998u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x21899c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2189a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2189a4: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2189a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x2189a8: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x2189a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
    // 0x2189ac: 0x3c0afff7  lui         $t2, 0xFFF7
    ctx->pc = 0x2189acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65527 << 16));
    // 0x2189b0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2189b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2189b4: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x2189b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2189b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2189b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2189bc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2189bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2189c0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2189c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2189c4: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x2189c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2189c8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2189c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2189cc: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x2189ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x2189d0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x2189d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2189d4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2189d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2189d8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x2189d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x2189dc: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x2189dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2189e0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2189e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2189e4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x2189e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x2189e8: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x2189e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2189ec: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2189ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2189f0: 0xc0541a6  jal         func_150698
    ctx->pc = 0x2189F0u;
    SET_GPR_U32(ctx, 31, 0x2189F8u);
    ctx->pc = 0x2189F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2189F0u;
            // 0x2189f4: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189F8u; }
        if (ctx->pc != 0x2189F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189F8u; }
        if (ctx->pc != 0x2189F8u) { return; }
    }
    ctx->pc = 0x2189F8u;
    // 0x2189f8: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x2189fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2189FCu;
    {
        const bool branch_taken_0x2189fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2189fc) {
            ctx->pc = 0x218A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2189FCu;
            // 0x218a00: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218A18u;
            goto label_218a18;
        }
    }
    ctx->pc = 0x218A04u;
    // 0x218a04: 0x86c20040  lh          $v0, 0x40($s6)
    ctx->pc = 0x218a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x218a08: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x218a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x218a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x218A10u;
    {
        const bool branch_taken_0x218a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218A10u;
            // 0x218a14: 0xa0620145  sb          $v0, 0x145($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a10) {
            ctx->pc = 0x218A1Cu;
            goto label_218a1c;
        }
    }
    ctx->pc = 0x218A18u;
label_218a18:
    // 0x218a18: 0xa0400145  sb          $zero, 0x145($v0)
    ctx->pc = 0x218a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 325), (uint8_t)GPR_U32(ctx, 0));
label_218a1c:
    // 0x218a1c: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x218a1cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x218a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a24: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x218a24u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x218a28: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x218a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218a2c: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x218a2cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x218a30: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x218a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218a34: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x218a34u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x218a38: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x218a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218a3c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x218a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218a40: 0x3c17002a  lui         $s7, 0x2A
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
    // 0x218a44: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x218a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218a48: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x218a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218a4c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x218a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218a50: 0xc08647a  jal         func_2191E8
    ctx->pc = 0x218A50u;
    SET_GPR_U32(ctx, 31, 0x218A58u);
    ctx->pc = 0x218A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A50u;
            // 0x218a54: 0xfba40090  sqc2        $vf4, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2191E8u;
    if (runtime->hasFunction(0x2191E8u)) {
        auto targetFn = runtime->lookupFunction(0x2191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A58u; }
        if (ctx->pc != 0x218A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002191E8_0x2191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A58u; }
        if (ctx->pc != 0x218A58u) { return; }
    }
    ctx->pc = 0x218A58u;
    // 0x218a58: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x218a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x218a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a60: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x218a60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218a64: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x218a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x218a68: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x218a68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x218a6c: 0xdee4bdf8  ld          $a0, -0x4208($s7)
    ctx->pc = 0x218a6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 4294950392)));
    // 0x218a70: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x218a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218a74: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x218a78: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x218a78u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x218a7c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x218a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x218a80: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x218a80u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x218a84: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x218a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218a88: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x218a88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x218a8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x218a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a90: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x218a90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x218a94: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x218a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218a98: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x218a98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x218a9c: 0xfee4bdf8  sd          $a0, -0x4208($s7)
    ctx->pc = 0x218a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294950392), GPR_U64(ctx, 4));
    // 0x218aa0: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x218aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x218aa4: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x218aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x218aa8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x218aa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218aac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x218aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x218ab0: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x218ab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218abc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218ac0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218ac4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x218ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x218ac8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x218acc: 0x40f809  jalr        $v0
    ctx->pc = 0x218ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218AD4u);
        ctx->pc = 0x218AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218ACCu;
            // 0x218ad0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218AD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218800u: goto label_218800;
            case 0x21881Cu: goto label_21881c;
            case 0x21885Cu: goto label_21885c;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F0u: goto label_2188f0;
            case 0x218908u: goto label_218908;
            case 0x218A18u: goto label_218a18;
            case 0x218A1Cu: goto label_218a1c;
            case 0x218B60u: goto label_218b60;
            case 0x218B68u: goto label_218b68;
            case 0x218B80u: goto label_218b80;
            case 0x218C88u: goto label_218c88;
            case 0x218C90u: goto label_218c90;
            case 0x218D18u: goto label_218d18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218AD4u; }
            if (ctx->pc != 0x218AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x218AD4u;
    // 0x218ad4: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x218ad8: 0xc08658c  jal         func_219630
    ctx->pc = 0x218AD8u;
    SET_GPR_U32(ctx, 31, 0x218AE0u);
    ctx->pc = 0x218ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AD8u;
            // 0x218adc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219630u;
    if (runtime->hasFunction(0x219630u)) {
        auto targetFn = runtime->lookupFunction(0x219630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AE0u; }
        if (ctx->pc != 0x218AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219630_0x219630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AE0u; }
        if (ctx->pc != 0x218AE0u) { return; }
    }
    ctx->pc = 0x218AE0u;
    // 0x218ae0: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x218ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x218ae4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x218ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x218ae8: 0x86c20040  lh          $v0, 0x40($s6)
    ctx->pc = 0x218ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x218aec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x218aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x218af0: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x218AF0u;
    {
        const bool branch_taken_0x218af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218AF0u;
            // 0x218af4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218af0) {
            ctx->pc = 0x218D18u;
            goto label_218d18;
        }
    }
    ctx->pc = 0x218AF8u;
    // 0x218af8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x218AF8u;
    SET_GPR_U32(ctx, 31, 0x218B00u);
    ctx->pc = 0x218AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AF8u;
            // 0x218afc: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B00u; }
        if (ctx->pc != 0x218B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B00u; }
        if (ctx->pc != 0x218B00u) { return; }
    }
    ctx->pc = 0x218B00u;
    // 0x218b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b04: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x218b08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x218b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218b0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x218b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x218b10: 0xc04f824  jal         func_13E090
    ctx->pc = 0x218B10u;
    SET_GPR_U32(ctx, 31, 0x218B18u);
    ctx->pc = 0x218B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B10u;
            // 0x218b14: 0x26110014  addiu       $s1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B18u; }
        if (ctx->pc != 0x218B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B18u; }
        if (ctx->pc != 0x218B18u) { return; }
    }
    ctx->pc = 0x218B18u;
    // 0x218b18: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x218b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x218b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218b20: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x218b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x218b24: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x218b28: 0x24a3f970  addiu       $v1, $a1, -0x690
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x218b2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x218b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x218b30: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x218b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x218b34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x218b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x218b38: 0xc04f824  jal         func_13E090
    ctx->pc = 0x218B38u;
    SET_GPR_U32(ctx, 31, 0x218B40u);
    ctx->pc = 0x218B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B38u;
            // 0x218b3c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B40u; }
        if (ctx->pc != 0x218B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B40u; }
        if (ctx->pc != 0x218B40u) { return; }
    }
    ctx->pc = 0x218B40u;
    // 0x218b40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x218b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b44: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x218B44u;
    {
        const bool branch_taken_0x218b44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b44) {
            ctx->pc = 0x218B68u;
            goto label_218b68;
        }
    }
    ctx->pc = 0x218B4Cu;
    // 0x218b4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x218b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x218b50: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218B50u;
    {
        const bool branch_taken_0x218b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B50u;
            // 0x218b54: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b50) {
            ctx->pc = 0x218B60u;
            goto label_218b60;
        }
    }
    ctx->pc = 0x218B58u;
    // 0x218b58: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
    // 0x218b5c: 0x0  nop
    ctx->pc = 0x218b5cu;
    // NOP
label_218b60:
    // 0x218b60: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x218B60u;
    SET_GPR_U32(ctx, 31, 0x218B68u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B68u; }
        if (ctx->pc != 0x218B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B68u; }
        if (ctx->pc != 0x218B68u) { return; }
    }
    ctx->pc = 0x218B68u;
label_218b68:
    // 0x218b68: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x218B68u;
    SET_GPR_U32(ctx, 31, 0x218B70u);
    ctx->pc = 0x218B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B68u;
            // 0x218b6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B70u; }
        if (ctx->pc != 0x218B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B70u; }
        if (ctx->pc != 0x218B70u) { return; }
    }
    ctx->pc = 0x218B70u;
    // 0x218b70: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x218B70u;
    {
        const bool branch_taken_0x218b70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B70u;
            // 0x218b74: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b70) {
            ctx->pc = 0x218B80u;
            goto label_218b80;
        }
    }
    ctx->pc = 0x218B78u;
    // 0x218b78: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x218B78u;
    SET_GPR_U32(ctx, 31, 0x218B80u);
    ctx->pc = 0x218B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B78u;
            // 0x218b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B80u; }
        if (ctx->pc != 0x218B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B80u; }
        if (ctx->pc != 0x218B80u) { return; }
    }
    ctx->pc = 0x218B80u;
label_218b80:
    // 0x218b80: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x218b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x218b84: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x218b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x218b88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x218b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x218b8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x218b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b90: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x218b94: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x218b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x218b98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x218b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x218b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ba0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x218ba4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x218ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x218ba8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x218bac: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x218bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x218bb0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x218bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x218bb4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x218bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x218bb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x218bbc: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x218BBCu;
    SET_GPR_U32(ctx, 31, 0x218BC4u);
    ctx->pc = 0x218BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218BBCu;
            // 0x218bc0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BC4u; }
        if (ctx->pc != 0x218BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218BC4u; }
        if (ctx->pc != 0x218BC4u) { return; }
    }
    ctx->pc = 0x218BC4u;
    // 0x218bc4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x218bc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218bc8: 0xae700034  sw          $s0, 0x34($s3)
    ctx->pc = 0x218bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 16));
    // 0x218bcc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x218bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x218bd0: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x218bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x218bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218be0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218be4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218be8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x218bec: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x218bf0: 0x40f809  jalr        $v0
    ctx->pc = 0x218BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218BF8u);
        ctx->pc = 0x218BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218BF0u;
            // 0x218bf4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218BF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218800u: goto label_218800;
            case 0x21881Cu: goto label_21881c;
            case 0x21885Cu: goto label_21885c;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F0u: goto label_2188f0;
            case 0x218908u: goto label_218908;
            case 0x218A18u: goto label_218a18;
            case 0x218A1Cu: goto label_218a1c;
            case 0x218B60u: goto label_218b60;
            case 0x218B68u: goto label_218b68;
            case 0x218B80u: goto label_218b80;
            case 0x218C88u: goto label_218c88;
            case 0x218C90u: goto label_218c90;
            case 0x218D18u: goto label_218d18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218BF8u; }
            if (ctx->pc != 0x218BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x218BF8u;
    // 0x218bf8: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x218bf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x218bfc: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x218bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x218c00: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x218c04: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x218c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x218c08: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x218c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x218c0c: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x218c10: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x218c10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x218c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x218c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218c1c: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x218c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x218c20: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x218c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
    // 0x218c24: 0x3c0afff7  lui         $t2, 0xFFF7
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65527 << 16));
    // 0x218c28: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x218c28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x218c2c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x218c30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218c34: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x218c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x218c38: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x218c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x218c3c: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x218c3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x218c40: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x218c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x218c44: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x218c44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x218c48: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x218c48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x218c4c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x218c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x218c50: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x218c50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x218c54: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x218c54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x218c58: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x218c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x218c5c: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x218c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x218c60: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x218c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x218c64: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x218c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x218c68: 0xc0541a6  jal         func_150698
    ctx->pc = 0x218C68u;
    SET_GPR_U32(ctx, 31, 0x218C70u);
    ctx->pc = 0x218C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218C68u;
            // 0x218c6c: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C70u; }
        if (ctx->pc != 0x218C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218C70u; }
        if (ctx->pc != 0x218C70u) { return; }
    }
    ctx->pc = 0x218C70u;
    // 0x218c70: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x218c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x218c74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x218C74u;
    {
        const bool branch_taken_0x218c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218c74) {
            ctx->pc = 0x218C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218C74u;
            // 0x218c78: 0x8e630030  lw          $v1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218C88u;
            goto label_218c88;
        }
    }
    ctx->pc = 0x218C7Cu;
    // 0x218c7c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x218C80u;
    {
        const bool branch_taken_0x218c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C80u;
            // 0x218c84: 0xa0400145  sb          $zero, 0x145($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 325), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c80) {
            ctx->pc = 0x218C90u;
            goto label_218c90;
        }
    }
    ctx->pc = 0x218C88u;
label_218c88:
    // 0x218c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218c8c: 0xa0620145  sb          $v0, 0x145($v1)
    ctx->pc = 0x218c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 325), (uint8_t)GPR_U32(ctx, 2));
label_218c90:
    // 0x218c90: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218c94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x218c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218c98: 0xdee5bdf8  ld          $a1, -0x4208($s7)
    ctx->pc = 0x218c98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 4294950392)));
    // 0x218c9c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x218c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x218ca0: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x218ca4: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x218ca4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x218ca8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x218ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218cac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x218cacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x218cb0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x218cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x218cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cb8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x218cb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x218cbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x218cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cc0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x218cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218cc4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x218cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x218cc8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x218cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218ccc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x218cccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x218cd0: 0xfee5bdf8  sd          $a1, -0x4208($s7)
    ctx->pc = 0x218cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294950392), GPR_U64(ctx, 5));
    // 0x218cd4: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218cd8: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x218cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
    // 0x218cdc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x218cdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218ce0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x218ce4: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x218ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x218ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218cf4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x218cf8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x218cfc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x218cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x218d00: 0x40f809  jalr        $v0
    ctx->pc = 0x218D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218D08u);
        ctx->pc = 0x218D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D00u;
            // 0x218d04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218D08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218800u: goto label_218800;
            case 0x21881Cu: goto label_21881c;
            case 0x21885Cu: goto label_21885c;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F0u: goto label_2188f0;
            case 0x218908u: goto label_218908;
            case 0x218A18u: goto label_218a18;
            case 0x218A1Cu: goto label_218a1c;
            case 0x218B60u: goto label_218b60;
            case 0x218B68u: goto label_218b68;
            case 0x218B80u: goto label_218b80;
            case 0x218C88u: goto label_218c88;
            case 0x218C90u: goto label_218c90;
            case 0x218D18u: goto label_218d18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218D08u; }
            if (ctx->pc != 0x218D08u) { return; }
        }
        }
    }
    ctx->pc = 0x218D08u;
    // 0x218d08: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218d0c: 0xc08658c  jal         func_219630
    ctx->pc = 0x218D0Cu;
    SET_GPR_U32(ctx, 31, 0x218D14u);
    ctx->pc = 0x218D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218D0Cu;
            // 0x218d10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219630u;
    if (runtime->hasFunction(0x219630u)) {
        auto targetFn = runtime->lookupFunction(0x219630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D14u; }
        if (ctx->pc != 0x218D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219630_0x219630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218D14u; }
        if (ctx->pc != 0x218D14u) { return; }
    }
    ctx->pc = 0x218D14u;
    // 0x218d14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_218d18:
    // 0x218d18: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x218d1c: 0x24428fb8  addiu       $v0, $v0, -0x7048
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938552));
    // 0x218d20: 0x24638f98  addiu       $v1, $v1, -0x7068
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938520));
    // 0x218d24: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x218d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x218d28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x218d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d2c: 0xafc30034  sw          $v1, 0x34($fp)
    ctx->pc = 0x218d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
    // 0x218d30: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x218d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x218d34: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x218d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x218d38: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x218d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x218d3c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x218d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x218d40: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x218d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x218d44: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x218d44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x218d48: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x218d48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x218d4c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x218d4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x218d50: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x218d50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218d54: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x218d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x218d58: 0x3e00008  jr          $ra
    ctx->pc = 0x218D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218D58u;
            // 0x218d5c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218800u: goto label_218800;
            case 0x21881Cu: goto label_21881c;
            case 0x21885Cu: goto label_21885c;
            case 0x2188E8u: goto label_2188e8;
            case 0x2188F0u: goto label_2188f0;
            case 0x218908u: goto label_218908;
            case 0x218A18u: goto label_218a18;
            case 0x218A1Cu: goto label_218a1c;
            case 0x218B60u: goto label_218b60;
            case 0x218B68u: goto label_218b68;
            case 0x218B80u: goto label_218b80;
            case 0x218C88u: goto label_218c88;
            case 0x218C90u: goto label_218c90;
            case 0x218D18u: goto label_218d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218D60u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B8D0
// Address: 0x17b8d0 - 0x17bbc8
void sub_0017B8D0_0x17b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8D0_0x17b8d0");
#endif

    ctx->pc = 0x17b8d0u;

    // 0x17b8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b8d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17b8d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17b8dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b8e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17b8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b8ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b8f0: 0x8c53001c  lw          $s3, 0x1C($v0)
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17b8f4: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x17B8F4u;
    {
        const bool branch_taken_0x17b8f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8F4u;
            // 0x17b8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8f4) {
            ctx->pc = 0x17B92Cu;
            goto label_17b92c;
        }
    }
    ctx->pc = 0x17B8FCu;
    // 0x17b8fc: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x17b8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17b900: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x17b900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17b904: 0x0  nop
    ctx->pc = 0x17b904u;
    // NOP
label_17b908:
    // 0x17b908: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17b908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b90c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17b910: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17b914: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b918: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x17b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17b91c: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x17b91cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17b920: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17b920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17b924: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B924u;
    {
        const bool branch_taken_0x17b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B924u;
            // 0x17b928: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b924) {
            ctx->pc = 0x17B908u;
            runtime->cooperativeGuestYield();
            goto label_17b908;
        }
    }
    ctx->pc = 0x17B92Cu;
label_17b92c:
    // 0x17b92c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b930: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b934: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b938: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x17b938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x17b93c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x17b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x17b940: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17b940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x17b944: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x17b944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17b948: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17b948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17b94c: 0x1204002e  beq         $s0, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17B94Cu;
    {
        const bool branch_taken_0x17b94c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x17B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B94Cu;
            // 0x17b950: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b94c) {
            ctx->pc = 0x17BA08u;
            goto label_17ba08;
        }
    }
    ctx->pc = 0x17B954u;
    // 0x17b954: 0x0  nop
    ctx->pc = 0x17b954u;
    // NOP
label_17b958:
    // 0x17b958: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x17b958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b95c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b964: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x17b964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17b968: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x17b968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x17b96c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x17b970: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x17B970u;
    {
        const bool branch_taken_0x17b970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B970u;
            // 0x17b974: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b970) {
            ctx->pc = 0x17B9A0u;
            goto label_17b9a0;
        }
    }
    ctx->pc = 0x17B978u;
    // 0x17b978: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b97c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x17b97cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x17b980: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17b984: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17b984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17b988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b98c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17b994: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17B994u;
    {
        const bool branch_taken_0x17b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B994u;
            // 0x17b998: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b994) {
            ctx->pc = 0x17B9F8u;
            goto label_17b9f8;
        }
    }
    ctx->pc = 0x17B99Cu;
    // 0x17b99c: 0x0  nop
    ctx->pc = 0x17b99cu;
    // NOP
label_17b9a0:
    // 0x17b9a0: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x17b9a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x17b9a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b9a8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x17b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17b9ac: 0x45202a  slt         $a0, $v0, $a1
    ctx->pc = 0x17b9acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17b9b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17b9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17b9b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17b9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17b9b8: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x17b9b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x17b9bc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x17b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17b9c0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17b9c4: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x17b9c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x17b9c8: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x17b9c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x17b9cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17b9ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b9d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b9d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17b9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b9e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17b9e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17b9e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b9e8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x17b9e8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x17b9ec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17b9ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17b9f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17b9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17b9f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17b9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17b9f8:
    // 0x17b9f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17b9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17b9fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ba00: 0x1602ffd5  bne         $s0, $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17BA00u;
    {
        const bool branch_taken_0x17ba00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA00u;
            // 0x17ba04: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba00) {
            ctx->pc = 0x17B958u;
            runtime->cooperativeGuestYield();
            goto label_17b958;
        }
    }
    ctx->pc = 0x17BA08u;
label_17ba08:
    // 0x17ba08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ba0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ba10: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x17ba10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17ba14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17ba18: 0x12030030  beq         $s0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x17BA18u;
    {
        const bool branch_taken_0x17ba18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA18u;
            // 0x17ba1c: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba18) {
            ctx->pc = 0x17BADCu;
            goto label_17badc;
        }
    }
    ctx->pc = 0x17BA20u;
    // 0x17ba20: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17ba24: 0x0  nop
    ctx->pc = 0x17ba24u;
    // NOP
label_17ba28:
    // 0x17ba28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BA28u;
    {
        const bool branch_taken_0x17ba28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA28u;
            // 0x17ba2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba28) {
            ctx->pc = 0x17BA40u;
            goto label_17ba40;
        }
    }
    ctx->pc = 0x17BA30u;
    // 0x17ba30: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17BA30u;
    {
        const bool branch_taken_0x17ba30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ba30) {
            ctx->pc = 0x17BA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA30u;
            // 0x17ba34: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BA78u;
            goto label_17ba78;
        }
    }
    ctx->pc = 0x17BA38u;
    // 0x17ba38: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17BA38u;
    {
        const bool branch_taken_0x17ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA38u;
            // 0x17ba3c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba38) {
            ctx->pc = 0x17BAC4u;
            goto label_17bac4;
        }
    }
    ctx->pc = 0x17BA40u;
label_17ba40:
    // 0x17ba40: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x17ba40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17ba44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ba48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ba4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x17ba50: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x17ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x17ba54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17ba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17ba58: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA58u;
            // 0x17ba5c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BAC4u;
            goto label_17bac4;
        }
    }
    ctx->pc = 0x17BA60u;
    // 0x17ba60: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x17ba60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x17ba64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ba68: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x17ba6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ba70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17BA70u;
    {
        const bool branch_taken_0x17ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA70u;
            // 0x17ba74: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba70) {
            ctx->pc = 0x17BAC0u;
            goto label_17bac0;
        }
    }
    ctx->pc = 0x17BA78u;
label_17ba78:
    // 0x17ba78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ba7c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x17ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17ba80: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x17ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17ba84: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x17ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x17ba88: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x17ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x17ba8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17ba90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17ba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17ba94: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17BA94u;
    {
        const bool branch_taken_0x17ba94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba94) {
            ctx->pc = 0x17BA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA94u;
            // 0x17ba98: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BAC4u;
            goto label_17bac4;
        }
    }
    ctx->pc = 0x17BA9Cu;
    // 0x17ba9c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x17ba9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x17baa0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x17baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17baa4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17baa8: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x17baac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x17bab0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17bab4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x17bab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17bab8: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x17bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x17babc: 0x0  nop
    ctx->pc = 0x17babcu;
    // NOP
label_17bac0:
    // 0x17bac0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17bac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_17bac4:
    // 0x17bac4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17bac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17bac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bacc: 0x5602ffd6  bnel        $s0, $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x17BACCu;
    {
        const bool branch_taken_0x17bacc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17bacc) {
            ctx->pc = 0x17BAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BACCu;
            // 0x17bad0: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BA28u;
            runtime->cooperativeGuestYield();
            goto label_17ba28;
        }
    }
    ctx->pc = 0x17BAD4u;
    // 0x17bad4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bad8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17badc:
    // 0x17badc: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x17badcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17bae0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17bae4: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BAE4u;
    {
        const bool branch_taken_0x17bae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAE4u;
            // 0x17bae8: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bae4) {
            ctx->pc = 0x17BB28u;
            goto label_17bb28;
        }
    }
    ctx->pc = 0x17BAECu;
    // 0x17baec: 0x0  nop
    ctx->pc = 0x17baecu;
    // NOP
label_17baf0:
    // 0x17baf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17baf4: 0xc05eff4  jal         func_17BFD0
    ctx->pc = 0x17BAF4u;
    SET_GPR_U32(ctx, 31, 0x17BAFCu);
    ctx->pc = 0x17BAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAF4u;
            // 0x17baf8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BFD0u;
    if (runtime->hasFunction(0x17BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x17BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAFCu; }
        if (ctx->pc != 0x17BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bfd0_0x17bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAFCu; }
        if (ctx->pc != 0x17BAFCu) { return; }
    }
    ctx->pc = 0x17BAFCu;
    // 0x17bafc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BAFCu;
    {
        const bool branch_taken_0x17bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAFCu;
            // 0x17bb00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bafc) {
            ctx->pc = 0x17BB18u;
            goto label_17bb18;
        }
    }
    ctx->pc = 0x17BB04u;
    // 0x17bb04: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x17bb04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17bb08: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x17bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17bb0c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x17bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x17bb10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x17bb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x17bb14: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x17bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_17bb18:
    // 0x17bb18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17bb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17bb1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bb20: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17BB20u;
    {
        const bool branch_taken_0x17bb20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB20u;
            // 0x17bb24: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb20) {
            ctx->pc = 0x17BAF0u;
            runtime->cooperativeGuestYield();
            goto label_17baf0;
        }
    }
    ctx->pc = 0x17BB28u;
label_17bb28:
    // 0x17bb28: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x17BB28u;
    {
        const bool branch_taken_0x17bb28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB28u;
            // 0x17bb2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb28) {
            ctx->pc = 0x17BBA8u;
            goto label_17bba8;
        }
    }
    ctx->pc = 0x17BB30u;
    // 0x17bb30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17bb34: 0x0  nop
    ctx->pc = 0x17bb34u;
    // NOP
label_17bb38:
    // 0x17bb38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bb3c: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x17bb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x17bb40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17bb44: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x17bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17bb48: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x17bb48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17bb4c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x17bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17bb50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x17bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17bb58: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bb5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17bb5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bb60: 0x0  nop
    ctx->pc = 0x17bb60u;
    // NOP
    // 0x17bb64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17BB64u;
    {
        const bool branch_taken_0x17bb64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bb64) {
            ctx->pc = 0x17BB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB64u;
            // 0x17bb68: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BB6Cu;
            goto label_17bb6c;
        }
    }
    ctx->pc = 0x17BB6Cu;
label_17bb6c:
    // 0x17bb6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17bb70: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17bb74: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x17bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17bb78: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17bb7c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x17bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17bb80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bb88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17bb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bb8c: 0x0  nop
    ctx->pc = 0x17bb8cu;
    // NOP
    // 0x17bb90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17BB90u;
    {
        const bool branch_taken_0x17bb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bb90) {
            ctx->pc = 0x17BB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB90u;
            // 0x17bb94: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BB98u;
            goto label_17bb98;
        }
    }
    ctx->pc = 0x17BB98u;
label_17bb98:
    // 0x17bb98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17bb9c: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x17bb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17bba0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17BBA0u;
    {
        const bool branch_taken_0x17bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBA0u;
            // 0x17bba4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bba0) {
            ctx->pc = 0x17BB38u;
            runtime->cooperativeGuestYield();
            goto label_17bb38;
        }
    }
    ctx->pc = 0x17BBA8u;
label_17bba8:
    // 0x17bba8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17bbac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17bbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bbb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bbb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bbb4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17bbb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBBCu;
            // 0x17bbc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B908u: goto label_17b908;
            case 0x17B92Cu: goto label_17b92c;
            case 0x17B958u: goto label_17b958;
            case 0x17B9A0u: goto label_17b9a0;
            case 0x17B9F8u: goto label_17b9f8;
            case 0x17BA08u: goto label_17ba08;
            case 0x17BA28u: goto label_17ba28;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB98u: goto label_17bb98;
            case 0x17BBA8u: goto label_17bba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BBC4u;
    // 0x17bbc4: 0x0  nop
    ctx->pc = 0x17bbc4u;
    // NOP
}

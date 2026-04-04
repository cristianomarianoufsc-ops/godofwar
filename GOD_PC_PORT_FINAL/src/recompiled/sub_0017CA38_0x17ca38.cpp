#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CA38
// Address: 0x17ca38 - 0x17cbd0
void sub_0017CA38_0x17ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CA38_0x17ca38");
#endif

    ctx->pc = 0x17ca38u;

    // 0x17ca38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17ca3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17ca40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ca44: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x17ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x17ca48: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x17ca48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x17ca4c: 0x8e034718  lw          $v1, 0x4718($s0)
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17ca50: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17ca54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17ca58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17ca5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ca60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ca64: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x17ca64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x17ca68: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x17ca68u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17ca6c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x17ca6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca70: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x17ca70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17ca74: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x17ca74u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x17ca78: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x17ca78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17ca7c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x17ca7cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x17ca80: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x17ca80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17ca84: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x17ca84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x17ca88: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17ca88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17ca8c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x17ca8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x17ca90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x17ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x17ca94: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17ca94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x17ca98: 0x8e234710  lw          $v1, 0x4710($s1)
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17ca9c: 0x8e024718  lw          $v0, 0x4718($s0)
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17caa0: 0x8e464714  lw          $a2, 0x4714($s2)
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17caa4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17caa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17caac: 0xae234710  sw          $v1, 0x4710($s1)
    ctx->pc = 0x17caacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 3));
    // 0x17cab0: 0xae024718  sw          $v0, 0x4718($s0)
    ctx->pc = 0x17cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 2));
    // 0x17cab4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x17cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17cab8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x17cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x17cabc: 0x8e234710  lw          $v1, 0x4710($s1)
    ctx->pc = 0x17cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17cac0: 0x8e024718  lw          $v0, 0x4718($s0)
    ctx->pc = 0x17cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cac4: 0x8e454714  lw          $a1, 0x4714($s2)
    ctx->pc = 0x17cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cac8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cacc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cad0: 0xae234710  sw          $v1, 0x4710($s1)
    ctx->pc = 0x17cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 3));
    // 0x17cad4: 0xae024718  sw          $v0, 0x4718($s0)
    ctx->pc = 0x17cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 2));
    // 0x17cad8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17cadc: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x17cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x17cae0: 0x8e234710  lw          $v1, 0x4710($s1)
    ctx->pc = 0x17cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17cae4: 0x8e024718  lw          $v0, 0x4718($s0)
    ctx->pc = 0x17cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cae8: 0x8e454714  lw          $a1, 0x4714($s2)
    ctx->pc = 0x17cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17caec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17caf0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17caf4: 0xae234710  sw          $v1, 0x4710($s1)
    ctx->pc = 0x17caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 3));
    // 0x17caf8: 0xae024718  sw          $v0, 0x4718($s0)
    ctx->pc = 0x17caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 2));
    // 0x17cafc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17cb00: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x17cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x17cb04: 0x8e024718  lw          $v0, 0x4718($s0)
    ctx->pc = 0x17cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cb08: 0x8e234710  lw          $v1, 0x4710($s1)
    ctx->pc = 0x17cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17cb0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cb10: 0xae024718  sw          $v0, 0x4718($s0)
    ctx->pc = 0x17cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 2));
    // 0x17cb14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cb18: 0xc05f1a2  jal         func_17C688
    ctx->pc = 0x17CB18u;
    SET_GPR_U32(ctx, 31, 0x17CB20u);
    ctx->pc = 0x17CB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB18u;
            // 0x17cb1c: 0xae234710  sw          $v1, 0x4710($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C688u;
    if (runtime->hasFunction(0x17C688u)) {
        auto targetFn = runtime->lookupFunction(0x17C688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB20u; }
        if (ctx->pc != 0x17CB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c688_0x17c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB20u; }
        if (ctx->pc != 0x17CB20u) { return; }
    }
    ctx->pc = 0x17CB20u;
    // 0x17cb20: 0x8e034718  lw          $v1, 0x4718($s0)
    ctx->pc = 0x17cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cb24: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cb30: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x17cb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17cb34: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17cb38: 0x8e034718  lw          $v1, 0x4718($s0)
    ctx->pc = 0x17cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cb3c: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb40: 0x8e244710  lw          $a0, 0x4710($s1)
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17cb44: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x17cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x17cb48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17cb4c: 0xae054718  sw          $a1, 0x4718($s0)
    ctx->pc = 0x17cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 5));
    // 0x17cb50: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x17cb50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17cb54: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x17cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x17cb58: 0xae244710  sw          $a0, 0x4710($s1)
    ctx->pc = 0x17cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 4));
    // 0x17cb5c: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb60: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x17cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17cb64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17cb68: 0xe4560008  swc1        $f22, 0x8($v0)
    ctx->pc = 0x17cb68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17cb6c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x17cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17cb70: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17cb78: 0xe457000c  swc1        $f23, 0xC($v0)
    ctx->pc = 0x17cb78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17cb7c: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x17cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17cb80: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17cb88: 0xe4780010  swc1        $f24, 0x10($v1)
    ctx->pc = 0x17cb88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x17cb8c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x17cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17cb90: 0x8e424714  lw          $v0, 0x4714($s2)
    ctx->pc = 0x17cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18196)));
    // 0x17cb94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17cb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cb9c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x17cba0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17cba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cba4: 0x8e024718  lw          $v0, 0x4718($s0)
    ctx->pc = 0x17cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18200)));
    // 0x17cba8: 0x8e234710  lw          $v1, 0x4710($s1)
    ctx->pc = 0x17cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18192)));
    // 0x17cbac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17cbb0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cbb4: 0xae024718  sw          $v0, 0x4718($s0)
    ctx->pc = 0x17cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18200), GPR_U32(ctx, 2));
    // 0x17cbb8: 0xae234710  sw          $v1, 0x4710($s1)
    ctx->pc = 0x17cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18192), GPR_U32(ctx, 3));
    // 0x17cbbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17cbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cbc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17cbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBC4u;
            // 0x17cbc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CBCCu;
    // 0x17cbcc: 0x0  nop
    ctx->pc = 0x17cbccu;
    // NOP
}

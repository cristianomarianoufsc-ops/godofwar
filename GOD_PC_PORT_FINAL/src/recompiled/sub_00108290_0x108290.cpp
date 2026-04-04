#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108290
// Address: 0x108290 - 0x108760
void sub_00108290_0x108290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108290_0x108290");
#endif

    ctx->pc = 0x108290u;

    // 0x108290: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x108294: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x108298: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x108298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x10829c: 0x46007246  mov.s       $f9, $f14
    ctx->pc = 0x10829cu;
    ctx->f[9] = FPU_MOV_S(ctx->f[14]);
    // 0x1082a0: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x1082a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x1082a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1082a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082a8: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x1082a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x1082ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1082acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b0: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x1082b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x1082b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1082b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082b8: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x1082b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x1082bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1082bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c0: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x1082c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x1082c4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1082c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082c8: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x1082c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x1082cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1082ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d0: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x1082d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x1082d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1082d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082d8: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x1082d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x1082dc: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x1082dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1082e0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1082e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1082e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1082e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1082e8: 0x8cb30014  lw          $s3, 0x14($a1)
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1082ec: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1082ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1082f0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1082f4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1082f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1082f8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1082F8u;
    {
        const bool branch_taken_0x1082f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1082F8u;
            // 0x1082fc: 0x46010282  mul.s       $f10, $f0, $f1 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f8) {
            ctx->pc = 0x108380u;
            goto label_108380;
        }
    }
    ctx->pc = 0x108300u;
    // 0x108300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x108300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108304: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108304u;
    {
        const bool branch_taken_0x108304 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x108308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108304u;
            // 0x108308: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108304) {
            ctx->pc = 0x108314u;
            goto label_108314;
        }
    }
    ctx->pc = 0x10830Cu;
    // 0x10830c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10830cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108310: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x108310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_108314:
    // 0x108314: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x108314u;
    {
        const bool branch_taken_0x108314 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108314u;
            // 0x108318: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108314) {
            ctx->pc = 0x108378u;
            goto label_108378;
        }
    }
    ctx->pc = 0x10831Cu;
    // 0x10831c: 0x0  nop
    ctx->pc = 0x10831cu;
    // NOP
label_108320:
    // 0x108320: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x108320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x108324: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x108328: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x108328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10832c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x10832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x108330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108334: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x108334u;
    {
        const bool branch_taken_0x108334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108334u;
            // 0x108338: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108334) {
            ctx->pc = 0x108340u;
            goto label_108340;
        }
    }
    ctx->pc = 0x10833Cu;
    // 0x10833c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x10833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108340:
    // 0x108340: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x108340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x108344: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x108344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x108348: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x108348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10834c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x10834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x108350: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x108350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x108354: 0x247282a  slt         $a1, $s2, $a3
    ctx->pc = 0x108354u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x108358: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10835c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108360: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x108360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x108364: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x108364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x108368: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x108368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x10836c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x10836cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108370: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x108370u;
    {
        const bool branch_taken_0x108370 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x108374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108370u;
            // 0x108374: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108370) {
            ctx->pc = 0x108320u;
            runtime->cooperativeGuestYield();
            goto label_108320;
        }
    }
    ctx->pc = 0x108378u;
label_108378:
    // 0x108378: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10837c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10837cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108380:
    // 0x108380: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108384: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x108384u;
    {
        const bool branch_taken_0x108384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108384u;
            // 0x108388: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108384) {
            ctx->pc = 0x108410u;
            goto label_108410;
        }
    }
    ctx->pc = 0x10838Cu;
    // 0x10838c: 0x0  nop
    ctx->pc = 0x10838cu;
    // NOP
label_108390:
    // 0x108390: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x108390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x108394: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x108398: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x108398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10839c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x10839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1083a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1083a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1083a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1083A4u;
    {
        const bool branch_taken_0x1083a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1083A4u;
            // 0x1083a8: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083a4) {
            ctx->pc = 0x1083B0u;
            goto label_1083b0;
        }
    }
    ctx->pc = 0x1083ACu;
    // 0x1083ac: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x1083acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1083b0:
    // 0x1083b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1083b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1083b4: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1083b8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1083b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1083bc: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x1083bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1083c0: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1083c4: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1083c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1083c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1083cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1083ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1083d0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1083d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1083d4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1083d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1083d8: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x1083d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x1083dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1083dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1083e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1083e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1083e4: 0x0  nop
    ctx->pc = 0x1083e4u;
    // NOP
    // 0x1083e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1083E8u;
    {
        const bool branch_taken_0x1083e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1083ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1083E8u;
            // 0x1083ec: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083e8) {
            ctx->pc = 0x1083F4u;
            goto label_1083f4;
        }
    }
    ctx->pc = 0x1083F0u;
    // 0x1083f0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1083f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1083f4:
    // 0x1083f4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1083f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1083f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1083f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1083fc: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1083fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108400: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108404: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x108404u;
    {
        const bool branch_taken_0x108404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108404u;
            // 0x108408: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108404) {
            ctx->pc = 0x108390u;
            runtime->cooperativeGuestYield();
            goto label_108390;
        }
    }
    ctx->pc = 0x10840Cu;
    // 0x10840c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_108410:
    // 0x108410: 0x2a22818  mult        $a1, $s5, $v0
    ctx->pc = 0x108410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108414: 0x10e00067  beqz        $a3, . + 4 + (0x67 << 2)
    ctx->pc = 0x108414u;
    {
        const bool branch_taken_0x108414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108414u;
            // 0x108418: 0x3a52021  addu        $a0, $sp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108414) {
            ctx->pc = 0x1085B4u;
            goto label_1085b4;
        }
    }
    ctx->pc = 0x10841Cu;
    // 0x10841c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x10841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108420: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x108420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x108424: 0x460e0834  c.lt.s      $f1, $f14
    ctx->pc = 0x108424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108428: 0x0  nop
    ctx->pc = 0x108428u;
    // NOP
    // 0x10842c: 0x4503006b  bc1tl       . + 4 + (0x6B << 2)
    ctx->pc = 0x10842Cu;
    {
        const bool branch_taken_0x10842c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10842c) {
            ctx->pc = 0x108430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10842Cu;
            // 0x108430: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1085DCu;
            goto label_1085dc;
        }
    }
    ctx->pc = 0x108434u;
    // 0x108434: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x108434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x108438: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x108438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x10843c: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10843Cu;
    {
        const bool branch_taken_0x10843c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x108440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10843Cu;
            // 0x108440: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10843c) {
            ctx->pc = 0x108474u;
            goto label_108474;
        }
    }
    ctx->pc = 0x108444u;
    // 0x108444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108448: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x108448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10844c: 0x1680002e  bnez        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x10844Cu;
    {
        const bool branch_taken_0x10844c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x108450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10844Cu;
            // 0x108450: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10844c) {
            ctx->pc = 0x108508u;
            goto label_108508;
        }
    }
    ctx->pc = 0x108454u;
    // 0x108454: 0x460e4803  div.s       $f0, $f9, $f14
    ctx->pc = 0x108454u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[0] = ctx->f[9] / ctx->f[14];
    // 0x108458: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x108458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10845c: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x10845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108460: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x108460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x108464: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x108464u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x108468: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x108468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10846c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10846Cu;
            // 0x108470: 0xe621004c  swc1        $f1, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x108508u;
            goto label_108508;
        }
    }
    ctx->pc = 0x108474u;
label_108474:
    // 0x108474: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x108474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x108478: 0x460e0841  sub.s       $f1, $f1, $f14
    ctx->pc = 0x108478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x10847c: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x10847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108484: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x108484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x108488: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x108488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10848c: 0x460e2001  sub.s       $f0, $f4, $f14
    ctx->pc = 0x10848cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[14]);
    // 0x108490: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x108490u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
    // 0x108494: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x108494u;
    {
        const bool branch_taken_0x108494 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108494u;
            // 0x108498: 0x46064141  sub.s       $f5, $f8, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108494) {
            ctx->pc = 0x1084D4u;
            goto label_1084d4;
        }
    }
    ctx->pc = 0x10849Cu;
    // 0x10849c: 0x46057002  mul.s       $f0, $f14, $f5
    ctx->pc = 0x10849cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x1084a0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1084a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1084a4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x1084a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1084a8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1084a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1084ac: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1084acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1084b0: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x1084b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1084b4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1084b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1084b8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1084b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1084bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1084bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1084c0: 0x46004803  div.s       $f0, $f9, $f0
    ctx->pc = 0x1084c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[0] = ctx->f[9] / ctx->f[0];
    // 0x1084c4: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1084c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1084c8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1084c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1084cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1084ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1084d0: 0xe623004c  swc1        $f3, 0x4C($s1)
    ctx->pc = 0x1084d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_1084d4:
    // 0x1084d4: 0x46072828  max.s       $f0, $f5, $f7
    ctx->pc = 0x1084d4u;
    ctx->f[0] = std::max(ctx->f[5], ctx->f[7]);
    // 0x1084d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1084dc: 0x46080029  min.s       $f0, $f0, $f8
    ctx->pc = 0x1084dcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[8]);
    // 0x1084e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1084e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1084e4: 0x46073028  max.s       $f0, $f6, $f7
    ctx->pc = 0x1084e4u;
    ctx->f[0] = std::max(ctx->f[6], ctx->f[7]);
    // 0x1084e8: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1084ec: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1084ECu;
    {
        const bool branch_taken_0x1084ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1084F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084ECu;
            // 0x1084f0: 0x46080069  min.s       $f1, $f0, $f8 (Delay Slot)
        ctx->f[1] = std::min(ctx->f[0], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084ec) {
            ctx->pc = 0x108500u;
            goto label_108500;
        }
    }
    ctx->pc = 0x1084F4u;
    // 0x1084f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1084f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1084F8u;
    {
        const bool branch_taken_0x1084f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084F8u;
            // 0x1084fc: 0x460009c6  mov.s       $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f8) {
            ctx->pc = 0x108508u;
            goto label_108508;
        }
    }
    ctx->pc = 0x108500u;
label_108500:
    // 0x108500: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108504: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x108504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_108508:
    // 0x108508: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x108508u;
    {
        const bool branch_taken_0x108508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108508) {
            ctx->pc = 0x108690u;
            goto label_108690;
        }
    }
    ctx->pc = 0x108510u;
    // 0x108510: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x108510u;
    {
        const bool branch_taken_0x108510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x108510) {
            ctx->pc = 0x108548u;
            goto label_108548;
        }
    }
    ctx->pc = 0x108518u;
    // 0x108518: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x108518u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x10851c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108520: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108524: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x108524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x108528: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x108528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10852c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x10852cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x108530: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x108530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108534: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x108534u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x108538: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x108538u;
    {
        const bool branch_taken_0x108538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108538u;
            // 0x10853c: 0x460039c1  sub.s       $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108538) {
            ctx->pc = 0x1085A0u;
            goto label_1085a0;
        }
    }
    ctx->pc = 0x108540u;
    // 0x108540: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x108540u;
    {
        const bool branch_taken_0x108540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108540u;
            // 0x108544: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108540) {
            ctx->pc = 0x1085A4u;
            goto label_1085a4;
        }
    }
    ctx->pc = 0x108548u;
label_108548:
    // 0x108548: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x108548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10854c: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x10854cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108550: 0x0  nop
    ctx->pc = 0x108550u;
    // NOP
    // 0x108554: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x108554u;
    {
        const bool branch_taken_0x108554 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x108558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108554u;
            // 0x108558: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108554) {
            ctx->pc = 0x108574u;
            goto label_108574;
        }
    }
    ctx->pc = 0x10855Cu;
    // 0x10855c: 0x46076802  mul.s       $f0, $f13, $f7
    ctx->pc = 0x10855cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x108560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x108560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108564: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x108564u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x108568: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x108568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x10856c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x10856Cu;
    {
        const bool branch_taken_0x10856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10856Cu;
            // 0x108570: 0xe4670018  swc1        $f7, 0x18($v1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10856c) {
            ctx->pc = 0x108690u;
            goto label_108690;
        }
    }
    ctx->pc = 0x108574u;
label_108574:
    // 0x108574: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x108574u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x108578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10857c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10857cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108580: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x108580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x108584: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x108584u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x108588: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x108588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10858c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x10858cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x108590: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x108590u;
    {
        const bool branch_taken_0x108590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108590u;
            // 0x108594: 0x460039c1  sub.s       $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108590) {
            ctx->pc = 0x1085A0u;
            goto label_1085a0;
        }
    }
    ctx->pc = 0x108598u;
    // 0x108598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108598u;
    {
        const bool branch_taken_0x108598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108598u;
            // 0x10859c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108598) {
            ctx->pc = 0x1085A4u;
            goto label_1085a4;
        }
    }
    ctx->pc = 0x1085A0u;
label_1085a0:
    // 0x1085a0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1085a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1085a4:
    // 0x1085a4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1085a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1085a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1085ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1085ACu;
    {
        const bool branch_taken_0x1085ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085ACu;
            // 0x1085b0: 0xe4470018  swc1        $f7, 0x18($v0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085ac) {
            ctx->pc = 0x108690u;
            goto label_108690;
        }
    }
    ctx->pc = 0x1085B4u;
label_1085b4:
    // 0x1085b4: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x1085b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1085b8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1085b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1085bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1085bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1085c0: 0x0  nop
    ctx->pc = 0x1085c0u;
    // NOP
    // 0x1085c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1085C4u;
    {
        const bool branch_taken_0x1085c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1085c4) {
            ctx->pc = 0x1085C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1085C4u;
            // 0x1085c8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1085DCu;
            goto label_1085dc;
        }
    }
    ctx->pc = 0x1085CCu;
    // 0x1085cc: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1085ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1085d0: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1085D0u;
    {
        const bool branch_taken_0x1085d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1085D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085D0u;
            // 0x1085d4: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d0) {
            ctx->pc = 0x108610u;
            goto label_108610;
        }
    }
    ctx->pc = 0x1085D8u;
    // 0x1085d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1085d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1085dc:
    // 0x1085dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1085dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1085e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1085e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1085e4: 0x1680003a  bnez        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x1085E4u;
    {
        const bool branch_taken_0x1085e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085E4u;
            // 0x1085e8: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e4) {
            ctx->pc = 0x1086D0u;
            goto label_1086d0;
        }
    }
    ctx->pc = 0x1085ECu;
    // 0x1085ec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1085ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1085f0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1085f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1085f4: 0x46004803  div.s       $f0, $f9, $f0
    ctx->pc = 0x1085f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[0] = ctx->f[9] / ctx->f[0];
    // 0x1085f8: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x1085f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1085fc: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1085fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x108600: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x108600u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x108604: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x108604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x108608: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x108608u;
    {
        const bool branch_taken_0x108608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108608u;
            // 0x10860c: 0xe621004c  swc1        $f1, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108608) {
            ctx->pc = 0x108690u;
            goto label_108690;
        }
    }
    ctx->pc = 0x108610u;
label_108610:
    // 0x108610: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x108610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x108614: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10861c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x10861cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x108620: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x108620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x108624: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x108624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x108628: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x108628u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
    // 0x10862c: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x10862Cu;
    {
        const bool branch_taken_0x10862c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x108630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10862Cu;
            // 0x108630: 0x46063941  sub.s       $f5, $f7, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10862c) {
            ctx->pc = 0x10866Cu;
            goto label_10866c;
        }
    }
    ctx->pc = 0x108634u;
    // 0x108634: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x108634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x108638: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x108638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10863c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x10863cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x108640: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x108640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108644: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x108644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x108648: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x108648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10864c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10864cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x108650: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x108650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x108654: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x108654u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x108658: 0x46004803  div.s       $f0, $f9, $f0
    ctx->pc = 0x108658u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[0] = ctx->f[9] / ctx->f[0];
    // 0x10865c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x10865cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x108660: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x108660u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x108664: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x108664u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x108668: 0xe623004c  swc1        $f3, 0x4C($s1)
    ctx->pc = 0x108668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_10866c:
    // 0x10866c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10866cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108670: 0x46002868  max.s       $f1, $f5, $f0
    ctx->pc = 0x108670u;
    ctx->f[1] = std::max(ctx->f[5], ctx->f[0]);
    // 0x108674: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108678: 0x46070869  min.s       $f1, $f1, $f7
    ctx->pc = 0x108678u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[7]);
    // 0x10867c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x10867cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x108680: 0x46003028  max.s       $f0, $f6, $f0
    ctx->pc = 0x108680u;
    ctx->f[0] = std::max(ctx->f[6], ctx->f[0]);
    // 0x108684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108688: 0x46070029  min.s       $f0, $f0, $f7
    ctx->pc = 0x108688u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[7]);
    // 0x10868c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x10868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_108690:
    // 0x108690: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x108690u;
    {
        const bool branch_taken_0x108690 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x108690) {
            ctx->pc = 0x1086D0u;
            goto label_1086d0;
        }
    }
    ctx->pc = 0x108698u;
    // 0x108698: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x108698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10869c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10869cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1086a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1086a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1086a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1086a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1086a8: 0x0  nop
    ctx->pc = 0x1086a8u;
    // NOP
    // 0x1086ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1086ACu;
    {
        const bool branch_taken_0x1086ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1086B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086ACu;
            // 0x1086b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086ac) {
            ctx->pc = 0x1086D0u;
            goto label_1086d0;
        }
    }
    ctx->pc = 0x1086B4u;
    // 0x1086b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1086b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1086b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1086b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1086bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1086bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1086c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1086c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1086c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1086c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1086c8: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1086c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1086cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1086ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1086d0:
    // 0x1086d0: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1086D0u;
    {
        const bool branch_taken_0x1086d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1086D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086D0u;
            // 0x1086d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086d0) {
            ctx->pc = 0x108724u;
            goto label_108724;
        }
    }
    ctx->pc = 0x1086D8u;
label_1086d8:
    // 0x1086d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1086dc: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x1086dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1086e0: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1086e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1086e4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1086e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1086e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1086ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1086ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1086f0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1086f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1086f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1086f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1086F8u;
    {
        const bool branch_taken_0x1086f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086F8u;
            // 0x1086fc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086f8) {
            ctx->pc = 0x108704u;
            goto label_108704;
        }
    }
    ctx->pc = 0x108700u;
    // 0x108700: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x108700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108704:
    // 0x108704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108708: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x108708u;
    SET_GPR_U32(ctx, 31, 0x108710u);
    ctx->pc = 0x10870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108708u;
            // 0x10870c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108710u; }
        if (ctx->pc != 0x108710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108710u; }
        if (ctx->pc != 0x108710u) { return; }
    }
    ctx->pc = 0x108710u;
    // 0x108710: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x108710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x108714: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x108714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108718: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x108718u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x10871c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10871Cu;
    {
        const bool branch_taken_0x10871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10871Cu;
            // 0x108720: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10871c) {
            ctx->pc = 0x1086D8u;
            runtime->cooperativeGuestYield();
            goto label_1086d8;
        }
    }
    ctx->pc = 0x108724u;
label_108724:
    // 0x108724: 0xaed50000  sw          $s5, 0x0($s6)
    ctx->pc = 0x108724u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
    // 0x108728: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x108728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10872c: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x10872cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x108730: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x108730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x108734: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x108734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x108738: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x108738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x10873c: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x10873cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x108740: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x108740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x108744: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x108744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x108748: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x108748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10874c: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x10874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x108750: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x108750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x108754: 0x3e00008  jr          $ra
    ctx->pc = 0x108754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108754u;
            // 0x108758: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108314u: goto label_108314;
            case 0x108320u: goto label_108320;
            case 0x108340u: goto label_108340;
            case 0x108378u: goto label_108378;
            case 0x108380u: goto label_108380;
            case 0x108390u: goto label_108390;
            case 0x1083B0u: goto label_1083b0;
            case 0x1083F4u: goto label_1083f4;
            case 0x108410u: goto label_108410;
            case 0x108474u: goto label_108474;
            case 0x1084D4u: goto label_1084d4;
            case 0x108500u: goto label_108500;
            case 0x108508u: goto label_108508;
            case 0x108548u: goto label_108548;
            case 0x108574u: goto label_108574;
            case 0x1085A0u: goto label_1085a0;
            case 0x1085A4u: goto label_1085a4;
            case 0x1085B4u: goto label_1085b4;
            case 0x1085DCu: goto label_1085dc;
            case 0x108610u: goto label_108610;
            case 0x10866Cu: goto label_10866c;
            case 0x108690u: goto label_108690;
            case 0x1086D0u: goto label_1086d0;
            case 0x1086D8u: goto label_1086d8;
            case 0x108704u: goto label_108704;
            case 0x108724u: goto label_108724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10875Cu;
    // 0x10875c: 0x0  nop
    ctx->pc = 0x10875cu;
    // NOP
}

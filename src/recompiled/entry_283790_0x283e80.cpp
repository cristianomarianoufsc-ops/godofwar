#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_283790
// Address: 0x283790 - 0x283e80
void entry_283790_0x283e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_283790_0x283e80");
#endif

    ctx->pc = 0x283790u;

    // 0x283790: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x283790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283794: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x283794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283798: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x283798u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28379c: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x28379cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2837a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2837a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2837a4: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2837A4u;
    {
        const bool branch_taken_0x2837a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2837A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837A4u;
            // 0x2837a8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837a4) {
            ctx->pc = 0x283800u;
            goto label_283800;
        }
    }
    ctx->pc = 0x2837ACu;
    // 0x2837ac: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2837acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2837b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2837b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2837b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2837b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2837b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2837bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2837bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2837c0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2837c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2837c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2837c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2837c8: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2837c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2837cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2837ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2837d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2837d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2837d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2837d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2837d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2837d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2837dc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2837dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2837e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2837e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2837e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2837e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2837e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2837e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2837ec: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2837ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2837f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2837f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2837f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2837f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2837f8: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2837f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2837fc: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2837fcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_283800:
    // 0x283800: 0x9203f  dsra32      $a0, $t1, 0
    ctx->pc = 0x283800u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x283804: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283804u;
    {
        const bool branch_taken_0x283804 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x283804) {
            ctx->pc = 0x28385Cu;
            goto label_28385c;
        }
    }
    ctx->pc = 0x28380Cu;
    // 0x28380c: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x28380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x283810: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283814: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283818: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28381c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x28381cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x283820: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x283820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x283824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x283824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283828: 0x41823  negu        $v1, $a0
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28382c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283830: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x283830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x283834: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x283834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x283838: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x283838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x28383c: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x28383cu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x283840: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x283840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x283844: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283848: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x283848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28384c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x28384cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x283850: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x283850u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283854: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283858: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x283858u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_28385c:
    // 0x28385c: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x28385cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x283860: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x283860u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x283864: 0x9283f  dsra32      $a1, $t1, 0
    ctx->pc = 0x283864u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x283868: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x283868u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x28386c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x28386cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x283870: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x283870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x283874: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x283874u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x283878: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x283878u;
    {
        const bool branch_taken_0x283878 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283878u;
            // 0x28387c: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283878) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283880u;
    // 0x283880: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x283880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283884: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x283884u;
    {
        const bool branch_taken_0x283884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283884u;
            // 0x283888: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283884) {
            ctx->pc = 0x2839D4u;
            goto label_2839d4;
        }
    }
    ctx->pc = 0x28388Cu;
    // 0x28388c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x28388cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283890: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283890u;
    {
        const bool branch_taken_0x283890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283890u;
            // 0x283894: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283890) {
            ctx->pc = 0x2838A8u;
            goto label_2838a8;
        }
    }
    ctx->pc = 0x283898u;
    // 0x283898: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x283898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x28389c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2838a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2838A0u;
    {
        const bool branch_taken_0x2838a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2838A0u;
            // 0x2838a4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838a0) {
            ctx->pc = 0x2838C0u;
            goto label_2838c0;
        }
    }
    ctx->pc = 0x2838A8u;
label_2838a8:
    // 0x2838a8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2838a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2838ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2838acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2838b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2838b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2838b4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2838b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2838b8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2838b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2838bc: 0x0  nop
    ctx->pc = 0x2838bcu;
    // NOP
label_2838c0:
    // 0x2838c0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2838c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2838c4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2838c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x2838c8: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x2838cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2838ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2838d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2838d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2838d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2838d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2838d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2838d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2838dc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x2838dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2838e0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2838E0u;
    {
        const bool branch_taken_0x2838e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2838E0u;
            // 0x2838e4: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838e0) {
            ctx->pc = 0x2838FCu;
            goto label_2838fc;
        }
    }
    ctx->pc = 0x2838E8u;
    // 0x2838e8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x2838e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2838ec: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2838ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2838f0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2838f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2838f4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2838f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2838f8: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2838f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_2838fc:
    // 0x2838fc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2838fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x283900: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x283900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x283904: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x283904u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x283908: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x283908u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x28390c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28390Cu;
    {
        const bool branch_taken_0x28390c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28390c) {
            ctx->pc = 0x283910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28390Cu;
            // 0x283910: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283914u;
            goto label_283914;
        }
    }
    ctx->pc = 0x283914u;
label_283914:
    // 0x283914: 0x1012  mflo        $v0
    ctx->pc = 0x283914u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283918: 0x1810  mfhi        $v1
    ctx->pc = 0x283918u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28391c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28391cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283920: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283924: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283928: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283928u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28392c: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x28392cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283930: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283934: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283938: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x283938u;
    {
        const bool branch_taken_0x283938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283938) {
            ctx->pc = 0x28393Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283938u;
            // 0x28393c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28396Cu;
            goto label_28396c;
        }
    }
    ctx->pc = 0x283940u;
    // 0x283940: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283944: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x283944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283948: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283948u;
    {
        const bool branch_taken_0x283948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283948u;
            // 0x28394c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283948) {
            ctx->pc = 0x283968u;
            goto label_283968;
        }
    }
    ctx->pc = 0x283950u;
    // 0x283950: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283954: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283954u;
    {
        const bool branch_taken_0x283954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283954) {
            ctx->pc = 0x283958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283954u;
            // 0x283958: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28396Cu;
            goto label_28396c;
        }
    }
    ctx->pc = 0x28395Cu;
    // 0x28395c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28395cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x283960: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283964: 0x0  nop
    ctx->pc = 0x283964u;
    // NOP
label_283968:
    // 0x283968: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x283968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_28396c:
    // 0x28396c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28396Cu;
    {
        const bool branch_taken_0x28396c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28396c) {
            ctx->pc = 0x283970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28396Cu;
            // 0x283970: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283974u;
            goto label_283974;
        }
    }
    ctx->pc = 0x283974u;
label_283974:
    // 0x283974: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x283974u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283978: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x283978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x28397c: 0x1012  mflo        $v0
    ctx->pc = 0x28397cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283980: 0x1810  mfhi        $v1
    ctx->pc = 0x283980u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283988: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28398c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283990: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283990u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283994: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x283994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283998: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28399c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28399cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2839a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839A0u;
            // 0x2839a4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839A8u;
    // 0x2839a8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2839a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2839ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2839ACu;
    {
        const bool branch_taken_0x2839ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2839B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839ACu;
            // 0x2839b0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839ac) {
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839B4u;
    // 0x2839b4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2839b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2839b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2839B8u;
    {
        const bool branch_taken_0x2839b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839b8) {
            ctx->pc = 0x2839BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2839B8u;
            // 0x2839bc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2839C0u;
            goto label_2839c0;
        }
    }
    ctx->pc = 0x2839C0u;
label_2839c0:
    // 0x2839c0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2839c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2839c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2839c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2839c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2839c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2839cc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2839CCu;
    {
        const bool branch_taken_0x2839cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839CCu;
            // 0x2839d0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839cc) {
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x2839D4u;
label_2839d4:
    // 0x2839d4: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x2839D4u;
    {
        const bool branch_taken_0x2839d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2839D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839D4u;
            // 0x2839d8: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839d4) {
            ctx->pc = 0x283A00u;
            goto label_283a00;
        }
    }
    ctx->pc = 0x2839DCu;
    // 0x2839dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2839dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2839e0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2839E0u;
    {
        const bool branch_taken_0x2839e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2839e0) {
            ctx->pc = 0x2839E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2839E0u;
            // 0x2839e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2839E8u;
            goto label_2839e8;
        }
    }
    ctx->pc = 0x2839E8u;
label_2839e8:
    // 0x2839e8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2839e8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2839ec: 0x1012  mflo        $v0
    ctx->pc = 0x2839ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2839f0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2839f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2839f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2839f8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2839f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2839fc: 0x0  nop
    ctx->pc = 0x2839fcu;
    // NOP
label_283a00:
    // 0x283a00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283A00u;
    {
        const bool branch_taken_0x283a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A00u;
            // 0x283a04: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a00) {
            ctx->pc = 0x283A18u;
            goto label_283a18;
        }
    }
    ctx->pc = 0x283A08u;
    // 0x283a08: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x283a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x283a0c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x283a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283a10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A10u;
            // 0x283a14: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283A30u;
            goto label_283a30;
        }
    }
    ctx->pc = 0x283A18u;
label_283a18:
    // 0x283a18: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x283a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x283a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283a20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x283a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x283a24: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x283a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283a28: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x283a28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x283a2c: 0x0  nop
    ctx->pc = 0x283a2cu;
    // NOP
label_283a30:
    // 0x283a30: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x283a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x283a34: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x283a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x283a38: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x283a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x283a3c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x283a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x283a40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x283a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283a44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x283a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283a48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283a4c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x283a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x283a50: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x283A50u;
    {
        const bool branch_taken_0x283a50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A50u;
            // 0x283a54: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a50) {
            ctx->pc = 0x283A6Cu;
            goto label_283a6c;
        }
    }
    ctx->pc = 0x283A58u;
    // 0x283a58: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x283a58u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x283a5c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x283a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283a60: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x283a60u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x283a64: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x283A64u;
    {
        const bool branch_taken_0x283a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A64u;
            // 0x283a68: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a64) {
            ctx->pc = 0x283B70u;
            goto label_283b70;
        }
    }
    ctx->pc = 0x283A6Cu;
label_283a6c:
    // 0x283a6c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x283a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x283a70: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x283a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x283a74: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x283a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x283a78: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x283a78u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x283a7c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x283a80: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x283a80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x283a84: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x283a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x283a88: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x283a88u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x283a8c: 0x310bffff  andi        $t3, $t0, 0xFFFF
    ctx->pc = 0x283a8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x283a90: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a94: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x283a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x283a98: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283A98u;
    {
        const bool branch_taken_0x283a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a98) {
            ctx->pc = 0x283A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283A98u;
            // 0x283a9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283AA0u;
            goto label_283aa0;
        }
    }
    ctx->pc = 0x283AA0u;
label_283aa0:
    // 0x283aa0: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283aa4: 0x1012  mflo        $v0
    ctx->pc = 0x283aa4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283aa8: 0x1810  mfhi        $v1
    ctx->pc = 0x283aa8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283aac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x283aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283ab4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283ab8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283ab8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283abc: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x283abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283ac0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283ac4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283ac8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x283AC8u;
    {
        const bool branch_taken_0x283ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ac8) {
            ctx->pc = 0x283ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283AC8u;
            // 0x283acc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283AFCu;
            goto label_283afc;
        }
    }
    ctx->pc = 0x283AD0u;
    // 0x283ad0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283ad4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x283ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283ad8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283AD8u;
    {
        const bool branch_taken_0x283ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AD8u;
            // 0x283adc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ad8) {
            ctx->pc = 0x283AF8u;
            goto label_283af8;
        }
    }
    ctx->pc = 0x283AE0u;
    // 0x283ae0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283ae4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283AE4u;
    {
        const bool branch_taken_0x283ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ae4) {
            ctx->pc = 0x283AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283AE4u;
            // 0x283ae8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283AFCu;
            goto label_283afc;
        }
    }
    ctx->pc = 0x283AECu;
    // 0x283aec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x283aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x283af0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283af4: 0x0  nop
    ctx->pc = 0x283af4u;
    // NOP
label_283af8:
    // 0x283af8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x283af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_283afc:
    // 0x283afc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283AFCu;
    {
        const bool branch_taken_0x283afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x283afc) {
            ctx->pc = 0x283B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283AFCu;
            // 0x283b00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283B04u;
            goto label_283b04;
        }
    }
    ctx->pc = 0x283B04u;
label_283b04:
    // 0x283b04: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x283b04u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283b08: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x283b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x283b0c: 0x1012  mflo        $v0
    ctx->pc = 0x283b0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283b10: 0x1810  mfhi        $v1
    ctx->pc = 0x283b10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283b14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283b1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283b20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283b20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283b24: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x283b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283b28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283b2c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283b30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283B30u;
    {
        const bool branch_taken_0x283b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B30u;
            // 0x283b34: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b30) {
            ctx->pc = 0x283B60u;
            goto label_283b60;
        }
    }
    ctx->pc = 0x283B38u;
    // 0x283b38: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283b3c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x283b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283b40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283B40u;
    {
        const bool branch_taken_0x283b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B40u;
            // 0x283b44: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b40) {
            ctx->pc = 0x283B5Cu;
            goto label_283b5c;
        }
    }
    ctx->pc = 0x283B48u;
    // 0x283b48: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283b4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283B4Cu;
    {
        const bool branch_taken_0x283b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B4Cu;
            // 0x283b50: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b4c) {
            ctx->pc = 0x283B60u;
            goto label_283b60;
        }
    }
    ctx->pc = 0x283B54u;
    // 0x283b54: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x283b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x283b58: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_283b5c:
    // 0x283b5c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x283b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_283b60:
    // 0x283b60: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x283b60u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x283b64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283b68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283b68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283b6c: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x283b6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_283b70:
    // 0x283b70: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x283b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b74: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x283b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x283b78: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x283b78u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x283b7c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x283b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b80: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283B80u;
    {
        const bool branch_taken_0x283b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b80) {
            ctx->pc = 0x283B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283B80u;
            // 0x283b84: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283B88u;
            goto label_283b88;
        }
    }
    ctx->pc = 0x283B88u;
label_283b88:
    // 0x283b88: 0x1012  mflo        $v0
    ctx->pc = 0x283b88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283b8c: 0x1810  mfhi        $v1
    ctx->pc = 0x283b8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283b90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283b98: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283b9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283b9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283ba0: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x283ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283ba4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283ba8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283bac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x283BACu;
    {
        const bool branch_taken_0x283bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283bac) {
            ctx->pc = 0x283BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283BACu;
            // 0x283bb0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283BDCu;
            goto label_283bdc;
        }
    }
    ctx->pc = 0x283BB4u;
    // 0x283bb4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x283bb8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x283bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283bbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283BBCu;
    {
        const bool branch_taken_0x283bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BBCu;
            // 0x283bc0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bbc) {
            ctx->pc = 0x283BD8u;
            goto label_283bd8;
        }
    }
    ctx->pc = 0x283BC4u;
    // 0x283bc4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283bc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x283BC8u;
    {
        const bool branch_taken_0x283bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283bc8) {
            ctx->pc = 0x283BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283BC8u;
            // 0x283bcc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283BDCu;
            goto label_283bdc;
        }
    }
    ctx->pc = 0x283BD0u;
    // 0x283bd0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x283bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x283bd4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_283bd8:
    // 0x283bd8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x283bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_283bdc:
    // 0x283bdc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283BDCu;
    {
        const bool branch_taken_0x283bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x283bdc) {
            ctx->pc = 0x283BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283BDCu;
            // 0x283be0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283BE4u;
            goto label_283be4;
        }
    }
    ctx->pc = 0x283BE4u;
label_283be4:
    // 0x283be4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x283be4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283be8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x283be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x283bec: 0x1012  mflo        $v0
    ctx->pc = 0x283becu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283bf0: 0x1810  mfhi        $v1
    ctx->pc = 0x283bf0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283bf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283bf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283bfc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283c00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283c00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283c04: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x283c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283c08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283c0c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283c10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283C10u;
    {
        const bool branch_taken_0x283c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C10u;
            // 0x283c14: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c10) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283C18u;
    // 0x283c18: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x283c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283C1Cu;
    {
        const bool branch_taken_0x283c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C1Cu;
            // 0x283c20: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c1c) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283C24u;
    // 0x283c24: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283c28: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283C28u;
    {
        const bool branch_taken_0x283c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c28) {
            ctx->pc = 0x283C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283C28u;
            // 0x283c2c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283C30u;
label_283c30:
    // 0x283c30: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x283c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x283c34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283c38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283c3c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x283C3Cu;
    {
        const bool branch_taken_0x283c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C3Cu;
            // 0x283c40: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c3c) {
            ctx->pc = 0x283E10u;
            goto label_283e10;
        }
    }
    ctx->pc = 0x283C44u;
label_283c44:
    // 0x283c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283C44u;
    {
        const bool branch_taken_0x283c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C44u;
            // 0x283c48: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c44) {
            ctx->pc = 0x283C54u;
            goto label_283c54;
        }
    }
    ctx->pc = 0x283C4Cu;
    // 0x283c4c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x283C4Cu;
    {
        const bool branch_taken_0x283c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C4Cu;
            // 0x283c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c4c) {
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283C54u;
label_283c54:
    // 0x283c54: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x283c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283C58u;
    {
        const bool branch_taken_0x283c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C58u;
            // 0x283c5c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c58) {
            ctx->pc = 0x283C70u;
            goto label_283c70;
        }
    }
    ctx->pc = 0x283C60u;
    // 0x283c60: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x283c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x283c64: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x283c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283c68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283C68u;
    {
        const bool branch_taken_0x283c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C68u;
            // 0x283c6c: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c68) {
            ctx->pc = 0x283C88u;
            goto label_283c88;
        }
    }
    ctx->pc = 0x283C70u;
label_283c70:
    // 0x283c70: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x283c74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283c78: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x283c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x283c7c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x283c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283c80: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x283c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x283c84: 0x0  nop
    ctx->pc = 0x283c84u;
    // NOP
label_283c88:
    // 0x283c88: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x283c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x283c8c: 0xc52006  srlv        $a0, $a1, $a2
    ctx->pc = 0x283c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x283c90: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x283c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
    // 0x283c94: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x283c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x283c98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x283c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283c9c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x283c9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283ca0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x283ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x283ca4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x283ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x283ca8: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x283CA8u;
    {
        const bool branch_taken_0x283ca8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x283ca8) {
            ctx->pc = 0x283CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283CA8u;
            // 0x283cac: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283CD0u;
            goto label_283cd0;
        }
    }
    ctx->pc = 0x283CB0u;
    // 0x283cb0: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x283cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x283cb4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x283CB4u;
    {
        const bool branch_taken_0x283cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CB4u;
            // 0x283cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cb4) {
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283CBCu;
    // 0x283cbc: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x283cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x283cc0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x283CC0u;
    {
        const bool branch_taken_0x283cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CC0u;
            // 0x283cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cc0) {
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283CC8u;
    // 0x283cc8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x283CC8u;
    {
        const bool branch_taken_0x283cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CC8u;
            // 0x283ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cc8) {
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283CD0u;
label_283cd0:
    // 0x283cd0: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x283cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x283cd4: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x283cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x283cd8: 0xe81806  srlv        $v1, $t0, $a3
    ctx->pc = 0x283cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x283cdc: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x283cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x283ce0: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x283ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x283ce4: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x283ce4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x283ce8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x283ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x283cec: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x283cecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x283cf0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x283cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x283cf4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x283cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x283cf8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x283cf8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x283cfc: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x283cfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x283d00: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x283d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x283d04: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283D04u;
    {
        const bool branch_taken_0x283d04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d04) {
            ctx->pc = 0x283D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283D04u;
            // 0x283d08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283D0Cu;
            goto label_283d0c;
        }
    }
    ctx->pc = 0x283D0Cu;
label_283d0c:
    // 0x283d0c: 0x1012  mflo        $v0
    ctx->pc = 0x283d0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283d10: 0x1810  mfhi        $v1
    ctx->pc = 0x283d10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283d14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x283d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283d1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283d20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283d20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283d24: 0x12b3818  mult        $a3, $t1, $t3
    ctx->pc = 0x283d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x283d28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283d2c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x283d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x283d30: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x283D30u;
    {
        const bool branch_taken_0x283d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d30) {
            ctx->pc = 0x283D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283D30u;
            // 0x283d34: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283D64u;
            goto label_283d64;
        }
    }
    ctx->pc = 0x283D38u;
    // 0x283d38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283d3c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x283d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283d40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283D40u;
    {
        const bool branch_taken_0x283d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D40u;
            // 0x283d44: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d40) {
            ctx->pc = 0x283D60u;
            goto label_283d60;
        }
    }
    ctx->pc = 0x283D48u;
    // 0x283d48: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x283d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x283d4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x283D4Cu;
    {
        const bool branch_taken_0x283d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d4c) {
            ctx->pc = 0x283D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283D4Cu;
            // 0x283d50: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283D64u;
            goto label_283d64;
        }
    }
    ctx->pc = 0x283D54u;
    // 0x283d54: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x283d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x283d58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283d5c: 0x0  nop
    ctx->pc = 0x283d5cu;
    // NOP
label_283d60:
    // 0x283d60: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_283d64:
    // 0x283d64: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283D64u;
    {
        const bool branch_taken_0x283d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d64) {
            ctx->pc = 0x283D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283D64u;
            // 0x283d68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283D6Cu;
            goto label_283d6c;
        }
    }
    ctx->pc = 0x283D6Cu;
label_283d6c:
    // 0x283d6c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x283d6cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283d70: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x283d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x283d74: 0x1012  mflo        $v0
    ctx->pc = 0x283d74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283d78: 0x1810  mfhi        $v1
    ctx->pc = 0x283d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283d7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x283d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283d84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283d88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283d8c: 0xcb3818  mult        $a3, $a2, $t3
    ctx->pc = 0x283d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x283d90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283d94: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x283d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x283d98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283D98u;
    {
        const bool branch_taken_0x283d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D98u;
            // 0x283d9c: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d98) {
            ctx->pc = 0x283DC8u;
            goto label_283dc8;
        }
    }
    ctx->pc = 0x283DA0u;
    // 0x283da0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283da4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x283da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283da8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283DA8u;
    {
        const bool branch_taken_0x283da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DA8u;
            // 0x283dac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283da8) {
            ctx->pc = 0x283DC4u;
            goto label_283dc4;
        }
    }
    ctx->pc = 0x283DB0u;
    // 0x283db0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x283db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x283db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283DB4u;
    {
        const bool branch_taken_0x283db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DB4u;
            // 0x283db8: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283db4) {
            ctx->pc = 0x283DC8u;
            goto label_283dc8;
        }
    }
    ctx->pc = 0x283DBCu;
    // 0x283dbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283dc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_283dc4:
    // 0x283dc4: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x283dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_283dc8:
    // 0x283dc8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x283dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x283dcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283dd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283dd4: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x283dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x283dd8: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x283dd8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x283ddc: 0x3010  mfhi        $a2
    ctx->pc = 0x283ddcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x283de0: 0x2012  mflo        $a0
    ctx->pc = 0x283de0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x283de4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283de8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x283DE8u;
    {
        const bool branch_taken_0x283de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283de8) {
            ctx->pc = 0x283DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283DE8u;
            // 0x283dec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283DF0u;
    // 0x283df0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x283DF0u;
    {
        const bool branch_taken_0x283df0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x283DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DF0u;
            // 0x283df4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283df0) {
            ctx->pc = 0x283E10u;
            goto label_283e10;
        }
    }
    ctx->pc = 0x283DF8u;
    // 0x283df8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x283df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x283dfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283DFCu;
    {
        const bool branch_taken_0x283dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283DFCu;
            // 0x283e00: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dfc) {
            ctx->pc = 0x283E14u;
            goto label_283e14;
        }
    }
    ctx->pc = 0x283E04u;
    // 0x283e04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x283e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_283e08:
    // 0x283e08: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x283e08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e0c: 0x0  nop
    ctx->pc = 0x283e0cu;
    // NOP
label_283e10:
    // 0x283e10: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x283e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_283e14:
    // 0x283e14: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x283e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x283e18: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x283e18u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283e1c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x283e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x283e20: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x283e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x283e24: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x283E24u;
    {
        const bool branch_taken_0x283e24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283E24u;
            // 0x283e28: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e24) {
            ctx->pc = 0x283E74u;
            goto label_283e74;
        }
    }
    ctx->pc = 0x283E2Cu;
    // 0x283e2c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x283e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283e30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x283e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x283e34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x283e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x283e38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283e3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x283e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x283e40: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x283e40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x283e44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x283e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283e48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x283e48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x283e4c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x283e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x283e50: 0x42023  negu        $a0, $a0
    ctx->pc = 0x283e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x283e54: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x283e54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x283e58: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x283e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x283e5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283e60: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x283e60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283e64: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x283e64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x283e68: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x283e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283e6c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x283e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283e70: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x283e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_283e74:
    // 0x283e74: 0x3e00008  jr          $ra
    ctx->pc = 0x283E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283E74u;
            // 0x283e78: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283800u: goto label_283800;
            case 0x28385Cu: goto label_28385c;
            case 0x2838A8u: goto label_2838a8;
            case 0x2838C0u: goto label_2838c0;
            case 0x2838FCu: goto label_2838fc;
            case 0x283914u: goto label_283914;
            case 0x283968u: goto label_283968;
            case 0x28396Cu: goto label_28396c;
            case 0x283974u: goto label_283974;
            case 0x2839C0u: goto label_2839c0;
            case 0x2839D4u: goto label_2839d4;
            case 0x2839E8u: goto label_2839e8;
            case 0x283A00u: goto label_283a00;
            case 0x283A18u: goto label_283a18;
            case 0x283A30u: goto label_283a30;
            case 0x283A6Cu: goto label_283a6c;
            case 0x283AA0u: goto label_283aa0;
            case 0x283AF8u: goto label_283af8;
            case 0x283AFCu: goto label_283afc;
            case 0x283B04u: goto label_283b04;
            case 0x283B5Cu: goto label_283b5c;
            case 0x283B60u: goto label_283b60;
            case 0x283B70u: goto label_283b70;
            case 0x283B88u: goto label_283b88;
            case 0x283BD8u: goto label_283bd8;
            case 0x283BDCu: goto label_283bdc;
            case 0x283BE4u: goto label_283be4;
            case 0x283C30u: goto label_283c30;
            case 0x283C44u: goto label_283c44;
            case 0x283C54u: goto label_283c54;
            case 0x283C70u: goto label_283c70;
            case 0x283C88u: goto label_283c88;
            case 0x283CD0u: goto label_283cd0;
            case 0x283D0Cu: goto label_283d0c;
            case 0x283D60u: goto label_283d60;
            case 0x283D64u: goto label_283d64;
            case 0x283D6Cu: goto label_283d6c;
            case 0x283DC4u: goto label_283dc4;
            case 0x283DC8u: goto label_283dc8;
            case 0x283E08u: goto label_283e08;
            case 0x283E10u: goto label_283e10;
            case 0x283E14u: goto label_283e14;
            case 0x283E74u: goto label_283e74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283E7Cu;
    // 0x283e7c: 0x0  nop
    ctx->pc = 0x283e7cu;
    // NOP
}

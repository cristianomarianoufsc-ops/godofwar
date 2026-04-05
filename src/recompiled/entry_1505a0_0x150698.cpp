#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1505a0
// Address: 0x1505a0 - 0x150698
void entry_1505a0_0x150698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1505a0_0x150698");
#endif

    ctx->pc = 0x1505a0u;

    // 0x1505a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1505a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505a4: 0xdcc200c0  ld          $v0, 0xC0($a2)
    ctx->pc = 0x1505a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1505a8: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x1505a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
    // 0x1505ac: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1505ACu;
    {
        const bool branch_taken_0x1505ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1505ac) {
            ctx->pc = 0x150690u;
            goto label_150690;
        }
    }
    ctx->pc = 0x1505B4u;
    // 0x1505b4: 0x8cc200d0  lw          $v0, 0xD0($a2)
    ctx->pc = 0x1505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1505b8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1505b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1505bc: 0x11000034  beqz        $t0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1505BCu;
    {
        const bool branch_taken_0x1505bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505BCu;
            // 0x1505c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505bc) {
            ctx->pc = 0x150690u;
            goto label_150690;
        }
    }
    ctx->pc = 0x1505C4u;
    // 0x1505c4: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
label_1505c8:
    // 0x1505c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1505cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1505d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1505d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1505d8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1505dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1505DCu;
    {
        const bool branch_taken_0x1505dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505DCu;
            // 0x1505e0: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505dc) {
            ctx->pc = 0x150608u;
            goto label_150608;
        }
    }
    ctx->pc = 0x1505E4u;
    // 0x1505e4: 0xdcc200c0  ld          $v0, 0xC0($a2)
    ctx->pc = 0x1505e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1505e8: 0x24c400c0  addiu       $a0, $a2, 0xC0
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1505ec: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1505f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1505f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1505f4: 0xfcc200c0  sd          $v0, 0xC0($a2)
    ctx->pc = 0x1505f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 192), GPR_U64(ctx, 2));
    // 0x1505f8: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1505f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1505fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1505fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x150600: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x150600u;
    {
        const bool branch_taken_0x150600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150600u;
            // 0x150604: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150600) {
            ctx->pc = 0x150680u;
            goto label_150680;
        }
    }
    ctx->pc = 0x150608u;
label_150608:
    // 0x150608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15060c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15060cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150610: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x150614: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x150614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x150618: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x150618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15061c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x150620: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x150620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x150624: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x150624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x150628: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x150628u;
    {
        const bool branch_taken_0x150628 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150628u;
            // 0x15062c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150628) {
            ctx->pc = 0x150680u;
            goto label_150680;
        }
    }
    ctx->pc = 0x150630u;
    // 0x150630: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15063c: 0x0  nop
    ctx->pc = 0x15063cu;
    // NOP
label_150640:
    // 0x150640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x150644: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150648: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x15064c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x15064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x150650: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x150650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x150654: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x150654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x150658: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x150658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15065c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x15065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x150660: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x150660u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x150664: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x150664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x150668: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x150668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15066c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150670: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x150670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150674: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x150674u;
    {
        const bool branch_taken_0x150674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150674u;
            // 0x150678: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150674) {
            ctx->pc = 0x150640u;
            runtime->cooperativeGuestYield();
            goto label_150640;
        }
    }
    ctx->pc = 0x15067Cu;
    // 0x15067c: 0x0  nop
    ctx->pc = 0x15067cu;
    // NOP
label_150680:
    // 0x150680: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x150684: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x150684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x150688: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x150688u;
    {
        const bool branch_taken_0x150688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150688) {
            ctx->pc = 0x15068Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150688u;
            // 0x15068c: 0x8cc300d0  lw          $v1, 0xD0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1505C8u;
            runtime->cooperativeGuestYield();
            goto label_1505c8;
        }
    }
    ctx->pc = 0x150690u;
label_150690:
    // 0x150690: 0x3e00008  jr          $ra
    ctx->pc = 0x150690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1505C8u: goto label_1505c8;
            case 0x150608u: goto label_150608;
            case 0x150640u: goto label_150640;
            case 0x150680u: goto label_150680;
            case 0x150690u: goto label_150690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150698u;
}

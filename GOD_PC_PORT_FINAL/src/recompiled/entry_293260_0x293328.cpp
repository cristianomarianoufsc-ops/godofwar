#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_293260
// Address: 0x293260 - 0x293328
void entry_293260_0x293328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_293260_0x293328");
#endif

    ctx->pc = 0x293260u;

    // 0x293260: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x293260u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x293264: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x293264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x293268: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x293268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x29326c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x29326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x293270: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x293270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x293274: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x293274u;
    {
        const bool branch_taken_0x293274 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x293278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293274u;
            // 0x293278: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293274) {
            ctx->pc = 0x2932A0u;
            goto label_2932a0;
        }
    }
    ctx->pc = 0x29327Cu;
    // 0x29327c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293280: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x293280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x293284: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x293284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x293288: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x293288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x29328c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x293294: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x293294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x293298: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x293298u;
    {
        const bool branch_taken_0x293298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293298u;
            // 0x29329c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293298) {
            ctx->pc = 0x293320u;
            goto label_293320;
        }
    }
    ctx->pc = 0x2932A0u;
label_2932a0:
    // 0x2932a0: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2932a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x2932a4: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x2932a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2932a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2932A8u;
    {
        const bool branch_taken_0x2932a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932A8u;
            // 0x2932ac: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932a8) {
            ctx->pc = 0x2932D8u;
            goto label_2932d8;
        }
    }
    ctx->pc = 0x2932B0u;
    // 0x2932b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2932b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2932b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2932b8: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2932b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2932bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2932bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2932c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2932c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2932c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2932c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2932c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2932c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2932cc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2932ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2932d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2932D0u;
    {
        const bool branch_taken_0x2932d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932D0u;
            // 0x2932d4: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932d0) {
            ctx->pc = 0x293320u;
            goto label_293320;
        }
    }
    ctx->pc = 0x2932D8u;
label_2932d8:
    // 0x2932d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2932d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2932dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2932dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2932e0: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x2932e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x2932e4: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x2932e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2932e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2932E8u;
    {
        const bool branch_taken_0x2932e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932E8u;
            // 0x2932ec: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932e8) {
            ctx->pc = 0x293304u;
            goto label_293304;
        }
    }
    ctx->pc = 0x2932F0u;
    // 0x2932f0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2932f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2932f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2932f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2932fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2932FCu;
    {
        const bool branch_taken_0x2932fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2932FCu;
            // 0x293300: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932fc) {
            ctx->pc = 0x293308u;
            goto label_293308;
        }
    }
    ctx->pc = 0x293304u;
label_293304:
    // 0x293304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293308:
    // 0x293308: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29330c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293310: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x293310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x293314: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x293314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x293318: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x293318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x29331c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x29331cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_293320:
    // 0x293320: 0x3e00008  jr          $ra
    ctx->pc = 0x293320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293320u;
            // 0x293324: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2932A0u: goto label_2932a0;
            case 0x2932D8u: goto label_2932d8;
            case 0x293304u: goto label_293304;
            case 0x293308u: goto label_293308;
            case 0x293320u: goto label_293320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293328u;
}

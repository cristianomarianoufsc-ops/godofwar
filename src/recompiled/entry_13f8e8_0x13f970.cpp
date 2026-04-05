#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13f8e8
// Address: 0x13f8e8 - 0x13f970
void entry_13f8e8_0x13f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13f8e8_0x13f970");
#endif

    ctx->pc = 0x13f8e8u;

    // 0x13f8e8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x13f8e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f8ec: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x13f8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x13f8f0: 0x8d68f168  lw          $t0, -0xE98($t3)
    ctx->pc = 0x13f8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294963560)));
    // 0x13f8f4: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x13f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x13f8f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F8F8u;
    {
        const bool branch_taken_0x13f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8F8u;
            // 0x13f8fc: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8f8) {
            ctx->pc = 0x13F924u;
            goto label_13f924;
        }
    }
    ctx->pc = 0x13F900u;
    // 0x13f900: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x13f900u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x13f904: 0x0  nop
    ctx->pc = 0x13f904u;
    // NOP
label_13f908:
    // 0x13f908: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x13f908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x13f90c: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x13f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x13f910: 0x0  nop
    ctx->pc = 0x13f910u;
    // NOP
    // 0x13f914: 0x0  nop
    ctx->pc = 0x13f914u;
    // NOP
    // 0x13f918: 0x0  nop
    ctx->pc = 0x13f918u;
    // NOP
    // 0x13f91c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F91Cu;
    {
        const bool branch_taken_0x13f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f91c) {
            ctx->pc = 0x13F920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F91Cu;
            // 0x13f920: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F908u;
            runtime->cooperativeGuestYield();
            goto label_13f908;
        }
    }
    ctx->pc = 0x13F924u;
label_13f924:
    // 0x13f924: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x13f924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x13f928: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13f92c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13f930: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13f930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13f934: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13f938: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x13f938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x13f93c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13f93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13f940: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x13f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x13f944: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x13f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13f948: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x13f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x13f94c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x13f94cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13f950: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x13f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x13f954: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x13f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x13f958: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x13f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x13f95c: 0x70433389  pcpyld      $a2, $v0, $v1
    ctx->pc = 0x13f95cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13f960: 0xad64f168  sw          $a0, -0xE98($t3)
    ctx->pc = 0x13f960u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294963560), GPR_U32(ctx, 4));
    // 0x13f964: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x13f964u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x13f968: 0x3e00008  jr          $ra
    ctx->pc = 0x13F968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F908u: goto label_13f908;
            case 0x13F924u: goto label_13f924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F970u;
}

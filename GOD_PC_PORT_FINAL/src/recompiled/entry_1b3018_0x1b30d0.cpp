#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b3018
// Address: 0x1b3018 - 0x1b30d0
void entry_1b3018_0x1b30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b3018_0x1b30d0");
#endif

    ctx->pc = 0x1b3018u;

    // 0x1b3018: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b3018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b301c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b301cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3020: 0xac40cb88  sw          $zero, -0x3478($v0)
    ctx->pc = 0x1b3020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953864), GPR_U32(ctx, 0));
    // 0x1b3024: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1b3028:
    // 0x1b3028: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1b3028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b302c: 0x244252a8  addiu       $v0, $v0, 0x52A8
    ctx->pc = 0x1b302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21160));
    // 0x1b3030: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3034: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b3038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b303c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3040: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b3040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3044: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1b3044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1b3048: 0x28c20078  slti        $v0, $a2, 0x78
    ctx->pc = 0x1b3048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1b304c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B304Cu;
    {
        const bool branch_taken_0x1b304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B304Cu;
            // 0x1b3050: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b304c) {
            ctx->pc = 0x1B3028u;
            runtime->cooperativeGuestYield();
            goto label_1b3028;
        }
    }
    ctx->pc = 0x1B3054u;
    // 0x1b3054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3058:
    // 0x1b3058: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b305c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b3060: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1b3060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b3064: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b3068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b306c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3070: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b3070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3074: 0x0  nop
    ctx->pc = 0x1b3074u;
    // NOP
label_1b3078:
    // 0x1b3078: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b307c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3080: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3084: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b3084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b3088: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b308c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1b308cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3090: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3090u;
    {
        const bool branch_taken_0x1b3090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3090u;
            // 0x1b3094: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3090) {
            ctx->pc = 0x1B3078u;
            runtime->cooperativeGuestYield();
            goto label_1b3078;
        }
    }
    ctx->pc = 0x1B3098u;
    // 0x1b3098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b309c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b309cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b30a0: 0xa4620060  sh          $v0, 0x60($v1)
    ctx->pc = 0x1b30a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b30a4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b30a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b30a8: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x1b30a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x1b30ac: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b30acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1b30b0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1b30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1b30b4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1b30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1b30b8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1b30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1b30bc: 0xa4600062  sh          $zero, 0x62($v1)
    ctx->pc = 0x1b30bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b30c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B30C0u;
    {
        const bool branch_taken_0x1b30c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30C0u;
            // 0x1b30c4: 0xac600064  sw          $zero, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30c0) {
            ctx->pc = 0x1B3058u;
            runtime->cooperativeGuestYield();
            goto label_1b3058;
        }
    }
    ctx->pc = 0x1B30C8u;
    // 0x1b30c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B30C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3028u: goto label_1b3028;
            case 0x1B3058u: goto label_1b3058;
            case 0x1B3078u: goto label_1b3078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B30D0u;
}

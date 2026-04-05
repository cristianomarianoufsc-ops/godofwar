#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_131288
// Address: 0x131288 - 0x131300
void entry_131288_0x131300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_131288_0x131300");
#endif

    ctx->pc = 0x131288u;

    // 0x131288: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x131288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13128c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x13128cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131290: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x131290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x131294: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x131294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x131298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13129c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1312a0: 0x24c50014  addiu       $a1, $a2, 0x14
    ctx->pc = 0x1312a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1312a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1312a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1312a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1312a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1312acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1312b0: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x1312b0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1312b4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1312b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1312b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1312b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1312bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1312bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1312c0: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1312C0u;
    {
        const bool branch_taken_0x1312c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1312c0) {
            ctx->pc = 0x1312C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1312C0u;
            // 0x1312c4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312C8u;
    // 0x1312c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1312cc: 0x0  nop
    ctx->pc = 0x1312ccu;
    // NOP
label_1312d0:
    // 0x1312d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1312d4: 0x0  nop
    ctx->pc = 0x1312d4u;
    // NOP
    // 0x1312d8: 0x0  nop
    ctx->pc = 0x1312d8u;
    // NOP
    // 0x1312dc: 0x0  nop
    ctx->pc = 0x1312dcu;
    // NOP
    // 0x1312e0: 0x0  nop
    ctx->pc = 0x1312e0u;
    // NOP
    // 0x1312e4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1312E4u;
    {
        const bool branch_taken_0x1312e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1312e4) {
            ctx->pc = 0x1312E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1312E4u;
            // 0x1312e8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1312D0u;
            runtime->cooperativeGuestYield();
            goto label_1312d0;
        }
    }
    ctx->pc = 0x1312ECu;
    // 0x1312ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1312f0:
    // 0x1312f0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1312f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1312f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1312F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1312F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312F4u;
            // 0x1312f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1312D0u: goto label_1312d0;
            case 0x1312F0u: goto label_1312f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1312FCu;
    // 0x1312fc: 0x0  nop
    ctx->pc = 0x1312fcu;
    // NOP
}

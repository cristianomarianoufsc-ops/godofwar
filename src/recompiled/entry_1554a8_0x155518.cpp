#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1554a8
// Address: 0x1554a8 - 0x155518
void entry_1554a8_0x155518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1554a8_0x155518");
#endif

    ctx->pc = 0x1554a8u;

    // 0x1554a8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1554ac: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1554ACu;
    {
        const bool branch_taken_0x1554ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554ACu;
            // 0x1554b0: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554ac) {
            ctx->pc = 0x15550Cu;
            goto label_15550c;
        }
    }
    ctx->pc = 0x1554B4u;
    // 0x1554b4: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_1554b8:
    // 0x1554b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1554b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554bc: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x1554bcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1554c0: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x1554c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1554c4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1554c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1554c8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x1554c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x1554cc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1554ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1554d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1554d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1554d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1554d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1554d8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1554d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1554dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1554DCu;
    {
        const bool branch_taken_0x1554dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1554E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554DCu;
            // 0x1554e0: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554dc) {
            ctx->pc = 0x155500u;
            goto label_155500;
        }
    }
    ctx->pc = 0x1554E4u;
    // 0x1554e4: 0x94c2003c  lhu         $v0, 0x3C($a2)
    ctx->pc = 0x1554e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1554e8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1554ec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1554ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1554f0: 0x246339a8  addiu       $v1, $v1, 0x39A8
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14760));
    // 0x1554f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1554f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1554fc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1554fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_155500:
    // 0x155500: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x155500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155504: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x155504u;
    {
        const bool branch_taken_0x155504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x155508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155504u;
            // 0x155508: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155504) {
            ctx->pc = 0x1554B8u;
            runtime->cooperativeGuestYield();
            goto label_1554b8;
        }
    }
    ctx->pc = 0x15550Cu;
label_15550c:
    // 0x15550c: 0x3e00008  jr          $ra
    ctx->pc = 0x15550Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15550Cu;
            // 0x155510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1554B8u: goto label_1554b8;
            case 0x155500u: goto label_155500;
            case 0x15550Cu: goto label_15550c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155514u;
    // 0x155514: 0x0  nop
    ctx->pc = 0x155514u;
    // NOP
}

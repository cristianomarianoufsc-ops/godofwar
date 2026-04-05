#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F530
// Address: 0x26f530 - 0x26f5f8
void sub_0026F530_0x26f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F530_0x26f530");
#endif

    ctx->pc = 0x26f530u;

    // 0x26f530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f53c: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x26f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x26f540: 0xc0a648c  jal         func_299230
    ctx->pc = 0x26F540u;
    SET_GPR_U32(ctx, 31, 0x26F548u);
    ctx->pc = 0x26F544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F540u;
            // 0x26f544: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F548u; }
        if (ctx->pc != 0x26F548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F548u; }
        if (ctx->pc != 0x26F548u) { return; }
    }
    ctx->pc = 0x26F548u;
    // 0x26f548: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x26f548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x26f54c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x26f550: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x26f550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x26f554: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x26f558: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f55c: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x26f55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x26f560: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26f564: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x26f568: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x26f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x26f56c: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x26f56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x26f570: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x26f570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x26f574: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x26f574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x26f578: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x26f578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x26f57c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26f580: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x26f580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x26f584: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x26f584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x26f588: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x26f588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x26f58c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x26f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x26f590: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26f590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26f594: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f598: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26f59c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x26f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x26f5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F5A0u;
    {
        const bool branch_taken_0x26f5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5A0u;
            // 0x26f5a4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5a0) {
            ctx->pc = 0x26F5B4u;
            goto label_26f5b4;
        }
    }
    ctx->pc = 0x26F5A8u;
    // 0x26f5a8: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x26F5A8u;
    SET_GPR_U32(ctx, 31, 0x26F5B0u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5B0u; }
        if (ctx->pc != 0x26F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5B0u; }
        if (ctx->pc != 0x26F5B0u) { return; }
    }
    ctx->pc = 0x26F5B0u;
    // 0x26f5b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_26f5b4:
    // 0x26f5b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26f5b8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x26f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x26f5bc: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x26f5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x26f5c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26f5c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26f5c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x26f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x26f5cc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x26f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x26f5d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x26f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x26f5d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26f5d8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x26f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x26f5dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26f5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f5e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26f5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5f0: 0x809e548  j           func_279520
    ctx->pc = 0x26F5F0u;
    ctx->pc = 0x26F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5F0u;
            // 0x26f5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279520u;
    if (runtime->hasFunction(0x279520u)) {
        auto targetFn = runtime->lookupFunction(0x279520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00279520_0x279520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26F5F8u;
}

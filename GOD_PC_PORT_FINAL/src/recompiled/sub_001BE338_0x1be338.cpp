#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE338
// Address: 0x1be338 - 0x1be458
void sub_001BE338_0x1be338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE338_0x1be338");
#endif

    ctx->pc = 0x1be338u;

    // 0x1be338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be33c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be344: 0x24a51398  addiu       $a1, $a1, 0x1398
    ctx->pc = 0x1be344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5016));
    // 0x1be348: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1be348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1be34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be350: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE350u;
    SET_GPR_U32(ctx, 31, 0x1BE358u);
    ctx->pc = 0x1BE354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE350u;
            // 0x1be354: 0x8e04bcf8  lw          $a0, -0x4308($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE358u; }
        if (ctx->pc != 0x1BE358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE358u; }
        if (ctx->pc != 0x1BE358u) { return; }
    }
    ctx->pc = 0x1BE358u;
    // 0x1be358: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be35c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be360: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be364: 0xac625e6c  sw          $v0, 0x5E6C($v1)
    ctx->pc = 0x1be364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24172), GPR_U32(ctx, 2));
    // 0x1be368: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE368u;
    SET_GPR_U32(ctx, 31, 0x1BE370u);
    ctx->pc = 0x1BE36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE368u;
            // 0x1be36c: 0x24a513a8  addiu       $a1, $a1, 0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE370u; }
        if (ctx->pc != 0x1BE370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE370u; }
        if (ctx->pc != 0x1BE370u) { return; }
    }
    ctx->pc = 0x1BE370u;
    // 0x1be370: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be374: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be378: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be37c: 0xac625e70  sw          $v0, 0x5E70($v1)
    ctx->pc = 0x1be37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24176), GPR_U32(ctx, 2));
    // 0x1be380: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE380u;
    SET_GPR_U32(ctx, 31, 0x1BE388u);
    ctx->pc = 0x1BE384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE380u;
            // 0x1be384: 0x24a513b8  addiu       $a1, $a1, 0x13B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE388u; }
        if (ctx->pc != 0x1BE388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE388u; }
        if (ctx->pc != 0x1BE388u) { return; }
    }
    ctx->pc = 0x1BE388u;
    // 0x1be388: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be38c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be390: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be394: 0xac625e74  sw          $v0, 0x5E74($v1)
    ctx->pc = 0x1be394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24180), GPR_U32(ctx, 2));
    // 0x1be398: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE398u;
    SET_GPR_U32(ctx, 31, 0x1BE3A0u);
    ctx->pc = 0x1BE39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE398u;
            // 0x1be39c: 0x24a513c8  addiu       $a1, $a1, 0x13C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3A0u; }
        if (ctx->pc != 0x1BE3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3A0u; }
        if (ctx->pc != 0x1BE3A0u) { return; }
    }
    ctx->pc = 0x1BE3A0u;
    // 0x1be3a0: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be3a4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be3a8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be3ac: 0xac625e78  sw          $v0, 0x5E78($v1)
    ctx->pc = 0x1be3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24184), GPR_U32(ctx, 2));
    // 0x1be3b0: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE3B0u;
    SET_GPR_U32(ctx, 31, 0x1BE3B8u);
    ctx->pc = 0x1BE3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3B0u;
            // 0x1be3b4: 0x24a55ad8  addiu       $a1, $a1, 0x5AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B8u; }
        if (ctx->pc != 0x1BE3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B8u; }
        if (ctx->pc != 0x1BE3B8u) { return; }
    }
    ctx->pc = 0x1BE3B8u;
    // 0x1be3b8: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be3bc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be3c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be3c4: 0xac625e7c  sw          $v0, 0x5E7C($v1)
    ctx->pc = 0x1be3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24188), GPR_U32(ctx, 2));
    // 0x1be3c8: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE3C8u;
    SET_GPR_U32(ctx, 31, 0x1BE3D0u);
    ctx->pc = 0x1BE3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3C8u;
            // 0x1be3cc: 0x24a55ae0  addiu       $a1, $a1, 0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D0u; }
        if (ctx->pc != 0x1BE3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D0u; }
        if (ctx->pc != 0x1BE3D0u) { return; }
    }
    ctx->pc = 0x1BE3D0u;
    // 0x1be3d0: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be3d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be3d8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be3dc: 0xac625e80  sw          $v0, 0x5E80($v1)
    ctx->pc = 0x1be3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24192), GPR_U32(ctx, 2));
    // 0x1be3e0: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE3E0u;
    SET_GPR_U32(ctx, 31, 0x1BE3E8u);
    ctx->pc = 0x1BE3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3E0u;
            // 0x1be3e4: 0x24a55af0  addiu       $a1, $a1, 0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3E8u; }
        if (ctx->pc != 0x1BE3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3E8u; }
        if (ctx->pc != 0x1BE3E8u) { return; }
    }
    ctx->pc = 0x1BE3E8u;
    // 0x1be3e8: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be3ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be3f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be3f4: 0xac625e84  sw          $v0, 0x5E84($v1)
    ctx->pc = 0x1be3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24196), GPR_U32(ctx, 2));
    // 0x1be3f8: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE3F8u;
    SET_GPR_U32(ctx, 31, 0x1BE400u);
    ctx->pc = 0x1BE3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3F8u;
            // 0x1be3fc: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE400u; }
        if (ctx->pc != 0x1BE400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE400u; }
        if (ctx->pc != 0x1BE400u) { return; }
    }
    ctx->pc = 0x1BE400u;
    // 0x1be400: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1be400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1be404: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be408: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be40c: 0xac625e88  sw          $v0, 0x5E88($v1)
    ctx->pc = 0x1be40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24200), GPR_U32(ctx, 2));
    // 0x1be410: 0xc047aae  jal         func_11EAB8
    ctx->pc = 0x1BE410u;
    SET_GPR_U32(ctx, 31, 0x1BE418u);
    ctx->pc = 0x1BE414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE410u;
            // 0x1be414: 0x24a55b08  addiu       $a1, $a1, 0x5B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EAB8u;
    if (runtime->hasFunction(0x11EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE418u; }
        if (ctx->pc != 0x1BE418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAB8_0x11eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE418u; }
        if (ctx->pc != 0x1BE418u) { return; }
    }
    ctx->pc = 0x1BE418u;
    // 0x1be418: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1be418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1be41c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be424: 0xac625e8c  sw          $v0, 0x5E8C($v1)
    ctx->pc = 0x1be424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24204), GPR_U32(ctx, 2));
    // 0x1be428: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE428u;
            // 0x1be42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE430u;
    // 0x1be430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be438: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1BE438u;
    SET_GPR_U32(ctx, 31, 0x1BE440u);
    ctx->pc = 0x1B54D8u;
    if (runtime->hasFunction(0x1B54D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B54D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE440u; }
        if (ctx->pc != 0x1BE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B54D8_0x1b54d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE440u; }
        if (ctx->pc != 0x1BE440u) { return; }
    }
    ctx->pc = 0x1BE440u;
    // 0x1be440: 0xc0891c0  jal         func_224700
    ctx->pc = 0x1BE440u;
    SET_GPR_U32(ctx, 31, 0x1BE448u);
    ctx->pc = 0x224700u;
    if (runtime->hasFunction(0x224700u)) {
        auto targetFn = runtime->lookupFunction(0x224700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE448u; }
        if (ctx->pc != 0x1BE448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224700_0x224700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE448u; }
        if (ctx->pc != 0x1BE448u) { return; }
    }
    ctx->pc = 0x1BE448u;
    // 0x1be448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be44c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE44Cu;
            // 0x1be450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE454u;
    // 0x1be454: 0x0  nop
    ctx->pc = 0x1be454u;
    // NOP
}

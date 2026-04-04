#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E270
// Address: 0x26e270 - 0x26e360
void sub_0026E270_0x26e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E270_0x26e270");
#endif

    ctx->pc = 0x26e270u;

    // 0x26e270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26e274: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x26e274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x26e278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e27c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e280: 0x8cc31430  lw          $v1, 0x1430($a2)
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5168)));
    // 0x26e284: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26E284u;
    {
        const bool branch_taken_0x26e284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E284u;
            // 0x26e288: 0x8c680064  lw          $t0, 0x64($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e284) {
            ctx->pc = 0x26E2C4u;
            goto label_26e2c4;
        }
    }
    ctx->pc = 0x26E28Cu;
    // 0x26e28c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x26e28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x26e290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E290u;
    {
        const bool branch_taken_0x26e290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E290u;
            // 0x26e294: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e290) {
            ctx->pc = 0x26E2A8u;
            goto label_26e2a8;
        }
    }
    ctx->pc = 0x26E298u;
    // 0x26e298: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E298u;
    {
        const bool branch_taken_0x26e298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E298u;
            // 0x26e29c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e298) {
            ctx->pc = 0x26E2BCu;
            goto label_26e2bc;
        }
    }
    ctx->pc = 0x26E2A0u;
    // 0x26e2a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E2A0u;
    {
        const bool branch_taken_0x26e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e2a0) {
            ctx->pc = 0x26E2D8u;
            goto label_26e2d8;
        }
    }
    ctx->pc = 0x26E2A8u;
label_26e2a8:
    // 0x26e2a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e2ac: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E2ACu;
    {
        const bool branch_taken_0x26e2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2ACu;
            // 0x26e2b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2ac) {
            ctx->pc = 0x26E2CCu;
            goto label_26e2cc;
        }
    }
    ctx->pc = 0x26E2B4u;
    // 0x26e2b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26E2B4u;
    {
        const bool branch_taken_0x26e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e2b4) {
            ctx->pc = 0x26E2D8u;
            goto label_26e2d8;
        }
    }
    ctx->pc = 0x26E2BCu;
label_26e2bc:
    // 0x26e2bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26E2BCu;
    {
        const bool branch_taken_0x26e2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2BCu;
            // 0x26e2c0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2bc) {
            ctx->pc = 0x26E2D4u;
            goto label_26e2d4;
        }
    }
    ctx->pc = 0x26E2C4u;
label_26e2c4:
    // 0x26e2c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E2C4u;
    {
        const bool branch_taken_0x26e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2C4u;
            // 0x26e2c8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2c4) {
            ctx->pc = 0x26E2D4u;
            goto label_26e2d4;
        }
    }
    ctx->pc = 0x26E2CCu;
label_26e2cc:
    // 0x26e2cc: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x26e2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26e2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26e2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e2d4:
    // 0x26e2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e2d8:
    // 0x26e2d8: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26E2D8u;
    {
        const bool branch_taken_0x26e2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x26E2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2D8u;
            // 0x26e2dc: 0x8cc21430  lw          $v0, 0x1430($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2d8) {
            ctx->pc = 0x26E314u;
            goto label_26e314;
        }
    }
    ctx->pc = 0x26E2E0u;
    // 0x26e2e0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E2E0u;
    {
        const bool branch_taken_0x26e2e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2E0u;
            // 0x26e2e4: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2e0) {
            ctx->pc = 0x26E2FCu;
            goto label_26e2fc;
        }
    }
    ctx->pc = 0x26E2E8u;
    // 0x26e2e8: 0x8cc21430  lw          $v0, 0x1430($a2)
    ctx->pc = 0x26e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5168)));
    // 0x26e2ec: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x26e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x26e2f0: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x26e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x26e2f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26E2F4u;
    {
        const bool branch_taken_0x26e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2F4u;
            // 0x26e2f8: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2f4) {
            ctx->pc = 0x26E320u;
            goto label_26e320;
        }
    }
    ctx->pc = 0x26E2FCu;
label_26e2fc:
    // 0x26e2fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E2FCu;
    {
        const bool branch_taken_0x26e2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2FCu;
            // 0x26e300: 0x8cc21430  lw          $v0, 0x1430($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2fc) {
            ctx->pc = 0x26E320u;
            goto label_26e320;
        }
    }
    ctx->pc = 0x26E304u;
    // 0x26e304: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x26e304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x26e308: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x26e308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x26e30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E30Cu;
    {
        const bool branch_taken_0x26e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E30Cu;
            // 0x26e310: 0xac400060  sw          $zero, 0x60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e30c) {
            ctx->pc = 0x26E320u;
            goto label_26e320;
        }
    }
    ctx->pc = 0x26E314u;
label_26e314:
    // 0x26e314: 0xac450070  sw          $a1, 0x70($v0)
    ctx->pc = 0x26e314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 5));
    // 0x26e318: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x26e318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x26e31c: 0xac450060  sw          $a1, 0x60($v0)
    ctx->pc = 0x26e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 5));
label_26e320:
    // 0x26e320: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26e324: 0x8c431430  lw          $v1, 0x1430($v0)
    ctx->pc = 0x26e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26e328: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x26e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x26e32c: 0x54470004  bnel        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E32Cu;
    {
        const bool branch_taken_0x26e32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x26e32c) {
            ctx->pc = 0x26E330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E32Cu;
            // 0x26e330: 0xac670068  sw          $a3, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E340u;
            goto label_26e340;
        }
    }
    ctx->pc = 0x26E334u;
    // 0x26e334: 0x11050008  beq         $t0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E334u;
    {
        const bool branch_taken_0x26e334 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x26E338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E334u;
            // 0x26e338: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e334) {
            ctx->pc = 0x26E358u;
            goto label_26e358;
        }
    }
    ctx->pc = 0x26E33Cu;
    // 0x26e33c: 0xac670068  sw          $a3, 0x68($v1)
    ctx->pc = 0x26e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
label_26e340:
    // 0x26e340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e344: 0x84670060  lh          $a3, 0x60($v1)
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x26e348: 0x84650064  lh          $a1, 0x64($v1)
    ctx->pc = 0x26e348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x26e34c: 0xc09e60e  jal         func_279838
    ctx->pc = 0x26E34Cu;
    SET_GPR_U32(ctx, 31, 0x26E354u);
    ctx->pc = 0x26E350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E34Cu;
            // 0x26e350: 0x84660068  lh          $a2, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279838u;
    if (runtime->hasFunction(0x279838u)) {
        auto targetFn = runtime->lookupFunction(0x279838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E354u; }
        if (ctx->pc != 0x26E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279838_0x279838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E354u; }
        if (ctx->pc != 0x26E354u) { return; }
    }
    ctx->pc = 0x26E354u;
    // 0x26e354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26e358:
    // 0x26e358: 0x3e00008  jr          $ra
    ctx->pc = 0x26E358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E358u;
            // 0x26e35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E2A8u: goto label_26e2a8;
            case 0x26E2BCu: goto label_26e2bc;
            case 0x26E2C4u: goto label_26e2c4;
            case 0x26E2CCu: goto label_26e2cc;
            case 0x26E2D4u: goto label_26e2d4;
            case 0x26E2D8u: goto label_26e2d8;
            case 0x26E2FCu: goto label_26e2fc;
            case 0x26E314u: goto label_26e314;
            case 0x26E320u: goto label_26e320;
            case 0x26E340u: goto label_26e340;
            case 0x26E358u: goto label_26e358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E360u;
}

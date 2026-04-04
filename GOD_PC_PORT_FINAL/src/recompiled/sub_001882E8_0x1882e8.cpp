#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001882E8
// Address: 0x1882e8 - 0x1883c8
void sub_001882E8_0x1882e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001882E8_0x1882e8");
#endif

    ctx->pc = 0x1882e8u;

    // 0x1882e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1882ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1882ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1882f0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1882f4: 0xac454d04  sw          $a1, 0x4D04($v0)
    ctx->pc = 0x1882f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19716), GPR_U32(ctx, 5));
    // 0x1882f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1882f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1882fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1882fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188304: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188304u;
    {
        const bool branch_taken_0x188304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x188308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188304u;
            // 0x188308: 0xac644d08  sw          $a0, 0x4D08($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 19720), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188304) {
            ctx->pc = 0x188320u;
            goto label_188320;
        }
    }
    ctx->pc = 0x18830Cu;
    // 0x18830c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188310: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188314: 0xac624cf0  sw          $v0, 0x4CF0($v1)
    ctx->pc = 0x188314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19696), GPR_U32(ctx, 2));
    // 0x188318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188318u;
    {
        const bool branch_taken_0x188318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188318u;
            // 0x18831c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188318) {
            ctx->pc = 0x188328u;
            goto label_188328;
        }
    }
    ctx->pc = 0x188320u;
label_188320:
    // 0x188320: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188324: 0xac404cf0  sw          $zero, 0x4CF0($v0)
    ctx->pc = 0x188324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19696), GPR_U32(ctx, 0));
label_188328:
    // 0x188328: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18832c: 0x8c444cf0  lw          $a0, 0x4CF0($v0)
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19696)));
    // 0x188330: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188330u;
    {
        const bool branch_taken_0x188330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188330u;
            // 0x188334: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188330) {
            ctx->pc = 0x188358u;
            goto label_188358;
        }
    }
    ctx->pc = 0x188338u;
    // 0x188338: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18833c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x18833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x188340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x188340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188344: 0xc09b212  jal         func_26C848
    ctx->pc = 0x188344u;
    SET_GPR_U32(ctx, 31, 0x18834Cu);
    ctx->pc = 0x188348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188344u;
            // 0x188348: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C848u;
    if (runtime->hasFunction(0x26C848u)) {
        auto targetFn = runtime->lookupFunction(0x26C848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18834Cu; }
        if (ctx->pc != 0x18834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C848_0x26c848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18834Cu; }
        if (ctx->pc != 0x18834Cu) { return; }
    }
    ctx->pc = 0x18834Cu;
    // 0x18834c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188350: 0xac624cec  sw          $v0, 0x4CEC($v1)
    ctx->pc = 0x188350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19692), GPR_U32(ctx, 2));
    // 0x188354: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_188358:
    // 0x188358: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18835c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x18835cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x188360: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x188364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188368: 0xac404cf4  sw          $zero, 0x4CF4($v0)
    ctx->pc = 0x188368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19700), GPR_U32(ctx, 0));
    // 0x18836c: 0xac604cf8  sw          $zero, 0x4CF8($v1)
    ctx->pc = 0x18836cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19704), GPR_U32(ctx, 0));
    // 0x188370: 0xac804cfc  sw          $zero, 0x4CFC($a0)
    ctx->pc = 0x188370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 19708), GPR_U32(ctx, 0));
    // 0x188374: 0xaca04d00  sw          $zero, 0x4D00($a1)
    ctx->pc = 0x188374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 19712), GPR_U32(ctx, 0));
    // 0x188378: 0x3e00008  jr          $ra
    ctx->pc = 0x188378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188378u;
            // 0x18837c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188320u: goto label_188320;
            case 0x188328u: goto label_188328;
            case 0x188358u: goto label_188358;
            case 0x1883B0u: goto label_1883b0;
            case 0x1883B8u: goto label_1883b8;
            case 0x1883BCu: goto label_1883bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188380u;
    // 0x188380: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x188384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188388: 0x8c434d08  lw          $v1, 0x4D08($v0)
    ctx->pc = 0x188388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19720)));
    // 0x18838c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18838Cu;
    {
        const bool branch_taken_0x18838c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18838Cu;
            // 0x188390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18838c) {
            ctx->pc = 0x1883B0u;
            goto label_1883b0;
        }
    }
    ctx->pc = 0x188394u;
    // 0x188394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188398: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188398u;
    {
        const bool branch_taken_0x188398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188398u;
            // 0x18839c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188398) {
            ctx->pc = 0x1883B8u;
            goto label_1883b8;
        }
    }
    ctx->pc = 0x1883A0u;
    // 0x1883a0: 0xc0621a2  jal         func_188688
    ctx->pc = 0x1883A0u;
    SET_GPR_U32(ctx, 31, 0x1883A8u);
    ctx->pc = 0x188688u;
    if (runtime->hasFunction(0x188688u)) {
        auto targetFn = runtime->lookupFunction(0x188688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188688_0x188688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883A8u; }
        if (ctx->pc != 0x1883A8u) { return; }
    }
    ctx->pc = 0x1883A8u;
    // 0x1883a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1883A8u;
    {
        const bool branch_taken_0x1883a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883A8u;
            // 0x1883ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a8) {
            ctx->pc = 0x1883BCu;
            goto label_1883bc;
        }
    }
    ctx->pc = 0x1883B0u;
label_1883b0:
    // 0x1883b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1883b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883b4: 0x0  nop
    ctx->pc = 0x1883b4u;
    // NOP
label_1883b8:
    // 0x1883b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1883b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1883bc:
    // 0x1883bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1883BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883BCu;
            // 0x1883c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188320u: goto label_188320;
            case 0x188328u: goto label_188328;
            case 0x188358u: goto label_188358;
            case 0x1883B0u: goto label_1883b0;
            case 0x1883B8u: goto label_1883b8;
            case 0x1883BCu: goto label_1883bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1883C4u;
    // 0x1883c4: 0x0  nop
    ctx->pc = 0x1883c4u;
    // NOP
}

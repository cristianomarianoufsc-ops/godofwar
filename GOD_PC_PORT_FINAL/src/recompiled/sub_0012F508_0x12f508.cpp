#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F508
// Address: 0x12f508 - 0x12f5a8
void sub_0012F508_0x12f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F508_0x12f508");
#endif

    ctx->pc = 0x12f508u;

    // 0x12f508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12f50c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f510: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12f514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f518: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12f51c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12f51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f520: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x12f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x12f524: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f52c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12f52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12f530:
    // 0x12f530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x12f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12f534: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F534u;
    {
        const bool branch_taken_0x12f534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F534u;
            // 0x12f538: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f534) {
            ctx->pc = 0x12F544u;
            goto label_12f544;
        }
    }
    ctx->pc = 0x12F53Cu;
    // 0x12f53c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12F53Cu;
    SET_GPR_U32(ctx, 31, 0x12F544u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F544u; }
        if (ctx->pc != 0x12F544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F544u; }
        if (ctx->pc != 0x12F544u) { return; }
    }
    ctx->pc = 0x12F544u;
label_12f544:
    // 0x12f544: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F544u;
    {
        const bool branch_taken_0x12f544 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12F548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F544u;
            // 0x12f548: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f544) {
            ctx->pc = 0x12F530u;
            runtime->cooperativeGuestYield();
            goto label_12f530;
        }
    }
    ctx->pc = 0x12F54Cu;
    // 0x12f54c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12f550: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F550u;
    {
        const bool branch_taken_0x12f550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f550) {
            ctx->pc = 0x12F554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F550u;
            // 0x12f554: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F564u;
            goto label_12f564;
        }
    }
    ctx->pc = 0x12F558u;
    // 0x12f558: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12F558u;
    SET_GPR_U32(ctx, 31, 0x12F560u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F560u; }
        if (ctx->pc != 0x12F560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F560u; }
        if (ctx->pc != 0x12F560u) { return; }
    }
    ctx->pc = 0x12F560u;
    // 0x12f560: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_12f564:
    // 0x12f564: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F564u;
    {
        const bool branch_taken_0x12f564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F564u;
            // 0x12f568: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f564) {
            ctx->pc = 0x12F578u;
            goto label_12f578;
        }
    }
    ctx->pc = 0x12F56Cu;
    // 0x12f56c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x12F56Cu;
    SET_GPR_U32(ctx, 31, 0x12F574u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F574u; }
        if (ctx->pc != 0x12F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F574u; }
        if (ctx->pc != 0x12F574u) { return; }
    }
    ctx->pc = 0x12F574u;
    // 0x12f574: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x12f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_12f578:
    // 0x12f578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F578u;
    {
        const bool branch_taken_0x12f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F578u;
            // 0x12f57c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f578) {
            ctx->pc = 0x12F58Cu;
            goto label_12f58c;
        }
    }
    ctx->pc = 0x12F580u;
    // 0x12f580: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x12F580u;
    SET_GPR_U32(ctx, 31, 0x12F588u);
    ctx->pc = 0x12F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F580u;
            // 0x12f584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F588u; }
        if (ctx->pc != 0x12F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F588u; }
        if (ctx->pc != 0x12F588u) { return; }
    }
    ctx->pc = 0x12F588u;
    // 0x12f588: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12f588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12f58c:
    // 0x12f58c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12f58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f594: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x12f594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F59Cu;
            // 0x12f5a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F530u: goto label_12f530;
            case 0x12F544u: goto label_12f544;
            case 0x12F564u: goto label_12f564;
            case 0x12F578u: goto label_12f578;
            case 0x12F58Cu: goto label_12f58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F5A4u;
    // 0x12f5a4: 0x0  nop
    ctx->pc = 0x12f5a4u;
    // NOP
}

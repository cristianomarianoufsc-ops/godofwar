#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002087D8
// Address: 0x2087d8 - 0x208830
void sub_002087D8_0x2087d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002087D8_0x2087d8");
#endif

    ctx->pc = 0x2087d8u;

    // 0x2087d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2087d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2087dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2087dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2087e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2087e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2087e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2087e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087e8: 0xc080836  jal         func_2020D8
    ctx->pc = 0x2087E8u;
    SET_GPR_U32(ctx, 31, 0x2087F0u);
    ctx->pc = 0x2087ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2087E8u;
            // 0x2087ec: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087F0u; }
        if (ctx->pc != 0x2087F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2087F0u; }
        if (ctx->pc != 0x2087F0u) { return; }
    }
    ctx->pc = 0x2087F0u;
    // 0x2087f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2087f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087f4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2087F4u;
    {
        const bool branch_taken_0x2087f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2087F4u;
            // 0x2087f8: 0x260301c0  addiu       $v1, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087f4) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2087FCu;
    // 0x2087fc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2087fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x208800: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x208800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x208808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20880c: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x20880cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x208810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208814: 0xc082218  jal         func_208860
    ctx->pc = 0x208814u;
    SET_GPR_U32(ctx, 31, 0x20881Cu);
    ctx->pc = 0x208818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208814u;
            // 0x208818: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208860u;
    if (runtime->hasFunction(0x208860u)) {
        auto targetFn = runtime->lookupFunction(0x208860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20881Cu; }
        if (ctx->pc != 0x20881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_208860_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20881Cu; }
        if (ctx->pc != 0x20881Cu) { return; }
    }
    ctx->pc = 0x20881Cu;
label_20881c:
    // 0x20881c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20881cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208824: 0x3e00008  jr          $ra
    ctx->pc = 0x208824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208824u;
            // 0x208828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20881Cu: goto label_20881c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20882Cu;
    // 0x20882c: 0x0  nop
    ctx->pc = 0x20882cu;
    // NOP
}

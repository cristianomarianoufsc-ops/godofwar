#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282FD8
// Address: 0x282fd8 - 0x283048
void sub_00282FD8_0x282fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282FD8_0x282fd8");
#endif

    ctx->pc = 0x282fd8u;

    // 0x282fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282fdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x282fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282fe0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x282fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x282fe4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x282fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x282fe8: 0x82223640  lb          $v0, 0x3640($s1)
    ctx->pc = 0x282fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 13888)));
    // 0x282fec: 0x26323640  addiu       $s2, $s1, 0x3640
    ctx->pc = 0x282fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13888));
    // 0x282ff0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282ff4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282FF4u;
    {
        const bool branch_taken_0x282ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FF4u;
            // 0x282ff8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ff4) {
            ctx->pc = 0x28302Cu;
            goto label_28302c;
        }
    }
    ctx->pc = 0x282FFCu;
    // 0x282ffc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x282ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x283000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283004: 0xc0a6024  jal         func_298090
    ctx->pc = 0x283004u;
    SET_GPR_U32(ctx, 31, 0x28300Cu);
    ctx->pc = 0x283008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283004u;
            // 0x283008: 0x24845300  addiu       $a0, $a0, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298090u;
    if (runtime->hasFunction(0x298090u)) {
        auto targetFn = runtime->lookupFunction(0x298090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28300Cu; }
        if (ctx->pc != 0x28300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298090_0x298090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28300Cu; }
        if (ctx->pc != 0x28300Cu) { return; }
    }
    ctx->pc = 0x28300Cu;
    // 0x28300c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28300cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283010: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283010u;
    {
        const bool branch_taken_0x283010 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x283014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283010u;
            // 0x283014: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283010) {
            ctx->pc = 0x28302Cu;
            goto label_28302c;
        }
    }
    ctx->pc = 0x283018u;
    // 0x283018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28301c: 0xc0a6128  jal         func_2984A0
    ctx->pc = 0x28301Cu;
    SET_GPR_U32(ctx, 31, 0x283024u);
    ctx->pc = 0x283020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28301Cu;
            // 0x283020: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2984A0u;
    if (runtime->hasFunction(0x2984A0u)) {
        auto targetFn = runtime->lookupFunction(0x2984A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283024u; }
        if (ctx->pc != 0x283024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2984a0_0x298770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283024u; }
        if (ctx->pc != 0x283024u) { return; }
    }
    ctx->pc = 0x283024u;
    // 0x283024: 0xc0a60c8  jal         func_298320
    ctx->pc = 0x283024u;
    SET_GPR_U32(ctx, 31, 0x28302Cu);
    ctx->pc = 0x283028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283024u;
            // 0x283028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298320u;
    if (runtime->hasFunction(0x298320u)) {
        auto targetFn = runtime->lookupFunction(0x298320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28302Cu; }
        if (ctx->pc != 0x28302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298320_0x298320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28302Cu; }
        if (ctx->pc != 0x28302Cu) { return; }
    }
    ctx->pc = 0x28302Cu;
label_28302c:
    // 0x28302c: 0x26223640  addiu       $v0, $s1, 0x3640
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13888));
    // 0x283030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283038: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28303c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28303cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283040: 0x3e00008  jr          $ra
    ctx->pc = 0x283040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283040u;
            // 0x283044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28302Cu: goto label_28302c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283048u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285BE0
// Address: 0x285be0 - 0x285c60
void sub_00285BE0_0x285be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285BE0_0x285be0");
#endif

    ctx->pc = 0x285be0u;

    // 0x285be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285be4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x285be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285bec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x285bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x285bf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x285bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x285bfc: 0xc0a16d6  jal         func_285B58
    ctx->pc = 0x285BFCu;
    SET_GPR_U32(ctx, 31, 0x285C04u);
    ctx->pc = 0x285C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285BFCu;
            // 0x285c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B58u;
    if (runtime->hasFunction(0x285B58u)) {
        auto targetFn = runtime->lookupFunction(0x285B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C04u; }
        if (ctx->pc != 0x285C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285B58_0x285b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C04u; }
        if (ctx->pc != 0x285C04u) { return; }
    }
    ctx->pc = 0x285C04u;
    // 0x285c04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x285c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c10: 0xc0a16d6  jal         func_285B58
    ctx->pc = 0x285C10u;
    SET_GPR_U32(ctx, 31, 0x285C18u);
    ctx->pc = 0x285C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C10u;
            // 0x285c14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B58u;
    if (runtime->hasFunction(0x285B58u)) {
        auto targetFn = runtime->lookupFunction(0x285B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C18u; }
        if (ctx->pc != 0x285C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285B58_0x285b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C18u; }
        if (ctx->pc != 0x285C18u) { return; }
    }
    ctx->pc = 0x285C18u;
    // 0x285c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c1c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x285c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x285c20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x285C20u;
    {
        const bool branch_taken_0x285c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c20) {
            ctx->pc = 0x285C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285C20u;
            // 0x285c24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285C3Cu;
            goto label_285c3c;
        }
    }
    ctx->pc = 0x285C28u;
    // 0x285c28: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x285c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x285c2c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x285c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285c30: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x285c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x285c34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285c38: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x285c38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_285c3c:
    // 0x285c3c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x285C3Cu;
    SET_GPR_U32(ctx, 31, 0x285C44u);
    ctx->pc = 0x285C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C3Cu;
            // 0x285c40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C44u; }
        if (ctx->pc != 0x285C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C44u; }
        if (ctx->pc != 0x285C44u) { return; }
    }
    ctx->pc = 0x285C44u;
    // 0x285c44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285c48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285c4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285c54: 0x3e00008  jr          $ra
    ctx->pc = 0x285C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C54u;
            // 0x285c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285C3Cu: goto label_285c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285C5Cu;
    // 0x285c5c: 0x0  nop
    ctx->pc = 0x285c5cu;
    // NOP
}

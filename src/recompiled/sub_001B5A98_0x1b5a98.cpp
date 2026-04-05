#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5A98
// Address: 0x1b5a98 - 0x1b5b20
void sub_001B5A98_0x1b5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5A98_0x1b5a98");
#endif

    ctx->pc = 0x1b5a98u;

    // 0x1b5a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5a9c: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x1b5aa0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b5aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b5aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5aa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5ab0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5ab8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5AB8u;
    {
        const bool branch_taken_0x1b5ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AB8u;
            // 0x1b5abc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ab8) {
            ctx->pc = 0x1B5ACCu;
            goto label_1b5acc;
        }
    }
    ctx->pc = 0x1B5AC0u;
    // 0x1b5ac0: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x1b5ac4: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x1b5ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x1b5ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5acc:
    // 0x1b5acc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1b5accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1b5ad0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1b5ad4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b5ad8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1b5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1b5adc: 0xe460f1b0  swc1        $f0, -0xE50($v1)
    ctx->pc = 0x1b5adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294963632), bits); }
    // 0x1b5ae0: 0x248414d0  addiu       $a0, $a0, 0x14D0
    ctx->pc = 0x1b5ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x1b5ae4: 0xe440d968  swc1        $f0, -0x2698($v0)
    ctx->pc = 0x1b5ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294957416), bits); }
    // 0x1b5ae8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B5AE8u;
    SET_GPR_U32(ctx, 31, 0x1B5AF0u);
    ctx->pc = 0x1B5AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AE8u;
            // 0x1b5aec: 0xe4a0d930  swc1        $f0, -0x26D0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294957360), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AF0u; }
        if (ctx->pc != 0x1B5AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5AF0u; }
        if (ctx->pc != 0x1B5AF0u) { return; }
    }
    ctx->pc = 0x1B5AF0u;
    // 0x1b5af0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5af4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5AF4u;
    {
        const bool branch_taken_0x1b5af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AF4u;
            // 0x1b5af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5af4) {
            ctx->pc = 0x1B5B00u;
            goto label_1b5b00;
        }
    }
    ctx->pc = 0x1B5AFCu;
    // 0x1b5afc: 0xac62039c  sw          $v0, 0x39C($v1)
    ctx->pc = 0x1b5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 2));
label_1b5b00:
    // 0x1b5b00: 0xae30029c  sw          $s0, 0x29C($s1)
    ctx->pc = 0x1b5b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
    // 0x1b5b04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b5b08: 0xac50cc90  sw          $s0, -0x3370($v0)
    ctx->pc = 0x1b5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954128), GPR_U32(ctx, 16));
    // 0x1b5b0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B18u;
            // 0x1b5b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B5ACCu: goto label_1b5acc;
            case 0x1B5B00u: goto label_1b5b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5B20u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1AB8
// Address: 0x1f1ab8 - 0x1f1b30
void sub_001F1AB8_0x1f1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1AB8_0x1f1ab8");
#endif

    ctx->pc = 0x1f1ab8u;

    // 0x1f1ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1ac0: 0xc4a000b4  lwc1        $f0, 0xB4($a1)
    ctx->pc = 0x1f1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ac4: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x1f1ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1f1ac8: 0x24a300b0  addiu       $v1, $a1, 0xB0
    ctx->pc = 0x1f1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x1f1acc: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1f1accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1f1ad0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f1ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ad4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1f1ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1f1ad8:
    // 0x1f1ad8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1f1ad8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f1adc: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x1f1adcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f1ae0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x1f1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x1f1ae4: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x1f1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x1f1ae8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1f1aec: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1AECu;
    {
        const bool branch_taken_0x1f1aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F1AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AECu;
            // 0x1f1af0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1aec) {
            ctx->pc = 0x1F1AD8u;
            runtime->cooperativeGuestYield();
            goto label_1f1ad8;
        }
    }
    ctx->pc = 0x1F1AF4u;
    // 0x1f1af4: 0x248300f0  addiu       $v1, $a0, 0xF0
    ctx->pc = 0x1f1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1f1af8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f1af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1afc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b00:
    // 0x1f1b00: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1f1b00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1b04: 0x78480010  lq          $t0, 0x10($v0)
    ctx->pc = 0x1f1b04u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1b08: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1f1b08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1f1b0c: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x1f1b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
    // 0x1f1b10: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f1b14: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1B14u;
    {
        const bool branch_taken_0x1f1b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F1B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B14u;
            // 0x1f1b18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b14) {
            ctx->pc = 0x1F1B00u;
            runtime->cooperativeGuestYield();
            goto label_1f1b00;
        }
    }
    ctx->pc = 0x1F1B1Cu;
    // 0x1f1b1c: 0xc07c154  jal         func_1F0550
    ctx->pc = 0x1F1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B24u);
    ctx->pc = 0x1F1B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B1Cu;
            // 0x1f1b20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0550u;
    if (runtime->hasFunction(0x1F0550u)) {
        auto targetFn = runtime->lookupFunction(0x1F0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B24u; }
        if (ctx->pc != 0x1F1B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0550_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1B24u; }
        if (ctx->pc != 0x1F1B24u) { return; }
    }
    ctx->pc = 0x1F1B24u;
    // 0x1f1b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B28u;
            // 0x1f1b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1AD8u: goto label_1f1ad8;
            case 0x1F1B00u: goto label_1f1b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1B30u;
}

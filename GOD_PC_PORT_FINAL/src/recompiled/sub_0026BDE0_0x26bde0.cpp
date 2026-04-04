#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BDE0
// Address: 0x26bde0 - 0x26bef8
void sub_0026BDE0_0x26bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BDE0_0x26bde0");
#endif

    ctx->pc = 0x26bde0u;

    // 0x26bde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bde4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26bde8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bdec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bdf4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x26bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26bdf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26bdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdfc: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26BDFCu;
    SET_GPR_U32(ctx, 31, 0x26BE04u);
    ctx->pc = 0x26BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDFCu;
            // 0x26be00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE04u; }
        if (ctx->pc != 0x26BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE04u; }
        if (ctx->pc != 0x26BE04u) { return; }
    }
    ctx->pc = 0x26BE04u;
    // 0x26be04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26be04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26be08: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE08u;
            // 0x26be0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BE10u;
    // 0x26be10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be14: 0x0  nop
    ctx->pc = 0x26be14u;
    // NOP
    // 0x26be18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be1c: 0x0  nop
    ctx->pc = 0x26be1cu;
    // NOP
    // 0x26be20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26be24: 0x0  nop
    ctx->pc = 0x26be24u;
    // NOP
    // 0x26be28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26be2c: 0x0  nop
    ctx->pc = 0x26be2cu;
    // NOP
    // 0x26be30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be34: 0x0  nop
    ctx->pc = 0x26be34u;
    // NOP
    // 0x26be38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26be38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be3c: 0x0  nop
    ctx->pc = 0x26be3cu;
    // NOP
    // 0x26be40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26be40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be44: 0x0  nop
    ctx->pc = 0x26be44u;
    // NOP
    // 0x26be48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26be4c: 0x0  nop
    ctx->pc = 0x26be4cu;
    // NOP
    // 0x26be50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26be54: 0x0  nop
    ctx->pc = 0x26be54u;
    // NOP
    // 0x26be58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be5c: 0x0  nop
    ctx->pc = 0x26be5cu;
    // NOP
    // 0x26be60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be64: 0x0  nop
    ctx->pc = 0x26be64u;
    // NOP
    // 0x26be68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26be6c: 0x0  nop
    ctx->pc = 0x26be6cu;
    // NOP
    // 0x26be70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be74: 0x0  nop
    ctx->pc = 0x26be74u;
    // NOP
    // 0x26be78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26be7c: 0x0  nop
    ctx->pc = 0x26be7cu;
    // NOP
    // 0x26be80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be84: 0x0  nop
    ctx->pc = 0x26be84u;
    // NOP
    // 0x26be88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be8c: 0x0  nop
    ctx->pc = 0x26be8cu;
    // NOP
    // 0x26be90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be94: 0x0  nop
    ctx->pc = 0x26be94u;
    // NOP
    // 0x26be98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26be9c: 0x0  nop
    ctx->pc = 0x26be9cu;
    // NOP
    // 0x26bea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bea4: 0x0  nop
    ctx->pc = 0x26bea4u;
    // NOP
    // 0x26bea8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26beac: 0x0  nop
    ctx->pc = 0x26beacu;
    // NOP
    // 0x26beb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26beb4: 0x0  nop
    ctx->pc = 0x26beb4u;
    // NOP
    // 0x26beb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bebc: 0x0  nop
    ctx->pc = 0x26bebcu;
    // NOP
    // 0x26bec0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bec4: 0x0  nop
    ctx->pc = 0x26bec4u;
    // NOP
    // 0x26bec8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26becc: 0x0  nop
    ctx->pc = 0x26beccu;
    // NOP
    // 0x26bed0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bed4: 0x0  nop
    ctx->pc = 0x26bed4u;
    // NOP
    // 0x26bed8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bedc: 0x0  nop
    ctx->pc = 0x26bedcu;
    // NOP
    // 0x26bee0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bee4: 0x0  nop
    ctx->pc = 0x26bee4u;
    // NOP
    // 0x26bee8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26beec: 0x0  nop
    ctx->pc = 0x26beecu;
    // NOP
    // 0x26bef0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bef4: 0x0  nop
    ctx->pc = 0x26bef4u;
    // NOP
}

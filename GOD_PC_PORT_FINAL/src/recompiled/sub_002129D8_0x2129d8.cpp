#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002129D8
// Address: 0x2129d8 - 0x212a30
void sub_002129D8_0x2129d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002129D8_0x2129d8");
#endif

    ctx->pc = 0x2129d8u;

    // 0x2129d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2129dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2129dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2129e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2129e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2129e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2129e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2129e8: 0x8e02e468  lw          $v0, -0x1B98($s0)
    ctx->pc = 0x2129e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960232)));
    // 0x2129ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2129ECu;
    {
        const bool branch_taken_0x2129ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2129ec) {
            ctx->pc = 0x2129F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2129ECu;
            // 0x2129f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x212A1Cu;
            goto label_212a1c;
        }
    }
    ctx->pc = 0x2129F4u;
    // 0x2129f4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x2129F4u;
    SET_GPR_U32(ctx, 31, 0x2129FCu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2129FCu; }
        if (ctx->pc != 0x2129FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2129FCu; }
        if (ctx->pc != 0x2129FCu) { return; }
    }
    ctx->pc = 0x2129FCu;
    // 0x2129fc: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2129fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x212a00: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x212a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x212a04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x212a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212a08: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x212a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212a0c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x212A0Cu;
    SET_GPR_U32(ctx, 31, 0x212A14u);
    ctx->pc = 0x212A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212A0Cu;
            // 0x212a10: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A14u; }
        if (ctx->pc != 0x212A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A14u; }
        if (ctx->pc != 0x212A14u) { return; }
    }
    ctx->pc = 0x212A14u;
    // 0x212a14: 0xae02e468  sw          $v0, -0x1B98($s0)
    ctx->pc = 0x212a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960232), GPR_U32(ctx, 2));
    // 0x212a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x212a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212a1c:
    // 0x212a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a20: 0x3e00008  jr          $ra
    ctx->pc = 0x212A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212A20u;
            // 0x212a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212A1Cu: goto label_212a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212A28u;
    // 0x212a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212a2c: 0x0  nop
    ctx->pc = 0x212a2cu;
    // NOP
}

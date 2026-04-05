#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001005D0
// Address: 0x1005d0 - 0x100628
void sub_001005D0_0x1005d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001005D0_0x1005d0");
#endif

    ctx->pc = 0x1005d0u;

    // 0x1005d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1005d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1005d4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1005d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1005d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1005d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1005dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1005dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1005e0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1005e4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1005e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1005e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1005e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1005ec: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1005ECu;
    {
        const bool branch_taken_0x1005ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1005F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005ECu;
            // 0x1005f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005ec) {
            ctx->pc = 0x100618u;
            goto label_100618;
        }
    }
    ctx->pc = 0x1005F4u;
    // 0x1005f4: 0x0  nop
    ctx->pc = 0x1005f4u;
    // NOP
label_1005f8:
    // 0x1005f8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1005fc: 0xc041b54  jal         func_106D50
    ctx->pc = 0x1005FCu;
    SET_GPR_U32(ctx, 31, 0x100604u);
    ctx->pc = 0x100600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1005FCu;
            // 0x100600: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100604u; }
        if (ctx->pc != 0x100604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106D50_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100604u; }
        if (ctx->pc != 0x100604u) { return; }
    }
    ctx->pc = 0x100604u;
    // 0x100604: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100608: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10060c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100610: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100610u;
    {
        const bool branch_taken_0x100610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100610u;
            // 0x100614: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100610) {
            ctx->pc = 0x1005F8u;
            runtime->cooperativeGuestYield();
            goto label_1005f8;
        }
    }
    ctx->pc = 0x100618u;
label_100618:
    // 0x100618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10061c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100620: 0x3e00008  jr          $ra
    ctx->pc = 0x100620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100620u;
            // 0x100624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1005F8u: goto label_1005f8;
            case 0x100618u: goto label_100618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100628u;
}

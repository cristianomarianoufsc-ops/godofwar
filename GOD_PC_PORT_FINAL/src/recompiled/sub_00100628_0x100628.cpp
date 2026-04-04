#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100628
// Address: 0x100628 - 0x100690
void sub_00100628_0x100628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100628_0x100628");
#endif

    ctx->pc = 0x100628u;

    // 0x100628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10062c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100630: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x100630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x100634: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x100634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10063c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10063cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100640: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100644: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100648: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10064c: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10064Cu;
    {
        const bool branch_taken_0x10064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10064Cu;
            // 0x100650: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10064c) {
            ctx->pc = 0x10067Cu;
            goto label_10067c;
        }
    }
    ctx->pc = 0x100654u;
    // 0x100654: 0x0  nop
    ctx->pc = 0x100654u;
    // NOP
label_100658:
    // 0x100658: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10065c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100660: 0xc041b88  jal         func_106E20
    ctx->pc = 0x100660u;
    SET_GPR_U32(ctx, 31, 0x100668u);
    ctx->pc = 0x100664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100660u;
            // 0x100664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (runtime->hasFunction(0x106E20u)) {
        auto targetFn = runtime->lookupFunction(0x106E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100668u; }
        if (ctx->pc != 0x100668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106E20_0x106e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100668u; }
        if (ctx->pc != 0x100668u) { return; }
    }
    ctx->pc = 0x100668u;
    // 0x100668: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10066c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100674: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x100674u;
    {
        const bool branch_taken_0x100674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100674u;
            // 0x100678: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100674) {
            ctx->pc = 0x100658u;
            runtime->cooperativeGuestYield();
            goto label_100658;
        }
    }
    ctx->pc = 0x10067Cu;
label_10067c:
    // 0x10067c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100684: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x100684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100688: 0x3e00008  jr          $ra
    ctx->pc = 0x100688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100688u;
            // 0x10068c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100658u: goto label_100658;
            case 0x10067Cu: goto label_10067c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100690u;
}

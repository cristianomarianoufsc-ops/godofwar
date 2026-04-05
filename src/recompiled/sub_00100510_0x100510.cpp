#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100510
// Address: 0x100510 - 0x100578
void sub_00100510_0x100510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100510_0x100510");
#endif

    ctx->pc = 0x100510u;

    // 0x100510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100518: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x100518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10051c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10051cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100524: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x100524u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100528: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10052c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100530: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100534: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100534u;
            // 0x100538: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100534) {
            ctx->pc = 0x100564u;
            goto label_100564;
        }
    }
    ctx->pc = 0x10053Cu;
    // 0x10053c: 0x0  nop
    ctx->pc = 0x10053cu;
    // NOP
label_100540:
    // 0x100540: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100548: 0xc041ac8  jal         func_106B20
    ctx->pc = 0x100548u;
    SET_GPR_U32(ctx, 31, 0x100550u);
    ctx->pc = 0x10054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100548u;
            // 0x10054c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B20u;
    if (runtime->hasFunction(0x106B20u)) {
        auto targetFn = runtime->lookupFunction(0x106B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100550u; }
        if (ctx->pc != 0x100550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106B20_0x106b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100550u; }
        if (ctx->pc != 0x100550u) { return; }
    }
    ctx->pc = 0x100550u;
    // 0x100550: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100554: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100558: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10055c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10055Cu;
    {
        const bool branch_taken_0x10055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10055Cu;
            // 0x100560: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10055c) {
            ctx->pc = 0x100540u;
            runtime->cooperativeGuestYield();
            goto label_100540;
        }
    }
    ctx->pc = 0x100564u;
label_100564:
    // 0x100564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10056c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x100570: 0x3e00008  jr          $ra
    ctx->pc = 0x100570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100570u;
            // 0x100574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100540u: goto label_100540;
            case 0x100564u: goto label_100564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100578u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16a718
// Address: 0x16a718 - 0x16a778
void entry_16a718_0x16a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16a718_0x16a778");
#endif

    ctx->pc = 0x16a718u;

    // 0x16a718: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x16a718u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a71c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a720: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x16a720u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x16a724: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x16a724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a728: 0x78a70030  lq          $a3, 0x30($a1)
    ctx->pc = 0x16a728u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x16a72c: 0x70064fc9  prot3w      $t1, $a2
    ctx->pc = 0x16a72cu;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16a730: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x16a730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a734: 0x78a50020  lq          $a1, 0x20($a1)
    ctx->pc = 0x16a734u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16a738: 0x70434b89  pcpyld      $t1, $v0, $v1
    ctx->pc = 0x16a738u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16a73c: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x16a73cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16a740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16a740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a744: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x16a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x16a748: 0x70075789  pexew       $t2, $a3
    ctx->pc = 0x16a748u;
    SET_GPR_VEC(ctx, 10, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16a74c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x16a74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a750: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x16a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x16a754: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x16a754u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16a758: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x16a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x16a75c: 0x704914c8  ppacw       $v0, $v0, $t1
    ctx->pc = 0x16a75cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x16a760: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x16a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x16a764: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x16a764u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x16a768: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x16a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x16a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A76Cu;
            // 0x16a770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A774u;
    // 0x16a774: 0x0  nop
    ctx->pc = 0x16a774u;
    // NOP
}

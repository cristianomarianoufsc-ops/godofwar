#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_184ed0
// Address: 0x184ed0 - 0x184f40
void entry_184ed0_0x184f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_184ed0_0x184f40");
#endif

    ctx->pc = 0x184ed0u;

    // 0x184ed0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x184ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x184ed4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184ed8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x184ed8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184edc: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x184edcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x184ee0: 0x70463ca8  pextuw      $a3, $v0, $a2
    ctx->pc = 0x184ee0u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184ee4: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x184ee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x184ee8: 0x70461488  pextlw      $v0, $v0, $a2
    ctx->pc = 0x184ee8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x184eec: 0x70682ca8  pextuw      $a1, $v1, $t0
    ctx->pc = 0x184eecu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x184ef0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x184ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x184ef4: 0x70681c88  pextlw      $v1, $v1, $t0
    ctx->pc = 0x184ef4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x184ef8: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x184ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x184efc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x184efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x184f00: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x184f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x184f04: 0x70623389  pcpyld      $a2, $v1, $v0
    ctx->pc = 0x184f04u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184f08: 0x704313a9  pcpyud      $v0, $v0, $v1
    ctx->pc = 0x184f08u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x184f0c: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x184f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x184f10: 0x70e51ba9  pcpyud      $v1, $a3, $a1
    ctx->pc = 0x184f10u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 5)));
    // 0x184f14: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x184f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x184f18: 0x70a72b89  pcpyld      $a1, $a1, $a3
    ctx->pc = 0x184f18u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x184f1c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x184f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x184f20: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x184f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x184f24: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x184f24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x184f28: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x184f28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x184f2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x184f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f30: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x184f30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x184f34: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x184f34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x184f38: 0x3e00008  jr          $ra
    ctx->pc = 0x184F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F38u;
            // 0x184f3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184F40u;
}

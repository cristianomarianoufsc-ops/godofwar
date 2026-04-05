#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C6F0
// Address: 0x17c6f0 - 0x17c768
void sub_0017C6F0_0x17c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C6F0_0x17c6f0");
#endif

    ctx->pc = 0x17c6f0u;

    // 0x17c6f0: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x17c6f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c6f8: 0x8ce34714  lw          $v1, 0x4714($a3)
    ctx->pc = 0x17c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17c6fc: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x17c6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x17c700: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c704: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c70c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x17c70cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x17c710: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x17c710u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x17c714: 0xad024718  sw          $v0, 0x4718($t0)
    ctx->pc = 0x17c714u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 18200), GPR_U32(ctx, 2));
    // 0x17c718: 0x8ce34714  lw          $v1, 0x4714($a3)
    ctx->pc = 0x17c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17c71c: 0x8e024710  lw          $v0, 0x4710($s0)
    ctx->pc = 0x17c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18192)));
    // 0x17c720: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x17c720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x17c724: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c728: 0x8ce34714  lw          $v1, 0x4714($a3)
    ctx->pc = 0x17c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18196)));
    // 0x17c72c: 0xae024710  sw          $v0, 0x4710($s0)
    ctx->pc = 0x17c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18192), GPR_U32(ctx, 2));
    // 0x17c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17c734: 0x8d024718  lw          $v0, 0x4718($t0)
    ctx->pc = 0x17c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 18200)));
    // 0x17c738: 0x8e034710  lw          $v1, 0x4710($s0)
    ctx->pc = 0x17c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18192)));
    // 0x17c73c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17c740: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c744: 0xad024718  sw          $v0, 0x4718($t0)
    ctx->pc = 0x17c744u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 18200), GPR_U32(ctx, 2));
    // 0x17c748: 0xc05f1a2  jal         func_17C688
    ctx->pc = 0x17C748u;
    SET_GPR_U32(ctx, 31, 0x17C750u);
    ctx->pc = 0x17C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C748u;
            // 0x17c74c: 0xae034710  sw          $v1, 0x4710($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 18192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C688u;
    if (runtime->hasFunction(0x17C688u)) {
        auto targetFn = runtime->lookupFunction(0x17C688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C750u; }
        if (ctx->pc != 0x17C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c688_0x17c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C750u; }
        if (ctx->pc != 0x17C750u) { return; }
    }
    ctx->pc = 0x17C750u;
    // 0x17c750: 0xae004710  sw          $zero, 0x4710($s0)
    ctx->pc = 0x17c750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18192), GPR_U32(ctx, 0));
    // 0x17c754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c75c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C75Cu;
            // 0x17c760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C764u;
    // 0x17c764: 0x0  nop
    ctx->pc = 0x17c764u;
    // NOP
}

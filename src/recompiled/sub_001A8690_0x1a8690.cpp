#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8690
// Address: 0x1a8690 - 0x1a8718
void sub_001A8690_0x1a8690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8690_0x1a8690");
#endif

    ctx->pc = 0x1a8690u;

    // 0x1a8690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8694: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8698: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a8698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a869c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a869cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a86a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a86a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a86a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a86a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a86a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a86acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a86b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a86b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86b4: 0x8c44ca14  lw          $a0, -0x35EC($v0)
    ctx->pc = 0x1a86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953492)));
    // 0x1a86b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a86bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A86BCu;
    SET_GPR_U32(ctx, 31, 0x1A86C4u);
    ctx->pc = 0x1A86C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86BCu;
            // 0x1a86c0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86C4u; }
        if (ctx->pc != 0x1A86C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86C4u; }
        if (ctx->pc != 0x1A86C4u) { return; }
    }
    ctx->pc = 0x1A86C4u;
    // 0x1a86c4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a86c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a86cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a86ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a86d0: 0x24632638  addiu       $v1, $v1, 0x2638
    ctx->pc = 0x1a86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9784));
    // 0x1a86d4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1a86d8: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x1a86d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x1a86dc: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x1a86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x1a86e0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1a86e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1a86e4: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1a86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x1a86e8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a86ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a86f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a86f4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a86f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a86f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a86fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a86fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8704: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a8704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a870c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a870cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a8710: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8710u;
            // 0x1a8714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8718u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127578
// Address: 0x127578 - 0x1275e0
void sub_00127578_0x127578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127578_0x127578");
#endif

    ctx->pc = 0x127578u;

    // 0x127578: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x127578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12757c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x12757cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x127580: 0x8cc2f168  lw          $v0, -0xE98($a2)
    ctx->pc = 0x127580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x127584: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x127588: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x127588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12758c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x12758cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x127590: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x127590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x127594: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x127598: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x127598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12759c: 0x24a3dd58  addiu       $v1, $a1, -0x22A8
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958424));
    // 0x1275a0: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1275a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1275a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1275a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1275a8: 0x8ca2dd58  lw          $v0, -0x22A8($a1)
    ctx->pc = 0x1275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294958424)));
    // 0x1275ac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1275b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1275b4: 0x8cc4f168  lw          $a0, -0xE98($a2)
    ctx->pc = 0x1275b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x1275b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1275bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1275bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1275c0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1275c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1275c4: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1275c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1275c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1275c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1275cc: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1275ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1275d0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1275d4: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1275d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1275d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1275D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1275DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1275D8u;
            // 0x1275dc: 0xacc3f168  sw          $v1, -0xE98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1275E0u;
}

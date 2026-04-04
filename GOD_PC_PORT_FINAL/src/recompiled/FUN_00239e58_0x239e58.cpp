#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239e58
// Address: 0x239e58 - 0x239ef8
void FUN_00239e58_0x239e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239e58_0x239e58");
#endif

    ctx->pc = 0x239e58u;

    // 0x239e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239e5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x239e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e64: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x239e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x239e68: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x239e6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239e70: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x239e70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239e74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239e78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x239e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x239e7c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x239e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x239e80: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x239e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e84: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x239e84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x239e88: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x239e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e8c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x239e8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x239e90: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x239E90u;
    {
        const bool branch_taken_0x239e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E90u;
            // 0x239e94: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e90) {
            ctx->pc = 0x239EACu;
            goto label_239eac;
        }
    }
    ctx->pc = 0x239E98u;
    // 0x239e98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e9c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x239e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x239ea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x239ea4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239EA4u;
    {
        const bool branch_taken_0x239ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239EA4u;
            // 0x239ea8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ea4) {
            ctx->pc = 0x239EC0u;
            goto label_239ec0;
        }
    }
    ctx->pc = 0x239EACu;
label_239eac:
    // 0x239eac: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x239eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x239eb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x239eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239eb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x239eb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x239eb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239ebc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x239ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_239ec0:
    // 0x239ec0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x239ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x239ec4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x239ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ec8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x239ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ecc: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x239ed0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x239ed0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x239ed4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x239ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ed8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x239ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x239edc: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x239edcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x239ee0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x239ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ee4: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x239ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x239ee8: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x239ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x239eec: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x239eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x239EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239EF0u;
            // 0x239ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239EACu: goto label_239eac;
            case 0x239EC0u: goto label_239ec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239EF8u;
}

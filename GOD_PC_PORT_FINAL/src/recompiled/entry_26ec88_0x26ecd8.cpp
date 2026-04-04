#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26ec88
// Address: 0x26ec88 - 0x26ecd8
void entry_26ec88_0x26ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26ec88_0x26ecd8");
#endif

    ctx->pc = 0x26ec88u;

    // 0x26ec88: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x26ec88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x26ec8c: 0x8ce6a600  lw          $a2, -0x5A00($a3)
    ctx->pc = 0x26ec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944256)));
    // 0x26ec90: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EC90u;
    {
        const bool branch_taken_0x26ec90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC90u;
            // 0x26ec94: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ec90) {
            ctx->pc = 0x26ECA4u;
            goto label_26eca4;
        }
    }
    ctx->pc = 0x26EC98u;
    // 0x26ec98: 0xace4a600  sw          $a0, -0x5A00($a3)
    ctx->pc = 0x26ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944256), GPR_U32(ctx, 4));
    // 0x26ec9c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EC9Cu;
            // 0x26eca0: 0xac45a604  sw          $a1, -0x59FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944260), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ECA4u: goto label_26eca4;
            case 0x26ECC4u: goto label_26ecc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ECA4u;
label_26eca4:
    // 0x26eca4: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x26eca8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x26ecac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ecb0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x26ecb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26ecb4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x26ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26ecb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26ECB8u;
    {
        const bool branch_taken_0x26ecb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECB8u;
            // 0x26ecbc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecb8) {
            ctx->pc = 0x26ECC4u;
            goto label_26ecc4;
        }
    }
    ctx->pc = 0x26ECC0u;
    // 0x26ecc0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x26ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_26ecc4:
    // 0x26ecc4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26ecc8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x26ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x26eccc: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x26ecccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ecd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26ECD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ECD0u;
            // 0x26ecd4: 0xace4a600  sw          $a0, -0x5A00($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294944256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ECA4u: goto label_26eca4;
            case 0x26ECC4u: goto label_26ecc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26ECD8u;
}

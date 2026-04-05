#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299c48
// Address: 0x299c48 - 0x299cd0
void entry_299c48_0x299cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299c48_0x299cd0");
#endif

    ctx->pc = 0x299c48u;

    // 0x299c48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x299c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c4c: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x299c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x299c50: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x299c50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x299c54: 0x25255af8  addiu       $a1, $t1, 0x5AF8
    ctx->pc = 0x299c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 23288));
    // 0x299c58: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x299c58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x299c5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c60: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x299c60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x299c64: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x299c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x299c68: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x299c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299C6Cu;
    {
        const bool branch_taken_0x299c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299C6Cu;
            // 0x299c70: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c6c) {
            ctx->pc = 0x299C7Cu;
            goto label_299c7c;
        }
    }
    ctx->pc = 0x299C74u;
    // 0x299c74: 0x0  nop
    ctx->pc = 0x299c74u;
    // NOP
label_299c78:
    // 0x299c78: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_299c7c:
    // 0x299c7c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x299C7Cu;
    {
        const bool branch_taken_0x299c7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c7c) {
            ctx->pc = 0x299C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299C7Cu;
            // 0x299c80: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299CA8u;
            goto label_299ca8;
        }
    }
    ctx->pc = 0x299C84u;
    // 0x299c84: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x299c84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x299c88: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x299c88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x299c8c: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x299c8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x299c90: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x299c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x299c94: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x299c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x299c98: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x299c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x299c9c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x299C9Cu;
    {
        const bool branch_taken_0x299c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c9c) {
            ctx->pc = 0x299CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299C9Cu;
            // 0x299ca0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299C78u;
            runtime->cooperativeGuestYield();
            goto label_299c78;
        }
    }
    ctx->pc = 0x299CA4u;
    // 0x299ca4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x299ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_299ca8:
    // 0x299ca8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x299CA8u;
    {
        const bool branch_taken_0x299ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CA8u;
            // 0x299cac: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ca8) {
            ctx->pc = 0x299CB4u;
            goto label_299cb4;
        }
    }
    ctx->pc = 0x299CB0u;
    // 0x299cb0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x299cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_299cb4:
    // 0x299cb4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299CB4u;
    {
        const bool branch_taken_0x299cb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CB4u;
            // 0x299cb8: 0x25225af8  addiu       $v0, $t1, 0x5AF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 23288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cb4) {
            ctx->pc = 0x299CC4u;
            goto label_299cc4;
        }
    }
    ctx->pc = 0x299CBCu;
    // 0x299cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x299CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CBCu;
            // 0x299cc0: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299C78u: goto label_299c78;
            case 0x299C7Cu: goto label_299c7c;
            case 0x299CA8u: goto label_299ca8;
            case 0x299CB4u: goto label_299cb4;
            case 0x299CC4u: goto label_299cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299CC4u;
label_299cc4:
    // 0x299cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x299CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CC4u;
            // 0x299cc8: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299C78u: goto label_299c78;
            case 0x299C7Cu: goto label_299c7c;
            case 0x299CA8u: goto label_299ca8;
            case 0x299CB4u: goto label_299cb4;
            case 0x299CC4u: goto label_299cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299CCCu;
    // 0x299ccc: 0x0  nop
    ctx->pc = 0x299cccu;
    // NOP
}

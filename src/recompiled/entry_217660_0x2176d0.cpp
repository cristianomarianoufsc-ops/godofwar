#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_217660
// Address: 0x217660 - 0x2176d0
void entry_217660_0x2176d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_217660_0x2176d0");
#endif

    ctx->pc = 0x217660u;

    // 0x217660: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x217660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217664: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x217664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x217668: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x217668u;
    {
        const bool branch_taken_0x217668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217668u;
            // 0x21766c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217668) {
            ctx->pc = 0x217698u;
            goto label_217698;
        }
    }
    ctx->pc = 0x217670u;
    // 0x217670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x217674: 0x0  nop
    ctx->pc = 0x217674u;
    // NOP
label_217678:
    // 0x217678: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x217678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21767c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21767Cu;
    {
        const bool branch_taken_0x21767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21767Cu;
            // 0x217680: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21767c) {
            ctx->pc = 0x217698u;
            goto label_217698;
        }
    }
    ctx->pc = 0x217684u;
    // 0x217684: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x217684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x217688: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x217688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21768c: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x217690: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x217690u;
    {
        const bool branch_taken_0x217690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217690) {
            ctx->pc = 0x217694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217690u;
            // 0x217694: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217678u;
            runtime->cooperativeGuestYield();
            goto label_217678;
        }
    }
    ctx->pc = 0x217698u;
label_217698:
    // 0x217698: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x217698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21769c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2176a0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2176a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2176a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2176a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176a8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2176ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2176acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2176b0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x2176b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x2176b4: 0xe46d001c  swc1        $f13, 0x1C($v1)
    ctx->pc = 0x2176b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2176b8: 0x8ca40370  lw          $a0, 0x370($a1)
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x2176bc: 0xe46c0010  swc1        $f12, 0x10($v1)
    ctx->pc = 0x2176bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2176c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2176c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2176c4: 0xaca00378  sw          $zero, 0x378($a1)
    ctx->pc = 0x2176c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 888), GPR_U32(ctx, 0));
    // 0x2176c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2176C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2176CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2176C8u;
            // 0x2176cc: 0xaca40370  sw          $a0, 0x370($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217678u: goto label_217678;
            case 0x217698u: goto label_217698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2176D0u;
}

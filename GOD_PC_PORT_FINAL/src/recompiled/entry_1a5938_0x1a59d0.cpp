#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5938
// Address: 0x1a5938 - 0x1a59d0
void entry_1a5938_0x1a59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5938_0x1a59d0");
#endif

    ctx->pc = 0x1a5938u;

    // 0x1a5938: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a593c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a593cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5940: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1a5944: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1a5944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a5948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a594c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5950:
    // 0x1a5950: 0x25040038  addiu       $a0, $t0, 0x38
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
    // 0x1a5954: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1a5954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a595c: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A595Cu;
    {
        const bool branch_taken_0x1a595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A5960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A595Cu;
            // 0x1a5960: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a595c) {
            ctx->pc = 0x1A5980u;
            goto label_1a5980;
        }
    }
    ctx->pc = 0x1A5964u;
    // 0x1a5964: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a5968: 0x84420068  lh          $v0, 0x68($v0)
    ctx->pc = 0x1a5968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1a596c: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A596Cu;
    {
        const bool branch_taken_0x1a596c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A596Cu;
            // 0x1a5970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a596c) {
            ctx->pc = 0x1A5980u;
            goto label_1a5980;
        }
    }
    ctx->pc = 0x1A5974u;
    // 0x1a5974: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a5978: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5978u;
            // 0x1a597c: 0xac670080  sw          $a3, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5950u: goto label_1a5950;
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5998u: goto label_1a5998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5980u;
label_1a5980:
    // 0x1a5980: 0x5430005  bgezl       $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5980u;
    {
        const bool branch_taken_0x1a5980 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x1a5980) {
            ctx->pc = 0x1A5984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5980u;
            // 0x1a5984: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5998u;
            goto label_1a5998;
        }
    }
    ctx->pc = 0x1A5988u;
    // 0x1a5988: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1a5988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a598c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5990: 0x122500a  movz        $t2, $t1, $v0
    ctx->pc = 0x1a5990u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 9));
    // 0x1a5994: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a5998:
    // 0x1a5998: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x1a5998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a599c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A599Cu;
    {
        const bool branch_taken_0x1a599c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A59A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A599Cu;
            // 0x1a59a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a599c) {
            ctx->pc = 0x1A5950u;
            runtime->cooperativeGuestYield();
            goto label_1a5950;
        }
    }
    ctx->pc = 0x1A59A4u;
    // 0x1a59a4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1a59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a59a8: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1a59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1a59ac: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x1a59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a59b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a59b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a59b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59b8: 0xa4460068  sh          $a2, 0x68($v0)
    ctx->pc = 0x1a59b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a59bc: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x1a59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
    // 0x1a59c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a59c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A59C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59C4u;
            // 0x1a59c8: 0xac870080  sw          $a3, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5950u: goto label_1a5950;
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5998u: goto label_1a5998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A59CCu;
    // 0x1a59cc: 0x0  nop
    ctx->pc = 0x1a59ccu;
    // NOP
}

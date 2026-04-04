#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2967d0
// Address: 0x2967d0 - 0x296848
void entry_2967d0_0x296848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2967d0_0x296848");
#endif

    ctx->pc = 0x2967d0u;

    // 0x2967d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2967d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967d4: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2967D4u;
    {
        const bool branch_taken_0x2967d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967D4u;
            // 0x2967d8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967d4) {
            ctx->pc = 0x296814u;
            goto label_296814;
        }
    }
    ctx->pc = 0x2967DCu;
    // 0x2967dc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2967e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2967e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2967e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2967e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2967e8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x2967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x2967ec: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2967ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2967f0: 0x24847898  addiu       $a0, $a0, 0x7898
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30872));
    // 0x2967f4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2967f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2967f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2967f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2967fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2967fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296800: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x296800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x296804: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x296804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x296808: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x296808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29680c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29680Cu;
    {
        const bool branch_taken_0x29680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29680Cu;
            // 0x296810: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29680c) {
            ctx->pc = 0x29683Cu;
            goto label_29683c;
        }
    }
    ctx->pc = 0x296814u;
label_296814:
    // 0x296814: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x296814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296818: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x296818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x29681c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x29681cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296820: 0x24847898  addiu       $a0, $a0, 0x7898
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30872));
    // 0x296824: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x296824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x296828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x296828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29682c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x29682cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x296830: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x296830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x296834: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x296834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296838: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x296838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29683c:
    // 0x29683c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x296840: 0x3e00008  jr          $ra
    ctx->pc = 0x296840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296840u;
            // 0x296844: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296814u: goto label_296814;
            case 0x29683Cu: goto label_29683c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296848u;
}

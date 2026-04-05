#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16d148
// Address: 0x16d148 - 0x16d1a0
void entry_16d148_0x16d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16d148_0x16d1a0");
#endif

    ctx->pc = 0x16d148u;

    // 0x16d148: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x16d148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16d14c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x16d14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16d150: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D150u;
    {
        const bool branch_taken_0x16d150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D150u;
            // 0x16d154: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d150) {
            ctx->pc = 0x16D198u;
            goto label_16d198;
        }
    }
    ctx->pc = 0x16D158u;
    // 0x16d158: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x16d158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16d15c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d160: 0x244223f0  addiu       $v0, $v0, 0x23F0
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9200));
    // 0x16d164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d16c: 0x400008  jr          $v0
    ctx->pc = 0x16D16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D174u: goto label_16d174;
            case 0x16D180u: goto label_16d180;
            case 0x16D188u: goto label_16d188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D174u;
label_16d174:
    // 0x16d174: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x16d178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D178u;
    {
        const bool branch_taken_0x16d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D178u;
            // 0x16d17c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d178) {
            ctx->pc = 0x16D198u;
            goto label_16d198;
        }
    }
    ctx->pc = 0x16D180u;
label_16d180:
    // 0x16d180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D180u;
    {
        const bool branch_taken_0x16d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D180u;
            // 0x16d184: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d180) {
            ctx->pc = 0x16D18Cu;
            goto label_16d18c;
        }
    }
    ctx->pc = 0x16D188u;
label_16d188:
    // 0x16d188: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16d18c:
    // 0x16d18c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x16d18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16d190: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16d190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d194: 0x0  nop
    ctx->pc = 0x16d194u;
    // NOP
label_16d198:
    // 0x16d198: 0x3e00008  jr          $ra
    ctx->pc = 0x16D198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D198u;
            // 0x16d19c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D174u: goto label_16d174;
            case 0x16D180u: goto label_16d180;
            case 0x16D188u: goto label_16d188;
            case 0x16D18Cu: goto label_16d18c;
            case 0x16D198u: goto label_16d198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D1A0u;
}

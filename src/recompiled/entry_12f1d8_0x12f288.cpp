#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f1d8
// Address: 0x12f1d8 - 0x12f288
void entry_12f1d8_0x12f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f1d8_0x12f288");
#endif

    ctx->pc = 0x12f1d8u;

    // 0x12f1d8: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x12f1d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12f1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1e0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12f1e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f1e4: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x12f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12f1e8: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x12f1e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f1ec: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12f1ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12f1f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12f1f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12f1f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f1fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f200: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x12F200u;
    {
        const bool branch_taken_0x12f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f200) {
            ctx->pc = 0x12F204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F200u;
            // 0x12f204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F280u;
            goto label_12f280;
        }
    }
    ctx->pc = 0x12F208u;
    // 0x12f208: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x12f208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12f20c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x12f20cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f210: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x12f210u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f214: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12f214u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12f218: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12f218u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12f21c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12f21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12f220: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f224: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f228: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x12F228u;
    {
        const bool branch_taken_0x12f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f228) {
            ctx->pc = 0x12F22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F228u;
            // 0x12f22c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F280u;
            goto label_12f280;
        }
    }
    ctx->pc = 0x12F230u;
    // 0x12f230: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x12f230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x12f234: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x12f234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12f238: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x12f238u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f23c: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12f23cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12f240: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12f240u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12f244: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12f244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12f248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f24c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f24cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f250: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12F250u;
    {
        const bool branch_taken_0x12f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f250) {
            ctx->pc = 0x12F254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F250u;
            // 0x12f254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F280u;
            goto label_12f280;
        }
    }
    ctx->pc = 0x12F258u;
    // 0x12f258: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x12f258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x12f25c: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x12f25cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12f260: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x12f260u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f264: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12f264u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12f268: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12f268u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12f26c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12f26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12f270: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f274: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f278: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F278u;
    {
        const bool branch_taken_0x12f278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f278) {
            ctx->pc = 0x12F27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F278u;
            // 0x12f27c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F280u;
            goto label_12f280;
        }
    }
    ctx->pc = 0x12F280u;
label_12f280:
    // 0x12f280: 0x3e00008  jr          $ra
    ctx->pc = 0x12F280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F280u;
            // 0x12f284: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F280u: goto label_12f280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F288u;
}

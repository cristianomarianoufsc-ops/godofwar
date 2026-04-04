#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_150830
// Address: 0x150830 - 0x1508a0
void entry_150830_0x1508a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_150830_0x1508a0");
#endif

    ctx->pc = 0x150830u;

    // 0x150830: 0xdc8300c0  ld          $v1, 0xC0($a0)
    ctx->pc = 0x150830u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x150834: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x150834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150838: 0x212bc  dsll32      $v0, $v0, 10
    ctx->pc = 0x150838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 10));
    // 0x15083c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150840: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150840u;
    {
        const bool branch_taken_0x150840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150840u;
            // 0x150844: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150840) {
            ctx->pc = 0x15085Cu;
            goto label_15085c;
        }
    }
    ctx->pc = 0x150848u;
    // 0x150848: 0x34420055  ori         $v0, $v0, 0x55
    ctx->pc = 0x150848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)85);
    // 0x15084c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x15084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x150850: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150854: 0x3e00008  jr          $ra
    ctx->pc = 0x150854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150854u;
            // 0x150858: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15085Cu: goto label_15085c;
            case 0x15088Cu: goto label_15088c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15085Cu;
label_15085c:
    // 0x15085c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x150860: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x150860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x150864: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x150864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x150868: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150868u;
    {
        const bool branch_taken_0x150868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150868u;
            // 0x15086c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150868) {
            ctx->pc = 0x15088Cu;
            goto label_15088c;
        }
    }
    ctx->pc = 0x150870u;
    // 0x150870: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x150874: 0x34420055  ori         $v0, $v0, 0x55
    ctx->pc = 0x150874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)85);
    // 0x150878: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x150878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x15087c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x150880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x150880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x150884: 0x3e00008  jr          $ra
    ctx->pc = 0x150884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150884u;
            // 0x150888: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15085Cu: goto label_15085c;
            case 0x15088Cu: goto label_15088c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15088Cu;
label_15088c:
    // 0x15088c: 0x3442ff55  ori         $v0, $v0, 0xFF55
    ctx->pc = 0x15088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65365);
    // 0x150890: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x150890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x150894: 0x3e00008  jr          $ra
    ctx->pc = 0x150894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150894u;
            // 0x150898: 0xac8200d8  sw          $v0, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15085Cu: goto label_15085c;
            case 0x15088Cu: goto label_15088c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15089Cu;
    // 0x15089c: 0x0  nop
    ctx->pc = 0x15089cu;
    // NOP
}

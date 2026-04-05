#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d0e8
// Address: 0x27d0e8 - 0x27d148
void entry_27d0e8_0x27d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d0e8_0x27d148");
#endif

    ctx->pc = 0x27d0e8u;

    // 0x27d0e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x27d0e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27d0ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27D0ECu;
    {
        const bool branch_taken_0x27d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0ECu;
            // 0x27d0f0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0ec) {
            ctx->pc = 0x27D134u;
            goto label_27d134;
        }
    }
    ctx->pc = 0x27D0F4u;
    // 0x27d0f4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x27d0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27d0f8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x27d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x27d0fc: 0x0  nop
    ctx->pc = 0x27d0fcu;
    // NOP
label_27d100:
    // 0x27d100: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x27d100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x27d104: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27d104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x27d108: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D108u;
    {
        const bool branch_taken_0x27d108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x27d108) {
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27D110u;
    // 0x27d110: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D110u;
    {
        const bool branch_taken_0x27d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x27D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D110u;
            // 0x27d114: 0x28420020  slti        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d110) {
            ctx->pc = 0x27D120u;
            goto label_27d120;
        }
    }
    ctx->pc = 0x27D118u;
    // 0x27d118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D118u;
    {
        const bool branch_taken_0x27d118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D118u;
            // 0x27d11c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d118) {
            ctx->pc = 0x27D128u;
            goto label_27d128;
        }
    }
    ctx->pc = 0x27D120u;
label_27d120:
    // 0x27d120: 0x3e00008  jr          $ra
    ctx->pc = 0x27D120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D120u;
            // 0x27d124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D100u: goto label_27d100;
            case 0x27D120u: goto label_27d120;
            case 0x27D128u: goto label_27d128;
            case 0x27D134u: goto label_27d134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D128u;
label_27d128:
    // 0x27d128: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x27d128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27d12c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27D12Cu;
    {
        const bool branch_taken_0x27d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D12Cu;
            // 0x27d130: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d12c) {
            ctx->pc = 0x27D100u;
            runtime->cooperativeGuestYield();
            goto label_27d100;
        }
    }
    ctx->pc = 0x27D134u;
label_27d134:
    // 0x27d134: 0x3e00008  jr          $ra
    ctx->pc = 0x27D134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D134u;
            // 0x27d138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D100u: goto label_27d100;
            case 0x27D120u: goto label_27d120;
            case 0x27D128u: goto label_27d128;
            case 0x27D134u: goto label_27d134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D13Cu;
    // 0x27d13c: 0x0  nop
    ctx->pc = 0x27d13cu;
    // NOP
    // 0x27d140: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d144: 0x0  nop
    ctx->pc = 0x27d144u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1757d8
// Address: 0x1757d8 - 0x175828
void entry_1757d8_0x175828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1757d8_0x175828");
#endif

    ctx->pc = 0x1757d8u;

    // 0x1757d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1757D8u;
    {
        const bool branch_taken_0x1757d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757D8u;
            // 0x1757dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d8) {
            ctx->pc = 0x1757E8u;
            goto label_1757e8;
        }
    }
    ctx->pc = 0x1757E0u;
label_1757e0:
    // 0x1757e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1757e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1757e8:
    // 0x1757e8: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1757e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1757ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1757ECu;
    {
        const bool branch_taken_0x1757ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757ec) {
            ctx->pc = 0x17581Cu;
            goto label_17581c;
        }
    }
    ctx->pc = 0x1757F4u;
    // 0x1757f4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1757f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1757f8: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x1757fc: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1757fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x175800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175800u;
    {
        const bool branch_taken_0x175800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175800u;
            // 0x175804: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175800) {
            ctx->pc = 0x175810u;
            goto label_175810;
        }
    }
    ctx->pc = 0x175808u;
    // 0x175808: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x17580c: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x17580cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_175810:
    // 0x175810: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x175814: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x175814u;
    {
        const bool branch_taken_0x175814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175814u;
            // 0x175818: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175814) {
            ctx->pc = 0x1757E0u;
            runtime->cooperativeGuestYield();
            goto label_1757e0;
        }
    }
    ctx->pc = 0x17581Cu;
label_17581c:
    // 0x17581c: 0x3e00008  jr          $ra
    ctx->pc = 0x17581Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1757E0u: goto label_1757e0;
            case 0x1757E8u: goto label_1757e8;
            case 0x175810u: goto label_175810;
            case 0x17581Cu: goto label_17581c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175824u;
    // 0x175824: 0x0  nop
    ctx->pc = 0x175824u;
    // NOP
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175740
// Address: 0x175740 - 0x175780
void entry_175740_0x175780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175740_0x175780");
#endif

    ctx->pc = 0x175740u;

    // 0x175740: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x175740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175744: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x175748: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175748u;
    {
        const bool branch_taken_0x175748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175748u;
            // 0x17574c: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175748) {
            ctx->pc = 0x175774u;
            goto label_175774;
        }
    }
    ctx->pc = 0x175750u;
label_175750:
    // 0x175750: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x175754: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x175758: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17575c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x175760: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x175760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x175764: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x175768: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17576c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17576Cu;
    {
        const bool branch_taken_0x17576c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17576Cu;
            // 0x175770: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17576c) {
            ctx->pc = 0x175750u;
            runtime->cooperativeGuestYield();
            goto label_175750;
        }
    }
    ctx->pc = 0x175774u;
label_175774:
    // 0x175774: 0x3e00008  jr          $ra
    ctx->pc = 0x175774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175774u;
            // 0x175778: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175750u: goto label_175750;
            case 0x175774u: goto label_175774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17577Cu;
    // 0x17577c: 0x0  nop
    ctx->pc = 0x17577cu;
    // NOP
}

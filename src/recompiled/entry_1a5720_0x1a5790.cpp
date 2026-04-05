#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5720
// Address: 0x1a5720 - 0x1a5790
void entry_1a5720_0x1a5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5720_0x1a5790");
#endif

    ctx->pc = 0x1a5720u;

    // 0x1a5720: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1a5720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5724: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1a5724u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1a5728: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x1a5728u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x1a572c: 0xad450020  sw          $a1, 0x20($t2)
    ctx->pc = 0x1a572cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 5));
    // 0x1a5730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5734: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a5734u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5738: 0x7d460010  sq          $a2, 0x10($t2)
    ctx->pc = 0x1a5738u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 6));
    // 0x1a573c: 0xa5470028  sh          $a3, 0x28($t2)
    ctx->pc = 0x1a573cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a5740: 0xa548002a  sh          $t0, 0x2A($t2)
    ctx->pc = 0x1a5740u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 42), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a5744: 0xad49002c  sw          $t1, 0x2C($t2)
    ctx->pc = 0x1a5744u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 9));
    // 0x1a5748: 0xad420030  sw          $v0, 0x30($t2)
    ctx->pc = 0x1a5748u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 2));
    // 0x1a574c: 0xad400024  sw          $zero, 0x24($t2)
    ctx->pc = 0x1a574cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 0));
    // 0x1a5750: 0xad400034  sw          $zero, 0x34($t2)
    ctx->pc = 0x1a5750u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 0));
    // 0x1a5754: 0x0  nop
    ctx->pc = 0x1a5754u;
    // NOP
label_1a5758:
    // 0x1a5758: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x1a5758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1a575c: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x1a575cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1a5760: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1a5764: 0x1432821  addu        $a1, $t2, $v1
    ctx->pc = 0x1a5764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1a5768: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a576c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a576cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5770: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a5770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1a5774: 0xa4440068  sh          $a0, 0x68($v0)
    ctx->pc = 0x1a5774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5778: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a5778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a577c: 0x2962000c  slti        $v0, $t3, 0xC
    ctx->pc = 0x1a577cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5780: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A5780u;
    {
        const bool branch_taken_0x1a5780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5780u;
            // 0x1a5784: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5780) {
            ctx->pc = 0x1A5758u;
            runtime->cooperativeGuestYield();
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A5788u;
    // 0x1a5788: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5788u;
            // 0x1a578c: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5758u: goto label_1a5758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5790u;
}

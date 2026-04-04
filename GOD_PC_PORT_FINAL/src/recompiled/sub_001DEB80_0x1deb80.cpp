#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEB80
// Address: 0x1deb80 - 0x1dec40
void sub_001DEB80_0x1deb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEB80_0x1deb80");
#endif

    ctx->pc = 0x1deb80u;

    // 0x1deb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deb84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1deb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1deb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1deb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deb8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1deb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1deb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb98: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1deb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1deb9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1deba0: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1deba4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1deba8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1debac: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1debacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1debb0: 0x40f809  jalr        $v0
    ctx->pc = 0x1DEBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DEBB8u);
        ctx->pc = 0x1DEBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBB0u;
            // 0x1debb4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEBB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEC00u: goto label_1dec00;
            case 0x1DEC0Cu: goto label_1dec0c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBB8u; }
            if (ctx->pc != 0x1DEBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEBB8u;
    // 0x1debb8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1debbc: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1debc0: 0xc06199e  jal         func_186678
    ctx->pc = 0x1DEBC0u;
    SET_GPR_U32(ctx, 31, 0x1DEBC8u);
    ctx->pc = 0x1DEBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBC0u;
            // 0x1debc4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186678u;
    if (runtime->hasFunction(0x186678u)) {
        auto targetFn = runtime->lookupFunction(0x186678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBC8u; }
        if (ctx->pc != 0x1DEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186678_0x186678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBC8u; }
        if (ctx->pc != 0x1DEBC8u) { return; }
    }
    ctx->pc = 0x1DEBC8u;
    // 0x1debc8: 0xae2201b4  sw          $v0, 0x1B4($s1)
    ctx->pc = 0x1debc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
    // 0x1debcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1debccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1debd0: 0x8c42ecc0  lw          $v0, -0x1340($v0)
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962368)));
    // 0x1debd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1debd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1debdc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1debdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1debe0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEBE0u;
    {
        const bool branch_taken_0x1debe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBE0u;
            // 0x1debe4: 0x2c620001  sltiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debe0) {
            ctx->pc = 0x1DEC00u;
            goto label_1dec00;
        }
    }
    ctx->pc = 0x1DEBE8u;
    // 0x1debe8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DEBE8u;
    {
        const bool branch_taken_0x1debe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1debe8) {
            ctx->pc = 0x1DEBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBE8u;
            // 0x1debec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC0Cu;
            goto label_1dec0c;
        }
    }
    ctx->pc = 0x1DEBF0u;
    // 0x1debf0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1debf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEBF4u;
    {
        const bool branch_taken_0x1debf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBF4u;
            // 0x1debf8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debf4) {
            ctx->pc = 0x1DEC0Cu;
            goto label_1dec0c;
        }
    }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0x0  nop
    ctx->pc = 0x1debfcu;
    // NOP
label_1dec00:
    // 0x1dec00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec04: 0xc077a3a  jal         func_1DE8E8
    ctx->pc = 0x1DEC04u;
    SET_GPR_U32(ctx, 31, 0x1DEC0Cu);
    ctx->pc = 0x1DEC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC04u;
            // 0x1dec08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE8E8u;
    if (runtime->hasFunction(0x1DE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC0Cu; }
        if (ctx->pc != 0x1DEC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE8E8_0x1de8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC0Cu; }
        if (ctx->pc != 0x1DEC0Cu) { return; }
    }
    ctx->pc = 0x1DEC0Cu;
label_1dec0c:
    // 0x1dec0c: 0xae2201a0  sw          $v0, 0x1A0($s1)
    ctx->pc = 0x1dec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
    // 0x1dec10: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dec14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec18: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x1dec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1dec1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec20: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x1DEC20u;
    SET_GPR_U32(ctx, 31, 0x1DEC28u);
    ctx->pc = 0x1DEC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC20u;
            // 0x1dec24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC28u; }
        if (ctx->pc != 0x1DEC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC28u; }
        if (ctx->pc != 0x1DEC28u) { return; }
    }
    ctx->pc = 0x1DEC28u;
    // 0x1dec28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dec2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dec2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dec34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC34u;
            // 0x1dec38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEC00u: goto label_1dec00;
            case 0x1DEC0Cu: goto label_1dec0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEC3Cu;
    // 0x1dec3c: 0x0  nop
    ctx->pc = 0x1dec3cu;
    // NOP
}

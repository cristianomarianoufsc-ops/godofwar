#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16aeb0
// Address: 0x16aeb0 - 0x16af50
void entry_16aeb0_0x16af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16aeb0_0x16af50");
#endif

    ctx->pc = 0x16aeb0u;

    // 0x16aeb0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16aeb4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16AEB4u;
    {
        const bool branch_taken_0x16aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aeb4) {
            ctx->pc = 0x16AF44u;
            goto label_16af44;
        }
    }
    ctx->pc = 0x16AEBCu;
    // 0x16aebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AEBCu;
    {
        const bool branch_taken_0x16aebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEBCu;
            // 0x16aec0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aebc) {
            ctx->pc = 0x16AED0u;
            goto label_16aed0;
        }
    }
    ctx->pc = 0x16AEC4u;
    // 0x16aec4: 0x0  nop
    ctx->pc = 0x16aec4u;
    // NOP
label_16aec8:
    // 0x16aec8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16aecc: 0x0  nop
    ctx->pc = 0x16aeccu;
    // NOP
label_16aed0:
    // 0x16aed0: 0x0  nop
    ctx->pc = 0x16aed0u;
    // NOP
    // 0x16aed4: 0x0  nop
    ctx->pc = 0x16aed4u;
    // NOP
    // 0x16aed8: 0x0  nop
    ctx->pc = 0x16aed8u;
    // NOP
    // 0x16aedc: 0x0  nop
    ctx->pc = 0x16aedcu;
    // NOP
    // 0x16aee0: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AEE0u;
    {
        const bool branch_taken_0x16aee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aee0) {
            ctx->pc = 0x16AEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEE0u;
            // 0x16aee4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AEC8u;
            runtime->cooperativeGuestYield();
            goto label_16aec8;
        }
    }
    ctx->pc = 0x16AEE8u;
    // 0x16aee8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x16aee8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x16aeec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16aef0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16aef4: 0x44200a  movz        $a0, $v0, $a0
    ctx->pc = 0x16aef4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x16aef8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16aefc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AEFCu;
    {
        const bool branch_taken_0x16aefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEFCu;
            // 0x16af00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aefc) {
            ctx->pc = 0x16AF2Cu;
            goto label_16af2c;
        }
    }
    ctx->pc = 0x16AF04u;
    // 0x16af04: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x16af04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af08: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x16af08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af0c: 0x0  nop
    ctx->pc = 0x16af0cu;
    // NOP
label_16af10:
    // 0x16af10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16af14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16af18: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x16af1c: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x16af1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16af20: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x16af20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x16af24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AF24u;
    {
        const bool branch_taken_0x16af24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF24u;
            // 0x16af28: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af24) {
            ctx->pc = 0x16AF10u;
            runtime->cooperativeGuestYield();
            goto label_16af10;
        }
    }
    ctx->pc = 0x16AF2Cu;
label_16af2c:
    // 0x16af2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16af30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16af34: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16af34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16af38: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x16af38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16af3c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x16AF3Cu;
    {
        const bool branch_taken_0x16af3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af3c) {
            ctx->pc = 0x16AF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF3Cu;
            // 0x16af40: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AED0u;
            runtime->cooperativeGuestYield();
            goto label_16aed0;
        }
    }
    ctx->pc = 0x16AF44u;
label_16af44:
    // 0x16af44: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AEC8u: goto label_16aec8;
            case 0x16AED0u: goto label_16aed0;
            case 0x16AF10u: goto label_16af10;
            case 0x16AF2Cu: goto label_16af2c;
            case 0x16AF44u: goto label_16af44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AF4Cu;
    // 0x16af4c: 0x0  nop
    ctx->pc = 0x16af4cu;
    // NOP
}

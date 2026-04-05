#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183878
// Address: 0x183878 - 0x183948
void entry_183878_0x183948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183878_0x183948");
#endif

    ctx->pc = 0x183878u;

    // 0x183878: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x18387c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183880: 0x8c82c7d0  lw          $v0, -0x3830($a0)
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952912)));
    // 0x183884: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x183884u;
    {
        const bool branch_taken_0x183884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x183888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183884u;
            // 0x183888: 0x24024e20  addiu       $v0, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183884) {
            ctx->pc = 0x1838C8u;
            goto label_1838c8;
        }
    }
    ctx->pc = 0x18388Cu;
    // 0x18388c: 0x0  nop
    ctx->pc = 0x18388cu;
    // NOP
label_183890:
    // 0x183890: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_183894:
    // 0x183894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183898: 0x0  nop
    ctx->pc = 0x183898u;
    // NOP
    // 0x18389c: 0x0  nop
    ctx->pc = 0x18389cu;
    // NOP
    // 0x1838a0: 0x0  nop
    ctx->pc = 0x1838a0u;
    // NOP
    // 0x1838a4: 0x0  nop
    ctx->pc = 0x1838a4u;
    // NOP
    // 0x1838a8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1838A8u;
    {
        const bool branch_taken_0x1838a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1838a8) {
            ctx->pc = 0x183894u;
            runtime->cooperativeGuestYield();
            goto label_183894;
        }
    }
    ctx->pc = 0x1838B0u;
    // 0x1838b0: 0x0  nop
    ctx->pc = 0x1838b0u;
    // NOP
    // 0x1838b4: 0x8c83c7d0  lw          $v1, -0x3830($a0)
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952912)));
    // 0x1838b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1838bc: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1838BCu;
    {
        const bool branch_taken_0x1838bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1838C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838BCu;
            // 0x1838c0: 0x24024e20  addiu       $v0, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838bc) {
            ctx->pc = 0x183890u;
            runtime->cooperativeGuestYield();
            goto label_183890;
        }
    }
    ctx->pc = 0x1838C4u;
    // 0x1838c4: 0x0  nop
    ctx->pc = 0x1838c4u;
    // NOP
label_1838c8:
    // 0x1838c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1838C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183890u: goto label_183890;
            case 0x183894u: goto label_183894;
            case 0x1838C8u: goto label_1838c8;
            case 0x18391Cu: goto label_18391c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1838D0u;
    // 0x1838d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1838d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1838d4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1838d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1838d8: 0x34428020  ori         $v0, $v0, 0x8020
    ctx->pc = 0x1838d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32800);
    // 0x1838dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1838e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1838e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1838e4: 0x24a50f00  addiu       $a1, $a1, 0xF00
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
    // 0x1838e8: 0x34638030  ori         $v1, $v1, 0x8030
    ctx->pc = 0x1838e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32816);
    // 0x1838ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1838f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1838f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1838f4: 0x3484e020  ori         $a0, $a0, 0xE020
    ctx->pc = 0x1838f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57376);
    // 0x1838f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1838fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x183900: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x183900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x183904: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x183904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x183908: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x183908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x18390c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x183910: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x183910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x183914: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x183914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x183918: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x183918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18391c:
    // 0x18391c: 0x0  nop
    ctx->pc = 0x18391cu;
    // NOP
    // 0x183920: 0x0  nop
    ctx->pc = 0x183920u;
    // NOP
    // 0x183924: 0x0  nop
    ctx->pc = 0x183924u;
    // NOP
    // 0x183928: 0x0  nop
    ctx->pc = 0x183928u;
    // NOP
    // 0x18392c: 0x0  nop
    ctx->pc = 0x18392cu;
    // NOP
    // 0x183930: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x183930u;
    {
        const bool branch_taken_0x183930 = (false);
        if (branch_taken_0x183930) {
            ctx->pc = 0x18391Cu;
            runtime->cooperativeGuestYield();
            goto label_18391c;
        }
    }
    ctx->pc = 0x183938u;
    // 0x183938: 0x0  nop
    ctx->pc = 0x183938u;
    // NOP
    // 0x18393c: 0x0  nop
    ctx->pc = 0x18393cu;
    // NOP
    // 0x183940: 0x3e00008  jr          $ra
    ctx->pc = 0x183940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183890u: goto label_183890;
            case 0x183894u: goto label_183894;
            case 0x1838C8u: goto label_1838c8;
            case 0x18391Cu: goto label_18391c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183948u;
}

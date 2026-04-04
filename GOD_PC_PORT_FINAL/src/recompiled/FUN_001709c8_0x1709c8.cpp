#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001709c8
// Address: 0x1709c8 - 0x170a50
void FUN_001709c8_0x1709c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001709c8_0x1709c8");
#endif

    ctx->pc = 0x1709c8u;

    // 0x1709c8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1709cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1709ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1709d0: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x1709d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1709d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1709d8: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1709D8u;
    {
        const bool branch_taken_0x1709d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1709DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709D8u;
            // 0x1709dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709d8) {
            ctx->pc = 0x170A48u;
            goto label_170a48;
        }
    }
    ctx->pc = 0x1709E0u;
label_1709e0:
    // 0x1709e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1709e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1709e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709e8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1709ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1709ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1709f0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1709f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1709f4: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x1709f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1709f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1709fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1709FCu;
    {
        const bool branch_taken_0x1709fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709FCu;
            // 0x170a00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709fc) {
            ctx->pc = 0x170A2Cu;
            goto label_170a2c;
        }
    }
    ctx->pc = 0x170A04u;
    // 0x170a04: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x170a04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x170a08: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170A08u;
    {
        const bool branch_taken_0x170a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170a08) {
            ctx->pc = 0x170A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170A08u;
            // 0x170a0c: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170A20u;
            goto label_170a20;
        }
    }
    ctx->pc = 0x170A10u;
    // 0x170a10: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x170A10u;
    {
        const bool branch_taken_0x170a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A10u;
            // 0x170a14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a10) {
            ctx->pc = 0x170A1Cu;
            goto label_170a1c;
        }
    }
    ctx->pc = 0x170A18u;
    // 0x170a18: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x170a18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_170a1c:
    // 0x170a1c: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x170a1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_170a20:
    // 0x170a20: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x170a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x170a24: 0xa4a2001a  sh          $v0, 0x1A($a1)
    ctx->pc = 0x170a24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170a28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x170a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_170a2c:
    // 0x170a2c: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x170a2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x170a30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170a34: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x170a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x170a38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a3c: 0xa4a2001a  sh          $v0, 0x1A($a1)
    ctx->pc = 0x170a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170a40: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x170A40u;
    {
        const bool branch_taken_0x170a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x170A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A40u;
            // 0x170a44: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a40) {
            ctx->pc = 0x1709E0u;
            runtime->cooperativeGuestYield();
            goto label_1709e0;
        }
    }
    ctx->pc = 0x170A48u;
label_170a48:
    // 0x170a48: 0x3e00008  jr          $ra
    ctx->pc = 0x170A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A48u;
            // 0x170a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1709E0u: goto label_1709e0;
            case 0x170A1Cu: goto label_170a1c;
            case 0x170A20u: goto label_170a20;
            case 0x170A2Cu: goto label_170a2c;
            case 0x170A48u: goto label_170a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170A50u;
}
